/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvcoder0p1 -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvcoder0p1 -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

vuint16mf4_t test0_vwabdu_vv_u16mf4(vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16mf4(vs2, vs1, vl);}
vuint16mf4_t test1_vwabdu_vv_u16mf4_tu(vuint16mf4_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16mf4_tu(vd, vs2, vs1, vl);}
vuint16mf4_t test2_vwabdu_vv_u16mf4_m(vbool64_t mask, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16mf4_m(mask, vs2, vs1, vl);}
vuint16mf4_t test3_vwabdu_vv_u16mf4_mu(vbool64_t mask, vuint16mf4_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16mf4_mu(mask, vd, vs2, vs1, vl);}
vuint16mf4_t test4_vwabdu_vv_u16mf4_tum(vbool64_t mask, vuint16mf4_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16mf4_tum(mask, vd, vs2, vs1, vl);}
vuint16mf4_t test5_vwabdu_vv_u16mf4_tumu(vbool64_t mask, vuint16mf4_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16mf4_tumu(mask, vd, vs2, vs1, vl);}
vuint16mf2_t test6_vwabdu_vv_u16mf2(vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16mf2(vs2, vs1, vl);}
vuint16mf2_t test7_vwabdu_vv_u16mf2_tu(vuint16mf2_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16mf2_tu(vd, vs2, vs1, vl);}
vuint16mf2_t test8_vwabdu_vv_u16mf2_m(vbool32_t mask, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16mf2_m(mask, vs2, vs1, vl);}
vuint16mf2_t test9_vwabdu_vv_u16mf2_mu(vbool32_t mask, vuint16mf2_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16mf2_mu(mask, vd, vs2, vs1, vl);}
vuint16mf2_t test10_vwabdu_vv_u16mf2_tum(vbool32_t mask, vuint16mf2_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16mf2_tum(mask, vd, vs2, vs1, vl);}
vuint16mf2_t test11_vwabdu_vv_u16mf2_tumu(vbool32_t mask, vuint16mf2_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16mf2_tumu(mask, vd, vs2, vs1, vl);}
vuint16m1_t test12_vwabdu_vv_u16m1(vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m1(vs2, vs1, vl);}
vuint16m1_t test13_vwabdu_vv_u16m1_tu(vuint16m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m1_tu(vd, vs2, vs1, vl);}
vuint16m1_t test14_vwabdu_vv_u16m1_m(vbool16_t mask, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m1_m(mask, vs2, vs1, vl);}
vuint16m1_t test15_vwabdu_vv_u16m1_mu(vbool16_t mask, vuint16m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m1_mu(mask, vd, vs2, vs1, vl);}
vuint16m1_t test16_vwabdu_vv_u16m1_tum(vbool16_t mask, vuint16m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m1_tum(mask, vd, vs2, vs1, vl);}
vuint16m1_t test17_vwabdu_vv_u16m1_tumu(vbool16_t mask, vuint16m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m1_tumu(mask, vd, vs2, vs1, vl);}
vuint16m2_t test18_vwabdu_vv_u16m2(vuint8m1_t vs2, vuint8m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m2(vs2, vs1, vl);}
vuint16m2_t test19_vwabdu_vv_u16m2_tu(vuint16m2_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m2_tu(vd, vs2, vs1, vl);}
vuint16m2_t test20_vwabdu_vv_u16m2_m(vbool8_t mask, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m2_m(mask, vs2, vs1, vl);}
vuint16m2_t test21_vwabdu_vv_u16m2_mu(vbool8_t mask, vuint16m2_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m2_mu(mask, vd, vs2, vs1, vl);}
vuint16m2_t test22_vwabdu_vv_u16m2_tum(vbool8_t mask, vuint16m2_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m2_tum(mask, vd, vs2, vs1, vl);}
vuint16m2_t test23_vwabdu_vv_u16m2_tumu(vbool8_t mask, vuint16m2_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m2_tumu(mask, vd, vs2, vs1, vl);}
vuint16m4_t test24_vwabdu_vv_u16m4(vuint8m2_t vs2, vuint8m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m4(vs2, vs1, vl);}
vuint16m4_t test25_vwabdu_vv_u16m4_tu(vuint16m4_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m4_tu(vd, vs2, vs1, vl);}
vuint16m4_t test26_vwabdu_vv_u16m4_m(vbool4_t mask, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m4_m(mask, vs2, vs1, vl);}
vuint16m4_t test27_vwabdu_vv_u16m4_mu(vbool4_t mask, vuint16m4_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m4_mu(mask, vd, vs2, vs1, vl);}
vuint16m4_t test28_vwabdu_vv_u16m4_tum(vbool4_t mask, vuint16m4_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m4_tum(mask, vd, vs2, vs1, vl);}
vuint16m4_t test29_vwabdu_vv_u16m4_tumu(vbool4_t mask, vuint16m4_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m4_tumu(mask, vd, vs2, vs1, vl);}
vuint16m8_t test30_vwabdu_vv_u16m8(vuint8m4_t vs2, vuint8m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m8(vs2, vs1, vl);}
vuint16m8_t test31_vwabdu_vv_u16m8_tu(vuint16m8_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m8_tu(vd, vs2, vs1, vl);}
vuint16m8_t test32_vwabdu_vv_u16m8_m(vbool2_t mask, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m8_m(mask, vs2, vs1, vl);}
vuint16m8_t test33_vwabdu_vv_u16m8_mu(vbool2_t mask, vuint16m8_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m8_mu(mask, vd, vs2, vs1, vl);}
vuint16m8_t test34_vwabdu_vv_u16m8_tum(vbool2_t mask, vuint16m8_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m8_tum(mask, vd, vs2, vs1, vl);}
vuint16m8_t test35_vwabdu_vv_u16m8_tumu(vbool2_t mask, vuint16m8_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u16m8_tumu(mask, vd, vs2, vs1, vl);}

