/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvcrypto0p1 -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvcrypto0p1 -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

vuint64m1_t test0_vmacc54h_vs(vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vmacc54h_vs(vd, vs2, vs1, vl);}
vuint64m1_t test1_vmacc54h_vs_tu(vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_tu(vd, vs2, vs1, vl);}
vuint64m1_t test2_vmacc54h_vs_m(vbool64_t mask, vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vmacc54h_vs(mask, vd, vs2, vs1, vl);}
vuint64m1_t test3_vmacc54h_vs_mu(vbool64_t mask, vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_mu(mask, vd, vs2, vs1, vl);}
vuint64m1_t test4_vmacc54h_vs_tum(vbool64_t mask, vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_tum(mask, vd, vs2, vs1, vl);}
vuint64m1_t test5_vmacc54h_vs_tumu(vbool64_t mask, vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_tumu(mask, vd, vs2, vs1, vl);}
vuint64m2_t test6_vmacc54h_vs(vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vmacc54h_vs(vd, vs2, vs1, vl);}
vuint64m2_t test7_vmacc54h_vs_tu(vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_tu(vd, vs2, vs1, vl);}
vuint64m2_t test8_vmacc54h_vs_m(vbool32_t mask, vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vmacc54h_vs(mask, vd, vs2, vs1, vl);}
vuint64m2_t test9_vmacc54h_vs_mu(vbool32_t mask, vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_mu(mask, vd, vs2, vs1, vl);}
vuint64m2_t test10_vmacc54h_vs_tum(vbool32_t mask, vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_tum(mask, vd, vs2, vs1, vl);}
vuint64m2_t test11_vmacc54h_vs_tumu(vbool32_t mask, vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_tumu(mask, vd, vs2, vs1, vl);}
vuint64m4_t test12_vmacc54h_vs(vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vmacc54h_vs(vd, vs2, vs1, vl);}
vuint64m4_t test13_vmacc54h_vs_tu(vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_tu(vd, vs2, vs1, vl);}
vuint64m4_t test14_vmacc54h_vs_m(vbool16_t mask, vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vmacc54h_vs(mask, vd, vs2, vs1, vl);}
vuint64m4_t test15_vmacc54h_vs_mu(vbool16_t mask, vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_mu(mask, vd, vs2, vs1, vl);}
vuint64m4_t test16_vmacc54h_vs_tum(vbool16_t mask, vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_tum(mask, vd, vs2, vs1, vl);}
vuint64m4_t test17_vmacc54h_vs_tumu(vbool16_t mask, vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_tumu(mask, vd, vs2, vs1, vl);}
vuint64m8_t test18_vmacc54h_vs(vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vmacc54h_vs(vd, vs2, vs1, vl);}
vuint64m8_t test19_vmacc54h_vs_tu(vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_tu(vd, vs2, vs1, vl);}
vuint64m8_t test20_vmacc54h_vs_m(vbool8_t mask, vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vmacc54h_vs(mask, vd, vs2, vs1, vl);}
vuint64m8_t test21_vmacc54h_vs_mu(vbool8_t mask, vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_mu(mask, vd, vs2, vs1, vl);}
vuint64m8_t test22_vmacc54h_vs_tum(vbool8_t mask, vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_tum(mask, vd, vs2, vs1, vl);}
vuint64m8_t test23_vmacc54h_vs_tumu(vbool8_t mask, vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_tumu(mask, vd, vs2, vs1, vl);}

/* { dg-final { scan-assembler-times "th\\.vmacc54h\\.vs\t" 24 } } */