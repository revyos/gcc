/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvdot -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvdot -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

vint32m1_t test_vpmaqa_vv_i32m1 (vint32m1_t vd, vint8m1_t vs1, vint8m1_t vs2, size_t vl) { return __riscv_th_vpmaqa_vv_i32m1 (vd, vs1, vs2, vl); }
vint32m2_t test_vpmaqa_vv_i32m2 (vint32m2_t vd, vint8m2_t vs1, vint8m2_t vs2, size_t vl) { return __riscv_th_vpmaqa_vv_i32m2 (vd, vs1, vs2, vl); }
vint32m4_t test_vpmaqa_vv_i32m4 (vint32m4_t vd, vint8m4_t vs1, vint8m4_t vs2, size_t vl) { return __riscv_th_vpmaqa_vv_i32m4 (vd, vs1, vs2, vl); }
vint32m8_t test_vpmaqa_vv_i32m8 (vint32m8_t vd, vint8m8_t vs1, vint8m8_t vs2, size_t vl) { return __riscv_th_vpmaqa_vv_i32m8 (vd, vs1, vs2, vl); }
vint32mf2_t test_vpmaqa_vv_i32mf2 (vint32mf2_t vd, vint8mf2_t vs1, vint8mf2_t vs2, size_t vl) { return __riscv_th_vpmaqa_vv_i32mf2 (vd, vs1, vs2, vl); }
vint32m1_t test_vpmaqa_vx_i32m1 (vint32m1_t vd, int32_t rs1, vint8m1_t vs2, size_t vl) { return __riscv_th_vpmaqa_vx_i32m1 (vd, rs1, vs2, vl); }
vint32m2_t test_vpmaqa_vx_i32m2 (vint32m2_t vd, int32_t rs1, vint8m2_t vs2, size_t vl) { return __riscv_th_vpmaqa_vx_i32m2 (vd, rs1, vs2, vl); }
vint32m4_t test_vpmaqa_vx_i32m4 (vint32m4_t vd, int32_t rs1, vint8m4_t vs2, size_t vl) { return __riscv_th_vpmaqa_vx_i32m4 (vd, rs1, vs2, vl); }
vint32m8_t test_vpmaqa_vx_i32m8 (vint32m8_t vd, int32_t rs1, vint8m8_t vs2, size_t vl) { return __riscv_th_vpmaqa_vx_i32m8 (vd, rs1, vs2, vl); }
vint32mf2_t test_vpmaqa_vx_i32mf2 (vint32mf2_t vd, int32_t rs1, vint8mf2_t vs2, size_t vl) { return __riscv_th_vpmaqa_vx_i32mf2 (vd, rs1, vs2, vl); }
vint32m1_t test_vpmaqasu_vv_i32m1 (vint32m1_t vd, vint8m1_t vs1, vuint8m1_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vv_i32m1 (vd, vs1, vs2, vl); }
vint32m2_t test_vpmaqasu_vv_i32m2 (vint32m2_t vd, vint8m2_t vs1, vuint8m2_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vv_i32m2 (vd, vs1, vs2, vl); }
vint32m4_t test_vpmaqasu_vv_i32m4 (vint32m4_t vd, vint8m4_t vs1, vuint8m4_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vv_i32m4 (vd, vs1, vs2, vl); }
vint32m8_t test_vpmaqasu_vv_i32m8 (vint32m8_t vd, vint8m8_t vs1, vuint8m8_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vv_i32m8 (vd, vs1, vs2, vl); }
vint32mf2_t test_vpmaqasu_vv_i32mf2 (vint32mf2_t vd, vint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vv_i32mf2 (vd, vs1, vs2, vl); }
vint32m1_t test_vpmaqasu_vx_i32m1 (vint32m1_t vd, int32_t rs1, vuint8m1_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vx_i32m1 (vd, rs1, vs2, vl); }
vint32m2_t test_vpmaqasu_vx_i32m2 (vint32m2_t vd, int32_t rs1, vuint8m2_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vx_i32m2 (vd, rs1, vs2, vl); }
vint32m4_t test_vpmaqasu_vx_i32m4 (vint32m4_t vd, int32_t rs1, vuint8m4_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vx_i32m4 (vd, rs1, vs2, vl); }
vint32m8_t test_vpmaqasu_vx_i32m8 (vint32m8_t vd, int32_t rs1, vuint8m8_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vx_i32m8 (vd, rs1, vs2, vl); }
vint32mf2_t test_vpmaqasu_vx_i32mf2 (vint32mf2_t vd, int32_t rs1, vuint8mf2_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vx_i32mf2 (vd, rs1, vs2, vl); }
vuint32m1_t test_vpmaqau_vv_u32m1 (vuint32m1_t vd, vuint8m1_t vs1, vuint8m1_t vs2, size_t vl) { return __riscv_th_vpmaqau_vv_u32m1 (vd, vs1, vs2, vl); }
vuint32m2_t test_vpmaqau_vv_u32m2 (vuint32m2_t vd, vuint8m2_t vs1, vuint8m2_t vs2, size_t vl) { return __riscv_th_vpmaqau_vv_u32m2 (vd, vs1, vs2, vl); }
vuint32m4_t test_vpmaqau_vv_u32m4 (vuint32m4_t vd, vuint8m4_t vs1, vuint8m4_t vs2, size_t vl) { return __riscv_th_vpmaqau_vv_u32m4 (vd, vs1, vs2, vl); }
vuint32m8_t test_vpmaqau_vv_u32m8 (vuint32m8_t vd, vuint8m8_t vs1, vuint8m8_t vs2, size_t vl) { return __riscv_th_vpmaqau_vv_u32m8 (vd, vs1, vs2, vl); }
vuint32mf2_t test_vpmaqau_vv_u32mf2 (vuint32mf2_t vd, vuint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) { return __riscv_th_vpmaqau_vv_u32mf2 (vd, vs1, vs2, vl); }
vuint32m1_t test_vpmaqau_vx_u32m1 (vuint32m1_t vd, uint32_t rs1, vuint8m1_t vs2, size_t vl) { return __riscv_th_vpmaqau_vx_u32m1 (vd, rs1, vs2, vl); }
vuint32m2_t test_vpmaqau_vx_u32m2 (vuint32m2_t vd, uint32_t rs1, vuint8m2_t vs2, size_t vl) { return __riscv_th_vpmaqau_vx_u32m2 (vd, rs1, vs2, vl); }
vuint32m4_t test_vpmaqau_vx_u32m4 (vuint32m4_t vd, uint32_t rs1, vuint8m4_t vs2, size_t vl) { return __riscv_th_vpmaqau_vx_u32m4 (vd, rs1, vs2, vl); }
vuint32m8_t test_vpmaqau_vx_u32m8 (vuint32m8_t vd, uint32_t rs1, vuint8m8_t vs2, size_t vl) { return __riscv_th_vpmaqau_vx_u32m8 (vd, rs1, vs2, vl); }
vuint32mf2_t test_vpmaqau_vx_u32mf2 (vuint32mf2_t vd, uint32_t rs1, vuint8mf2_t vs2, size_t vl) { return __riscv_th_vpmaqau_vx_u32mf2 (vd, rs1, vs2, vl); }
vint32m1_t test_vpmaqaus_vx_i32m1 (vint32m1_t vd, uint32_t rs1, vint8m1_t vs2, size_t vl) { return __riscv_th_vpmaqaus_vx_i32m1 (vd, rs1, vs2, vl); }
vint32m2_t test_vpmaqaus_vx_i32m2 (vint32m2_t vd, uint32_t rs1, vint8m2_t vs2, size_t vl) { return __riscv_th_vpmaqaus_vx_i32m2 (vd, rs1, vs2, vl); }
vint32m4_t test_vpmaqaus_vx_i32m4 (vint32m4_t vd, uint32_t rs1, vint8m4_t vs2, size_t vl) { return __riscv_th_vpmaqaus_vx_i32m4 (vd, rs1, vs2, vl); }
vint32m8_t test_vpmaqaus_vx_i32m8 (vint32m8_t vd, uint32_t rs1, vint8m8_t vs2, size_t vl) { return __riscv_th_vpmaqaus_vx_i32m8 (vd, rs1, vs2, vl); }
vint32mf2_t test_vpmaqaus_vx_i32mf2 (vint32mf2_t vd, uint32_t rs1, vint8mf2_t vs2, size_t vl) { return __riscv_th_vpmaqaus_vx_i32mf2 (vd, rs1, vs2, vl); }
// masked functions
vint32m1_t test_vpmaqa_vv_i32m1_m (vbool8_t mask, vint32m1_t vd, vint8m1_t vs1, vint8m1_t vs2, size_t vl) { return __riscv_th_vpmaqa_vv_i32m1_m (mask, vd, vs1, vs2, vl); }
vint32m2_t test_vpmaqa_vv_i32m2_m (vbool4_t mask, vint32m2_t vd, vint8m2_t vs1, vint8m2_t vs2, size_t vl) { return __riscv_th_vpmaqa_vv_i32m2_m (mask, vd, vs1, vs2, vl); }
vint32m4_t test_vpmaqa_vv_i32m4_m (vbool2_t mask, vint32m4_t vd, vint8m4_t vs1, vint8m4_t vs2, size_t vl) { return __riscv_th_vpmaqa_vv_i32m4_m (mask, vd, vs1, vs2, vl); }
vint32m8_t test_vpmaqa_vv_i32m8_m (vbool1_t mask, vint32m8_t vd, vint8m8_t vs1, vint8m8_t vs2, size_t vl) { return __riscv_th_vpmaqa_vv_i32m8_m (mask, vd, vs1, vs2, vl); }
vint32mf2_t test_vpmaqa_vv_i32mf2_m (vbool16_t mask, vint32mf2_t vd, vint8mf2_t vs1, vint8mf2_t vs2, size_t vl) { return __riscv_th_vpmaqa_vv_i32mf2_m (mask, vd, vs1, vs2, vl); }
vint32m1_t test_vpmaqa_vx_i32m1_m (vbool8_t mask, vint32m1_t vd, int32_t rs1, vint8m1_t vs2, size_t vl) { return __riscv_th_vpmaqa_vx_i32m1_m (mask, vd, rs1, vs2, vl); }
vint32m2_t test_vpmaqa_vx_i32m2_m (vbool4_t mask, vint32m2_t vd, int32_t rs1, vint8m2_t vs2, size_t vl) { return __riscv_th_vpmaqa_vx_i32m2_m (mask, vd, rs1, vs2, vl); }
vint32m4_t test_vpmaqa_vx_i32m4_m (vbool2_t mask, vint32m4_t vd, int32_t rs1, vint8m4_t vs2, size_t vl) { return __riscv_th_vpmaqa_vx_i32m4_m (mask, vd, rs1, vs2, vl); }
vint32m8_t test_vpmaqa_vx_i32m8_m (vbool1_t mask, vint32m8_t vd, int32_t rs1, vint8m8_t vs2, size_t vl) { return __riscv_th_vpmaqa_vx_i32m8_m (mask, vd, rs1, vs2, vl); }
vint32mf2_t test_vpmaqa_vx_i32mf2_m (vbool16_t mask, vint32mf2_t vd, int32_t rs1, vint8mf2_t vs2, size_t vl) { return __riscv_th_vpmaqa_vx_i32mf2_m (mask, vd, rs1, vs2, vl); }
vint32m1_t test_vpmaqasu_vv_i32m1_m (vbool8_t mask, vint32m1_t vd, vint8m1_t vs1, vuint8m1_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vv_i32m1_m (mask, vd, vs1, vs2, vl); }
vint32m2_t test_vpmaqasu_vv_i32m2_m (vbool4_t mask, vint32m2_t vd, vint8m2_t vs1, vuint8m2_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vv_i32m2_m (mask, vd, vs1, vs2, vl); }
vint32m4_t test_vpmaqasu_vv_i32m4_m (vbool2_t mask, vint32m4_t vd, vint8m4_t vs1, vuint8m4_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vv_i32m4_m (mask, vd, vs1, vs2, vl); }
vint32m8_t test_vpmaqasu_vv_i32m8_m (vbool1_t mask, vint32m8_t vd, vint8m8_t vs1, vuint8m8_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vv_i32m8_m (mask, vd, vs1, vs2, vl); }
vint32mf2_t test_vpmaqasu_vv_i32mf2_m (vbool16_t mask, vint32mf2_t vd, vint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vv_i32mf2_m (mask, vd, vs1, vs2, vl); }
vint32m1_t test_vpmaqasu_vx_i32m1_m (vbool8_t mask, vint32m1_t vd, int32_t rs1, vuint8m1_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vx_i32m1_m (mask, vd, rs1, vs2, vl); }
vint32m2_t test_vpmaqasu_vx_i32m2_m (vbool4_t mask, vint32m2_t vd, int32_t rs1, vuint8m2_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vx_i32m2_m (mask, vd, rs1, vs2, vl); }
vint32m4_t test_vpmaqasu_vx_i32m4_m (vbool2_t mask, vint32m4_t vd, int32_t rs1, vuint8m4_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vx_i32m4_m (mask, vd, rs1, vs2, vl); }
vint32m8_t test_vpmaqasu_vx_i32m8_m (vbool1_t mask, vint32m8_t vd, int32_t rs1, vuint8m8_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vx_i32m8_m (mask, vd, rs1, vs2, vl); }
vint32mf2_t test_vpmaqasu_vx_i32mf2_m (vbool16_t mask, vint32mf2_t vd, int32_t rs1, vuint8mf2_t vs2, size_t vl) { return __riscv_th_vpmaqasu_vx_i32mf2_m (mask, vd, rs1, vs2, vl); }
vuint32m1_t test_vpmaqau_vv_u32m1_m (vbool8_t mask, vuint32m1_t vd, vuint8m1_t vs1, vuint8m1_t vs2, size_t vl) { return __riscv_th_vpmaqau_vv_u32m1_m (mask, vd, vs1, vs2, vl); }
vuint32m2_t test_vpmaqau_vv_u32m2_m (vbool4_t mask, vuint32m2_t vd, vuint8m2_t vs1, vuint8m2_t vs2, size_t vl) { return __riscv_th_vpmaqau_vv_u32m2_m (mask, vd, vs1, vs2, vl); }
vuint32m4_t test_vpmaqau_vv_u32m4_m (vbool2_t mask, vuint32m4_t vd, vuint8m4_t vs1, vuint8m4_t vs2, size_t vl) { return __riscv_th_vpmaqau_vv_u32m4_m (mask, vd, vs1, vs2, vl); }
vuint32m8_t test_vpmaqau_vv_u32m8_m (vbool1_t mask, vuint32m8_t vd, vuint8m8_t vs1, vuint8m8_t vs2, size_t vl) { return __riscv_th_vpmaqau_vv_u32m8_m (mask, vd, vs1, vs2, vl); }
vuint32mf2_t test_vpmaqau_vv_u32mf2_m (vbool16_t mask, vuint32mf2_t vd, vuint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) { return __riscv_th_vpmaqau_vv_u32mf2_m (mask, vd, vs1, vs2, vl); }
vuint32m1_t test_vpmaqau_vx_u32m1_m (vbool8_t mask, vuint32m1_t vd, uint32_t rs1, vuint8m1_t vs2, size_t vl) { return __riscv_th_vpmaqau_vx_u32m1_m (mask, vd, rs1, vs2, vl); }
vuint32m2_t test_vpmaqau_vx_u32m2_m (vbool4_t mask, vuint32m2_t vd, uint32_t rs1, vuint8m2_t vs2, size_t vl) { return __riscv_th_vpmaqau_vx_u32m2_m (mask, vd, rs1, vs2, vl); }
vuint32m4_t test_vpmaqau_vx_u32m4_m (vbool2_t mask, vuint32m4_t vd, uint32_t rs1, vuint8m4_t vs2, size_t vl) { return __riscv_th_vpmaqau_vx_u32m4_m (mask, vd, rs1, vs2, vl); }
vuint32m8_t test_vpmaqau_vx_u32m8_m (vbool1_t mask, vuint32m8_t vd, uint32_t rs1, vuint8m8_t vs2, size_t vl) { return __riscv_th_vpmaqau_vx_u32m8_m (mask, vd, rs1, vs2, vl); }
vuint32mf2_t test_vpmaqau_vx_u32mf2_m (vbool16_t mask, vuint32mf2_t vd, uint32_t rs1, vuint8mf2_t vs2, size_t vl) { return __riscv_th_vpmaqau_vx_u32mf2_m (mask, vd, rs1, vs2, vl); }
vint32m1_t test_vpmaqaus_vx_i32m1_m (vbool8_t mask, vint32m1_t vd, uint32_t rs1, vint8m1_t vs2, size_t vl) { return __riscv_th_vpmaqaus_vx_i32m1_m (mask, vd, rs1, vs2, vl); }
vint32m2_t test_vpmaqaus_vx_i32m2_m (vbool4_t mask, vint32m2_t vd, uint32_t rs1, vint8m2_t vs2, size_t vl) { return __riscv_th_vpmaqaus_vx_i32m2_m (mask, vd, rs1, vs2, vl); }
vint32m4_t test_vpmaqaus_vx_i32m4_m (vbool2_t mask, vint32m4_t vd, uint32_t rs1, vint8m4_t vs2, size_t vl) { return __riscv_th_vpmaqaus_vx_i32m4_m (mask, vd, rs1, vs2, vl); }
vint32m8_t test_vpmaqaus_vx_i32m8_m (vbool1_t mask, vint32m8_t vd, uint32_t rs1, vint8m8_t vs2, size_t vl) { return __riscv_th_vpmaqaus_vx_i32m8_m (mask, vd, rs1, vs2, vl); }
vint32mf2_t test_vpmaqaus_vx_i32mf2_m (vbool16_t mask, vint32mf2_t vd, uint32_t rs1, vint8mf2_t vs2, size_t vl) { return __riscv_th_vpmaqaus_vx_i32mf2_m (mask, vd, rs1, vs2, vl); }

/* { dg-final { scan-assembler-times "th\\.vpmaqa\\.vv\t" 10 } } */
/* { dg-final { scan-assembler-times "th\\.vpmaqa\\.vx\t" 10 } } */
/* { dg-final { scan-assembler-times "th\\.vpmaqasu\\.vv\t" 10 } } */
/* { dg-final { scan-assembler-times "th\\.vpmaqasu\\.vx\t" 10 } } */
/* { dg-final { scan-assembler-times "th\\.vpmaqaus\\.vx\t" 10 } } */
/* { dg-final { scan-assembler-times "th\\.vpmaqau\\.vv\t" 10 } } */
/* { dg-final { scan-assembler-times "th\\.vpmaqau\\.vx\t" 10 } } */
