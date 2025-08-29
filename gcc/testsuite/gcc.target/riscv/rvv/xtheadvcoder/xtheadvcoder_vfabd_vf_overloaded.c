/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_zfh_zvfh_xtheadvcoder0p1 -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_zfh_zvfh_xtheadvcoder0p1 -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>
typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

// without frm

vfloat16mf4_t test0_vfabd(vfloat16mf4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd(vs2, rs1, vl);}
vfloat16mf4_t test1_vfabd_tu(vfloat16mf4_t vd, vfloat16mf4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, vl);}
vfloat16mf4_t test2_vfabd(vbool64_t mask, vfloat16mf4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, vl);}
vfloat16mf4_t test3_vfabd_mu(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, vl);}
vfloat16mf4_t test4_vfabd_tum(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, vl);}
vfloat16mf4_t test5_vfabd_tumu(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, vl);}
vfloat16mf2_t test6_vfabd(vfloat16mf2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd(vs2, rs1, vl);}
vfloat16mf2_t test7_vfabd_tu(vfloat16mf2_t vd, vfloat16mf2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, vl);}
vfloat16mf2_t test8_vfabd(vbool32_t mask, vfloat16mf2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, vl);}
vfloat16mf2_t test9_vfabd_mu(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, vl);}
vfloat16mf2_t test10_vfabd_tum(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, vl);}
vfloat16mf2_t test11_vfabd_tumu(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, vl);}
vfloat16m1_t test12_vfabd(vfloat16m1_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd(vs2, rs1, vl);}
vfloat16m1_t test13_vfabd_tu(vfloat16m1_t vd, vfloat16m1_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, vl);}
vfloat16m1_t test14_vfabd(vbool16_t mask, vfloat16m1_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, vl);}
vfloat16m1_t test15_vfabd_mu(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, vl);}
vfloat16m1_t test16_vfabd_tum(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, vl);}
vfloat16m1_t test17_vfabd_tumu(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, vl);}
vfloat16m2_t test18_vfabd(vfloat16m2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd(vs2, rs1, vl);}
vfloat16m2_t test19_vfabd_tu(vfloat16m2_t vd, vfloat16m2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, vl);}
vfloat16m2_t test20_vfabd(vbool8_t mask, vfloat16m2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, vl);}
vfloat16m2_t test21_vfabd_mu(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, vl);}
vfloat16m2_t test22_vfabd_tum(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, vl);}
vfloat16m2_t test23_vfabd_tumu(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, vl);}
vfloat16m4_t test24_vfabd(vfloat16m4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd(vs2, rs1, vl);}
vfloat16m4_t test25_vfabd_tu(vfloat16m4_t vd, vfloat16m4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, vl);}
vfloat16m4_t test26_vfabd(vbool4_t mask, vfloat16m4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, vl);}
vfloat16m4_t test27_vfabd_mu(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, vl);}
vfloat16m4_t test28_vfabd_tum(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, vl);}
vfloat16m4_t test29_vfabd_tumu(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, vl);}
vfloat16m8_t test30_vfabd(vfloat16m8_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd(vs2, rs1, vl);}
vfloat16m8_t test31_vfabd_tu(vfloat16m8_t vd, vfloat16m8_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, vl);}
vfloat16m8_t test32_vfabd(vbool2_t mask, vfloat16m8_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, vl);}
vfloat16m8_t test33_vfabd_mu(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, vl);}
vfloat16m8_t test34_vfabd_tum(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, vl);}
vfloat16m8_t test35_vfabd_tumu(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs2, float16_t rs1, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, vl);}

