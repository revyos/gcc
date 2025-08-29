/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvcoder0p1 -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvcoder0p1 -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

vuint16mf4_t test0_vwaba(vuint16mf4_t vd, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl){return __riscv_th_vwaba(vd, vs2, vs1, vl);}
vuint16mf4_t test1_vwaba_tu(vuint16mf4_t vd, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl){return __riscv_th_vwaba_tu(vd, vs2, vs1, vl);}
vuint16mf4_t test2_vwaba(vbool64_t mask, vuint16mf4_t vd, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl){return __riscv_th_vwaba(mask, vd, vs2, vs1, vl);}
vuint16mf4_t test3_vwaba_mu(vbool64_t mask, vuint16mf4_t vd, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl){return __riscv_th_vwaba_mu(mask, vd, vs2, vs1, vl);}
vuint16mf4_t test4_vwaba_tum(vbool64_t mask, vuint16mf4_t vd, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl){return __riscv_th_vwaba_tum(mask, vd, vs2, vs1, vl);}
vuint16mf4_t test5_vwaba_tumu(vbool64_t mask, vuint16mf4_t vd, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl){return __riscv_th_vwaba_tumu(mask, vd, vs2, vs1, vl);}
vuint16mf2_t test6_vwaba(vuint16mf2_t vd, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl){return __riscv_th_vwaba(vd, vs2, vs1, vl);}
vuint16mf2_t test7_vwaba_tu(vuint16mf2_t vd, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl){return __riscv_th_vwaba_tu(vd, vs2, vs1, vl);}
vuint16mf2_t test8_vwaba(vbool32_t mask, vuint16mf2_t vd, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl){return __riscv_th_vwaba(mask, vd, vs2, vs1, vl);}
vuint16mf2_t test9_vwaba_mu(vbool32_t mask, vuint16mf2_t vd, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl){return __riscv_th_vwaba_mu(mask, vd, vs2, vs1, vl);}
vuint16mf2_t test10_vwaba_tum(vbool32_t mask, vuint16mf2_t vd, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl){return __riscv_th_vwaba_tum(mask, vd, vs2, vs1, vl);}
vuint16mf2_t test11_vwaba_tumu(vbool32_t mask, vuint16mf2_t vd, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl){return __riscv_th_vwaba_tumu(mask, vd, vs2, vs1, vl);}
vuint16m1_t test12_vwaba(vuint16m1_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl){return __riscv_th_vwaba(vd, vs2, vs1, vl);}
vuint16m1_t test13_vwaba_tu(vuint16m1_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl){return __riscv_th_vwaba_tu(vd, vs2, vs1, vl);}
vuint16m1_t test14_vwaba(vbool16_t mask, vuint16m1_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl){return __riscv_th_vwaba(mask, vd, vs2, vs1, vl);}
vuint16m1_t test15_vwaba_mu(vbool16_t mask, vuint16m1_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl){return __riscv_th_vwaba_mu(mask, vd, vs2, vs1, vl);}
vuint16m1_t test16_vwaba_tum(vbool16_t mask, vuint16m1_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl){return __riscv_th_vwaba_tum(mask, vd, vs2, vs1, vl);}
vuint16m1_t test17_vwaba_tumu(vbool16_t mask, vuint16m1_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl){return __riscv_th_vwaba_tumu(mask, vd, vs2, vs1, vl);}
vuint16m2_t test18_vwaba(vuint16m2_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl){return __riscv_th_vwaba(vd, vs2, vs1, vl);}
vuint16m2_t test19_vwaba_tu(vuint16m2_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl){return __riscv_th_vwaba_tu(vd, vs2, vs1, vl);}
vuint16m2_t test20_vwaba(vbool8_t mask, vuint16m2_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl){return __riscv_th_vwaba(mask, vd, vs2, vs1, vl);}
vuint16m2_t test21_vwaba_mu(vbool8_t mask, vuint16m2_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl){return __riscv_th_vwaba_mu(mask, vd, vs2, vs1, vl);}
vuint16m2_t test22_vwaba_tum(vbool8_t mask, vuint16m2_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl){return __riscv_th_vwaba_tum(mask, vd, vs2, vs1, vl);}
vuint16m2_t test23_vwaba_tumu(vbool8_t mask, vuint16m2_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl){return __riscv_th_vwaba_tumu(mask, vd, vs2, vs1, vl);}
vuint16m4_t test24_vwaba(vuint16m4_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl){return __riscv_th_vwaba(vd, vs2, vs1, vl);}
vuint16m4_t test25_vwaba_tu(vuint16m4_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl){return __riscv_th_vwaba_tu(vd, vs2, vs1, vl);}
vuint16m4_t test26_vwaba(vbool4_t mask, vuint16m4_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl){return __riscv_th_vwaba(mask, vd, vs2, vs1, vl);}
vuint16m4_t test27_vwaba_mu(vbool4_t mask, vuint16m4_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl){return __riscv_th_vwaba_mu(mask, vd, vs2, vs1, vl);}
vuint16m4_t test28_vwaba_tum(vbool4_t mask, vuint16m4_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl){return __riscv_th_vwaba_tum(mask, vd, vs2, vs1, vl);}
vuint16m4_t test29_vwaba_tumu(vbool4_t mask, vuint16m4_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl){return __riscv_th_vwaba_tumu(mask, vd, vs2, vs1, vl);}
vuint16m8_t test30_vwaba(vuint16m8_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl){return __riscv_th_vwaba(vd, vs2, vs1, vl);}
vuint16m8_t test31_vwaba_tu(vuint16m8_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl){return __riscv_th_vwaba_tu(vd, vs2, vs1, vl);}
vuint16m8_t test32_vwaba(vbool2_t mask, vuint16m8_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl){return __riscv_th_vwaba(mask, vd, vs2, vs1, vl);}
vuint16m8_t test33_vwaba_mu(vbool2_t mask, vuint16m8_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl){return __riscv_th_vwaba_mu(mask, vd, vs2, vs1, vl);}
vuint16m8_t test34_vwaba_tum(vbool2_t mask, vuint16m8_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl){return __riscv_th_vwaba_tum(mask, vd, vs2, vs1, vl);}
vuint16m8_t test35_vwaba_tumu(vbool2_t mask, vuint16m8_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl){return __riscv_th_vwaba_tumu(mask, vd, vs2, vs1, vl);}

