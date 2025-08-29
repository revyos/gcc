/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvdot -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvdot -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

vint16m1_t test_vpwadd_vv_i16m1 (vint8mf2_t op1, vint8mf2_t op2, size_t vl) { return __riscv_th_vpwadd_vv_i16m1 (op1, op2, vl); }
vint16m2_t test_vpwadd_vv_i16m2 (vint8m1_t op1, vint8m1_t op2, size_t vl) { return __riscv_th_vpwadd_vv_i16m2 (op1, op2, vl); }
vint16m4_t test_vpwadd_vv_i16m4 (vint8m2_t op1, vint8m2_t op2, size_t vl) { return __riscv_th_vpwadd_vv_i16m4 (op1, op2, vl); }
vint16m8_t test_vpwadd_vv_i16m8 (vint8m4_t op1, vint8m4_t op2, size_t vl) { return __riscv_th_vpwadd_vv_i16m8 (op1, op2, vl); }
vint16mf2_t test_vpwadd_vv_i16mf2 (vint8mf4_t op1, vint8mf4_t op2, size_t vl) { return __riscv_th_vpwadd_vv_i16mf2 (op1, op2, vl); }
vint16mf4_t test_vpwadd_vv_i16mf4 (vint8mf8_t op1, vint8mf8_t op2, size_t vl) { return __riscv_th_vpwadd_vv_i16mf4 (op1, op2, vl); }
vint16m1_t test_vpwadd_vx_i16m1 (vint8mf2_t op1, int8_t op2, size_t vl) { return __riscv_th_vpwadd_vx_i16m1 (op1, op2, vl); }
vint16m2_t test_vpwadd_vx_i16m2 (vint8m1_t op1, int8_t op2, size_t vl) { return __riscv_th_vpwadd_vx_i16m2 (op1, op2, vl); }
vint16m4_t test_vpwadd_vx_i16m4 (vint8m2_t op1, int8_t op2, size_t vl) { return __riscv_th_vpwadd_vx_i16m4 (op1, op2, vl); }
vint16m8_t test_vpwadd_vx_i16m8 (vint8m4_t op1, int8_t op2, size_t vl) { return __riscv_th_vpwadd_vx_i16m8 (op1, op2, vl); }
vint16mf2_t test_vpwadd_vx_i16mf2 (vint8mf4_t op1, int8_t op2, size_t vl) { return __riscv_th_vpwadd_vx_i16mf2 (op1, op2, vl); }
vint16mf4_t test_vpwadd_vx_i16mf4 (vint8mf8_t op1, int8_t op2, size_t vl) { return __riscv_th_vpwadd_vx_i16mf4 (op1, op2, vl); }
vuint16m1_t test_vpwaddu_vv_u16m1 (vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) { return __riscv_th_vpwaddu_vv_u16m1 (op1, op2, vl); }
vuint16m2_t test_vpwaddu_vv_u16m2 (vuint8m1_t op1, vuint8m1_t op2, size_t vl) { return __riscv_th_vpwaddu_vv_u16m2 (op1, op2, vl); }
vuint16m4_t test_vpwaddu_vv_u16m4 (vuint8m2_t op1, vuint8m2_t op2, size_t vl) { return __riscv_th_vpwaddu_vv_u16m4 (op1, op2, vl); }
vuint16m8_t test_vpwaddu_vv_u16m8 (vuint8m4_t op1, vuint8m4_t op2, size_t vl) { return __riscv_th_vpwaddu_vv_u16m8 (op1, op2, vl); }
vuint16mf2_t test_vpwaddu_vv_u16mf2 (vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) { return __riscv_th_vpwaddu_vv_u16mf2 (op1, op2, vl); }
vuint16mf4_t test_vpwaddu_vv_u16mf4 (vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) { return __riscv_th_vpwaddu_vv_u16mf4 (op1, op2, vl); }
vuint16m1_t test_vpwaddu_vx_u16m1 (vuint8mf2_t op1, uint8_t op2, size_t vl) { return __riscv_th_vpwaddu_vx_u16m1 (op1, op2, vl); }
vuint16m2_t test_vpwaddu_vx_u16m2 (vuint8m1_t op1, uint8_t op2, size_t vl) { return __riscv_th_vpwaddu_vx_u16m2 (op1, op2, vl); }
vuint16m4_t test_vpwaddu_vx_u16m4 (vuint8m2_t op1, uint8_t op2, size_t vl) { return __riscv_th_vpwaddu_vx_u16m4 (op1, op2, vl); }
vuint16m8_t test_vpwaddu_vx_u16m8 (vuint8m4_t op1, uint8_t op2, size_t vl) { return __riscv_th_vpwaddu_vx_u16m8 (op1, op2, vl); }
vuint16mf2_t test_vpwaddu_vx_u16mf2 (vuint8mf4_t op1, uint8_t op2, size_t vl) { return __riscv_th_vpwaddu_vx_u16mf2 (op1, op2, vl); }
vuint16mf4_t test_vpwaddu_vx_u16mf4 (vuint8mf8_t op1, uint8_t op2, size_t vl) { return __riscv_th_vpwaddu_vx_u16mf4 (op1, op2, vl); }
// masked functions
vint16m1_t test_vpwadd_vv_i16m1_m (vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2, size_t vl) { return __riscv_th_vpwadd_vv_i16m1_m (mask, op1, op2, vl); }
vint16m2_t test_vpwadd_vv_i16m2_m (vbool8_t mask, vint8m1_t op1, vint8m1_t op2, size_t vl) { return __riscv_th_vpwadd_vv_i16m2_m (mask, op1, op2, vl); }
vint16m4_t test_vpwadd_vv_i16m4_m (vbool4_t mask, vint8m2_t op1, vint8m2_t op2, size_t vl) { return __riscv_th_vpwadd_vv_i16m4_m (mask, op1, op2, vl); }
vint16m8_t test_vpwadd_vv_i16m8_m (vbool2_t mask, vint8m4_t op1, vint8m4_t op2, size_t vl) { return __riscv_th_vpwadd_vv_i16m8_m (mask, op1, op2, vl); }
vint16mf2_t test_vpwadd_vv_i16mf2_m (vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2, size_t vl) { return __riscv_th_vpwadd_vv_i16mf2_m (mask, op1, op2, vl); }
vint16mf4_t test_vpwadd_vv_i16mf4_m (vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2, size_t vl) { return __riscv_th_vpwadd_vv_i16mf4_m (mask, op1, op2, vl); }
vint16m1_t test_vpwadd_vx_i16m1_m (vbool16_t mask, vint8mf2_t op1, int8_t op2, size_t vl) { return __riscv_th_vpwadd_vx_i16m1_m (mask, op1, op2, vl); }
vint16m2_t test_vpwadd_vx_i16m2_m (vbool8_t mask, vint8m1_t op1, int8_t op2, size_t vl) { return __riscv_th_vpwadd_vx_i16m2_m (mask, op1, op2, vl); }
vint16m4_t test_vpwadd_vx_i16m4_m (vbool4_t mask, vint8m2_t op1, int8_t op2, size_t vl) { return __riscv_th_vpwadd_vx_i16m4_m (mask, op1, op2, vl); }
vint16m8_t test_vpwadd_vx_i16m8_m (vbool2_t mask, vint8m4_t op1, int8_t op2, size_t vl) { return __riscv_th_vpwadd_vx_i16m8_m (mask, op1, op2, vl); }
vint16mf2_t test_vpwadd_vx_i16mf2_m (vbool32_t mask, vint8mf4_t op1, int8_t op2, size_t vl) { return __riscv_th_vpwadd_vx_i16mf2_m (mask, op1, op2, vl); }
vint16mf4_t test_vpwadd_vx_i16mf4_m (vbool64_t mask, vint8mf8_t op1, int8_t op2, size_t vl) { return __riscv_th_vpwadd_vx_i16mf4_m (mask, op1, op2, vl); }
vuint16m1_t test_vpwaddu_vv_u16m1_m (vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) { return __riscv_th_vpwaddu_vv_u16m1_m (mask, op1, op2, vl); }
vuint16m2_t test_vpwaddu_vv_u16m2_m (vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl) { return __riscv_th_vpwaddu_vv_u16m2_m (mask, op1, op2, vl); }
vuint16m4_t test_vpwaddu_vv_u16m4_m (vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl) { return __riscv_th_vpwaddu_vv_u16m4_m (mask, op1, op2, vl); }
vuint16m8_t test_vpwaddu_vv_u16m8_m (vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl) { return __riscv_th_vpwaddu_vv_u16m8_m (mask, op1, op2, vl); }
vuint16mf2_t test_vpwaddu_vv_u16mf2_m (vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) { return __riscv_th_vpwaddu_vv_u16mf2_m (mask, op1, op2, vl); }
vuint16mf4_t test_vpwaddu_vv_u16mf4_m (vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) { return __riscv_th_vpwaddu_vv_u16mf4_m (mask, op1, op2, vl); }
vuint16m1_t test_vpwaddu_vx_u16m1_m (vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl) { return __riscv_th_vpwaddu_vx_u16m1_m (mask, op1, op2, vl); }
vuint16m2_t test_vpwaddu_vx_u16m2_m (vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl) { return __riscv_th_vpwaddu_vx_u16m2_m (mask, op1, op2, vl); }
vuint16m4_t test_vpwaddu_vx_u16m4_m (vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl) { return __riscv_th_vpwaddu_vx_u16m4_m (mask, op1, op2, vl); }
vuint16m8_t test_vpwaddu_vx_u16m8_m (vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl) { return __riscv_th_vpwaddu_vx_u16m8_m (mask, op1, op2, vl); }
vuint16mf2_t test_vpwaddu_vx_u16mf2_m (vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl) { return __riscv_th_vpwaddu_vx_u16mf2_m (mask, op1, op2, vl); }
vuint16mf4_t test_vpwaddu_vx_u16mf4_m (vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl) { return __riscv_th_vpwaddu_vx_u16mf4_m (mask, op1, op2, vl); }

/* { dg-final { scan-assembler-times "th\\.vpwadd\\.vv\t" 12 } } */
/* { dg-final { scan-assembler-times "th\\.vpwadd\\.vx\t" 12 } } */
/* { dg-final { scan-assembler-times "th\\.vpwaddu\\.vv\t" 12 } } */
/* { dg-final { scan-assembler-times "th\\.vpwaddu\\.vx\t" 12 } } */
