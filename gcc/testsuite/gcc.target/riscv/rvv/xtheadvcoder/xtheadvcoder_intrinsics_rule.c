/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvcoder0p1 -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvcoder0p1 -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

uint16_t rs1 = 65535;
vuint16m2_t test_vabau_vx_u16m2_m(vbool8_t mask, vuint16m2_t vd, vuint16m2_t vs2, size_t vl){return __riscv_th_vabau_vx_u16m2_m(mask, vd, vs2, rs1, vl);}
vuint16m2_t test_vabdu_vx_u16m2_m(vbool8_t mask, vuint16m2_t vs2, size_t vl){return __riscv_th_vabdu_vx_u16m2_m(mask, vs2, rs1, vl);}

/* { dg-final { scan-assembler-times "th\\.vabau\\.vx\t" 1 } } */
/* { dg-final { scan-assembler-times "th\\.vabdu\\.vx\t" 1 } } */
