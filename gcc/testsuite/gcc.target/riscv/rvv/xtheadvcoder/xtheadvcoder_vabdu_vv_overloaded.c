/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvcoder0p1 -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvcoder0p1 -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

vuint8mf8_t test0_vabdu(vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint8mf8_t test1_vabdu_tu(vuint8mf8_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint8mf8_t test2_vabdu(vbool64_t mask, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint8mf8_t test3_vabdu_mu(vbool64_t mask, vuint8mf8_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint8mf8_t test4_vabdu_tum(vbool64_t mask, vuint8mf8_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint8mf8_t test5_vabdu_tumu(vbool64_t mask, vuint8mf8_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint8mf4_t test6_vabdu(vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint8mf4_t test7_vabdu_tu(vuint8mf4_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint8mf4_t test8_vabdu(vbool32_t mask, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint8mf4_t test9_vabdu_mu(vbool32_t mask, vuint8mf4_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint8mf4_t test10_vabdu_tum(vbool32_t mask, vuint8mf4_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint8mf4_t test11_vabdu_tumu(vbool32_t mask, vuint8mf4_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint8mf2_t test12_vabdu(vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint8mf2_t test13_vabdu_tu(vuint8mf2_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint8mf2_t test14_vabdu(vbool16_t mask, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint8mf2_t test15_vabdu_mu(vbool16_t mask, vuint8mf2_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint8mf2_t test16_vabdu_tum(vbool16_t mask, vuint8mf2_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint8mf2_t test17_vabdu_tumu(vbool16_t mask, vuint8mf2_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint8m1_t test18_vabdu(vuint8m1_t vs2, vuint8m1_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint8m1_t test19_vabdu_tu(vuint8m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint8m1_t test20_vabdu(vbool8_t mask, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint8m1_t test21_vabdu_mu(vbool8_t mask, vuint8m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint8m1_t test22_vabdu_tum(vbool8_t mask, vuint8m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint8m1_t test23_vabdu_tumu(vbool8_t mask, vuint8m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint8m2_t test24_vabdu(vuint8m2_t vs2, vuint8m2_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint8m2_t test25_vabdu_tu(vuint8m2_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint8m2_t test26_vabdu(vbool4_t mask, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint8m2_t test27_vabdu_mu(vbool4_t mask, vuint8m2_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint8m2_t test28_vabdu_tum(vbool4_t mask, vuint8m2_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint8m2_t test29_vabdu_tumu(vbool4_t mask, vuint8m2_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint8m4_t test30_vabdu(vuint8m4_t vs2, vuint8m4_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint8m4_t test31_vabdu_tu(vuint8m4_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint8m4_t test32_vabdu(vbool2_t mask, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint8m4_t test33_vabdu_mu(vbool2_t mask, vuint8m4_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint8m4_t test34_vabdu_tum(vbool2_t mask, vuint8m4_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint8m4_t test35_vabdu_tumu(vbool2_t mask, vuint8m4_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint8m8_t test36_vabdu(vuint8m8_t vs2, vuint8m8_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint8m8_t test37_vabdu_tu(vuint8m8_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint8m8_t test38_vabdu(vbool1_t mask, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint8m8_t test39_vabdu_mu(vbool1_t mask, vuint8m8_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint8m8_t test40_vabdu_tum(vbool1_t mask, vuint8m8_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint8m8_t test41_vabdu_tumu(vbool1_t mask, vuint8m8_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}

vuint16mf4_t test85_vabdu(vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint16mf4_t test86_vabdu_tu(vuint16mf4_t vd, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint16mf4_t test87_vabdu(vbool64_t mask, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint16mf4_t test88_vabdu_mu(vbool64_t mask, vuint16mf4_t vd, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint16mf4_t test89_vabdu_tum(vbool64_t mask, vuint16mf4_t vd, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint16mf4_t test90_vabdu_tumu(vbool64_t mask, vuint16mf4_t vd, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint16mf2_t test91_vabdu(vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint16mf2_t test92_vabdu_tu(vuint16mf2_t vd, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint16mf2_t test93_vabdu(vbool32_t mask, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint16mf2_t test94_vabdu_mu(vbool32_t mask, vuint16mf2_t vd, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint16mf2_t test95_vabdu_tum(vbool32_t mask, vuint16mf2_t vd, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint16mf2_t test96_vabdu_tumu(vbool32_t mask, vuint16mf2_t vd, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint16m1_t test97_vabdu(vuint16m1_t vs2, vuint16m1_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint16m1_t test98_vabdu_tu(vuint16m1_t vd, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint16m1_t test99_vabdu(vbool16_t mask, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint16m1_t test100_vabdu_mu(vbool16_t mask, vuint16m1_t vd, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint16m1_t test101_vabdu_tum(vbool16_t mask, vuint16m1_t vd, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint16m1_t test102_vabdu_tumu(vbool16_t mask, vuint16m1_t vd, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint16m2_t test103_vabdu(vuint16m2_t vs2, vuint16m2_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint16m2_t test104_vabdu_tu(vuint16m2_t vd, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint16m2_t test105_vabdu(vbool8_t mask, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint16m2_t test106_vabdu_mu(vbool8_t mask, vuint16m2_t vd, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint16m2_t test107_vabdu_tum(vbool8_t mask, vuint16m2_t vd, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint16m2_t test108_vabdu_tumu(vbool8_t mask, vuint16m2_t vd, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint16m4_t test109_vabdu(vuint16m4_t vs2, vuint16m4_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint16m4_t test110_vabdu_tu(vuint16m4_t vd, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint16m4_t test111_vabdu(vbool4_t mask, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint16m4_t test112_vabdu_mu(vbool4_t mask, vuint16m4_t vd, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint16m4_t test113_vabdu_tum(vbool4_t mask, vuint16m4_t vd, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint16m4_t test114_vabdu_tumu(vbool4_t mask, vuint16m4_t vd, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint16m8_t test115_vabdu(vuint16m8_t vs2, vuint16m8_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint16m8_t test116_vabdu_tu(vuint16m8_t vd, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint16m8_t test117_vabdu(vbool2_t mask, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint16m8_t test118_vabdu_mu(vbool2_t mask, vuint16m8_t vd, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint16m8_t test119_vabdu_tum(vbool2_t mask, vuint16m8_t vd, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint16m8_t test120_vabdu_tumu(vbool2_t mask, vuint16m8_t vd, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}

vuint32mf2_t test158_vabdu(vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint32mf2_t test159_vabdu_tu(vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint32mf2_t test160_vabdu(vbool64_t mask, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint32mf2_t test161_vabdu_mu(vbool64_t mask, vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint32mf2_t test162_vabdu_tum(vbool64_t mask, vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint32mf2_t test163_vabdu_tumu(vbool64_t mask, vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint32m1_t test164_vabdu(vuint32m1_t vs2, vuint32m1_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint32m1_t test165_vabdu_tu(vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint32m1_t test166_vabdu(vbool32_t mask, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint32m1_t test167_vabdu_mu(vbool32_t mask, vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint32m1_t test168_vabdu_tum(vbool32_t mask, vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint32m1_t test169_vabdu_tumu(vbool32_t mask, vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint32m2_t test170_vabdu(vuint32m2_t vs2, vuint32m2_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint32m2_t test171_vabdu_tu(vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint32m2_t test172_vabdu(vbool16_t mask, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint32m2_t test173_vabdu_mu(vbool16_t mask, vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint32m2_t test174_vabdu_tum(vbool16_t mask, vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint32m2_t test175_vabdu_tumu(vbool16_t mask, vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint32m4_t test176_vabdu(vuint32m4_t vs2, vuint32m4_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint32m4_t test177_vabdu_tu(vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint32m4_t test178_vabdu(vbool8_t mask, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint32m4_t test179_vabdu_mu(vbool8_t mask, vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint32m4_t test180_vabdu_tum(vbool8_t mask, vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint32m4_t test181_vabdu_tumu(vbool8_t mask, vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint32m8_t test182_vabdu(vuint32m8_t vs2, vuint32m8_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint32m8_t test183_vabdu_tu(vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint32m8_t test184_vabdu(vbool4_t mask, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint32m8_t test185_vabdu_mu(vbool4_t mask, vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint32m8_t test186_vabdu_tum(vbool4_t mask, vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint32m8_t test187_vabdu_tumu(vbool4_t mask, vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}

vuint64m1_t test219_vabdu(vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint64m1_t test220_vabdu_tu(vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint64m1_t test221_vabdu(vbool64_t mask, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint64m1_t test222_vabdu_mu(vbool64_t mask, vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint64m1_t test223_vabdu_tum(vbool64_t mask, vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint64m1_t test224_vabdu_tumu(vbool64_t mask, vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint64m2_t test225_vabdu(vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint64m2_t test226_vabdu_tu(vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint64m2_t test227_vabdu(vbool32_t mask, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint64m2_t test228_vabdu_mu(vbool32_t mask, vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint64m2_t test229_vabdu_tum(vbool32_t mask, vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint64m2_t test230_vabdu_tumu(vbool32_t mask, vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint64m4_t test231_vabdu(vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint64m4_t test232_vabdu_tu(vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint64m4_t test233_vabdu(vbool16_t mask, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint64m4_t test234_vabdu_mu(vbool16_t mask, vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint64m4_t test235_vabdu_tum(vbool16_t mask, vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint64m4_t test236_vabdu_tumu(vbool16_t mask, vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}
vuint64m8_t test237_vabdu(vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vabdu(vs2, vs1, vl);}
vuint64m8_t test238_vabdu_tu(vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vabdu_tu(vd, vs2, vs1, vl);}
vuint64m8_t test239_vabdu(vbool8_t mask, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vabdu(mask, vs2, vs1, vl);}
vuint64m8_t test240_vabdu_mu(vbool8_t mask, vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vabdu_mu(mask, vd, vs2, vs1, vl);}
vuint64m8_t test241_vabdu_tum(vbool8_t mask, vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vabdu_tum(mask, vd, vs2, vs1, vl);}
vuint64m8_t test242_vabdu_tumu(vbool8_t mask, vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vabdu_tumu(mask, vd, vs2, vs1, vl);}

/* { dg-final { scan-assembler-times "th\\.vabdu\\.vv\t" 132 } } */