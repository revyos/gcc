/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvcrypto0p1 -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvcrypto0p1 -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

vuint64m1_t test_vmacc54h_vs_u64m1(vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m1(vd, vs2, vs1, vl);}
vuint64m1_t test_vmacc54h_vs_u64m1_tu(vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m1_tu(vd, vs2, vs1, vl);}
vuint64m1_t test_vmacc54h_vs_u64m1_m(vbool64_t mask, vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m1_m(mask, vd, vs2, vs1, vl);}
vuint64m1_t test_vmacc54h_vs_u64m1_mu(vbool64_t mask, vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m1_mu(mask, vd, vs2, vs1, vl);}
vuint64m1_t test_vmacc54h_vs_u64m1_tum(vbool64_t mask, vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m1_tum(mask, vd, vs2, vs1, vl);}
vuint64m1_t test_vmacc54h_vs_u64m1_tumu(vbool64_t mask, vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m1_tumu(mask, vd, vs2, vs1, vl);}
vuint64m2_t test_vmacc54h_vs_u64m2(vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m2(vd, vs2, vs1, vl);}
vuint64m2_t test_vmacc54h_vs_u64m2_tu(vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m2_tu(vd, vs2, vs1, vl);}
vuint64m2_t test_vmacc54h_vs_u64m2_m(vbool32_t mask, vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m2_m(mask, vd, vs2, vs1, vl);}
vuint64m2_t test_vmacc54h_vs_u64m2_mu(vbool32_t mask, vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m2_mu(mask, vd, vs2, vs1, vl);}
vuint64m2_t test_vmacc54h_vs_u64m2_tum(vbool32_t mask, vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m2_tum(mask, vd, vs2, vs1, vl);}
vuint64m2_t test_vmacc54h_vs_u64m2_tumu(vbool32_t mask, vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m2_tumu(mask, vd, vs2, vs1, vl);}
vuint64m4_t test_vmacc54h_vs_u64m4(vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m4(vd, vs2, vs1, vl);}
vuint64m4_t test_vmacc54h_vs_u64m4_tu(vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m4_tu(vd, vs2, vs1, vl);}
vuint64m4_t test_vmacc54h_vs_u64m4_m(vbool16_t mask, vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m4_m(mask, vd, vs2, vs1, vl);}
vuint64m4_t test_vmacc54h_vs_u64m4_mu(vbool16_t mask, vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m4_mu(mask, vd, vs2, vs1, vl);}
vuint64m4_t test_vmacc54h_vs_u64m4_tum(vbool16_t mask, vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m4_tum(mask, vd, vs2, vs1, vl);}
vuint64m4_t test_vmacc54h_vs_u64m4_tumu(vbool16_t mask, vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m4_tumu(mask, vd, vs2, vs1, vl);}
vuint64m8_t test_vmacc54h_vs_u64m8(vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m8(vd, vs2, vs1, vl);}
vuint64m8_t test_vmacc54h_vs_u64m8_tu(vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m8_tu(vd, vs2, vs1, vl);}
vuint64m8_t test_vmacc54h_vs_u64m8_m(vbool8_t mask, vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m8_m(mask, vd, vs2, vs1, vl);}
vuint64m8_t test_vmacc54h_vs_u64m8_mu(vbool8_t mask, vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m8_mu(mask, vd, vs2, vs1, vl);}
vuint64m8_t test_vmacc54h_vs_u64m8_tum(vbool8_t mask, vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m8_tum(mask, vd, vs2, vs1, vl);}
vuint64m8_t test_vmacc54h_vs_u64m8_tumu(vbool8_t mask, vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl){return __riscv_th_vmacc54h_vs_u64m8_tumu(mask, vd, vs2, vs1, vl);}

/* { dg-final { scan-assembler-times "th\\.vmacc54h\\.vs\t" 24 } } */