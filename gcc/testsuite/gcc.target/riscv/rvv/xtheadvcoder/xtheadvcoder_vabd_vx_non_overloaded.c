/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvcoder0p1 -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvcoder0p1 -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

vuint8mf8_t test_vabd_vx_u8mf8(vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf8(vs2, rs1, vl);}
vuint8mf8_t test_vabd_vx_u8mf8_tu(vuint8mf8_t vd, vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf8_tu(vd, vs2, rs1, vl);}
vuint8mf8_t test_vabd_vx_u8mf8_m(vbool64_t mask, vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf8_m(mask, vs2, rs1, vl);}
vuint8mf8_t test_vabd_vx_u8mf8_mu(vbool64_t mask, vuint8mf8_t vd, vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf8_mu(mask, vd, vs2, rs1, vl);}
vuint8mf8_t test_vabd_vx_u8mf8_tum(vbool64_t mask, vuint8mf8_t vd, vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf8_tum(mask, vd, vs2, rs1, vl);}
vuint8mf8_t test_vabd_vx_u8mf8_tumu(vbool64_t mask, vuint8mf8_t vd, vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf8_tumu(mask, vd, vs2, rs1, vl);}
vuint8mf4_t test_vabd_vx_u8mf4(vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf4(vs2, rs1, vl);}
vuint8mf4_t test_vabd_vx_u8mf4_tu(vuint8mf4_t vd, vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf4_tu(vd, vs2, rs1, vl);}
vuint8mf4_t test_vabd_vx_u8mf4_m(vbool32_t mask, vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf4_m(mask, vs2, rs1, vl);}
vuint8mf4_t test_vabd_vx_u8mf4_mu(vbool32_t mask, vuint8mf4_t vd, vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf4_mu(mask, vd, vs2, rs1, vl);}
vuint8mf4_t test_vabd_vx_u8mf4_tum(vbool32_t mask, vuint8mf4_t vd, vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf4_tum(mask, vd, vs2, rs1, vl);}
vuint8mf4_t test_vabd_vx_u8mf4_tumu(vbool32_t mask, vuint8mf4_t vd, vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf4_tumu(mask, vd, vs2, rs1, vl);}
vuint8mf2_t test_vabd_vx_u8mf2(vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf2(vs2, rs1, vl);}
vuint8mf2_t test_vabd_vx_u8mf2_tu(vuint8mf2_t vd, vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf2_tu(vd, vs2, rs1, vl);}
vuint8mf2_t test_vabd_vx_u8mf2_m(vbool16_t mask, vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf2_m(mask, vs2, rs1, vl);}
vuint8mf2_t test_vabd_vx_u8mf2_mu(vbool16_t mask, vuint8mf2_t vd, vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf2_mu(mask, vd, vs2, rs1, vl);}
vuint8mf2_t test_vabd_vx_u8mf2_tum(vbool16_t mask, vuint8mf2_t vd, vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf2_tum(mask, vd, vs2, rs1, vl);}
vuint8mf2_t test_vabd_vx_u8mf2_tumu(vbool16_t mask, vuint8mf2_t vd, vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8mf2_tumu(mask, vd, vs2, rs1, vl);}
vuint8m1_t test_vabd_vx_u8m1(vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m1(vs2, rs1, vl);}
vuint8m1_t test_vabd_vx_u8m1_tu(vuint8m1_t vd, vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m1_tu(vd, vs2, rs1, vl);}
vuint8m1_t test_vabd_vx_u8m1_m(vbool8_t mask, vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m1_m(mask, vs2, rs1, vl);}
vuint8m1_t test_vabd_vx_u8m1_mu(vbool8_t mask, vuint8m1_t vd, vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m1_mu(mask, vd, vs2, rs1, vl);}
vuint8m1_t test_vabd_vx_u8m1_tum(vbool8_t mask, vuint8m1_t vd, vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m1_tum(mask, vd, vs2, rs1, vl);}
vuint8m1_t test_vabd_vx_u8m1_tumu(vbool8_t mask, vuint8m1_t vd, vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m1_tumu(mask, vd, vs2, rs1, vl);}
vuint8m2_t test_vabd_vx_u8m2(vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m2(vs2, rs1, vl);}
vuint8m2_t test_vabd_vx_u8m2_tu(vuint8m2_t vd, vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m2_tu(vd, vs2, rs1, vl);}
vuint8m2_t test_vabd_vx_u8m2_m(vbool4_t mask, vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m2_m(mask, vs2, rs1, vl);}
vuint8m2_t test_vabd_vx_u8m2_mu(vbool4_t mask, vuint8m2_t vd, vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m2_mu(mask, vd, vs2, rs1, vl);}
vuint8m2_t test_vabd_vx_u8m2_tum(vbool4_t mask, vuint8m2_t vd, vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m2_tum(mask, vd, vs2, rs1, vl);}
vuint8m2_t test_vabd_vx_u8m2_tumu(vbool4_t mask, vuint8m2_t vd, vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m2_tumu(mask, vd, vs2, rs1, vl);}
vuint8m4_t test_vabd_vx_u8m4(vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m4(vs2, rs1, vl);}
vuint8m4_t test_vabd_vx_u8m4_tu(vuint8m4_t vd, vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m4_tu(vd, vs2, rs1, vl);}
vuint8m4_t test_vabd_vx_u8m4_m(vbool2_t mask, vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m4_m(mask, vs2, rs1, vl);}
vuint8m4_t test_vabd_vx_u8m4_mu(vbool2_t mask, vuint8m4_t vd, vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m4_mu(mask, vd, vs2, rs1, vl);}
vuint8m4_t test_vabd_vx_u8m4_tum(vbool2_t mask, vuint8m4_t vd, vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m4_tum(mask, vd, vs2, rs1, vl);}
vuint8m4_t test_vabd_vx_u8m4_tumu(vbool2_t mask, vuint8m4_t vd, vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m4_tumu(mask, vd, vs2, rs1, vl);}
vuint8m8_t test_vabd_vx_u8m8(vint8m8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m8(vs2, rs1, vl);}
vuint8m8_t test_vabd_vx_u8m8_tu(vuint8m8_t vd, vint8m8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m8_tu(vd, vs2, rs1, vl);}
vuint8m8_t test_vabd_vx_u8m8_m(vbool1_t mask, vint8m8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m8_m(mask, vs2, rs1, vl);}
vuint8m8_t test_vabd_vx_u8m8_mu(vbool1_t mask, vuint8m8_t vd, vint8m8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m8_mu(mask, vd, vs2, rs1, vl);}
vuint8m8_t test_vabd_vx_u8m8_tum(vbool1_t mask, vuint8m8_t vd, vint8m8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m8_tum(mask, vd, vs2, rs1, vl);}
vuint8m8_t test_vabd_vx_u8m8_tumu(vbool1_t mask, vuint8m8_t vd, vint8m8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vabd_vx_u8m8_tumu(mask, vd, vs2, rs1, vl);}