vfloat32mf2_t test37_vfabd(vfloat32mf2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd(vs2, rs1, vl);}
vfloat32mf2_t test38_vfabd_tu(vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, vl);}
vfloat32mf2_t test39_vfabd(vbool64_t mask, vfloat32mf2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, vl);}
vfloat32mf2_t test40_vfabd_mu(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, vl);}
vfloat32mf2_t test41_vfabd_tum(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, vl);}
vfloat32mf2_t test42_vfabd_tumu(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, vl);}
vfloat32m1_t test43_vfabd(vfloat32m1_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd(vs2, rs1, vl);}
vfloat32m1_t test44_vfabd_tu(vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, vl);}
vfloat32m1_t test45_vfabd(vbool32_t mask, vfloat32m1_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, vl);}
vfloat32m1_t test46_vfabd_mu(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, vl);}
vfloat32m1_t test47_vfabd_tum(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, vl);}
vfloat32m1_t test48_vfabd_tumu(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, vl);}
vfloat32m2_t test49_vfabd(vfloat32m2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd(vs2, rs1, vl);}
vfloat32m2_t test50_vfabd_tu(vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, vl);}
vfloat32m2_t test51_vfabd(vbool16_t mask, vfloat32m2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, vl);}
vfloat32m2_t test52_vfabd_mu(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, vl);}
vfloat32m2_t test53_vfabd_tum(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, vl);}
vfloat32m2_t test54_vfabd_tumu(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, vl);}
vfloat32m4_t test55_vfabd(vfloat32m4_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd(vs2, rs1, vl);}
vfloat32m4_t test56_vfabd_tu(vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, vl);}
vfloat32m4_t test57_vfabd(vbool8_t mask, vfloat32m4_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, vl);}
vfloat32m4_t test58_vfabd_mu(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, vl);}
vfloat32m4_t test59_vfabd_tum(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, vl);}
vfloat32m4_t test60_vfabd_tumu(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, vl);}
vfloat32m8_t test61_vfabd(vfloat32m8_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd(vs2, rs1, vl);}
vfloat32m8_t test62_vfabd_tu(vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, vl);}
vfloat32m8_t test63_vfabd(vbool4_t mask, vfloat32m8_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, vl);}
vfloat32m8_t test64_vfabd_mu(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, vl);}
vfloat32m8_t test65_vfabd_tum(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, vl);}
vfloat32m8_t test66_vfabd_tumu(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, vl);}

vfloat64m1_t test68_vfabd(vfloat64m1_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd(vs2, rs1, vl);}
vfloat64m1_t test69_vfabd_tu(vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, vl);}
vfloat64m1_t test70_vfabd(vbool64_t mask, vfloat64m1_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, vl);}
vfloat64m1_t test71_vfabd_mu(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, vl);}
vfloat64m1_t test72_vfabd_tum(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, vl);}
vfloat64m1_t test73_vfabd_tumu(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, vl);}
vfloat64m2_t test74_vfabd(vfloat64m2_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd(vs2, rs1, vl);}
vfloat64m2_t test75_vfabd_tu(vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, vl);}
vfloat64m2_t test76_vfabd(vbool32_t mask, vfloat64m2_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, vl);}
vfloat64m2_t test77_vfabd_mu(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, vl);}
vfloat64m2_t test78_vfabd_tum(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, vl);}
vfloat64m2_t test79_vfabd_tumu(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, vl);}
vfloat64m4_t test80_vfabd(vfloat64m4_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd(vs2, rs1, vl);}
vfloat64m4_t test81_vfabd_tu(vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, vl);}
vfloat64m4_t test82_vfabd(vbool16_t mask, vfloat64m4_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, vl);}
vfloat64m4_t test83_vfabd_mu(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, vl);}
vfloat64m4_t test84_vfabd_tum(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, vl);}
vfloat64m4_t test85_vfabd_tumu(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, vl);}
vfloat64m8_t test86_vfabd(vfloat64m8_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd(vs2, rs1, vl);}
vfloat64m8_t test87_vfabd_tu(vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, vl);}
vfloat64m8_t test88_vfabd(vbool8_t mask, vfloat64m8_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, vl);}
vfloat64m8_t test89_vfabd_mu(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, vl);}
vfloat64m8_t test90_vfabd_tum(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, vl);}
vfloat64m8_t test91_vfabd_tumu(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, vl);}

// with frm