vuint32mf2_t test37_vwabdu_vv_u32mf2(vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32mf2(vs2, vs1, vl);}
vuint32mf2_t test38_vwabdu_vv_u32mf2_tu(vuint32mf2_t vd, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32mf2_tu(vd, vs2, vs1, vl);}
vuint32mf2_t test39_vwabdu_vv_u32mf2_m(vbool64_t mask, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32mf2_m(mask, vs2, vs1, vl);}
vuint32mf2_t test40_vwabdu_vv_u32mf2_mu(vbool64_t mask, vuint32mf2_t vd, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32mf2_mu(mask, vd, vs2, vs1, vl);}
vuint32mf2_t test41_vwabdu_vv_u32mf2_tum(vbool64_t mask, vuint32mf2_t vd, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32mf2_tum(mask, vd, vs2, vs1, vl);}
vuint32mf2_t test42_vwabdu_vv_u32mf2_tumu(vbool64_t mask, vuint32mf2_t vd, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32mf2_tumu(mask, vd, vs2, vs1, vl);}
vuint32m1_t test43_vwabdu_vv_u32m1(vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m1(vs2, vs1, vl);}
vuint32m1_t test44_vwabdu_vv_u32m1_tu(vuint32m1_t vd, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m1_tu(vd, vs2, vs1, vl);}
vuint32m1_t test45_vwabdu_vv_u32m1_m(vbool32_t mask, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m1_m(mask, vs2, vs1, vl);}
vuint32m1_t test46_vwabdu_vv_u32m1_mu(vbool32_t mask, vuint32m1_t vd, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m1_mu(mask, vd, vs2, vs1, vl);}
vuint32m1_t test47_vwabdu_vv_u32m1_tum(vbool32_t mask, vuint32m1_t vd, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m1_tum(mask, vd, vs2, vs1, vl);}
vuint32m1_t test48_vwabdu_vv_u32m1_tumu(vbool32_t mask, vuint32m1_t vd, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m1_tumu(mask, vd, vs2, vs1, vl);}
vuint32m2_t test49_vwabdu_vv_u32m2(vuint16m1_t vs2, vuint16m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m2(vs2, vs1, vl);}
vuint32m2_t test50_vwabdu_vv_u32m2_tu(vuint32m2_t vd, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m2_tu(vd, vs2, vs1, vl);}
vuint32m2_t test51_vwabdu_vv_u32m2_m(vbool16_t mask, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m2_m(mask, vs2, vs1, vl);}
vuint32m2_t test52_vwabdu_vv_u32m2_mu(vbool16_t mask, vuint32m2_t vd, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m2_mu(mask, vd, vs2, vs1, vl);}
vuint32m2_t test53_vwabdu_vv_u32m2_tum(vbool16_t mask, vuint32m2_t vd, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m2_tum(mask, vd, vs2, vs1, vl);}
vuint32m2_t test54_vwabdu_vv_u32m2_tumu(vbool16_t mask, vuint32m2_t vd, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m2_tumu(mask, vd, vs2, vs1, vl);}
vuint32m4_t test55_vwabdu_vv_u32m4(vuint16m2_t vs2, vuint16m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m4(vs2, vs1, vl);}
vuint32m4_t test56_vwabdu_vv_u32m4_tu(vuint32m4_t vd, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m4_tu(vd, vs2, vs1, vl);}
vuint32m4_t test57_vwabdu_vv_u32m4_m(vbool8_t mask, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m4_m(mask, vs2, vs1, vl);}
vuint32m4_t test58_vwabdu_vv_u32m4_mu(vbool8_t mask, vuint32m4_t vd, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m4_mu(mask, vd, vs2, vs1, vl);}
vuint32m4_t test59_vwabdu_vv_u32m4_tum(vbool8_t mask, vuint32m4_t vd, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m4_tum(mask, vd, vs2, vs1, vl);}
vuint32m4_t test60_vwabdu_vv_u32m4_tumu(vbool8_t mask, vuint32m4_t vd, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m4_tumu(mask, vd, vs2, vs1, vl);}
vuint32m8_t test61_vwabdu_vv_u32m8(vuint16m4_t vs2, vuint16m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m8(vs2, vs1, vl);}
vuint32m8_t test62_vwabdu_vv_u32m8_tu(vuint32m8_t vd, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m8_tu(vd, vs2, vs1, vl);}
vuint32m8_t test63_vwabdu_vv_u32m8_m(vbool4_t mask, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m8_m(mask, vs2, vs1, vl);}
vuint32m8_t test64_vwabdu_vv_u32m8_mu(vbool4_t mask, vuint32m8_t vd, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m8_mu(mask, vd, vs2, vs1, vl);}
vuint32m8_t test65_vwabdu_vv_u32m8_tum(vbool4_t mask, vuint32m8_t vd, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m8_tum(mask, vd, vs2, vs1, vl);}
vuint32m8_t test66_vwabdu_vv_u32m8_tumu(vbool4_t mask, vuint32m8_t vd, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u32m8_tumu(mask, vd, vs2, vs1, vl);}

