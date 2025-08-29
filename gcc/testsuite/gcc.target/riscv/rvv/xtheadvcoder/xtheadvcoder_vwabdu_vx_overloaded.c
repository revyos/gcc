/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvcoder0p1 -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvcoder0p1 -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

vuint16mf4_t test0_vwabdu(vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu(vs2, rs1, vl);}
vuint16mf4_t test1_vwabdu_tu(vuint16mf4_t vd, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tu(vd, vs2, rs1, vl);}
vuint16mf4_t test2_vwabdu(vbool64_t mask, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu(mask, vs2, rs1, vl);}
vuint16mf4_t test3_vwabdu_mu(vbool64_t mask, vuint16mf4_t vd, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_mu(mask, vd, vs2, rs1, vl);}
vuint16mf4_t test4_vwabdu_tum(vbool64_t mask, vuint16mf4_t vd, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tum(mask, vd, vs2, rs1, vl);}
vuint16mf4_t test5_vwabdu_tumu(vbool64_t mask, vuint16mf4_t vd, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tumu(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test6_vwabdu(vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu(vs2, rs1, vl);}
vuint16mf2_t test7_vwabdu_tu(vuint16mf2_t vd, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tu(vd, vs2, rs1, vl);}
vuint16mf2_t test8_vwabdu(vbool32_t mask, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu(mask, vs2, rs1, vl);}
vuint16mf2_t test9_vwabdu_mu(vbool32_t mask, vuint16mf2_t vd, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_mu(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test10_vwabdu_tum(vbool32_t mask, vuint16mf2_t vd, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tum(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test11_vwabdu_tumu(vbool32_t mask, vuint16mf2_t vd, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tumu(mask, vd, vs2, rs1, vl);}
vuint16m1_t test12_vwabdu(vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu(vs2, rs1, vl);}
vuint16m1_t test13_vwabdu_tu(vuint16m1_t vd, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tu(vd, vs2, rs1, vl);}
vuint16m1_t test14_vwabdu(vbool16_t mask, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu(mask, vs2, rs1, vl);}
vuint16m1_t test15_vwabdu_mu(vbool16_t mask, vuint16m1_t vd, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_mu(mask, vd, vs2, rs1, vl);}
vuint16m1_t test16_vwabdu_tum(vbool16_t mask, vuint16m1_t vd, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tum(mask, vd, vs2, rs1, vl);}
vuint16m1_t test17_vwabdu_tumu(vbool16_t mask, vuint16m1_t vd, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tumu(mask, vd, vs2, rs1, vl);}
vuint16m2_t test18_vwabdu(vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu(vs2, rs1, vl);}
vuint16m2_t test19_vwabdu_tu(vuint16m2_t vd, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tu(vd, vs2, rs1, vl);}
vuint16m2_t test20_vwabdu(vbool8_t mask, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu(mask, vs2, rs1, vl);}
vuint16m2_t test21_vwabdu_mu(vbool8_t mask, vuint16m2_t vd, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_mu(mask, vd, vs2, rs1, vl);}
vuint16m2_t test22_vwabdu_tum(vbool8_t mask, vuint16m2_t vd, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tum(mask, vd, vs2, rs1, vl);}
vuint16m2_t test23_vwabdu_tumu(vbool8_t mask, vuint16m2_t vd, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tumu(mask, vd, vs2, rs1, vl);}
vuint16m4_t test24_vwabdu(vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu(vs2, rs1, vl);}
vuint16m4_t test25_vwabdu_tu(vuint16m4_t vd, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tu(vd, vs2, rs1, vl);}
vuint16m4_t test26_vwabdu(vbool4_t mask, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu(mask, vs2, rs1, vl);}
vuint16m4_t test27_vwabdu_mu(vbool4_t mask, vuint16m4_t vd, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_mu(mask, vd, vs2, rs1, vl);}
vuint16m4_t test28_vwabdu_tum(vbool4_t mask, vuint16m4_t vd, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tum(mask, vd, vs2, rs1, vl);}
vuint16m4_t test29_vwabdu_tumu(vbool4_t mask, vuint16m4_t vd, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tumu(mask, vd, vs2, rs1, vl);}
vuint16m8_t test30_vwabdu(vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu(vs2, rs1, vl);}
vuint16m8_t test31_vwabdu_tu(vuint16m8_t vd, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tu(vd, vs2, rs1, vl);}
vuint16m8_t test32_vwabdu(vbool2_t mask, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu(mask, vs2, rs1, vl);}
vuint16m8_t test33_vwabdu_mu(vbool2_t mask, vuint16m8_t vd, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_mu(mask, vd, vs2, rs1, vl);}
vuint16m8_t test34_vwabdu_tum(vbool2_t mask, vuint16m8_t vd, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tum(mask, vd, vs2, rs1, vl);}
vuint16m8_t test35_vwabdu_tumu(vbool2_t mask, vuint16m8_t vd, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabdu_tumu(mask, vd, vs2, rs1, vl);}

vuint32mf2_t test37_vwabdu(vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu(vs2, rs1, vl);}
vuint32mf2_t test38_vwabdu_tu(vuint32mf2_t vd, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_tu(vd, vs2, rs1, vl);}
vuint32mf2_t test39_vwabdu(vbool64_t mask, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu(mask, vs2, rs1, vl);}
vuint32mf2_t test40_vwabdu_mu(vbool64_t mask, vuint32mf2_t vd, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_mu(mask, vd, vs2, rs1, vl);}
vuint32mf2_t test41_vwabdu_tum(vbool64_t mask, vuint32mf2_t vd, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_tum(mask, vd, vs2, rs1, vl);}
vuint32mf2_t test42_vwabdu_tumu(vbool64_t mask, vuint32mf2_t vd, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_tumu(mask, vd, vs2, rs1, vl);}
vuint32m1_t test43_vwabdu(vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu(vs2, rs1, vl);}
vuint32m1_t test44_vwabdu_tu(vuint32m1_t vd, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_tu(vd, vs2, rs1, vl);}
vuint32m1_t test45_vwabdu(vbool32_t mask, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu(mask, vs2, rs1, vl);}
vuint32m1_t test46_vwabdu_mu(vbool32_t mask, vuint32m1_t vd, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_mu(mask, vd, vs2, rs1, vl);}
vuint32m1_t test47_vwabdu_tum(vbool32_t mask, vuint32m1_t vd, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_tum(mask, vd, vs2, rs1, vl);}
vuint32m1_t test48_vwabdu_tumu(vbool32_t mask, vuint32m1_t vd, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_tumu(mask, vd, vs2, rs1, vl);}
vuint32m2_t test49_vwabdu(vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu(vs2, rs1, vl);}
vuint32m2_t test50_vwabdu_tu(vuint32m2_t vd, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_tu(vd, vs2, rs1, vl);}
vuint32m2_t test51_vwabdu(vbool16_t mask, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu(mask, vs2, rs1, vl);}
vuint32m2_t test52_vwabdu_mu(vbool16_t mask, vuint32m2_t vd, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_mu(mask, vd, vs2, rs1, vl);}
vuint32m2_t test53_vwabdu_tum(vbool16_t mask, vuint32m2_t vd, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_tum(mask, vd, vs2, rs1, vl);}
vuint32m2_t test54_vwabdu_tumu(vbool16_t mask, vuint32m2_t vd, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_tumu(mask, vd, vs2, rs1, vl);}
vuint32m4_t test55_vwabdu(vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu(vs2, rs1, vl);}
vuint32m4_t test56_vwabdu_tu(vuint32m4_t vd, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_tu(vd, vs2, rs1, vl);}
vuint32m4_t test57_vwabdu(vbool8_t mask, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu(mask, vs2, rs1, vl);}
vuint32m4_t test58_vwabdu_mu(vbool8_t mask, vuint32m4_t vd, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_mu(mask, vd, vs2, rs1, vl);}
vuint32m4_t test59_vwabdu_tum(vbool8_t mask, vuint32m4_t vd, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_tum(mask, vd, vs2, rs1, vl);}
vuint32m4_t test60_vwabdu_tumu(vbool8_t mask, vuint32m4_t vd, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_tumu(mask, vd, vs2, rs1, vl);}
vuint32m8_t test61_vwabdu(vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu(vs2, rs1, vl);}
vuint32m8_t test62_vwabdu_tu(vuint32m8_t vd, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_tu(vd, vs2, rs1, vl);}
vuint32m8_t test63_vwabdu(vbool4_t mask, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu(mask, vs2, rs1, vl);}
vuint32m8_t test64_vwabdu_mu(vbool4_t mask, vuint32m8_t vd, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_mu(mask, vd, vs2, rs1, vl);}
vuint32m8_t test65_vwabdu_tum(vbool4_t mask, vuint32m8_t vd, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_tum(mask, vd, vs2, rs1, vl);}
vuint32m8_t test66_vwabdu_tumu(vbool4_t mask, vuint32m8_t vd, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabdu_tumu(mask, vd, vs2, rs1, vl);}

vuint64m1_t test68_vwabdu(vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu(vs2, rs1, vl);}
vuint64m1_t test69_vwabdu_tu(vuint64m1_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu_tu(vd, vs2, rs1, vl);}
vuint64m1_t test70_vwabdu(vbool64_t mask, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu(mask, vs2, rs1, vl);}
vuint64m1_t test71_vwabdu_mu(vbool64_t mask, vuint64m1_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu_mu(mask, vd, vs2, rs1, vl);}
vuint64m1_t test72_vwabdu_tum(vbool64_t mask, vuint64m1_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu_tum(mask, vd, vs2, rs1, vl);}
vuint64m1_t test73_vwabdu_tumu(vbool64_t mask, vuint64m1_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu_tumu(mask, vd, vs2, rs1, vl);}
vuint64m2_t test74_vwabdu(vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu(vs2, rs1, vl);}
vuint64m2_t test75_vwabdu_tu(vuint64m2_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu_tu(vd, vs2, rs1, vl);}
vuint64m2_t test76_vwabdu(vbool32_t mask, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu(mask, vs2, rs1, vl);}
vuint64m2_t test77_vwabdu_mu(vbool32_t mask, vuint64m2_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu_mu(mask, vd, vs2, rs1, vl);}
vuint64m2_t test78_vwabdu_tum(vbool32_t mask, vuint64m2_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu_tum(mask, vd, vs2, rs1, vl);}
vuint64m2_t test79_vwabdu_tumu(vbool32_t mask, vuint64m2_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu_tumu(mask, vd, vs2, rs1, vl);}
vuint64m4_t test80_vwabdu(vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu(vs2, rs1, vl);}
vuint64m4_t test81_vwabdu_tu(vuint64m4_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu_tu(vd, vs2, rs1, vl);}
vuint64m4_t test82_vwabdu(vbool16_t mask, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu(mask, vs2, rs1, vl);}
vuint64m4_t test83_vwabdu_mu(vbool16_t mask, vuint64m4_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu_mu(mask, vd, vs2, rs1, vl);}
vuint64m4_t test84_vwabdu_tum(vbool16_t mask, vuint64m4_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu_tum(mask, vd, vs2, rs1, vl);}
vuint64m4_t test85_vwabdu_tumu(vbool16_t mask, vuint64m4_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu_tumu(mask, vd, vs2, rs1, vl);}
vuint64m8_t test86_vwabdu(vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu(vs2, rs1, vl);}
vuint64m8_t test87_vwabdu_tu(vuint64m8_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu_tu(vd, vs2, rs1, vl);}
vuint64m8_t test88_vwabdu(vbool8_t mask, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu(mask, vs2, rs1, vl);}
vuint64m8_t test89_vwabdu_mu(vbool8_t mask, vuint64m8_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu_mu(mask, vd, vs2, rs1, vl);}
vuint64m8_t test90_vwabdu_tum(vbool8_t mask, vuint64m8_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu_tum(mask, vd, vs2, rs1, vl);}
vuint64m8_t test91_vwabdu_tumu(vbool8_t mask, vuint64m8_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabdu_tumu(mask, vd, vs2, rs1, vl);}

/* { dg-final { scan-assembler-times "th\\.vwabdu\\.vx\t" 90 } } */