/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvcoder0p1 -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvcoder0p1 -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

vuint16mf4_t test0_vwabau(vuint16mf4_t vd, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau(vd, vs2, rs1, vl);}
vuint16mf4_t test1_vwabau_tu(vuint16mf4_t vd, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tu(vd, vs2, rs1, vl);}
vuint16mf4_t test2_vwabau(vbool64_t mask, vuint16mf4_t vd, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau(mask, vd, vs2, rs1, vl);}
vuint16mf4_t test3_vwabau_mu(vbool64_t mask, vuint16mf4_t vd, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_mu(mask, vd, vs2, rs1, vl);}
vuint16mf4_t test4_vwabau_tum(vbool64_t mask, vuint16mf4_t vd, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tum(mask, vd, vs2, rs1, vl);}
vuint16mf4_t test5_vwabau_tumu(vbool64_t mask, vuint16mf4_t vd, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tumu(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test6_vwabau(vuint16mf2_t vd, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau(vd, vs2, rs1, vl);}
vuint16mf2_t test7_vwabau_tu(vuint16mf2_t vd, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tu(vd, vs2, rs1, vl);}
vuint16mf2_t test8_vwabau(vbool32_t mask, vuint16mf2_t vd, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test9_vwabau_mu(vbool32_t mask, vuint16mf2_t vd, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_mu(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test10_vwabau_tum(vbool32_t mask, vuint16mf2_t vd, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tum(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test11_vwabau_tumu(vbool32_t mask, vuint16mf2_t vd, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tumu(mask, vd, vs2, rs1, vl);}
vuint16m1_t test12_vwabau(vuint16m1_t vd, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau(vd, vs2, rs1, vl);}
vuint16m1_t test13_vwabau_tu(vuint16m1_t vd, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tu(vd, vs2, rs1, vl);}
vuint16m1_t test14_vwabau(vbool16_t mask, vuint16m1_t vd, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau(mask, vd, vs2, rs1, vl);}
vuint16m1_t test15_vwabau_mu(vbool16_t mask, vuint16m1_t vd, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_mu(mask, vd, vs2, rs1, vl);}
vuint16m1_t test16_vwabau_tum(vbool16_t mask, vuint16m1_t vd, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tum(mask, vd, vs2, rs1, vl);}
vuint16m1_t test17_vwabau_tumu(vbool16_t mask, vuint16m1_t vd, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tumu(mask, vd, vs2, rs1, vl);}
vuint16m2_t test18_vwabau(vuint16m2_t vd, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau(vd, vs2, rs1, vl);}
vuint16m2_t test19_vwabau_tu(vuint16m2_t vd, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tu(vd, vs2, rs1, vl);}
vuint16m2_t test20_vwabau(vbool8_t mask, vuint16m2_t vd, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau(mask, vd, vs2, rs1, vl);}
vuint16m2_t test21_vwabau_mu(vbool8_t mask, vuint16m2_t vd, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_mu(mask, vd, vs2, rs1, vl);}
vuint16m2_t test22_vwabau_tum(vbool8_t mask, vuint16m2_t vd, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tum(mask, vd, vs2, rs1, vl);}
vuint16m2_t test23_vwabau_tumu(vbool8_t mask, vuint16m2_t vd, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tumu(mask, vd, vs2, rs1, vl);}
vuint16m4_t test24_vwabau(vuint16m4_t vd, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau(vd, vs2, rs1, vl);}
vuint16m4_t test25_vwabau_tu(vuint16m4_t vd, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tu(vd, vs2, rs1, vl);}
vuint16m4_t test26_vwabau(vbool4_t mask, vuint16m4_t vd, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau(mask, vd, vs2, rs1, vl);}
vuint16m4_t test27_vwabau_mu(vbool4_t mask, vuint16m4_t vd, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_mu(mask, vd, vs2, rs1, vl);}
vuint16m4_t test28_vwabau_tum(vbool4_t mask, vuint16m4_t vd, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tum(mask, vd, vs2, rs1, vl);}
vuint16m4_t test29_vwabau_tumu(vbool4_t mask, vuint16m4_t vd, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tumu(mask, vd, vs2, rs1, vl);}
vuint16m8_t test30_vwabau(vuint16m8_t vd, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau(vd, vs2, rs1, vl);}
vuint16m8_t test31_vwabau_tu(vuint16m8_t vd, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tu(vd, vs2, rs1, vl);}
vuint16m8_t test32_vwabau(vbool2_t mask, vuint16m8_t vd, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau(mask, vd, vs2, rs1, vl);}
vuint16m8_t test33_vwabau_mu(vbool2_t mask, vuint16m8_t vd, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_mu(mask, vd, vs2, rs1, vl);}
vuint16m8_t test34_vwabau_tum(vbool2_t mask, vuint16m8_t vd, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tum(mask, vd, vs2, rs1, vl);}
vuint16m8_t test35_vwabau_tumu(vbool2_t mask, vuint16m8_t vd, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vwabau_tumu(mask, vd, vs2, rs1, vl);}

vuint32mf2_t test37_vwabau(vuint32mf2_t vd, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau(vd, vs2, rs1, vl);}
vuint32mf2_t test38_vwabau_tu(vuint32mf2_t vd, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_tu(vd, vs2, rs1, vl);}
vuint32mf2_t test39_vwabau(vbool64_t mask, vuint32mf2_t vd, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau(mask, vd, vs2, rs1, vl);}
vuint32mf2_t test40_vwabau_mu(vbool64_t mask, vuint32mf2_t vd, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_mu(mask, vd, vs2, rs1, vl);}
vuint32mf2_t test41_vwabau_tum(vbool64_t mask, vuint32mf2_t vd, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_tum(mask, vd, vs2, rs1, vl);}
vuint32mf2_t test42_vwabau_tumu(vbool64_t mask, vuint32mf2_t vd, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_tumu(mask, vd, vs2, rs1, vl);}
vuint32m1_t test43_vwabau(vuint32m1_t vd, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau(vd, vs2, rs1, vl);}
vuint32m1_t test44_vwabau_tu(vuint32m1_t vd, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_tu(vd, vs2, rs1, vl);}
vuint32m1_t test45_vwabau(vbool32_t mask, vuint32m1_t vd, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau(mask, vd, vs2, rs1, vl);}
vuint32m1_t test46_vwabau_mu(vbool32_t mask, vuint32m1_t vd, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_mu(mask, vd, vs2, rs1, vl);}
vuint32m1_t test47_vwabau_tum(vbool32_t mask, vuint32m1_t vd, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_tum(mask, vd, vs2, rs1, vl);}
vuint32m1_t test48_vwabau_tumu(vbool32_t mask, vuint32m1_t vd, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_tumu(mask, vd, vs2, rs1, vl);}
vuint32m2_t test49_vwabau(vuint32m2_t vd, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau(vd, vs2, rs1, vl);}
vuint32m2_t test50_vwabau_tu(vuint32m2_t vd, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_tu(vd, vs2, rs1, vl);}
vuint32m2_t test51_vwabau(vbool16_t mask, vuint32m2_t vd, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau(mask, vd, vs2, rs1, vl);}
vuint32m2_t test52_vwabau_mu(vbool16_t mask, vuint32m2_t vd, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_mu(mask, vd, vs2, rs1, vl);}
vuint32m2_t test53_vwabau_tum(vbool16_t mask, vuint32m2_t vd, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_tum(mask, vd, vs2, rs1, vl);}
vuint32m2_t test54_vwabau_tumu(vbool16_t mask, vuint32m2_t vd, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_tumu(mask, vd, vs2, rs1, vl);}
vuint32m4_t test55_vwabau(vuint32m4_t vd, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau(vd, vs2, rs1, vl);}
vuint32m4_t test56_vwabau_tu(vuint32m4_t vd, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_tu(vd, vs2, rs1, vl);}
vuint32m4_t test57_vwabau(vbool8_t mask, vuint32m4_t vd, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau(mask, vd, vs2, rs1, vl);}
vuint32m4_t test58_vwabau_mu(vbool8_t mask, vuint32m4_t vd, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_mu(mask, vd, vs2, rs1, vl);}
vuint32m4_t test59_vwabau_tum(vbool8_t mask, vuint32m4_t vd, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_tum(mask, vd, vs2, rs1, vl);}
vuint32m4_t test60_vwabau_tumu(vbool8_t mask, vuint32m4_t vd, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_tumu(mask, vd, vs2, rs1, vl);}
vuint32m8_t test61_vwabau(vuint32m8_t vd, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau(vd, vs2, rs1, vl);}
vuint32m8_t test62_vwabau_tu(vuint32m8_t vd, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_tu(vd, vs2, rs1, vl);}
vuint32m8_t test63_vwabau(vbool4_t mask, vuint32m8_t vd, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau(mask, vd, vs2, rs1, vl);}
vuint32m8_t test64_vwabau_mu(vbool4_t mask, vuint32m8_t vd, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_mu(mask, vd, vs2, rs1, vl);}
vuint32m8_t test65_vwabau_tum(vbool4_t mask, vuint32m8_t vd, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_tum(mask, vd, vs2, rs1, vl);}
vuint32m8_t test66_vwabau_tumu(vbool4_t mask, vuint32m8_t vd, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vwabau_tumu(mask, vd, vs2, rs1, vl);}

vuint64m1_t test68_vwabau(vuint64m1_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau(vd, vs2, rs1, vl);}
vuint64m1_t test69_vwabau_tu(vuint64m1_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau_tu(vd, vs2, rs1, vl);}
vuint64m1_t test70_vwabau(vbool64_t mask, vuint64m1_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau(mask, vd, vs2, rs1, vl);}
vuint64m1_t test71_vwabau_mu(vbool64_t mask, vuint64m1_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau_mu(mask, vd, vs2, rs1, vl);}
vuint64m1_t test72_vwabau_tum(vbool64_t mask, vuint64m1_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau_tum(mask, vd, vs2, rs1, vl);}
vuint64m1_t test73_vwabau_tumu(vbool64_t mask, vuint64m1_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau_tumu(mask, vd, vs2, rs1, vl);}
vuint64m2_t test74_vwabau(vuint64m2_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau(vd, vs2, rs1, vl);}
vuint64m2_t test75_vwabau_tu(vuint64m2_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau_tu(vd, vs2, rs1, vl);}
vuint64m2_t test76_vwabau(vbool32_t mask, vuint64m2_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau(mask, vd, vs2, rs1, vl);}
vuint64m2_t test77_vwabau_mu(vbool32_t mask, vuint64m2_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau_mu(mask, vd, vs2, rs1, vl);}
vuint64m2_t test78_vwabau_tum(vbool32_t mask, vuint64m2_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau_tum(mask, vd, vs2, rs1, vl);}
vuint64m2_t test79_vwabau_tumu(vbool32_t mask, vuint64m2_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau_tumu(mask, vd, vs2, rs1, vl);}
vuint64m4_t test80_vwabau(vuint64m4_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau(vd, vs2, rs1, vl);}
vuint64m4_t test81_vwabau_tu(vuint64m4_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau_tu(vd, vs2, rs1, vl);}
vuint64m4_t test82_vwabau(vbool16_t mask, vuint64m4_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau(mask, vd, vs2, rs1, vl);}
vuint64m4_t test83_vwabau_mu(vbool16_t mask, vuint64m4_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau_mu(mask, vd, vs2, rs1, vl);}
vuint64m4_t test84_vwabau_tum(vbool16_t mask, vuint64m4_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau_tum(mask, vd, vs2, rs1, vl);}
vuint64m4_t test85_vwabau_tumu(vbool16_t mask, vuint64m4_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau_tumu(mask, vd, vs2, rs1, vl);}
vuint64m8_t test86_vwabau(vuint64m8_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau(vd, vs2, rs1, vl);}
vuint64m8_t test87_vwabau_tu(vuint64m8_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau_tu(vd, vs2, rs1, vl);}
vuint64m8_t test88_vwabau(vbool8_t mask, vuint64m8_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau(mask, vd, vs2, rs1, vl);}
vuint64m8_t test89_vwabau_mu(vbool8_t mask, vuint64m8_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau_mu(mask, vd, vs2, rs1, vl);}
vuint64m8_t test90_vwabau_tum(vbool8_t mask, vuint64m8_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau_tum(mask, vd, vs2, rs1, vl);}
vuint64m8_t test91_vwabau_tumu(vbool8_t mask, vuint64m8_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vwabau_tumu(mask, vd, vs2, rs1, vl);}

/* { dg-final { scan-assembler-times "th\\.vwabau\\.vx\t" 90 } } */