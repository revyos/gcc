/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_zfh_zvfh_xtheadvcoder0p1 -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_zfh_zvfh_xtheadvcoder0p1 -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>
typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

// without frm

vfloat16mf4_t test_vfabd_vf_f16mf4(vfloat16mf4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16mf4(vs2, rs1, vl);}
vfloat16mf4_t test_vfabd_vf_f16mf4_tu(vfloat16mf4_t vd, vfloat16mf4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16mf4_tu(vd, vs2, rs1, vl);}
vfloat16mf4_t test_vfabd_vf_f16mf4_m(vbool64_t mask, vfloat16mf4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16mf4_m(mask, vs2, rs1, vl);}
vfloat16mf4_t test_vfabd_vf_f16mf4_mu(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16mf4_mu(mask, vd, vs2, rs1, vl);}
vfloat16mf4_t test_vfabd_vf_f16mf4_tum(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16mf4_tum(mask, vd, vs2, rs1, vl);}
vfloat16mf4_t test_vfabd_vf_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16mf4_tumu(mask, vd, vs2, rs1, vl);}
vfloat16mf2_t test_vfabd_vf_f16mf2(vfloat16mf2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16mf2(vs2, rs1, vl);}
vfloat16mf2_t test_vfabd_vf_f16mf2_tu(vfloat16mf2_t vd, vfloat16mf2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16mf2_tu(vd, vs2, rs1, vl);}
vfloat16mf2_t test_vfabd_vf_f16mf2_m(vbool32_t mask, vfloat16mf2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16mf2_m(mask, vs2, rs1, vl);}
vfloat16mf2_t test_vfabd_vf_f16mf2_mu(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16mf2_mu(mask, vd, vs2, rs1, vl);}
vfloat16mf2_t test_vfabd_vf_f16mf2_tum(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16mf2_tum(mask, vd, vs2, rs1, vl);}
vfloat16mf2_t test_vfabd_vf_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16mf2_tumu(mask, vd, vs2, rs1, vl);}
vfloat16m1_t test_vfabd_vf_f16m1(vfloat16m1_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m1(vs2, rs1, vl);}
vfloat16m1_t test_vfabd_vf_f16m1_tu(vfloat16m1_t vd, vfloat16m1_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m1_tu(vd, vs2, rs1, vl);}
vfloat16m1_t test_vfabd_vf_f16m1_m(vbool16_t mask, vfloat16m1_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m1_m(mask, vs2, rs1, vl);}
vfloat16m1_t test_vfabd_vf_f16m1_mu(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m1_mu(mask, vd, vs2, rs1, vl);}
vfloat16m1_t test_vfabd_vf_f16m1_tum(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m1_tum(mask, vd, vs2, rs1, vl);}
vfloat16m1_t test_vfabd_vf_f16m1_tumu(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m1_tumu(mask, vd, vs2, rs1, vl);}
vfloat16m2_t test_vfabd_vf_f16m2(vfloat16m2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m2(vs2, rs1, vl);}
vfloat16m2_t test_vfabd_vf_f16m2_tu(vfloat16m2_t vd, vfloat16m2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m2_tu(vd, vs2, rs1, vl);}
vfloat16m2_t test_vfabd_vf_f16m2_m(vbool8_t mask, vfloat16m2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m2_m(mask, vs2, rs1, vl);}
vfloat16m2_t test_vfabd_vf_f16m2_mu(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m2_mu(mask, vd, vs2, rs1, vl);}
vfloat16m2_t test_vfabd_vf_f16m2_tum(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m2_tum(mask, vd, vs2, rs1, vl);}
vfloat16m2_t test_vfabd_vf_f16m2_tumu(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m2_tumu(mask, vd, vs2, rs1, vl);}
vfloat16m4_t test_vfabd_vf_f16m4(vfloat16m4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m4(vs2, rs1, vl);}
vfloat16m4_t test_vfabd_vf_f16m4_tu(vfloat16m4_t vd, vfloat16m4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m4_tu(vd, vs2, rs1, vl);}
vfloat16m4_t test_vfabd_vf_f16m4_m(vbool4_t mask, vfloat16m4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m4_m(mask, vs2, rs1, vl);}
vfloat16m4_t test_vfabd_vf_f16m4_mu(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m4_mu(mask, vd, vs2, rs1, vl);}
vfloat16m4_t test_vfabd_vf_f16m4_tum(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m4_tum(mask, vd, vs2, rs1, vl);}
vfloat16m4_t test_vfabd_vf_f16m4_tumu(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m4_tumu(mask, vd, vs2, rs1, vl);}
vfloat16m8_t test_vfabd_vf_f16m8(vfloat16m8_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m8(vs2, rs1, vl);}
vfloat16m8_t test_vfabd_vf_f16m8_tu(vfloat16m8_t vd, vfloat16m8_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m8_tu(vd, vs2, rs1, vl);}
vfloat16m8_t test_vfabd_vf_f16m8_m(vbool2_t mask, vfloat16m8_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m8_m(mask, vs2, rs1, vl);}
vfloat16m8_t test_vfabd_vf_f16m8_mu(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m8_mu(mask, vd, vs2, rs1, vl);}
vfloat16m8_t test_vfabd_vf_f16m8_tum(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m8_tum(mask, vd, vs2, rs1, vl);}
vfloat16m8_t test_vfabd_vf_f16m8_tumu(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_vf_f16m8_tumu(mask, vd, vs2, rs1, vl);}