vuint32mf2_t test37_vwaba(vuint32mf2_t vd, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl){return __riscv_th_vwaba(vd, vs2, vs1, vl);}
vuint32mf2_t test38_vwaba_tu(vuint32mf2_t vd, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl){return __riscv_th_vwaba_tu(vd, vs2, vs1, vl);}
vuint32mf2_t test39_vwaba(vbool64_t mask, vuint32mf2_t vd, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl){return __riscv_th_vwaba(mask, vd, vs2, vs1, vl);}
vuint32mf2_t test40_vwaba_mu(vbool64_t mask, vuint32mf2_t vd, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl){return __riscv_th_vwaba_mu(mask, vd, vs2, vs1, vl);}
vuint32mf2_t test41_vwaba_tum(vbool64_t mask, vuint32mf2_t vd, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl){return __riscv_th_vwaba_tum(mask, vd, vs2, vs1, vl);}
vuint32mf2_t test42_vwaba_tumu(vbool64_t mask, vuint32mf2_t vd, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl){return __riscv_th_vwaba_tumu(mask, vd, vs2, vs1, vl);}
vuint32m1_t test43_vwaba(vuint32m1_t vd, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl){return __riscv_th_vwaba(vd, vs2, vs1, vl);}
vuint32m1_t test44_vwaba_tu(vuint32m1_t vd, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl){return __riscv_th_vwaba_tu(vd, vs2, vs1, vl);}
vuint32m1_t test45_vwaba(vbool32_t mask, vuint32m1_t vd, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl){return __riscv_th_vwaba(mask, vd, vs2, vs1, vl);}
vuint32m1_t test46_vwaba_mu(vbool32_t mask, vuint32m1_t vd, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl){return __riscv_th_vwaba_mu(mask, vd, vs2, vs1, vl);}
vuint32m1_t test47_vwaba_tum(vbool32_t mask, vuint32m1_t vd, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl){return __riscv_th_vwaba_tum(mask, vd, vs2, vs1, vl);}
vuint32m1_t test48_vwaba_tumu(vbool32_t mask, vuint32m1_t vd, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl){return __riscv_th_vwaba_tumu(mask, vd, vs2, vs1, vl);}
vuint32m2_t test49_vwaba(vuint32m2_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl){return __riscv_th_vwaba(vd, vs2, vs1, vl);}
vuint32m2_t test50_vwaba_tu(vuint32m2_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl){return __riscv_th_vwaba_tu(vd, vs2, vs1, vl);}
vuint32m2_t test51_vwaba(vbool16_t mask, vuint32m2_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl){return __riscv_th_vwaba(mask, vd, vs2, vs1, vl);}
vuint32m2_t test52_vwaba_mu(vbool16_t mask, vuint32m2_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl){return __riscv_th_vwaba_mu(mask, vd, vs2, vs1, vl);}
vuint32m2_t test53_vwaba_tum(vbool16_t mask, vuint32m2_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl){return __riscv_th_vwaba_tum(mask, vd, vs2, vs1, vl);}
vuint32m2_t test54_vwaba_tumu(vbool16_t mask, vuint32m2_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl){return __riscv_th_vwaba_tumu(mask, vd, vs2, vs1, vl);}
vuint32m4_t test55_vwaba(vuint32m4_t vd, vint16m2_t vs2, vint16m2_t vs1, size_t vl){return __riscv_th_vwaba(vd, vs2, vs1, vl);}
vuint32m4_t test56_vwaba_tu(vuint32m4_t vd, vint16m2_t vs2, vint16m2_t vs1, size_t vl){return __riscv_th_vwaba_tu(vd, vs2, vs1, vl);}
vuint32m4_t test57_vwaba(vbool8_t mask, vuint32m4_t vd, vint16m2_t vs2, vint16m2_t vs1, size_t vl){return __riscv_th_vwaba(mask, vd, vs2, vs1, vl);}
vuint32m4_t test58_vwaba_mu(vbool8_t mask, vuint32m4_t vd, vint16m2_t vs2, vint16m2_t vs1, size_t vl){return __riscv_th_vwaba_mu(mask, vd, vs2, vs1, vl);}
vuint32m4_t test59_vwaba_tum(vbool8_t mask, vuint32m4_t vd, vint16m2_t vs2, vint16m2_t vs1, size_t vl){return __riscv_th_vwaba_tum(mask, vd, vs2, vs1, vl);}
vuint32m4_t test60_vwaba_tumu(vbool8_t mask, vuint32m4_t vd, vint16m2_t vs2, vint16m2_t vs1, size_t vl){return __riscv_th_vwaba_tumu(mask, vd, vs2, vs1, vl);}
vuint32m8_t test61_vwaba(vuint32m8_t vd, vint16m4_t vs2, vint16m4_t vs1, size_t vl){return __riscv_th_vwaba(vd, vs2, vs1, vl);}
vuint32m8_t test62_vwaba_tu(vuint32m8_t vd, vint16m4_t vs2, vint16m4_t vs1, size_t vl){return __riscv_th_vwaba_tu(vd, vs2, vs1, vl);}
vuint32m8_t test63_vwaba(vbool4_t mask, vuint32m8_t vd, vint16m4_t vs2, vint16m4_t vs1, size_t vl){return __riscv_th_vwaba(mask, vd, vs2, vs1, vl);}
vuint32m8_t test64_vwaba_mu(vbool4_t mask, vuint32m8_t vd, vint16m4_t vs2, vint16m4_t vs1, size_t vl){return __riscv_th_vwaba_mu(mask, vd, vs2, vs1, vl);}
vuint32m8_t test65_vwaba_tum(vbool4_t mask, vuint32m8_t vd, vint16m4_t vs2, vint16m4_t vs1, size_t vl){return __riscv_th_vwaba_tum(mask, vd, vs2, vs1, vl);}
vuint32m8_t test66_vwaba_tumu(vbool4_t mask, vuint32m8_t vd, vint16m4_t vs2, vint16m4_t vs1, size_t vl){return __riscv_th_vwaba_tumu(mask, vd, vs2, vs1, vl);}