vuint16mf4_t test_vabd_vx_u16mf4(vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16mf4(vs2, rs1, vl);}
vuint16mf4_t test_vabd_vx_u16mf4_tu(vuint16mf4_t vd, vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16mf4_tu(vd, vs2, rs1, vl);}
vuint16mf4_t test_vabd_vx_u16mf4_m(vbool64_t mask, vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16mf4_m(mask, vs2, rs1, vl);}
vuint16mf4_t test_vabd_vx_u16mf4_mu(vbool64_t mask, vuint16mf4_t vd, vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16mf4_mu(mask, vd, vs2, rs1, vl);}
vuint16mf4_t test_vabd_vx_u16mf4_tum(vbool64_t mask, vuint16mf4_t vd, vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16mf4_tum(mask, vd, vs2, rs1, vl);}
vuint16mf4_t test_vabd_vx_u16mf4_tumu(vbool64_t mask, vuint16mf4_t vd, vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16mf4_tumu(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test_vabd_vx_u16mf2(vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16mf2(vs2, rs1, vl);}
vuint16mf2_t test_vabd_vx_u16mf2_tu(vuint16mf2_t vd, vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16mf2_tu(vd, vs2, rs1, vl);}
vuint16mf2_t test_vabd_vx_u16mf2_m(vbool32_t mask, vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16mf2_m(mask, vs2, rs1, vl);}
vuint16mf2_t test_vabd_vx_u16mf2_mu(vbool32_t mask, vuint16mf2_t vd, vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16mf2_mu(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test_vabd_vx_u16mf2_tum(vbool32_t mask, vuint16mf2_t vd, vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16mf2_tum(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test_vabd_vx_u16mf2_tumu(vbool32_t mask, vuint16mf2_t vd, vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16mf2_tumu(mask, vd, vs2, rs1, vl);}
vuint16m1_t test_vabd_vx_u16m1(vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m1(vs2, rs1, vl);}
vuint16m1_t test_vabd_vx_u16m1_tu(vuint16m1_t vd, vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m1_tu(vd, vs2, rs1, vl);}
vuint16m1_t test_vabd_vx_u16m1_m(vbool16_t mask, vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m1_m(mask, vs2, rs1, vl);}
vuint16m1_t test_vabd_vx_u16m1_mu(vbool16_t mask, vuint16m1_t vd, vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m1_mu(mask, vd, vs2, rs1, vl);}
vuint16m1_t test_vabd_vx_u16m1_tum(vbool16_t mask, vuint16m1_t vd, vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m1_tum(mask, vd, vs2, rs1, vl);}
vuint16m1_t test_vabd_vx_u16m1_tumu(vbool16_t mask, vuint16m1_t vd, vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m1_tumu(mask, vd, vs2, rs1, vl);}
vuint16m2_t test_vabd_vx_u16m2(vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m2(vs2, rs1, vl);}
vuint16m2_t test_vabd_vx_u16m2_tu(vuint16m2_t vd, vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m2_tu(vd, vs2, rs1, vl);}
vuint16m2_t test_vabd_vx_u16m2_m(vbool8_t mask, vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m2_m(mask, vs2, rs1, vl);}
vuint16m2_t test_vabd_vx_u16m2_mu(vbool8_t mask, vuint16m2_t vd, vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m2_mu(mask, vd, vs2, rs1, vl);}
vuint16m2_t test_vabd_vx_u16m2_tum(vbool8_t mask, vuint16m2_t vd, vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m2_tum(mask, vd, vs2, rs1, vl);}
vuint16m2_t test_vabd_vx_u16m2_tumu(vbool8_t mask, vuint16m2_t vd, vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m2_tumu(mask, vd, vs2, rs1, vl);}
vuint16m4_t test_vabd_vx_u16m4(vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m4(vs2, rs1, vl);}
vuint16m4_t test_vabd_vx_u16m4_tu(vuint16m4_t vd, vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m4_tu(vd, vs2, rs1, vl);}
vuint16m4_t test_vabd_vx_u16m4_m(vbool4_t mask, vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m4_m(mask, vs2, rs1, vl);}
vuint16m4_t test_vabd_vx_u16m4_mu(vbool4_t mask, vuint16m4_t vd, vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m4_mu(mask, vd, vs2, rs1, vl);}
vuint16m4_t test_vabd_vx_u16m4_tum(vbool4_t mask, vuint16m4_t vd, vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m4_tum(mask, vd, vs2, rs1, vl);}
vuint16m4_t test_vabd_vx_u16m4_tumu(vbool4_t mask, vuint16m4_t vd, vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m4_tumu(mask, vd, vs2, rs1, vl);}
vuint16m8_t test_vabd_vx_u16m8(vint16m8_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m8(vs2, rs1, vl);}
vuint16m8_t test_vabd_vx_u16m8_tu(vuint16m8_t vd, vint16m8_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m8_tu(vd, vs2, rs1, vl);}
vuint16m8_t test_vabd_vx_u16m8_m(vbool2_t mask, vint16m8_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m8_m(mask, vs2, rs1, vl);}
vuint16m8_t test_vabd_vx_u16m8_mu(vbool2_t mask, vuint16m8_t vd, vint16m8_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m8_mu(mask, vd, vs2, rs1, vl);}
vuint16m8_t test_vabd_vx_u16m8_tum(vbool2_t mask, vuint16m8_t vd, vint16m8_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m8_tum(mask, vd, vs2, rs1, vl);}
vuint16m8_t test_vabd_vx_u16m8_tumu(vbool2_t mask, vuint16m8_t vd, vint16m8_t vs2, int16_t rs1, size_t vl){return __riscv_th_vabd_vx_u16m8_tumu(mask, vd, vs2, rs1, vl);}

vuint32mf2_t test_vabd_vx_u32mf2(vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32mf2(vs2, rs1, vl);}
vuint32mf2_t test_vabd_vx_u32mf2_tu(vuint32mf2_t vd, vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32mf2_tu(vd, vs2, rs1, vl);}
vuint32mf2_t test_vabd_vx_u32mf2_m(vbool64_t mask, vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32mf2_m(mask, vs2, rs1, vl);}
vuint32mf2_t test_vabd_vx_u32mf2_mu(vbool64_t mask, vuint32mf2_t vd, vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32mf2_mu(mask, vd, vs2, rs1, vl);}
vuint32mf2_t test_vabd_vx_u32mf2_tum(vbool64_t mask, vuint32mf2_t vd, vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32mf2_tum(mask, vd, vs2, rs1, vl);}
vuint32mf2_t test_vabd_vx_u32mf2_tumu(vbool64_t mask, vuint32mf2_t vd, vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32mf2_tumu(mask, vd, vs2, rs1, vl);}
vuint32m1_t test_vabd_vx_u32m1(vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m1(vs2, rs1, vl);}
vuint32m1_t test_vabd_vx_u32m1_tu(vuint32m1_t vd, vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m1_tu(vd, vs2, rs1, vl);}
vuint32m1_t test_vabd_vx_u32m1_m(vbool32_t mask, vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m1_m(mask, vs2, rs1, vl);}
vuint32m1_t test_vabd_vx_u32m1_mu(vbool32_t mask, vuint32m1_t vd, vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m1_mu(mask, vd, vs2, rs1, vl);}
vuint32m1_t test_vabd_vx_u32m1_tum(vbool32_t mask, vuint32m1_t vd, vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m1_tum(mask, vd, vs2, rs1, vl);}
vuint32m1_t test_vabd_vx_u32m1_tumu(vbool32_t mask, vuint32m1_t vd, vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m1_tumu(mask, vd, vs2, rs1, vl);}
vuint32m2_t test_vabd_vx_u32m2(vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m2(vs2, rs1, vl);}
vuint32m2_t test_vabd_vx_u32m2_tu(vuint32m2_t vd, vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m2_tu(vd, vs2, rs1, vl);}
vuint32m2_t test_vabd_vx_u32m2_m(vbool16_t mask, vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m2_m(mask, vs2, rs1, vl);}
vuint32m2_t test_vabd_vx_u32m2_mu(vbool16_t mask, vuint32m2_t vd, vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m2_mu(mask, vd, vs2, rs1, vl);}
vuint32m2_t test_vabd_vx_u32m2_tum(vbool16_t mask, vuint32m2_t vd, vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m2_tum(mask, vd, vs2, rs1, vl);}
vuint32m2_t test_vabd_vx_u32m2_tumu(vbool16_t mask, vuint32m2_t vd, vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m2_tumu(mask, vd, vs2, rs1, vl);}
vuint32m4_t test_vabd_vx_u32m4(vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m4(vs2, rs1, vl);}
vuint32m4_t test_vabd_vx_u32m4_tu(vuint32m4_t vd, vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m4_tu(vd, vs2, rs1, vl);}
vuint32m4_t test_vabd_vx_u32m4_m(vbool8_t mask, vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m4_m(mask, vs2, rs1, vl);}
vuint32m4_t test_vabd_vx_u32m4_mu(vbool8_t mask, vuint32m4_t vd, vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m4_mu(mask, vd, vs2, rs1, vl);}
vuint32m4_t test_vabd_vx_u32m4_tum(vbool8_t mask, vuint32m4_t vd, vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m4_tum(mask, vd, vs2, rs1, vl);}
vuint32m4_t test_vabd_vx_u32m4_tumu(vbool8_t mask, vuint32m4_t vd, vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m4_tumu(mask, vd, vs2, rs1, vl);}
vuint32m8_t test_vabd_vx_u32m8(vint32m8_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m8(vs2, rs1, vl);}
vuint32m8_t test_vabd_vx_u32m8_tu(vuint32m8_t vd, vint32m8_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m8_tu(vd, vs2, rs1, vl);}
vuint32m8_t test_vabd_vx_u32m8_m(vbool4_t mask, vint32m8_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m8_m(mask, vs2, rs1, vl);}
vuint32m8_t test_vabd_vx_u32m8_mu(vbool4_t mask, vuint32m8_t vd, vint32m8_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m8_mu(mask, vd, vs2, rs1, vl);}
vuint32m8_t test_vabd_vx_u32m8_tum(vbool4_t mask, vuint32m8_t vd, vint32m8_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m8_tum(mask, vd, vs2, rs1, vl);}
vuint32m8_t test_vabd_vx_u32m8_tumu(vbool4_t mask, vuint32m8_t vd, vint32m8_t vs2, int32_t rs1, size_t vl){return __riscv_th_vabd_vx_u32m8_tumu(mask, vd, vs2, rs1, vl);}

vuint64m1_t test_vabd_vx_u64m1(vint64m1_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m1(vs2, rs1, vl);}
vuint64m1_t test_vabd_vx_u64m1_tu(vuint64m1_t vd, vint64m1_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m1_tu(vd, vs2, rs1, vl);}
vuint64m1_t test_vabd_vx_u64m1_m(vbool64_t mask, vint64m1_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m1_m(mask, vs2, rs1, vl);}
vuint64m1_t test_vabd_vx_u64m1_mu(vbool64_t mask, vuint64m1_t vd, vint64m1_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m1_mu(mask, vd, vs2, rs1, vl);}
vuint64m1_t test_vabd_vx_u64m1_tum(vbool64_t mask, vuint64m1_t vd, vint64m1_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m1_tum(mask, vd, vs2, rs1, vl);}
vuint64m1_t test_vabd_vx_u64m1_tumu(vbool64_t mask, vuint64m1_t vd, vint64m1_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m1_tumu(mask, vd, vs2, rs1, vl);}
vuint64m2_t test_vabd_vx_u64m2(vint64m2_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m2(vs2, rs1, vl);}
vuint64m2_t test_vabd_vx_u64m2_tu(vuint64m2_t vd, vint64m2_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m2_tu(vd, vs2, rs1, vl);}
vuint64m2_t test_vabd_vx_u64m2_m(vbool32_t mask, vint64m2_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m2_m(mask, vs2, rs1, vl);}
vuint64m2_t test_vabd_vx_u64m2_mu(vbool32_t mask, vuint64m2_t vd, vint64m2_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m2_mu(mask, vd, vs2, rs1, vl);}
vuint64m2_t test_vabd_vx_u64m2_tum(vbool32_t mask, vuint64m2_t vd, vint64m2_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m2_tum(mask, vd, vs2, rs1, vl);}
vuint64m2_t test_vabd_vx_u64m2_tumu(vbool32_t mask, vuint64m2_t vd, vint64m2_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m2_tumu(mask, vd, vs2, rs1, vl);}
vuint64m4_t test_vabd_vx_u64m4(vint64m4_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m4(vs2, rs1, vl);}
vuint64m4_t test_vabd_vx_u64m4_tu(vuint64m4_t vd, vint64m4_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m4_tu(vd, vs2, rs1, vl);}
vuint64m4_t test_vabd_vx_u64m4_m(vbool16_t mask, vint64m4_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m4_m(mask, vs2, rs1, vl);}
vuint64m4_t test_vabd_vx_u64m4_mu(vbool16_t mask, vuint64m4_t vd, vint64m4_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m4_mu(mask, vd, vs2, rs1, vl);}
vuint64m4_t test_vabd_vx_u64m4_tum(vbool16_t mask, vuint64m4_t vd, vint64m4_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m4_tum(mask, vd, vs2, rs1, vl);}
vuint64m4_t test_vabd_vx_u64m4_tumu(vbool16_t mask, vuint64m4_t vd, vint64m4_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m4_tumu(mask, vd, vs2, rs1, vl);}
vuint64m8_t test_vabd_vx_u64m8(vint64m8_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m8(vs2, rs1, vl);}
vuint64m8_t test_vabd_vx_u64m8_tu(vuint64m8_t vd, vint64m8_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m8_tu(vd, vs2, rs1, vl);}
vuint64m8_t test_vabd_vx_u64m8_m(vbool8_t mask, vint64m8_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m8_m(mask, vs2, rs1, vl);}
vuint64m8_t test_vabd_vx_u64m8_mu(vbool8_t mask, vuint64m8_t vd, vint64m8_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m8_mu(mask, vd, vs2, rs1, vl);}
vuint64m8_t test_vabd_vx_u64m8_tum(vbool8_t mask, vuint64m8_t vd, vint64m8_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m8_tum(mask, vd, vs2, rs1, vl);}
vuint64m8_t test_vabd_vx_u64m8_tumu(vbool8_t mask, vuint64m8_t vd, vint64m8_t vs2, int64_t rs1, size_t vl){return __riscv_th_vabd_vx_u64m8_tumu(mask, vd, vs2, rs1, vl);}

/* { dg-final { scan-assembler-times "th\\.vabd\\.vx\t" 132 } } */