vuint64m1_t test68_vwabdu_vv_u64m1(vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m1(vs2, vs1, vl);}
vuint64m1_t test69_vwabdu_vv_u64m1_tu(vuint64m1_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m1_tu(vd, vs2, vs1, vl);}
vuint64m1_t test70_vwabdu_vv_u64m1_m(vbool64_t mask, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m1_m(mask, vs2, vs1, vl);}
vuint64m1_t test71_vwabdu_vv_u64m1_mu(vbool64_t mask, vuint64m1_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m1_mu(mask, vd, vs2, vs1, vl);}
vuint64m1_t test72_vwabdu_vv_u64m1_tum(vbool64_t mask, vuint64m1_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m1_tum(mask, vd, vs2, vs1, vl);}
vuint64m1_t test73_vwabdu_vv_u64m1_tumu(vbool64_t mask, vuint64m1_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m1_tumu(mask, vd, vs2, vs1, vl);}
vuint64m2_t test74_vwabdu_vv_u64m2(vuint32m1_t vs2, vuint32m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m2(vs2, vs1, vl);}
vuint64m2_t test75_vwabdu_vv_u64m2_tu(vuint64m2_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m2_tu(vd, vs2, vs1, vl);}
vuint64m2_t test76_vwabdu_vv_u64m2_m(vbool32_t mask, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m2_m(mask, vs2, vs1, vl);}
vuint64m2_t test77_vwabdu_vv_u64m2_mu(vbool32_t mask, vuint64m2_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m2_mu(mask, vd, vs2, vs1, vl);}
vuint64m2_t test78_vwabdu_vv_u64m2_tum(vbool32_t mask, vuint64m2_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m2_tum(mask, vd, vs2, vs1, vl);}
vuint64m2_t test79_vwabdu_vv_u64m2_tumu(vbool32_t mask, vuint64m2_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m2_tumu(mask, vd, vs2, vs1, vl);}
vuint64m4_t test80_vwabdu_vv_u64m4(vuint32m2_t vs2, vuint32m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m4(vs2, vs1, vl);}
vuint64m4_t test81_vwabdu_vv_u64m4_tu(vuint64m4_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m4_tu(vd, vs2, vs1, vl);}
vuint64m4_t test82_vwabdu_vv_u64m4_m(vbool16_t mask, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m4_m(mask, vs2, vs1, vl);}
vuint64m4_t test83_vwabdu_vv_u64m4_mu(vbool16_t mask, vuint64m4_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m4_mu(mask, vd, vs2, vs1, vl);}
vuint64m4_t test84_vwabdu_vv_u64m4_tum(vbool16_t mask, vuint64m4_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m4_tum(mask, vd, vs2, vs1, vl);}
vuint64m4_t test85_vwabdu_vv_u64m4_tumu(vbool16_t mask, vuint64m4_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m4_tumu(mask, vd, vs2, vs1, vl);}
vuint64m8_t test86_vwabdu_vv_u64m8(vuint32m4_t vs2, vuint32m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m8(vs2, vs1, vl);}
vuint64m8_t test87_vwabdu_vv_u64m8_tu(vuint64m8_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m8_tu(vd, vs2, vs1, vl);}
vuint64m8_t test88_vwabdu_vv_u64m8_m(vbool8_t mask, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m8_m(mask, vs2, vs1, vl);}
vuint64m8_t test89_vwabdu_vv_u64m8_mu(vbool8_t mask, vuint64m8_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m8_mu(mask, vd, vs2, vs1, vl);}
vuint64m8_t test90_vwabdu_vv_u64m8_tum(vbool8_t mask, vuint64m8_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m8_tum(mask, vd, vs2, vs1, vl);}
vuint64m8_t test91_vwabdu_vv_u64m8_tumu(vbool8_t mask, vuint64m8_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl){return __riscv_th_vwabdu_vv_u64m8_tumu(mask, vd, vs2, vs1, vl);}

/* { dg-final { scan-assembler-times "th\\.vwabdu\\.vv\t" 90 } } */