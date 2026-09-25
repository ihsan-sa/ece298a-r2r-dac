"""gen_analog.py - layout generator for r2r_dac_analog (netlist/r2r_dac.cir).

The workspace's state.json names the block "analog", so layout_gen.py loads
this file as gen_analog.py; the cell it draws is the netlist's own subckt,
r2r_dac_analog (spec.yaml's `top`).

Devices, sizes from sizing/sizing.yaml (ru_w 2u, ru_l 150u, rb_l 148.36u):
  25 ppolyf_u units (draw_ppolyf_res, res_type ppolyf_u), one per row,
     bodies horizontal, left ends aligned at x=0, each with the vendor
     cell's own P+ substrate tap on its left (the resistor's 3rd terminal,
     vss). Rows, top-down in bit order: a_k, b_k, rs_(k-1) for k=7..0,
     then the termination rta, rtb.
  8 gf180mcu_fd_sc_mcu7t5v0__buf_20, one per bit, stacked in rows that
     share rails (odd rows mirrored), a filltie at both ends of every row
     for the well and substrate taps (DF.13/DF.14 within 20um).

Routing, one scheme for every net:
  - every resistor terminal gets a via1 and a metal2 stub running right to
    its net's vertical metal1 track, right of the array (the left-end stub
    rides over its own body at the pad's upper half, the right-end stub at
    the lower half, so the two never meet);
  - each buffer's Z gets a via1 inside its Z metal1 and a metal2 stub left
    to its d_k track; the buffer stack sits below the resistor rows so no
    Z stub crosses a resistor stub;
  - vss: the resistors' substrate taps are joined by one metal1 strip at
    their x, which drops to a metal2 bus under everything; the bus lands on
    the vss track (rtb's end) and on a metal2 strip joining the buffers'
    VSS rails. vdd: a metal2 strip joining the buffers' VDD rails.
Pins are labelled on metal1 in the subckt's own order.
"""
from __future__ import annotations

import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[4] / "engine" / "lib"))
import layoutlib  # noqa: E402

L1 = layoutlib.GF180_LAYER["metal1"]
L2 = layoutlib.GF180_LAYER["metal2"]
L1LBL = layoutlib.GF180_LAYER["metal1_label"]

CELL = "r2r_dac_analog"
PINS = [f"dac_code[{k}]" for k in range(7, -1, -1)] + ["vout", "vdd", "vss"]

# sizing/sizing.yaml values, um
RU_W = 2.0
RU_L = 150.0
RB_L = 148.36

ROW_PITCH = 4.0        # resistor rows
TRACK_PITCH = 1.0      # vertical metal1 tracks
W = 0.4                # stub/track width (the via1 pad size)
STD_LIB = "gf180mcu_fd_sc_mcu7t5v0"
BUF = f"{STD_LIB}__buf_20"
TIE = f"{STD_LIB}__filltie"
CELL_H = 3.92
BUF_W = 34.72
TIE_W = 1.12
# via positions inside buf_20 (its LEF): Z's wide metal1 at x 22.23-23.13,
# y 1.51-2.27; I's metal1 at x 0.63-9.90, y 1.74-2.15.
Z_VIA = (22.68, 1.89)
I_LBL = (5.0, 1.945)


def resistor_rows():
    """(refdes, length, left net, right net), top row first."""
    rows = []
    for k in range(7, -1, -1):
        n = "vout" if k == 7 else f"n{k}"
        rows.append((f"xrb{k}a", RU_L, f"d{k}", f"mb{k}"))
        rows.append((f"xrb{k}b", RB_L, n, f"mb{k}"))
        if k > 0:
            nn = f"n{k-1}"
            rows.append((f"xrs{k-1}", RU_L, n, nn))
    rows.append(("xrta", RU_L, "n0", "mt"))
    rows.append(("xrtb", RU_L, "mt", "vss"))
    return rows


