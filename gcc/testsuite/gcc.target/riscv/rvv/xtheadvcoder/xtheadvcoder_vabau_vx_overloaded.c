/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvcoder0p1 -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvcoder0p1 -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

vuint8mf8_t test0_vabau(vuint8mf8_t vd, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint8mf8_t test1_vabau_tu(vuint8mf8_t vd, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint8mf8_t test2_vabau(vbool64_t mask, vuint8mf8_t vd, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint8mf8_t test3_vabau_mu(vbool64_t mask, vuint8mf8_t vd, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint8mf8_t test4_vabau_tum(vbool64_t mask, vuint8mf8_t vd, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint8mf8_t test5_vabau_tumu(vbool64_t mask, vuint8mf8_t vd, vuint8mf8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint8mf4_t test6_vabau(vuint8mf4_t vd, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint8mf4_t test7_vabau_tu(vuint8mf4_t vd, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint8mf4_t test8_vabau(vbool32_t mask, vuint8mf4_t vd, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint8mf4_t test9_vabau_mu(vbool32_t mask, vuint8mf4_t vd, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint8mf4_t test10_vabau_tum(vbool32_t mask, vuint8mf4_t vd, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint8mf4_t test11_vabau_tumu(vbool32_t mask, vuint8mf4_t vd, vuint8mf4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint8mf2_t test12_vabau(vuint8mf2_t vd, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint8mf2_t test13_vabau_tu(vuint8mf2_t vd, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint8mf2_t test14_vabau(vbool16_t mask, vuint8mf2_t vd, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint8mf2_t test15_vabau_mu(vbool16_t mask, vuint8mf2_t vd, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint8mf2_t test16_vabau_tum(vbool16_t mask, vuint8mf2_t vd, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint8mf2_t test17_vabau_tumu(vbool16_t mask, vuint8mf2_t vd, vuint8mf2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint8m1_t test18_vabau(vuint8m1_t vd, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint8m1_t test19_vabau_tu(vuint8m1_t vd, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint8m1_t test20_vabau(vbool8_t mask, vuint8m1_t vd, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint8m1_t test21_vabau_mu(vbool8_t mask, vuint8m1_t vd, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint8m1_t test22_vabau_tum(vbool8_t mask, vuint8m1_t vd, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint8m1_t test23_vabau_tumu(vbool8_t mask, vuint8m1_t vd, vuint8m1_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint8m2_t test24_vabau(vuint8m2_t vd, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint8m2_t test25_vabau_tu(vuint8m2_t vd, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint8m2_t test26_vabau(vbool4_t mask, vuint8m2_t vd, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint8m2_t test27_vabau_mu(vbool4_t mask, vuint8m2_t vd, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint8m2_t test28_vabau_tum(vbool4_t mask, vuint8m2_t vd, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint8m2_t test29_vabau_tumu(vbool4_t mask, vuint8m2_t vd, vuint8m2_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint8m4_t test30_vabau(vuint8m4_t vd, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint8m4_t test31_vabau_tu(vuint8m4_t vd, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint8m4_t test32_vabau(vbool2_t mask, vuint8m4_t vd, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint8m4_t test33_vabau_mu(vbool2_t mask, vuint8m4_t vd, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint8m4_t test34_vabau_tum(vbool2_t mask, vuint8m4_t vd, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint8m4_t test35_vabau_tumu(vbool2_t mask, vuint8m4_t vd, vuint8m4_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint8m8_t test36_vabau(vuint8m8_t vd, vuint8m8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint8m8_t test37_vabau_tu(vuint8m8_t vd, vuint8m8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint8m8_t test38_vabau(vbool1_t mask, vuint8m8_t vd, vuint8m8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint8m8_t test39_vabau_mu(vbool1_t mask, vuint8m8_t vd, vuint8m8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint8m8_t test40_vabau_tum(vbool1_t mask, vuint8m8_t vd, vuint8m8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint8m8_t test41_vabau_tumu(vbool1_t mask, vuint8m8_t vd, vuint8m8_t vs2, uint8_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}

vuint16mf4_t test85_vabau(vuint16mf4_t vd, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint16mf4_t test86_vabau_tu(vuint16mf4_t vd, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint16mf4_t test87_vabau(vbool64_t mask, vuint16mf4_t vd, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint16mf4_t test88_vabau_mu(vbool64_t mask, vuint16mf4_t vd, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint16mf4_t test89_vabau_tum(vbool64_t mask, vuint16mf4_t vd, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint16mf4_t test90_vabau_tumu(vbool64_t mask, vuint16mf4_t vd, vuint16mf4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test91_vabau(vuint16mf2_t vd, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint16mf2_t test92_vabau_tu(vuint16mf2_t vd, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint16mf2_t test93_vabau(vbool32_t mask, vuint16mf2_t vd, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test94_vabau_mu(vbool32_t mask, vuint16mf2_t vd, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test95_vabau_tum(vbool32_t mask, vuint16mf2_t vd, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint16mf2_t test96_vabau_tumu(vbool32_t mask, vuint16mf2_t vd, vuint16mf2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint16m1_t test97_vabau(vuint16m1_t vd, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint16m1_t test98_vabau_tu(vuint16m1_t vd, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint16m1_t test99_vabau(vbool16_t mask, vuint16m1_t vd, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint16m1_t test100_vabau_mu(vbool16_t mask, vuint16m1_t vd, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint16m1_t test101_vabau_tum(vbool16_t mask, vuint16m1_t vd, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint16m1_t test102_vabau_tumu(vbool16_t mask, vuint16m1_t vd, vuint16m1_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint16m2_t test103_vabau(vuint16m2_t vd, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint16m2_t test104_vabau_tu(vuint16m2_t vd, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint16m2_t test105_vabau(vbool8_t mask, vuint16m2_t vd, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint16m2_t test106_vabau_mu(vbool8_t mask, vuint16m2_t vd, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint16m2_t test107_vabau_tum(vbool8_t mask, vuint16m2_t vd, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint16m2_t test108_vabau_tumu(vbool8_t mask, vuint16m2_t vd, vuint16m2_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint16m4_t test109_vabau(vuint16m4_t vd, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint16m4_t test110_vabau_tu(vuint16m4_t vd, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint16m4_t test111_vabau(vbool4_t mask, vuint16m4_t vd, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint16m4_t test112_vabau_mu(vbool4_t mask, vuint16m4_t vd, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint16m4_t test113_vabau_tum(vbool4_t mask, vuint16m4_t vd, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint16m4_t test114_vabau_tumu(vbool4_t mask, vuint16m4_t vd, vuint16m4_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint16m8_t test115_vabau(vuint16m8_t vd, vuint16m8_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint16m8_t test116_vabau_tu(vuint16m8_t vd, vuint16m8_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint16m8_t test117_vabau(vbool2_t mask, vuint16m8_t vd, vuint16m8_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint16m8_t test118_vabau_mu(vbool2_t mask, vuint16m8_t vd, vuint16m8_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint16m8_t test119_vabau_tum(vbool2_t mask, vuint16m8_t vd, vuint16m8_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint16m8_t test120_vabau_tumu(vbool2_t mask, vuint16m8_t vd, vuint16m8_t vs2, uint16_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}

vuint32mf2_t test158_vabau(vuint32mf2_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint32mf2_t test159_vabau_tu(vuint32mf2_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint32mf2_t test160_vabau(vbool64_t mask, vuint32mf2_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint32mf2_t test161_vabau_mu(vbool64_t mask, vuint32mf2_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint32mf2_t test162_vabau_tum(vbool64_t mask, vuint32mf2_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint32mf2_t test163_vabau_tumu(vbool64_t mask, vuint32mf2_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint32m1_t test164_vabau(vuint32m1_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint32m1_t test165_vabau_tu(vuint32m1_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint32m1_t test166_vabau(vbool32_t mask, vuint32m1_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint32m1_t test167_vabau_mu(vbool32_t mask, vuint32m1_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint32m1_t test168_vabau_tum(vbool32_t mask, vuint32m1_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint32m1_t test169_vabau_tumu(vbool32_t mask, vuint32m1_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint32m2_t test170_vabau(vuint32m2_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint32m2_t test171_vabau_tu(vuint32m2_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint32m2_t test172_vabau(vbool16_t mask, vuint32m2_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint32m2_t test173_vabau_mu(vbool16_t mask, vuint32m2_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint32m2_t test174_vabau_tum(vbool16_t mask, vuint32m2_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint32m2_t test175_vabau_tumu(vbool16_t mask, vuint32m2_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint32m4_t test176_vabau(vuint32m4_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint32m4_t test177_vabau_tu(vuint32m4_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint32m4_t test178_vabau(vbool8_t mask, vuint32m4_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint32m4_t test179_vabau_mu(vbool8_t mask, vuint32m4_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint32m4_t test180_vabau_tum(vbool8_t mask, vuint32m4_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint32m4_t test181_vabau_tumu(vbool8_t mask, vuint32m4_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint32m8_t test182_vabau(vuint32m8_t vd, vuint32m8_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint32m8_t test183_vabau_tu(vuint32m8_t vd, vuint32m8_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint32m8_t test184_vabau(vbool4_t mask, vuint32m8_t vd, vuint32m8_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint32m8_t test185_vabau_mu(vbool4_t mask, vuint32m8_t vd, vuint32m8_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint32m8_t test186_vabau_tum(vbool4_t mask, vuint32m8_t vd, vuint32m8_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint32m8_t test187_vabau_tumu(vbool4_t mask, vuint32m8_t vd, vuint32m8_t vs2, uint32_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}

vuint64m1_t test219_vabau(vuint64m1_t vd, vuint64m1_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint64m1_t test220_vabau_tu(vuint64m1_t vd, vuint64m1_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint64m1_t test221_vabau(vbool64_t mask, vuint64m1_t vd, vuint64m1_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint64m1_t test222_vabau_mu(vbool64_t mask, vuint64m1_t vd, vuint64m1_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint64m1_t test223_vabau_tum(vbool64_t mask, vuint64m1_t vd, vuint64m1_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint64m1_t test224_vabau_tumu(vbool64_t mask, vuint64m1_t vd, vuint64m1_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint64m2_t test225_vabau(vuint64m2_t vd, vuint64m2_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint64m2_t test226_vabau_tu(vuint64m2_t vd, vuint64m2_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint64m2_t test227_vabau(vbool32_t mask, vuint64m2_t vd, vuint64m2_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint64m2_t test228_vabau_mu(vbool32_t mask, vuint64m2_t vd, vuint64m2_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint64m2_t test229_vabau_tum(vbool32_t mask, vuint64m2_t vd, vuint64m2_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint64m2_t test230_vabau_tumu(vbool32_t mask, vuint64m2_t vd, vuint64m2_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint64m4_t test231_vabau(vuint64m4_t vd, vuint64m4_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint64m4_t test232_vabau_tu(vuint64m4_t vd, vuint64m4_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint64m4_t test233_vabau(vbool16_t mask, vuint64m4_t vd, vuint64m4_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint64m4_t test234_vabau_mu(vbool16_t mask, vuint64m4_t vd, vuint64m4_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint64m4_t test235_vabau_tum(vbool16_t mask, vuint64m4_t vd, vuint64m4_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint64m4_t test236_vabau_tumu(vbool16_t mask, vuint64m4_t vd, vuint64m4_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}
vuint64m8_t test237_vabau(vuint64m8_t vd, vuint64m8_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau(vd, vs2, rs1, vl);}
vuint64m8_t test238_vabau_tu(vuint64m8_t vd, vuint64m8_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau_tu(vd, vs2, rs1, vl);}
vuint64m8_t test239_vabau(vbool8_t mask, vuint64m8_t vd, vuint64m8_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau(mask, vd, vs2, rs1, vl);}
vuint64m8_t test240_vabau_mu(vbool8_t mask, vuint64m8_t vd, vuint64m8_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau_mu(mask, vd, vs2, rs1, vl);}
vuint64m8_t test241_vabau_tum(vbool8_t mask, vuint64m8_t vd, vuint64m8_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau_tum(mask, vd, vs2, rs1, vl);}
vuint64m8_t test242_vabau_tumu(vbool8_t mask, vuint64m8_t vd, vuint64m8_t vs2, uint64_t rs1, size_t vl){return __riscv_th_vabau_tumu(mask, vd, vs2, rs1, vl);}

/* { dg-final { scan-assembler-times "th\\.vabau\\.vx\t" 132 } } */