vuint64m1_t test68_vwaba(vuint64m1_t vd, vint32mf2_t vs2, vint32mf2_t vs1, size_t vl){return __riscv_th_vwaba(vd, vs2, vs1, vl);}
vuint64m1_t test69_vwaba_tu(vuint64m1_t vd, vint32mf2_t vs2, vint32mf2_t vs1, size_t vl){return __riscv_th_vwaba_tu(vd, vs2, vs1, vl);}
vuint64m1_t test70_vwaba(vbool64_t mask, vuint64m1_t vd, vint32mf2_t vs2, vint32mf2_t vs1, size_t vl){return __riscv_th_vwaba(mask, vd, vs2, vs1, vl);}
vuint64m1_t test71_vwaba_mu(vbool64_t mask, vuint64m1_t vd, vint32mf2_t vs2, vint32mf2_t vs1, size_t vl){return __riscv_th_vwaba_mu(mask, vd, vs2, vs1, vl);}
vuint64m1_t test72_vwaba_tum(vbool64_t mask, vuint64m1_t vd, vint32mf2_t vs2, vint32mf2_t vs1, size_t vl){return __riscv_th_vwaba_tum(mask, vd, vs2, vs1, vl);}
vuint64m1_t test73_vwaba_tumu(vbool64_t mask, vuint64m1_t vd, vint32mf2_t vs2, vint32mf2_t vs1, size_t vl){return __riscv_th_vwaba_tumu(mask, vd, vs2, vs1, vl);}
vuint64m2_t test74_vwaba(vuint64m2_t vd, vint32m1_t vs2, vint32m1_t vs1, size_t vl){return __riscv_th_vwaba(vd, vs2, vs1, vl);}
vuint64m2_t test75_vwaba_tu(vuint64m2_t vd, vint32m1_t vs2, vint32m1_t vs1, size_t vl){return __riscv_th_vwaba_tu(vd, vs2, vs1, vl);}
vuint64m2_t test76_vwaba(vbool32_t mask, vuint64m2_t vd, vint32m1_t vs2, vint32m1_t vs1, size_t vl){return __riscv_th_vwaba(mask, vd, vs2, vs1, vl);}
vuint64m2_t test77_vwaba_mu(vbool32_t mask, vuint64m2_t vd, vint32m1_t vs2, vint32m1_t vs1, size_t vl){return __riscv_th_vwaba_mu(mask, vd, vs2, vs1, vl);}
vuint64m2_t test78_vwaba_tum(vbool32_t mask, vuint64m2_t vd, vint32m1_t vs2, vint32m1_t vs1, size_t vl){return __riscv_th_vwaba_tum(mask, vd, vs2, vs1, vl);}
vuint64m2_t test79_vwaba_tumu(vbool32_t mask, vuint64m2_t vd, vint32m1_t vs2, vint32m1_t vs1, size_t vl){return __riscv_th_vwaba_tumu(mask, vd, vs2, vs1, vl);}
vuint64m4_t test80_vwaba(vuint64m4_t vd, vint32m2_t vs2, vint32m2_t vs1, size_t vl){return __riscv_th_vwaba(vd, vs2, vs1, vl);}
vuint64m4_t test81_vwaba_tu(vuint64m4_t vd, vint32m2_t vs2, vint32m2_t vs1, size_t vl){return __riscv_th_vwaba_tu(vd, vs2, vs1, vl);}
vuint64m4_t test82_vwaba(vbool16_t mask, vuint64m4_t vd, vint32m2_t vs2, vint32m2_t vs1, size_t vl){return __riscv_th_vwaba(mask, vd, vs2, vs1, vl);}
vuint64m4_t test83_vwaba_mu(vbool16_t mask, vuint64m4_t vd, vint32m2_t vs2, vint32m2_t vs1, size_t vl){return __riscv_th_vwaba_mu(mask, vd, vs2, vs1, vl);}
vuint64m4_t test84_vwaba_tum(vbool16_t mask, vuint64m4_t vd, vint32m2_t vs2, vint32m2_t vs1, size_t vl){return __riscv_th_vwaba_tum(mask, vd, vs2, vs1, vl);}
vuint64m4_t test85_vwaba_tumu(vbool16_t mask, vuint64m4_t vd, vint32m2_t vs2, vint32m2_t vs1, size_t vl){return __riscv_th_vwaba_tumu(mask, vd, vs2, vs1, vl);}
vuint64m8_t test86_vwaba(vuint64m8_t vd, vint32m4_t vs2, vint32m4_t vs1, size_t vl){return __riscv_th_vwaba(vd, vs2, vs1, vl);}
vuint64m8_t test87_vwaba_tu(vuint64m8_t vd, vint32m4_t vs2, vint32m4_t vs1, size_t vl){return __riscv_th_vwaba_tu(vd, vs2, vs1, vl);}
vuint64m8_t test88_vwaba(vbool8_t mask, vuint64m8_t vd, vint32m4_t vs2, vint32m4_t vs1, size_t vl){return __riscv_th_vwaba(mask, vd, vs2, vs1, vl);}
vuint64m8_t test89_vwaba_mu(vbool8_t mask, vuint64m8_t vd, vint32m4_t vs2, vint32m4_t vs1, size_t vl){return __riscv_th_vwaba_mu(mask, vd, vs2, vs1, vl);}
vuint64m8_t test90_vwaba_tum(vbool8_t mask, vuint64m8_t vd, vint32m4_t vs2, vint32m4_t vs1, size_t vl){return __riscv_th_vwaba_tum(mask, vd, vs2, vs1, vl);}
vuint64m8_t test91_vwaba_tumu(vbool8_t mask, vuint64m8_t vd, vint32m4_t vs2, vint32m4_t vs1, size_t vl){return __riscv_th_vwaba_tumu(mask, vd, vs2, vs1, vl);}

/* { dg-final { scan-assembler-times "th\\.vwaba\\.vv\t" 90 } } */