vfloat16mf4_t test95_vfabd(vfloat16mf4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf4_t test96_vfabd_tu(vfloat16mf4_t vd, vfloat16mf4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf4_t test97_vfabd(vbool64_t mask, vfloat16mf4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf4_t test98_vfabd_mu(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf4_t test99_vfabd_tum(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf4_t test100_vfabd_tumu(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf2_t test101_vfabd(vfloat16mf2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf2_t test102_vfabd_tu(vfloat16mf2_t vd, vfloat16mf2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf2_t test103_vfabd(vbool32_t mask, vfloat16mf2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf2_t test104_vfabd_mu(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf2_t test105_vfabd_tum(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16mf2_t test106_vfabd_tumu(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m1_t test107_vfabd(vfloat16m1_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m1_t test108_vfabd_tu(vfloat16m1_t vd, vfloat16m1_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m1_t test109_vfabd(vbool16_t mask, vfloat16m1_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m1_t test110_vfabd_mu(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m1_t test111_vfabd_tum(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m1_t test112_vfabd_tumu(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m2_t test113_vfabd(vfloat16m2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m2_t test114_vfabd_tu(vfloat16m2_t vd, vfloat16m2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m2_t test115_vfabd(vbool8_t mask, vfloat16m2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m2_t test116_vfabd_mu(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m2_t test117_vfabd_tum(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m2_t test118_vfabd_tumu(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m4_t test119_vfabd(vfloat16m4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m4_t test120_vfabd_tu(vfloat16m4_t vd, vfloat16m4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m4_t test121_vfabd(vbool4_t mask, vfloat16m4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m4_t test122_vfabd_mu(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m4_t test123_vfabd_tum(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m4_t test124_vfabd_tumu(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m8_t test125_vfabd(vfloat16m8_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m8_t test126_vfabd_tu(vfloat16m8_t vd, vfloat16m8_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m8_t test127_vfabd(vbool2_t mask, vfloat16m8_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m8_t test128_vfabd_mu(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m8_t test129_vfabd_tum(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat16m8_t test130_vfabd_tumu(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs2, float16_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}

vfloat32mf2_t test132_vfabd(vfloat32mf2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test133_vfabd_tu(vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test134_vfabd(vbool64_t mask, vfloat32mf2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test135_vfabd_mu(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test136_vfabd_tum(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test137_vfabd_tumu(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test138_vfabd(vfloat32m1_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test139_vfabd_tu(vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test140_vfabd(vbool32_t mask, vfloat32m1_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test141_vfabd_mu(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test142_vfabd_tum(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test143_vfabd_tumu(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test144_vfabd(vfloat32m2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test145_vfabd_tu(vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test146_vfabd(vbool16_t mask, vfloat32m2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test147_vfabd_mu(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test148_vfabd_tum(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test149_vfabd_tumu(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test150_vfabd(vfloat32m4_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test151_vfabd_tu(vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test152_vfabd(vbool8_t mask, vfloat32m4_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test153_vfabd_mu(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test154_vfabd_tum(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test155_vfabd_tumu(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test156_vfabd(vfloat32m8_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test157_vfabd_tu(vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test158_vfabd(vbool4_t mask, vfloat32m8_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test159_vfabd_mu(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test160_vfabd_tum(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test161_vfabd_tumu(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs2, float32_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}

vfloat64m1_t test163_vfabd(vfloat64m1_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m1_t test164_vfabd_tu(vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m1_t test165_vfabd(vbool64_t mask, vfloat64m1_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m1_t test166_vfabd_mu(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m1_t test167_vfabd_tum(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m1_t test168_vfabd_tumu(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m2_t test169_vfabd(vfloat64m2_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m2_t test170_vfabd_tu(vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m2_t test171_vfabd(vbool32_t mask, vfloat64m2_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m2_t test172_vfabd_mu(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m2_t test173_vfabd_tum(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m2_t test174_vfabd_tumu(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m4_t test175_vfabd(vfloat64m4_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m4_t test176_vfabd_tu(vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m4_t test177_vfabd(vbool16_t mask, vfloat64m4_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m4_t test178_vfabd_mu(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m4_t test179_vfabd_tum(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m4_t test180_vfabd_tumu(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m8_t test181_vfabd(vfloat64m8_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m8_t test182_vfabd_tu(vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tu(vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m8_t test183_vfabd(vbool8_t mask, vfloat64m8_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd(mask, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m8_t test184_vfabd_mu(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_mu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m8_t test185_vfabd_tum(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tum(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}
vfloat64m8_t test186_vfabd_tumu(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs2, float64_t rs1, unsigned int frm, size_t vl){return __riscv_th_vfabd_tumu(mask, vd, vs2, rs1, __RISCV_FRM_RDN, vl);}

/* { dg-final { scan-assembler-times "th\\.vfabd\\.vf\t" 180 } } */