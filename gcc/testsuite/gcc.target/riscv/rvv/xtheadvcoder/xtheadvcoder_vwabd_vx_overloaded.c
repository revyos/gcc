/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvcoder0p1 -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvcoder0p1 -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

vuint16mf4_t test0_vwabd(vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd(vs2, rs1, vl);}
vuint16mf4_t test1_vwabd_tu(vuint16mf4_t vd, vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tu(vd, vs2, rs1, vl);}
vuint16mf4_t test2_vwabd(vbool64_t mask, vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd(mask, vs2, rs1, vl);}
vuint16mf4_t test3_vwabd_mu(vbool64_t mask, vuint16mf4_t vd, vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_mu(mask, vd, vs2, rs1, vl);}
vuint16mf4_t test4_vwabd_tum(vbool64_t mask, vuint16mf4_t vd, vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tum(mask, vd, vs2, rs1, vl);}
vuint16mf4_t test5_vwabd_tumu(vbool64_t mask, vuint16mf4_t vd, vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tumu(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test6_vwabd(vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd(vs2, rs1, vl);}
vuint16mf2_t test7_vwabd_tu(vuint16mf2_t vd, vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tu(vd, vs2, rs1, vl);}
vuint16mf2_t test8_vwabd(vbool32_t mask, vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd(mask, vs2, rs1, vl);}
vuint16mf2_t test9_vwabd_mu(vbool32_t mask, vuint16mf2_t vd, vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_mu(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test10_vwabd_tum(vbool32_t mask, vuint16mf2_t vd, vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tum(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test11_vwabd_tumu(vbool32_t mask, vuint16mf2_t vd, vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tumu(mask, vd, vs2, rs1, vl);}
vuint16m1_t test12_vwabd(vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd(vs2, rs1, vl);}
vuint16m1_t test13_vwabd_tu(vuint16m1_t vd, vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tu(vd, vs2, rs1, vl);}
vuint16m1_t test14_vwabd(vbool16_t mask, vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd(mask, vs2, rs1, vl);}
vuint16m1_t test15_vwabd_mu(vbool16_t mask, vuint16m1_t vd, vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_mu(mask, vd, vs2, rs1, vl);}
vuint16m1_t test16_vwabd_tum(vbool16_t mask, vuint16m1_t vd, vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tum(mask, vd, vs2, rs1, vl);}
vuint16m1_t test17_vwabd_tumu(vbool16_t mask, vuint16m1_t vd, vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tumu(mask, vd, vs2, rs1, vl);}
vuint16m2_t test18_vwabd(vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd(vs2, rs1, vl);}
vuint16m2_t test19_vwabd_tu(vuint16m2_t vd, vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tu(vd, vs2, rs1, vl);}
vuint16m2_t test20_vwabd(vbool8_t mask, vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd(mask, vs2, rs1, vl);}
vuint16m2_t test21_vwabd_mu(vbool8_t mask, vuint16m2_t vd, vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_mu(mask, vd, vs2, rs1, vl);}
vuint16m2_t test22_vwabd_tum(vbool8_t mask, vuint16m2_t vd, vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tum(mask, vd, vs2, rs1, vl);}
vuint16m2_t test23_vwabd_tumu(vbool8_t mask, vuint16m2_t vd, vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tumu(mask, vd, vs2, rs1, vl);}
vuint16m4_t test24_vwabd(vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd(vs2, rs1, vl);}
vuint16m4_t test25_vwabd_tu(vuint16m4_t vd, vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tu(vd, vs2, rs1, vl);}
vuint16m4_t test26_vwabd(vbool4_t mask, vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd(mask, vs2, rs1, vl);}
vuint16m4_t test27_vwabd_mu(vbool4_t mask, vuint16m4_t vd, vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_mu(mask, vd, vs2, rs1, vl);}
vuint16m4_t test28_vwabd_tum(vbool4_t mask, vuint16m4_t vd, vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tum(mask, vd, vs2, rs1, vl);}
vuint16m4_t test29_vwabd_tumu(vbool4_t mask, vuint16m4_t vd, vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tumu(mask, vd, vs2, rs1, vl);}
vuint16m8_t test30_vwabd(vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd(vs2, rs1, vl);}
vuint16m8_t test31_vwabd_tu(vuint16m8_t vd, vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tu(vd, vs2, rs1, vl);}
vuint16m8_t test32_vwabd(vbool2_t mask, vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd(mask, vs2, rs1, vl);}
vuint16m8_t test33_vwabd_mu(vbool2_t mask, vuint16m8_t vd, vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_mu(mask, vd, vs2, rs1, vl);}
vuint16m8_t test34_vwabd_tum(vbool2_t mask, vuint16m8_t vd, vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tum(mask, vd, vs2, rs1, vl);}
vuint16m8_t test35_vwabd_tumu(vbool2_t mask, vuint16m8_t vd, vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vwabd_tumu(mask, vd, vs2, rs1, vl);}

vuint32mf2_t test37_vwabd(vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd(vs2, rs1, vl);}
vuint32mf2_t test38_vwabd_tu(vuint32mf2_t vd, vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_tu(vd, vs2, rs1, vl);}
vuint32mf2_t test39_vwabd(vbool64_t mask, vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd(mask, vs2, rs1, vl);}
vuint32mf2_t test40_vwabd_mu(vbool64_t mask, vuint32mf2_t vd, vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_mu(mask, vd, vs2, rs1, vl);}
vuint32mf2_t test41_vwabd_tum(vbool64_t mask, vuint32mf2_t vd, vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_tum(mask, vd, vs2, rs1, vl);}
vuint32mf2_t test42_vwabd_tumu(vbool64_t mask, vuint32mf2_t vd, vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_tumu(mask, vd, vs2, rs1, vl);}
vuint32m1_t test43_vwabd(vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd(vs2, rs1, vl);}
vuint32m1_t test44_vwabd_tu(vuint32m1_t vd, vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_tu(vd, vs2, rs1, vl);}
vuint32m1_t test45_vwabd(vbool32_t mask, vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd(mask, vs2, rs1, vl);}
vuint32m1_t test46_vwabd_mu(vbool32_t mask, vuint32m1_t vd, vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_mu(mask, vd, vs2, rs1, vl);}
vuint32m1_t test47_vwabd_tum(vbool32_t mask, vuint32m1_t vd, vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_tum(mask, vd, vs2, rs1, vl);}
vuint32m1_t test48_vwabd_tumu(vbool32_t mask, vuint32m1_t vd, vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_tumu(mask, vd, vs2, rs1, vl);}
vuint32m2_t test49_vwabd(vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd(vs2, rs1, vl);}
vuint32m2_t test50_vwabd_tu(vuint32m2_t vd, vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_tu(vd, vs2, rs1, vl);}
vuint32m2_t test51_vwabd(vbool16_t mask, vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd(mask, vs2, rs1, vl);}
vuint32m2_t test52_vwabd_mu(vbool16_t mask, vuint32m2_t vd, vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_mu(mask, vd, vs2, rs1, vl);}
vuint32m2_t test53_vwabd_tum(vbool16_t mask, vuint32m2_t vd, vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_tum(mask, vd, vs2, rs1, vl);}
vuint32m2_t test54_vwabd_tumu(vbool16_t mask, vuint32m2_t vd, vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_tumu(mask, vd, vs2, rs1, vl);}
vuint32m4_t test55_vwabd(vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd(vs2, rs1, vl);}
vuint32m4_t test56_vwabd_tu(vuint32m4_t vd, vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_tu(vd, vs2, rs1, vl);}
vuint32m4_t test57_vwabd(vbool8_t mask, vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd(mask, vs2, rs1, vl);}
vuint32m4_t test58_vwabd_mu(vbool8_t mask, vuint32m4_t vd, vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_mu(mask, vd, vs2, rs1, vl);}
vuint32m4_t test59_vwabd_tum(vbool8_t mask, vuint32m4_t vd, vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_tum(mask, vd, vs2, rs1, vl);}
vuint32m4_t test60_vwabd_tumu(vbool8_t mask, vuint32m4_t vd, vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_tumu(mask, vd, vs2, rs1, vl);}
vuint32m8_t test61_vwabd(vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd(vs2, rs1, vl);}
vuint32m8_t test62_vwabd_tu(vuint32m8_t vd, vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_tu(vd, vs2, rs1, vl);}
vuint32m8_t test63_vwabd(vbool4_t mask, vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd(mask, vs2, rs1, vl);}
vuint32m8_t test64_vwabd_mu(vbool4_t mask, vuint32m8_t vd, vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_mu(mask, vd, vs2, rs1, vl);}
vuint32m8_t test65_vwabd_tum(vbool4_t mask, vuint32m8_t vd, vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_tum(mask, vd, vs2, rs1, vl);}
vuint32m8_t test66_vwabd_tumu(vbool4_t mask, vuint32m8_t vd, vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vwabd_tumu(mask, vd, vs2, rs1, vl);}

vuint64m1_t test68_vwabd(vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd(vs2, rs1, vl);}
vuint64m1_t test69_vwabd_tu(vuint64m1_t vd, vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd_tu(vd, vs2, rs1, vl);}
vuint64m1_t test70_vwabd(vbool64_t mask, vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd(mask, vs2, rs1, vl);}
vuint64m1_t test71_vwabd_mu(vbool64_t mask, vuint64m1_t vd, vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd_mu(mask, vd, vs2, rs1, vl);}
vuint64m1_t test72_vwabd_tum(vbool64_t mask, vuint64m1_t vd, vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd_tum(mask, vd, vs2, rs1, vl);}
vuint64m1_t test73_vwabd_tumu(vbool64_t mask, vuint64m1_t vd, vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd_tumu(mask, vd, vs2, rs1, vl);}
vuint64m2_t test74_vwabd(vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd(vs2, rs1, vl);}
vuint64m2_t test75_vwabd_tu(vuint64m2_t vd, vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd_tu(vd, vs2, rs1, vl);}
vuint64m2_t test76_vwabd(vbool32_t mask, vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd(mask, vs2, rs1, vl);}
vuint64m2_t test77_vwabd_mu(vbool32_t mask, vuint64m2_t vd, vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd_mu(mask, vd, vs2, rs1, vl);}
vuint64m2_t test78_vwabd_tum(vbool32_t mask, vuint64m2_t vd, vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd_tum(mask, vd, vs2, rs1, vl);}
vuint64m2_t test79_vwabd_tumu(vbool32_t mask, vuint64m2_t vd, vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd_tumu(mask, vd, vs2, rs1, vl);}
vuint64m4_t test80_vwabd(vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd(vs2, rs1, vl);}
vuint64m4_t test81_vwabd_tu(vuint64m4_t vd, vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd_tu(vd, vs2, rs1, vl);}
vuint64m4_t test82_vwabd(vbool16_t mask, vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd(mask, vs2, rs1, vl);}
vuint64m4_t test83_vwabd_mu(vbool16_t mask, vuint64m4_t vd, vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd_mu(mask, vd, vs2, rs1, vl);}
vuint64m4_t test84_vwabd_tum(vbool16_t mask, vuint64m4_t vd, vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd_tum(mask, vd, vs2, rs1, vl);}
vuint64m4_t test85_vwabd_tumu(vbool16_t mask, vuint64m4_t vd, vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd_tumu(mask, vd, vs2, rs1, vl);}
vuint64m8_t test86_vwabd(vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd(vs2, rs1, vl);}
vuint64m8_t test87_vwabd_tu(vuint64m8_t vd, vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd_tu(vd, vs2, rs1, vl);}
vuint64m8_t test88_vwabd(vbool8_t mask, vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd(mask, vs2, rs1, vl);}
vuint64m8_t test89_vwabd_mu(vbool8_t mask, vuint64m8_t vd, vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd_mu(mask, vd, vs2, rs1, vl);}
vuint64m8_t test90_vwabd_tum(vbool8_t mask, vuint64m8_t vd, vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd_tum(mask, vd, vs2, rs1, vl);}
vuint64m8_t test91_vwabd_tumu(vbool8_t mask, vuint64m8_t vd, vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vwabd_tumu(mask, vd, vs2, rs1, vl);}

/* { dg-final { scan-assembler-times "th\\.vwabd\\.vx\t" 90 } } */