def std_cell(name):
    import gdsfactory as gf

    gds = (layoutlib.pdk_root() / "libs.ref" / STD_LIB / "gds" /
           f"{STD_LIB}.gds")
    return gf.import_gds(gds, cellname=name)


def generate():
    import gdsfactory as gf

    _draw_fet, draw_res = layoutlib.gf180_cells()
    top = gf.Component()
    labels = []

    # ---------------------------------------------------------- buffers
    buf = std_cell(BUF)
    tie = std_cell(TIE)
    n_bufs = 8
    buf_block_h = n_bufs * CELL_H
    y_res0 = buf_block_h + 5.0          # lowest resistor row
    rows = resistor_rows()
    n_rows = len(rows)

    # net -> list of y where a stub lands on its track; side stubs drawn later
    pts: dict[str, list[float]] = {}
    stubs = []  # (net, y, x_from) metal2 stub from x_from to the track

    cache = {}
    max_right = 0.0
    sub_x = None
    for i, (ref, length, ln, rn) in enumerate(rows):
        y0 = y_res0 + (n_rows - 1 - i) * ROW_PITCH
        if length not in cache:
            cache[length] = draw_res.draw_ppolyf_res(
                l_res=length, w_res=RU_W, res_type="ppolyf_u")
        rc = cache[length]
        top.add_ref(rc).move((0.0, y0))
        m1 = layoutlib.layer_boxes(rc, L1)
        if len(m1) != 3:
            raise layoutlib.LayoutError(
                f"expected 3 metal1 pads on a ppolyf_u cell, got {len(m1)}")
        m1 = sorted(m1)
        sub, lp, rp = m1
        sub_x = ((sub[0] + sub[2]) / 2, sub[0], sub[2])
        max_right = max(max_right, rp[2])
        # left end: via at the pad's upper half; right end: lower half
        ly = y0 + lp[3] - 0.25
        ry = y0 + rp[1] + 0.25
        lx = round((lp[0] + lp[2]) / 2 / 0.005) * 0.005
        rx = round((rp[0] + rp[2]) / 2 / 0.005) * 0.005
        layoutlib.via1(top, lx, ly)
        layoutlib.via1(top, rx, ry)
        stubs.append((ln, ly, lx))
        stubs.append((rn, ry, rx))
        pts.setdefault(ln, []).append(ly)
        pts.setdefault(rn, []).append(ry)
    y_res_top = y_res0 + n_rows * ROW_PITCH

    # buffer rows: row r at y r*CELL_H, odd rows mirrored about x so rails
    # are shared; filltie at both ends. Bit order: row 0 = bit 0.
    x_tie0 = None  # set after the track field is sized
    # --- vss track also reaches the bus below everything
    y_bus = -3.0
    pts.setdefault("vss", []).append(y_bus)

    # Z points: computed with row geometry (independent of x)
    def row_tf(r):
        """(mirror, dy): local y -> dy - y when mirrored else dy + y."""
        if r % 2 == 0:
            return False, r * CELL_H
        return True, (r + 1) * CELL_H

    def ty(r, y):
        mir, dy = row_tf(r)
        return dy - y if mir else dy + y

    for k in range(n_bufs):
        pts.setdefault(f"d{k}", []).append(ty(k, Z_VIA[1]))

    # ---------------------------------------------------------- tracks
    # left-edge interval packing of each net's y span onto metal1 tracks
    spans = sorted(((min(v), max(v), net) for net, v in pts.items()
                    if len(v) > 1 or net.startswith("d") or net == "vss"),
                   key=lambda s: s[0])
    tracks: list[float] = []  # last y used per track
    track_of: dict[str, int] = {}
    for lo, hi, net in spans:
        for t, last in enumerate(tracks):
            if lo > last + 1.5:
                tracks[t] = hi
                track_of[net] = t
                break
        else:
            tracks.append(hi)
            track_of[net] = len(tracks) - 1
    x_t0 = max_right + 2.0
    track_x = {net: x_t0 + t * TRACK_PITCH for net, t in track_of.items()}
    for net, x in track_x.items():
        lo, hi = min(pts[net]), max(pts[net])
        layoutlib.rect(top, x - W / 2, lo - W / 2, x + W / 2, hi + W / 2, L1)
    for net, y, x_from in stubs:
        x = track_x[net]
        layoutlib.rect(top, min(x_from, x) - W / 2, y - W / 2,
                       max(x_from, x) + W / 2, y + W / 2, L2)
        layoutlib.via1(top, x, y)
    x_track_end = x_t0 + len(tracks) * TRACK_PITCH

    # ---------------------------------------------------------- buffers
    x_tie0 = round((x_track_end + 3.0) / 0.005) * 0.005
    x_buf = x_tie0 + TIE_W
    x_tie1 = x_buf + BUF_W
    x_row_end = x_tie1 + TIE_W
    for r in range(n_bufs):
        mir, dy = row_tf(r)
        for comp, x in ((tie, x_tie0), (buf, x_buf), (tie, x_tie1)):
            ref = top.add_ref(comp)
            if mir:
                ref.dmirror_y(0)
            ref.move((x, dy))
        k = r  # bit k in row k
        zx, zy = x_buf + Z_VIA[0], ty(r, Z_VIA[1])
        layoutlib.via1(top, zx, zy)
        dx = track_x[f"d{k}"]
        layoutlib.rect(top, dx - W / 2, zy - W / 2, zx + W / 2, zy + W / 2, L2)
        layoutlib.via1(top, dx, zy)
        labels.append((f"dac_code[{k}]", x_buf + I_LBL[0], ty(r, I_LBL[1]),
                       L1LBL))

    # supply rails: VSS at y = 0, 2H, 4H, ...; VDD at H, 3H, ...
    x_vdd = x_row_end + 1.5
    x_vss = x_row_end + 3.0
    vdd_ys = [CELL_H * j for j in range(1, n_bufs + 1, 2)]
    vss_ys = [CELL_H * j for j in range(0, n_bufs + 1, 2)]
    for y in vdd_ys:
        layoutlib.rect(top, x_row_end - 0.5, y - 0.3, x_vdd + 0.3, y + 0.3, L1)
        layoutlib.via1(top, x_vdd, y)
    for y in vss_ys:
        layoutlib.rect(top, x_row_end - 0.5, y - 0.3, x_vss + 0.3, y + 0.3, L1)
        layoutlib.via1(top, x_vss, y)
    layoutlib.rect(top, x_vdd - W / 2, min(vdd_ys) - W / 2, x_vdd + W / 2,
                   max(vdd_ys) + W / 2, L2)
    layoutlib.rect(top, x_vss - W / 2, y_bus - W / 2, x_vss + W / 2,
                   max(vss_ys) + W / 2, L2)
    labels.append(("vdd", x_vdd - 1.0, vdd_ys[0], L1LBL))

    # ---------------------------------------------------------- vss
    sx, s0, s1 = sub_x
    layoutlib.rect(top, s0, y_bus - W / 2, s1, y_res_top, L1)
    sxv = round(sx / 0.005) * 0.005
    layoutlib.via1(top, sxv, y_bus)
    layoutlib.rect(top, sxv - W / 2, y_bus - W / 2, x_vss + W / 2,
                   y_bus + W / 2, L2)
    layoutlib.via1(top, track_x["vss"], y_bus)
    layoutlib.via1(top, x_vss, y_bus)
    labels.append(("vss", sx, y_res0 - 2.0, L1LBL))

    # ---------------------------------------------------------- vout
    vx = track_x["vout"]
    labels.append(("vout", vx, min(pts["vout"]), L1LBL))

    labels.sort(key=lambda lbl: PINS.index(lbl[0]))
    return layoutlib.finalize(top, CELL, labels)


if __name__ == "__main__":
    comp = generate()
    out_path = sys.argv[1] if len(sys.argv) > 1 else "r2r_dac_analog.gds"
    comp.write_gds(out_path)
    print(f"wrote {out_path}")