vfloat32mf2_t test_vfabd_vf_f32mf2(vfloat32mf2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32mf2(vs2, rs1, vl);}
vfloat32mf2_t test_vfabd_vf_f32mf2_tu(vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32mf2_tu(vd, vs2, rs1, vl);}
vfloat32mf2_t test_vfabd_vf_f32mf2_m(vbool64_t mask, vfloat32mf2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32mf2_m(mask, vs2, rs1, vl);}
vfloat32mf2_t test_vfabd_vf_f32mf2_mu(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32mf2_mu(mask, vd, vs2, rs1, vl);}
vfloat32mf2_t test_vfabd_vf_f32mf2_tum(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32mf2_tum(mask, vd, vs2, rs1, vl);}
vfloat32mf2_t test_vfabd_vf_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32mf2_tumu(mask, vd, vs2, rs1, vl);}
vfloat32m1_t test_vfabd_vf_f32m1(vfloat32m1_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m1(vs2, rs1, vl);}
vfloat32m1_t test_vfabd_vf_f32m1_tu(vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m1_tu(vd, vs2, rs1, vl);}
vfloat32m1_t test_vfabd_vf_f32m1_m(vbool32_t mask, vfloat32m1_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m1_m(mask, vs2, rs1, vl);}
vfloat32m1_t test_vfabd_vf_f32m1_mu(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m1_mu(mask, vd, vs2, rs1, vl);}
vfloat32m1_t test_vfabd_vf_f32m1_tum(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m1_tum(mask, vd, vs2, rs1, vl);}
vfloat32m1_t test_vfabd_vf_f32m1_tumu(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m1_tumu(mask, vd, vs2, rs1, vl);}
vfloat32m2_t test_vfabd_vf_f32m2(vfloat32m2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m2(vs2, rs1, vl);}
vfloat32m2_t test_vfabd_vf_f32m2_tu(vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m2_tu(vd, vs2, rs1, vl);}
vfloat32m2_t test_vfabd_vf_f32m2_m(vbool16_t mask, vfloat32m2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m2_m(mask, vs2, rs1, vl);}
vfloat32m2_t test_vfabd_vf_f32m2_mu(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m2_mu(mask, vd, vs2, rs1, vl);}
vfloat32m2_t test_vfabd_vf_f32m2_tum(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m2_tum(mask, vd, vs2, rs1, vl);}
vfloat32m2_t test_vfabd_vf_f32m2_tumu(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m2_tumu(mask, vd, vs2, rs1, vl);}
vfloat32m4_t test_vfabd_vf_f32m4(vfloat32m4_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m4(vs2, rs1, vl);}
vfloat32m4_t test_vfabd_vf_f32m4_tu(vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m4_tu(vd, vs2, rs1, vl);}
vfloat32m4_t test_vfabd_vf_f32m4_m(vbool8_t mask, vfloat32m4_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m4_m(mask, vs2, rs1, vl);}
vfloat32m4_t test_vfabd_vf_f32m4_mu(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m4_mu(mask, vd, vs2, rs1, vl);}
vfloat32m4_t test_vfabd_vf_f32m4_tum(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m4_tum(mask, vd, vs2, rs1, vl);}
vfloat32m4_t test_vfabd_vf_f32m4_tumu(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m4_tumu(mask, vd, vs2, rs1, vl);}
vfloat32m8_t test_vfabd_vf_f32m8(vfloat32m8_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m8(vs2, rs1, vl);}
vfloat32m8_t test_vfabd_vf_f32m8_tu(vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m8_tu(vd, vs2, rs1, vl);}
vfloat32m8_t test_vfabd_vf_f32m8_m(vbool4_t mask, vfloat32m8_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m8_m(mask, vs2, rs1, vl);}
vfloat32m8_t test_vfabd_vf_f32m8_mu(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m8_mu(mask, vd, vs2, rs1, vl);}
vfloat32m8_t test_vfabd_vf_f32m8_tum(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m8_tum(mask, vd, vs2, rs1, vl);}
vfloat32m8_t test_vfabd_vf_f32m8_tumu(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_vf_f32m8_tumu(mask, vd, vs2, rs1, vl);}

