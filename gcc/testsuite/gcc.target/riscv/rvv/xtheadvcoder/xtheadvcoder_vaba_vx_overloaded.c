/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvcoder0p1 -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvcoder0p1 -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

vuint8mf8_t test0_vaba(vuint8mf8_t vd, vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint8mf8_t test1_vaba_tu(vuint8mf8_t vd, vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint8mf8_t test2_vaba(vbool64_t mask, vuint8mf8_t vd, vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint8mf8_t test3_vaba_mu(vbool64_t mask, vuint8mf8_t vd, vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint8mf8_t test4_vaba_tum(vbool64_t mask, vuint8mf8_t vd, vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint8mf8_t test5_vaba_tumu(vbool64_t mask, vuint8mf8_t vd, vint8mf8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint8mf4_t test6_vaba(vuint8mf4_t vd, vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint8mf4_t test7_vaba_tu(vuint8mf4_t vd, vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint8mf4_t test8_vaba(vbool32_t mask, vuint8mf4_t vd, vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint8mf4_t test9_vaba_mu(vbool32_t mask, vuint8mf4_t vd, vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint8mf4_t test10_vaba_tum(vbool32_t mask, vuint8mf4_t vd, vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint8mf4_t test11_vaba_tumu(vbool32_t mask, vuint8mf4_t vd, vint8mf4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint8mf2_t test12_vaba(vuint8mf2_t vd, vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint8mf2_t test13_vaba_tu(vuint8mf2_t vd, vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint8mf2_t test14_vaba(vbool16_t mask, vuint8mf2_t vd, vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint8mf2_t test15_vaba_mu(vbool16_t mask, vuint8mf2_t vd, vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint8mf2_t test16_vaba_tum(vbool16_t mask, vuint8mf2_t vd, vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint8mf2_t test17_vaba_tumu(vbool16_t mask, vuint8mf2_t vd, vint8mf2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint8m1_t test18_vaba(vuint8m1_t vd, vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint8m1_t test19_vaba_tu(vuint8m1_t vd, vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint8m1_t test20_vaba(vbool8_t mask, vuint8m1_t vd, vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint8m1_t test21_vaba_mu(vbool8_t mask, vuint8m1_t vd, vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint8m1_t test22_vaba_tum(vbool8_t mask, vuint8m1_t vd, vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint8m1_t test23_vaba_tumu(vbool8_t mask, vuint8m1_t vd, vint8m1_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint8m2_t test24_vaba(vuint8m2_t vd, vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint8m2_t test25_vaba_tu(vuint8m2_t vd, vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint8m2_t test26_vaba(vbool4_t mask, vuint8m2_t vd, vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint8m2_t test27_vaba_mu(vbool4_t mask, vuint8m2_t vd, vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint8m2_t test28_vaba_tum(vbool4_t mask, vuint8m2_t vd, vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint8m2_t test29_vaba_tumu(vbool4_t mask, vuint8m2_t vd, vint8m2_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint8m4_t test30_vaba(vuint8m4_t vd, vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint8m4_t test31_vaba_tu(vuint8m4_t vd, vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint8m4_t test32_vaba(vbool2_t mask, vuint8m4_t vd, vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint8m4_t test33_vaba_mu(vbool2_t mask, vuint8m4_t vd, vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint8m4_t test34_vaba_tum(vbool2_t mask, vuint8m4_t vd, vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint8m4_t test35_vaba_tumu(vbool2_t mask, vuint8m4_t vd, vint8m4_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint8m8_t test36_vaba(vuint8m8_t vd, vint8m8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint8m8_t test37_vaba_tu(vuint8m8_t vd, vint8m8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint8m8_t test38_vaba(vbool1_t mask, vuint8m8_t vd, vint8m8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint8m8_t test39_vaba_mu(vbool1_t mask, vuint8m8_t vd, vint8m8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint8m8_t test40_vaba_tum(vbool1_t mask, vuint8m8_t vd, vint8m8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint8m8_t test41_vaba_tumu(vbool1_t mask, vuint8m8_t vd, vint8m8_t vs2, int8_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}

vuint16mf4_t test85_vaba(vuint16mf4_t vd, vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint16mf4_t test86_vaba_tu(vuint16mf4_t vd, vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint16mf4_t test87_vaba(vbool64_t mask, vuint16mf4_t vd, vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint16mf4_t test88_vaba_mu(vbool64_t mask, vuint16mf4_t vd, vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint16mf4_t test89_vaba_tum(vbool64_t mask, vuint16mf4_t vd, vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint16mf4_t test90_vaba_tumu(vbool64_t mask, vuint16mf4_t vd, vint16mf4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test91_vaba(vuint16mf2_t vd, vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint16mf2_t test92_vaba_tu(vuint16mf2_t vd, vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint16mf2_t test93_vaba(vbool32_t mask, vuint16mf2_t vd, vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test94_vaba_mu(vbool32_t mask, vuint16mf2_t vd, vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test95_vaba_tum(vbool32_t mask, vuint16mf2_t vd, vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test96_vaba_tumu(vbool32_t mask, vuint16mf2_t vd, vint16mf2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint16m1_t test97_vaba(vuint16m1_t vd, vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint16m1_t test98_vaba_tu(vuint16m1_t vd, vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint16m1_t test99_vaba(vbool16_t mask, vuint16m1_t vd, vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint16m1_t test100_vaba_mu(vbool16_t mask, vuint16m1_t vd, vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint16m1_t test101_vaba_tum(vbool16_t mask, vuint16m1_t vd, vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint16m1_t test102_vaba_tumu(vbool16_t mask, vuint16m1_t vd, vint16m1_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint16m2_t test103_vaba(vuint16m2_t vd, vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint16m2_t test104_vaba_tu(vuint16m2_t vd, vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint16m2_t test105_vaba(vbool8_t mask, vuint16m2_t vd, vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint16m2_t test106_vaba_mu(vbool8_t mask, vuint16m2_t vd, vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint16m2_t test107_vaba_tum(vbool8_t mask, vuint16m2_t vd, vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint16m2_t test108_vaba_tumu(vbool8_t mask, vuint16m2_t vd, vint16m2_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint16m4_t test109_vaba(vuint16m4_t vd, vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint16m4_t test110_vaba_tu(vuint16m4_t vd, vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint16m4_t test111_vaba(vbool4_t mask, vuint16m4_t vd, vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint16m4_t test112_vaba_mu(vbool4_t mask, vuint16m4_t vd, vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint16m4_t test113_vaba_tum(vbool4_t mask, vuint16m4_t vd, vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint16m4_t test114_vaba_tumu(vbool4_t mask, vuint16m4_t vd, vint16m4_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint16m8_t test115_vaba(vuint16m8_t vd, vint16m8_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint16m8_t test116_vaba_tu(vuint16m8_t vd, vint16m8_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint16m8_t test117_vaba(vbool2_t mask, vuint16m8_t vd, vint16m8_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint16m8_t test118_vaba_mu(vbool2_t mask, vuint16m8_t vd, vint16m8_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint16m8_t test119_vaba_tum(vbool2_t mask, vuint16m8_t vd, vint16m8_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint16m8_t test120_vaba_tumu(vbool2_t mask, vuint16m8_t vd, vint16m8_t vs2, int16_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}

vuint32mf2_t test158_vaba(vuint32mf2_t vd, vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint32mf2_t test159_vaba_tu(vuint32mf2_t vd, vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint32mf2_t test160_vaba(vbool64_t mask, vuint32mf2_t vd, vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint32mf2_t test161_vaba_mu(vbool64_t mask, vuint32mf2_t vd, vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint32mf2_t test162_vaba_tum(vbool64_t mask, vuint32mf2_t vd, vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint32mf2_t test163_vaba_tumu(vbool64_t mask, vuint32mf2_t vd, vint32mf2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint32m1_t test164_vaba(vuint32m1_t vd, vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint32m1_t test165_vaba_tu(vuint32m1_t vd, vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint32m1_t test166_vaba(vbool32_t mask, vuint32m1_t vd, vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint32m1_t test167_vaba_mu(vbool32_t mask, vuint32m1_t vd, vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint32m1_t test168_vaba_tum(vbool32_t mask, vuint32m1_t vd, vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint32m1_t test169_vaba_tumu(vbool32_t mask, vuint32m1_t vd, vint32m1_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint32m2_t test170_vaba(vuint32m2_t vd, vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint32m2_t test171_vaba_tu(vuint32m2_t vd, vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint32m2_t test172_vaba(vbool16_t mask, vuint32m2_t vd, vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint32m2_t test173_vaba_mu(vbool16_t mask, vuint32m2_t vd, vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint32m2_t test174_vaba_tum(vbool16_t mask, vuint32m2_t vd, vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint32m2_t test175_vaba_tumu(vbool16_t mask, vuint32m2_t vd, vint32m2_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint32m4_t test176_vaba(vuint32m4_t vd, vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint32m4_t test177_vaba_tu(vuint32m4_t vd, vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint32m4_t test178_vaba(vbool8_t mask, vuint32m4_t vd, vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint32m4_t test179_vaba_mu(vbool8_t mask, vuint32m4_t vd, vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint32m4_t test180_vaba_tum(vbool8_t mask, vuint32m4_t vd, vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint32m4_t test181_vaba_tumu(vbool8_t mask, vuint32m4_t vd, vint32m4_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint32m8_t test182_vaba(vuint32m8_t vd, vint32m8_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint32m8_t test183_vaba_tu(vuint32m8_t vd, vint32m8_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint32m8_t test184_vaba(vbool4_t mask, vuint32m8_t vd, vint32m8_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint32m8_t test185_vaba_mu(vbool4_t mask, vuint32m8_t vd, vint32m8_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint32m8_t test186_vaba_tum(vbool4_t mask, vuint32m8_t vd, vint32m8_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint32m8_t test187_vaba_tumu(vbool4_t mask, vuint32m8_t vd, vint32m8_t vs2, int32_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}

vuint64m1_t test219_vaba(vuint64m1_t vd, vint64m1_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint64m1_t test220_vaba_tu(vuint64m1_t vd, vint64m1_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint64m1_t test221_vaba(vbool64_t mask, vuint64m1_t vd, vint64m1_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint64m1_t test222_vaba_mu(vbool64_t mask, vuint64m1_t vd, vint64m1_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint64m1_t test223_vaba_tum(vbool64_t mask, vuint64m1_t vd, vint64m1_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint64m1_t test224_vaba_tumu(vbool64_t mask, vuint64m1_t vd, vint64m1_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint64m2_t test225_vaba(vuint64m2_t vd, vint64m2_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint64m2_t test226_vaba_tu(vuint64m2_t vd, vint64m2_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint64m2_t test227_vaba(vbool32_t mask, vuint64m2_t vd, vint64m2_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint64m2_t test228_vaba_mu(vbool32_t mask, vuint64m2_t vd, vint64m2_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint64m2_t test229_vaba_tum(vbool32_t mask, vuint64m2_t vd, vint64m2_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint64m2_t test230_vaba_tumu(vbool32_t mask, vuint64m2_t vd, vint64m2_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint64m4_t test231_vaba(vuint64m4_t vd, vint64m4_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint64m4_t test232_vaba_tu(vuint64m4_t vd, vint64m4_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint64m4_t test233_vaba(vbool16_t mask, vuint64m4_t vd, vint64m4_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint64m4_t test234_vaba_mu(vbool16_t mask, vuint64m4_t vd, vint64m4_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint64m4_t test235_vaba_tum(vbool16_t mask, vuint64m4_t vd, vint64m4_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint64m4_t test236_vaba_tumu(vbool16_t mask, vuint64m4_t vd, vint64m4_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}
vuint64m8_t test237_vaba(vuint64m8_t vd, vint64m8_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba(vd, vs2, rs1, vl);}
vuint64m8_t test238_vaba_tu(vuint64m8_t vd, vint64m8_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba_tu(vd, vs2, rs1, vl);}
vuint64m8_t test239_vaba(vbool8_t mask, vuint64m8_t vd, vint64m8_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba(mask, vd, vs2, rs1, vl);}
vuint64m8_t test240_vaba_mu(vbool8_t mask, vuint64m8_t vd, vint64m8_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba_mu(mask, vd, vs2, rs1, vl);}
vuint64m8_t test241_vaba_tum(vbool8_t mask, vuint64m8_t vd, vint64m8_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba_tum(mask, vd, vs2, rs1, vl);}
vuint64m8_t test242_vaba_tumu(vbool8_t mask, vuint64m8_t vd, vint64m8_t vs2, int64_t rs1, size_t vl){return __riscv_th_vaba_tumu(mask, vd, vs2, rs1, vl);}

/* { dg-final { scan-assembler-times "th\\.vaba\\.vx\t" 132 } } */