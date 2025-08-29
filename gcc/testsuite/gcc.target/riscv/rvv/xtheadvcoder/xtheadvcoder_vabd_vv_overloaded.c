/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvcoder0p1 -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvcoder0p1 -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

vuint8mf8_t test0_vabd(vint8mf8_t vs2, vint8mf8_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint8mf8_t test1_vabd_tu(vuint8mf8_t vd, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint8mf8_t test2_vabd(vbool64_t mask, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint8mf8_t test3_vabd_mu(vbool64_t mask, vuint8mf8_t vd, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint8mf8_t test4_vabd_tum(vbool64_t mask, vuint8mf8_t vd, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint8mf8_t test5_vabd_tumu(vbool64_t mask, vuint8mf8_t vd, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint8mf4_t test6_vabd(vint8mf4_t vs2, vint8mf4_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint8mf4_t test7_vabd_tu(vuint8mf4_t vd, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint8mf4_t test8_vabd(vbool32_t mask, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint8mf4_t test9_vabd_mu(vbool32_t mask, vuint8mf4_t vd, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint8mf4_t test10_vabd_tum(vbool32_t mask, vuint8mf4_t vd, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint8mf4_t test11_vabd_tumu(vbool32_t mask, vuint8mf4_t vd, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint8mf2_t test12_vabd(vint8mf2_t vs2, vint8mf2_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint8mf2_t test13_vabd_tu(vuint8mf2_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint8mf2_t test14_vabd(vbool16_t mask, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint8mf2_t test15_vabd_mu(vbool16_t mask, vuint8mf2_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint8mf2_t test16_vabd_tum(vbool16_t mask, vuint8mf2_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint8mf2_t test17_vabd_tumu(vbool16_t mask, vuint8mf2_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint8m1_t test18_vabd(vint8m1_t vs2, vint8m1_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint8m1_t test19_vabd_tu(vuint8m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint8m1_t test20_vabd(vbool8_t mask, vint8m1_t vs2, vint8m1_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint8m1_t test21_vabd_mu(vbool8_t mask, vuint8m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint8m1_t test22_vabd_tum(vbool8_t mask, vuint8m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint8m1_t test23_vabd_tumu(vbool8_t mask, vuint8m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint8m2_t test24_vabd(vint8m2_t vs2, vint8m2_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint8m2_t test25_vabd_tu(vuint8m2_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint8m2_t test26_vabd(vbool4_t mask, vint8m2_t vs2, vint8m2_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint8m2_t test27_vabd_mu(vbool4_t mask, vuint8m2_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint8m2_t test28_vabd_tum(vbool4_t mask, vuint8m2_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint8m2_t test29_vabd_tumu(vbool4_t mask, vuint8m2_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint8m4_t test30_vabd(vint8m4_t vs2, vint8m4_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint8m4_t test31_vabd_tu(vuint8m4_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint8m4_t test32_vabd(vbool2_t mask, vint8m4_t vs2, vint8m4_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint8m4_t test33_vabd_mu(vbool2_t mask, vuint8m4_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint8m4_t test34_vabd_tum(vbool2_t mask, vuint8m4_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint8m4_t test35_vabd_tumu(vbool2_t mask, vuint8m4_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint8m8_t test36_vabd(vint8m8_t vs2, vint8m8_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint8m8_t test37_vabd_tu(vuint8m8_t vd, vint8m8_t vs2, vint8m8_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint8m8_t test38_vabd(vbool1_t mask, vint8m8_t vs2, vint8m8_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint8m8_t test39_vabd_mu(vbool1_t mask, vuint8m8_t vd, vint8m8_t vs2, vint8m8_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint8m8_t test40_vabd_tum(vbool1_t mask, vuint8m8_t vd, vint8m8_t vs2, vint8m8_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint8m8_t test41_vabd_tumu(vbool1_t mask, vuint8m8_t vd, vint8m8_t vs2, vint8m8_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}

vuint16mf4_t test85_vabd(vint16mf4_t vs2, vint16mf4_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint16mf4_t test86_vabd_tu(vuint16mf4_t vd, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint16mf4_t test87_vabd(vbool64_t mask, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint16mf4_t test88_vabd_mu(vbool64_t mask, vuint16mf4_t vd, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint16mf4_t test89_vabd_tum(vbool64_t mask, vuint16mf4_t vd, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint16mf4_t test90_vabd_tumu(vbool64_t mask, vuint16mf4_t vd, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint16mf2_t test91_vabd(vint16mf2_t vs2, vint16mf2_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint16mf2_t test92_vabd_tu(vuint16mf2_t vd, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint16mf2_t test93_vabd(vbool32_t mask, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint16mf2_t test94_vabd_mu(vbool32_t mask, vuint16mf2_t vd, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint16mf2_t test95_vabd_tum(vbool32_t mask, vuint16mf2_t vd, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint16mf2_t test96_vabd_tumu(vbool32_t mask, vuint16mf2_t vd, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint16m1_t test97_vabd(vint16m1_t vs2, vint16m1_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint16m1_t test98_vabd_tu(vuint16m1_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint16m1_t test99_vabd(vbool16_t mask, vint16m1_t vs2, vint16m1_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint16m1_t test100_vabd_mu(vbool16_t mask, vuint16m1_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint16m1_t test101_vabd_tum(vbool16_t mask, vuint16m1_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint16m1_t test102_vabd_tumu(vbool16_t mask, vuint16m1_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint16m2_t test103_vabd(vint16m2_t vs2, vint16m2_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint16m2_t test104_vabd_tu(vuint16m2_t vd, vint16m2_t vs2, vint16m2_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint16m2_t test105_vabd(vbool8_t mask, vint16m2_t vs2, vint16m2_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint16m2_t test106_vabd_mu(vbool8_t mask, vuint16m2_t vd, vint16m2_t vs2, vint16m2_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint16m2_t test107_vabd_tum(vbool8_t mask, vuint16m2_t vd, vint16m2_t vs2, vint16m2_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint16m2_t test108_vabd_tumu(vbool8_t mask, vuint16m2_t vd, vint16m2_t vs2, vint16m2_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint16m4_t test109_vabd(vint16m4_t vs2, vint16m4_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint16m4_t test110_vabd_tu(vuint16m4_t vd, vint16m4_t vs2, vint16m4_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint16m4_t test111_vabd(vbool4_t mask, vint16m4_t vs2, vint16m4_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint16m4_t test112_vabd_mu(vbool4_t mask, vuint16m4_t vd, vint16m4_t vs2, vint16m4_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint16m4_t test113_vabd_tum(vbool4_t mask, vuint16m4_t vd, vint16m4_t vs2, vint16m4_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint16m4_t test114_vabd_tumu(vbool4_t mask, vuint16m4_t vd, vint16m4_t vs2, vint16m4_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint16m8_t test115_vabd(vint16m8_t vs2, vint16m8_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint16m8_t test116_vabd_tu(vuint16m8_t vd, vint16m8_t vs2, vint16m8_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint16m8_t test117_vabd(vbool2_t mask, vint16m8_t vs2, vint16m8_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint16m8_t test118_vabd_mu(vbool2_t mask, vuint16m8_t vd, vint16m8_t vs2, vint16m8_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint16m8_t test119_vabd_tum(vbool2_t mask, vuint16m8_t vd, vint16m8_t vs2, vint16m8_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint16m8_t test120_vabd_tumu(vbool2_t mask, vuint16m8_t vd, vint16m8_t vs2, vint16m8_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}

vuint32mf2_t test158_vabd(vint32mf2_t vs2, vint32mf2_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint32mf2_t test159_vabd_tu(vuint32mf2_t vd, vint32mf2_t vs2, vint32mf2_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint32mf2_t test160_vabd(vbool64_t mask, vint32mf2_t vs2, vint32mf2_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint32mf2_t test161_vabd_mu(vbool64_t mask, vuint32mf2_t vd, vint32mf2_t vs2, vint32mf2_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint32mf2_t test162_vabd_tum(vbool64_t mask, vuint32mf2_t vd, vint32mf2_t vs2, vint32mf2_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint32mf2_t test163_vabd_tumu(vbool64_t mask, vuint32mf2_t vd, vint32mf2_t vs2, vint32mf2_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint32m1_t test164_vabd(vint32m1_t vs2, vint32m1_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint32m1_t test165_vabd_tu(vuint32m1_t vd, vint32m1_t vs2, vint32m1_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint32m1_t test166_vabd(vbool32_t mask, vint32m1_t vs2, vint32m1_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint32m1_t test167_vabd_mu(vbool32_t mask, vuint32m1_t vd, vint32m1_t vs2, vint32m1_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint32m1_t test168_vabd_tum(vbool32_t mask, vuint32m1_t vd, vint32m1_t vs2, vint32m1_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint32m1_t test169_vabd_tumu(vbool32_t mask, vuint32m1_t vd, vint32m1_t vs2, vint32m1_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint32m2_t test170_vabd(vint32m2_t vs2, vint32m2_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint32m2_t test171_vabd_tu(vuint32m2_t vd, vint32m2_t vs2, vint32m2_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint32m2_t test172_vabd(vbool16_t mask, vint32m2_t vs2, vint32m2_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint32m2_t test173_vabd_mu(vbool16_t mask, vuint32m2_t vd, vint32m2_t vs2, vint32m2_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint32m2_t test174_vabd_tum(vbool16_t mask, vuint32m2_t vd, vint32m2_t vs2, vint32m2_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint32m2_t test175_vabd_tumu(vbool16_t mask, vuint32m2_t vd, vint32m2_t vs2, vint32m2_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint32m4_t test176_vabd(vint32m4_t vs2, vint32m4_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint32m4_t test177_vabd_tu(vuint32m4_t vd, vint32m4_t vs2, vint32m4_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint32m4_t test178_vabd(vbool8_t mask, vint32m4_t vs2, vint32m4_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint32m4_t test179_vabd_mu(vbool8_t mask, vuint32m4_t vd, vint32m4_t vs2, vint32m4_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint32m4_t test180_vabd_tum(vbool8_t mask, vuint32m4_t vd, vint32m4_t vs2, vint32m4_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint32m4_t test181_vabd_tumu(vbool8_t mask, vuint32m4_t vd, vint32m4_t vs2, vint32m4_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint32m8_t test182_vabd(vint32m8_t vs2, vint32m8_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint32m8_t test183_vabd_tu(vuint32m8_t vd, vint32m8_t vs2, vint32m8_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint32m8_t test184_vabd(vbool4_t mask, vint32m8_t vs2, vint32m8_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint32m8_t test185_vabd_mu(vbool4_t mask, vuint32m8_t vd, vint32m8_t vs2, vint32m8_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint32m8_t test186_vabd_tum(vbool4_t mask, vuint32m8_t vd, vint32m8_t vs2, vint32m8_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint32m8_t test187_vabd_tumu(vbool4_t mask, vuint32m8_t vd, vint32m8_t vs2, vint32m8_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}

vuint64m1_t test219_vabd(vint64m1_t vs2, vint64m1_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint64m1_t test220_vabd_tu(vuint64m1_t vd, vint64m1_t vs2, vint64m1_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint64m1_t test221_vabd(vbool64_t mask, vint64m1_t vs2, vint64m1_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint64m1_t test222_vabd_mu(vbool64_t mask, vuint64m1_t vd, vint64m1_t vs2, vint64m1_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint64m1_t test223_vabd_tum(vbool64_t mask, vuint64m1_t vd, vint64m1_t vs2, vint64m1_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint64m1_t test224_vabd_tumu(vbool64_t mask, vuint64m1_t vd, vint64m1_t vs2, vint64m1_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint64m2_t test225_vabd(vint64m2_t vs2, vint64m2_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint64m2_t test226_vabd_tu(vuint64m2_t vd, vint64m2_t vs2, vint64m2_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint64m2_t test227_vabd(vbool32_t mask, vint64m2_t vs2, vint64m2_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint64m2_t test228_vabd_mu(vbool32_t mask, vuint64m2_t vd, vint64m2_t vs2, vint64m2_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint64m2_t test229_vabd_tum(vbool32_t mask, vuint64m2_t vd, vint64m2_t vs2, vint64m2_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint64m2_t test230_vabd_tumu(vbool32_t mask, vuint64m2_t vd, vint64m2_t vs2, vint64m2_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint64m4_t test231_vabd(vint64m4_t vs2, vint64m4_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint64m4_t test232_vabd_tu(vuint64m4_t vd, vint64m4_t vs2, vint64m4_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint64m4_t test233_vabd(vbool16_t mask, vint64m4_t vs2, vint64m4_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint64m4_t test234_vabd_mu(vbool16_t mask, vuint64m4_t vd, vint64m4_t vs2, vint64m4_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint64m4_t test235_vabd_tum(vbool16_t mask, vuint64m4_t vd, vint64m4_t vs2, vint64m4_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint64m4_t test236_vabd_tumu(vbool16_t mask, vuint64m4_t vd, vint64m4_t vs2, vint64m4_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}
vuint64m8_t test237_vabd(vint64m8_t vs2, vint64m8_t vs1, size_t vl){return __riscv_th_vabd(vs2, vs1, vl);}
vuint64m8_t test238_vabd_tu(vuint64m8_t vd, vint64m8_t vs2, vint64m8_t vs1, size_t vl){return __riscv_th_vabd_tu(vd, vs2, vs1, vl);}
vuint64m8_t test239_vabd(vbool8_t mask, vint64m8_t vs2, vint64m8_t vs1, size_t vl){return __riscv_th_vabd(mask, vs2, vs1, vl);}
vuint64m8_t test240_vabd_mu(vbool8_t mask, vuint64m8_t vd, vint64m8_t vs2, vint64m8_t vs1, size_t vl){return __riscv_th_vabd_mu(mask, vd, vs2, vs1, vl);}
vuint64m8_t test241_vabd_tum(vbool8_t mask, vuint64m8_t vd, vint64m8_t vs2, vint64m8_t vs1, size_t vl){return __riscv_th_vabd_tum(mask, vd, vs2, vs1, vl);}
vuint64m8_t test242_vabd_tumu(vbool8_t mask, vuint64m8_t vd, vint64m8_t vs2, vint64m8_t vs1, size_t vl){return __riscv_th_vabd_tumu(mask, vd, vs2, vs1, vl);}

/* { dg-final { scan-assembler-times "th\\.vabd\\.vv\t" 132 } } */