vfloat64m1_t test_vfabd_vf_f64m1(vfloat64m1_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m1(vs2, rs1, vl);}
vfloat64m1_t test_vfabd_vf_f64m1_tu(vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m1_tu(vd, vs2, rs1, vl);}
vfloat64m1_t test_vfabd_vf_f64m1_m(vbool64_t mask, vfloat64m1_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m1_m(mask, vs2, rs1, vl);}
vfloat64m1_t test_vfabd_vf_f64m1_mu(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m1_mu(mask, vd, vs2, rs1, vl);}
vfloat64m1_t test_vfabd_vf_f64m1_tum(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m1_tum(mask, vd, vs2, rs1, vl);}
vfloat64m1_t test_vfabd_vf_f64m1_tumu(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m1_tumu(mask, vd, vs2, rs1, vl);}
vfloat64m2_t test_vfabd_vf_f64m2(vfloat64m2_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m2(vs2, rs1, vl);}
vfloat64m2_t test_vfabd_vf_f64m2_tu(vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m2_tu(vd, vs2, rs1, vl);}
vfloat64m2_t test_vfabd_vf_f64m2_m(vbool32_t mask, vfloat64m2_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m2_m(mask, vs2, rs1, vl);}
vfloat64m2_t test_vfabd_vf_f64m2_mu(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m2_mu(mask, vd, vs2, rs1, vl);}
vfloat64m2_t test_vfabd_vf_f64m2_tum(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m2_tum(mask, vd, vs2, rs1, vl);}
vfloat64m2_t test_vfabd_vf_f64m2_tumu(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m2_tumu(mask, vd, vs2, rs1, vl);}
vfloat64m4_t test_vfabd_vf_f64m4(vfloat64m4_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m4(vs2, rs1, vl);}
vfloat64m4_t test_vfabd_vf_f64m4_tu(vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m4_tu(vd, vs2, rs1, vl);}
vfloat64m4_t test_vfabd_vf_f64m4_m(vbool16_t mask, vfloat64m4_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m4_m(mask, vs2, rs1, vl);}
vfloat64m4_t test_vfabd_vf_f64m4_mu(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m4_mu(mask, vd, vs2, rs1, vl);}
vfloat64m4_t test_vfabd_vf_f64m4_tum(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m4_tum(mask, vd, vs2, rs1, vl);}
vfloat64m4_t test_vfabd_vf_f64m4_tumu(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m4_tumu(mask, vd, vs2, rs1, vl);}
vfloat64m8_t test_vfabd_vf_f64m8(vfloat64m8_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m8(vs2, rs1, vl);}
vfloat64m8_t test_vfabd_vf_f64m8_tu(vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m8_tu(vd, vs2, rs1, vl);}
vfloat64m8_t test_vfabd_vf_f64m8_m(vbool8_t mask, vfloat64m8_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m8_m(mask, vs2, rs1, vl);}
vfloat64m8_t test_vfabd_vf_f64m8_mu(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m8_mu(mask, vd, vs2, rs1, vl);}
vfloat64m8_t test_vfabd_vf_f64m8_tum(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m8_tum(mask, vd, vs2, rs1, vl);}
vfloat64m8_t test_vfabd_vf_f64m8_tumu(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_vf_f64m8_tumu(mask, vd, vs2, rs1, vl);}

// with frm

vfloat16mf4_t test_vfabd_vf_f16mf4_rm(vfloat16mf4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16mf4_rm(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf4_t test_vfabd_vf_f16mf4_rm_tu(vfloat16mf4_t vd, vfloat16mf4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16mf4_rm_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf4_t test_vfabd_vf_f16mf4_rm_m(vbool64_t mask, vfloat16mf4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16mf4_rm_m(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf4_t test_vfabd_vf_f16mf4_rm_mu(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16mf4_rm_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf4_t test_vfabd_vf_f16mf4_rm_tum(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16mf4_rm_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf4_t test_vfabd_vf_f16mf4_rm_tumu(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16mf4_rm_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf2_t test_vfabd_vf_f16mf2_rm(vfloat16mf2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16mf2_rm(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf2_t test_vfabd_vf_f16mf2_rm_tu(vfloat16mf2_t vd, vfloat16mf2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16mf2_rm_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf2_t test_vfabd_vf_f16mf2_rm_m(vbool32_t mask, vfloat16mf2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16mf2_rm_m(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf2_t test_vfabd_vf_f16mf2_rm_mu(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16mf2_rm_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf2_t test_vfabd_vf_f16mf2_rm_tum(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16mf2_rm_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf2_t test_vfabd_vf_f16mf2_rm_tumu(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16mf2_rm_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m1_t test_vfabd_vf_f16m1_rm(vfloat16m1_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m1_rm(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m1_t test_vfabd_vf_f16m1_rm_tu(vfloat16m1_t vd, vfloat16m1_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m1_rm_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m1_t test_vfabd_vf_f16m1_rm_m(vbool16_t mask, vfloat16m1_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m1_rm_m(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m1_t test_vfabd_vf_f16m1_rm_mu(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m1_rm_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m1_t test_vfabd_vf_f16m1_rm_tum(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m1_rm_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m1_t test_vfabd_vf_f16m1_rm_tumu(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m1_rm_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m2_t test_vfabd_vf_f16m2_rm(vfloat16m2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m2_rm(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m2_t test_vfabd_vf_f16m2_rm_tu(vfloat16m2_t vd, vfloat16m2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m2_rm_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m2_t test_vfabd_vf_f16m2_rm_m(vbool8_t mask, vfloat16m2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m2_rm_m(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m2_t test_vfabd_vf_f16m2_rm_mu(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m2_rm_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m2_t test_vfabd_vf_f16m2_rm_tum(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m2_rm_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m2_t test_vfabd_vf_f16m2_rm_tumu(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m2_rm_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m4_t test_vfabd_vf_f16m4_rm(vfloat16m4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m4_rm(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m4_t test_vfabd_vf_f16m4_rm_tu(vfloat16m4_t vd, vfloat16m4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m4_rm_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m4_t test_vfabd_vf_f16m4_rm_m(vbool4_t mask, vfloat16m4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m4_rm_m(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m4_t test_vfabd_vf_f16m4_rm_mu(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m4_rm_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m4_t test_vfabd_vf_f16m4_rm_tum(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m4_rm_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m4_t test_vfabd_vf_f16m4_rm_tumu(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m4_rm_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m8_t test_vfabd_vf_f16m8_rm(vfloat16m8_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m8_rm(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m8_t test_vfabd_vf_f16m8_rm_tu(vfloat16m8_t vd, vfloat16m8_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m8_rm_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m8_t test_vfabd_vf_f16m8_rm_m(vbool2_t mask, vfloat16m8_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m8_rm_m(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m8_t test_vfabd_vf_f16m8_rm_mu(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m8_rm_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m8_t test_vfabd_vf_f16m8_rm_tum(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m8_rm_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m8_t test_vfabd_vf_f16m8_rm_tumu(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f16m8_rm_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}

vfloat32mf2_t test_vfabd_vf_f32mf2_rm(vfloat32mf2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32mf2_rm(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test_vfabd_vf_f32mf2_rm_tu(vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32mf2_rm_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test_vfabd_vf_f32mf2_rm_m(vbool64_t mask, vfloat32mf2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32mf2_rm_m(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test_vfabd_vf_f32mf2_rm_mu(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32mf2_rm_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test_vfabd_vf_f32mf2_rm_tum(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32mf2_rm_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test_vfabd_vf_f32mf2_rm_tumu(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32mf2_rm_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test_vfabd_vf_f32m1_rm(vfloat32m1_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m1_rm(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test_vfabd_vf_f32m1_rm_tu(vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m1_rm_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test_vfabd_vf_f32m1_rm_m(vbool32_t mask, vfloat32m1_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m1_rm_m(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test_vfabd_vf_f32m1_rm_mu(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m1_rm_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test_vfabd_vf_f32m1_rm_tum(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m1_rm_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test_vfabd_vf_f32m1_rm_tumu(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m1_rm_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test_vfabd_vf_f32m2_rm(vfloat32m2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m2_rm(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test_vfabd_vf_f32m2_rm_tu(vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m2_rm_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test_vfabd_vf_f32m2_rm_m(vbool16_t mask, vfloat32m2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m2_rm_m(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test_vfabd_vf_f32m2_rm_mu(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m2_rm_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test_vfabd_vf_f32m2_rm_tum(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m2_rm_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test_vfabd_vf_f32m2_rm_tumu(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m2_rm_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test_vfabd_vf_f32m4_rm(vfloat32m4_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m4_rm(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test_vfabd_vf_f32m4_rm_tu(vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m4_rm_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test_vfabd_vf_f32m4_rm_m(vbool8_t mask, vfloat32m4_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m4_rm_m(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test_vfabd_vf_f32m4_rm_mu(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m4_rm_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test_vfabd_vf_f32m4_rm_tum(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m4_rm_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test_vfabd_vf_f32m4_rm_tumu(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m4_rm_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test_vfabd_vf_f32m8_rm(vfloat32m8_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m8_rm(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test_vfabd_vf_f32m8_rm_tu(vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m8_rm_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test_vfabd_vf_f32m8_rm_m(vbool4_t mask, vfloat32m8_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m8_rm_m(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test_vfabd_vf_f32m8_rm_mu(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m8_rm_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test_vfabd_vf_f32m8_rm_tum(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m8_rm_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test_vfabd_vf_f32m8_rm_tumu(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f32m8_rm_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}

vfloat64m1_t test_vfabd_vf_f64m1_rm(vfloat64m1_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m1_rm(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m1_t test_vfabd_vf_f64m1_rm_tu(vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m1_rm_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m1_t test_vfabd_vf_f64m1_rm_m(vbool64_t mask, vfloat64m1_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m1_rm_m(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m1_t test_vfabd_vf_f64m1_rm_mu(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m1_rm_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m1_t test_vfabd_vf_f64m1_rm_tum(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m1_rm_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m1_t test_vfabd_vf_f64m1_rm_tumu(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m1_rm_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m2_t test_vfabd_vf_f64m2_rm(vfloat64m2_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m2_rm(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m2_t test_vfabd_vf_f64m2_rm_tu(vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m2_rm_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m2_t test_vfabd_vf_f64m2_rm_m(vbool32_t mask, vfloat64m2_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m2_rm_m(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m2_t test_vfabd_vf_f64m2_rm_mu(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m2_rm_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m2_t test_vfabd_vf_f64m2_rm_tum(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m2_rm_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m2_t test_vfabd_vf_f64m2_rm_tumu(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m2_rm_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m4_t test_vfabd_vf_f64m4_rm(vfloat64m4_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m4_rm(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m4_t test_vfabd_vf_f64m4_rm_tu(vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m4_rm_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m4_t test_vfabd_vf_f64m4_rm_m(vbool16_t mask, vfloat64m4_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m4_rm_m(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m4_t test_vfabd_vf_f64m4_rm_mu(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m4_rm_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m4_t test_vfabd_vf_f64m4_rm_tum(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m4_rm_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m4_t test_vfabd_vf_f64m4_rm_tumu(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m4_rm_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m8_t test_vfabd_vf_f64m8_rm(vfloat64m8_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m8_rm(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m8_t test_vfabd_vf_f64m8_rm_tu(vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m8_rm_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m8_t test_vfabd_vf_f64m8_rm_m(vbool8_t mask, vfloat64m8_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m8_rm_m(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m8_t test_vfabd_vf_f64m8_rm_mu(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m8_rm_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m8_t test_vfabd_vf_f64m8_rm_tum(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m8_rm_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m8_t test_vfabd_vf_f64m8_rm_tumu(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_vf_f64m8_rm_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}

/* { dg-final { scan-assembler-times "th\\.vfabd\\.vf\t" 180 } } */