/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvsfb -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvsfb -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

vfloat32mf2_t test0__riscv_th_vfsin(vfloat32mf2_t vs2, size_t vl){return __riscv_th_vfsin(vs2, vl);}
vfloat32mf2_t test1__riscv_th_vfsin(vfloat32mf2_t vd, vfloat32mf2_t vs2, size_t vl){return __riscv_th_vfsin_tu(vd, vs2, vl);}
vfloat32mf2_t test2__riscv_th_vfsin(vbool64_t vm, vfloat32mf2_t vs2, size_t vl){return __riscv_th_vfsin(vm, vs2, vl);}
vfloat32mf2_t test3__riscv_th_vfsin(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, size_t vl){return __riscv_th_vfsin_mu(vm, vd, vs2, vl);}
vfloat32mf2_t test4__riscv_th_vfsin(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, size_t vl){return __riscv_th_vfsin_tum(vm, vd, vs2, vl);}
vfloat32mf2_t test5__riscv_th_vfsin(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, size_t vl){return __riscv_th_vfsin_tumu(vm, vd, vs2, vl);}

vfloat32m1_t test6__riscv_th_vfsin(vfloat32m1_t vs2, size_t vl){return __riscv_th_vfsin(vs2, vl);}
vfloat32m1_t test7__riscv_th_vfsin(vfloat32m1_t vd, vfloat32m1_t vs2, size_t vl){return __riscv_th_vfsin_tu(vd, vs2, vl);}
vfloat32m1_t test8__riscv_th_vfsin(vbool32_t vm, vfloat32m1_t vs2, size_t vl){return __riscv_th_vfsin(vm, vs2, vl);}
vfloat32m1_t test9__riscv_th_vfsin(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, size_t vl){return __riscv_th_vfsin_mu(vm, vd, vs2, vl);}
vfloat32m1_t test10__riscv_th_vfsin(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, size_t vl){return __riscv_th_vfsin_tum(vm, vd, vs2, vl);}
vfloat32m1_t test11__riscv_th_vfsin(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, size_t vl){return __riscv_th_vfsin_tumu(vm, vd, vs2, vl);}

vfloat32m2_t test12__riscv_th_vfsin(vfloat32m2_t vs2, size_t vl){return __riscv_th_vfsin(vs2, vl);}
vfloat32m2_t test13__riscv_th_vfsin(vfloat32m2_t vd, vfloat32m2_t vs2, size_t vl){return __riscv_th_vfsin_tu(vd, vs2, vl);}
vfloat32m2_t test14__riscv_th_vfsin(vbool16_t vm, vfloat32m2_t vs2, size_t vl){return __riscv_th_vfsin(vm, vs2, vl);}
vfloat32m2_t test15__riscv_th_vfsin(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, size_t vl){return __riscv_th_vfsin_mu(vm, vd, vs2, vl);}
vfloat32m2_t test16__riscv_th_vfsin(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, size_t vl){return __riscv_th_vfsin_tum(vm, vd, vs2, vl);}
vfloat32m2_t test17__riscv_th_vfsin(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, size_t vl){return __riscv_th_vfsin_tumu(vm, vd, vs2, vl);}

vfloat32m4_t test18__riscv_th_vfsin(vfloat32m4_t vs2, size_t vl){return __riscv_th_vfsin(vs2, vl);}
vfloat32m4_t test19__riscv_th_vfsin(vfloat32m4_t vd, vfloat32m4_t vs2, size_t vl){return __riscv_th_vfsin_tu(vd, vs2, vl);}
vfloat32m4_t test20__riscv_th_vfsin(vbool8_t vm, vfloat32m4_t vs2, size_t vl){return __riscv_th_vfsin(vm, vs2, vl);}
vfloat32m4_t test21__riscv_th_vfsin(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, size_t vl){return __riscv_th_vfsin_mu(vm, vd, vs2, vl);}
vfloat32m4_t test22__riscv_th_vfsin(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, size_t vl){return __riscv_th_vfsin_tum(vm, vd, vs2, vl);}
vfloat32m4_t test23__riscv_th_vfsin(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, size_t vl){return __riscv_th_vfsin_tumu(vm, vd, vs2, vl);}

vfloat32m8_t test24__riscv_th_vfsin(vfloat32m8_t vs2, size_t vl){return __riscv_th_vfsin(vs2, vl);}
vfloat32m8_t test25__riscv_th_vfsin(vfloat32m8_t vd, vfloat32m8_t vs2, size_t vl){return __riscv_th_vfsin_tu(vd, vs2, vl);}
vfloat32m8_t test26__riscv_th_vfsin(vbool4_t vm, vfloat32m8_t vs2, size_t vl){return __riscv_th_vfsin(vm, vs2, vl);}
vfloat32m8_t test27__riscv_th_vfsin(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, size_t vl){return __riscv_th_vfsin_mu(vm, vd, vs2, vl);}
vfloat32m8_t test28__riscv_th_vfsin(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, size_t vl){return __riscv_th_vfsin_tum(vm, vd, vs2, vl);}
vfloat32m8_t test29__riscv_th_vfsin(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, size_t vl){return __riscv_th_vfsin_tumu(vm, vd, vs2, vl);}

vfloat32mf2_t test30__riscv_th_vfsin(vfloat32mf2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin(vs2, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test31__riscv_th_vfsin(vfloat32mf2_t vd, vfloat32mf2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_tu(vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test32__riscv_th_vfsin(vbool64_t vm, vfloat32mf2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin(vm, vs2, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test33__riscv_th_vfsin(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_mu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test34__riscv_th_vfsin(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_tum(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test35__riscv_th_vfsin(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_tumu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}

vfloat32m1_t test36__riscv_th_vfsin(vfloat32m1_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin(vs2, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test37__riscv_th_vfsin(vfloat32m1_t vd, vfloat32m1_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_tu(vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test38__riscv_th_vfsin(vbool32_t vm, vfloat32m1_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin(vm, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test39__riscv_th_vfsin(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_mu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test40__riscv_th_vfsin(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_tum(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test41__riscv_th_vfsin(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_tumu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}

vfloat32m2_t test42__riscv_th_vfsin(vfloat32m2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin(vs2, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test43__riscv_th_vfsin(vfloat32m2_t vd, vfloat32m2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_tu(vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test44__riscv_th_vfsin(vbool16_t vm, vfloat32m2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin(vm, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test45__riscv_th_vfsin(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_mu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test46__riscv_th_vfsin(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_tum(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test47__riscv_th_vfsin(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_tumu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}

vfloat32m4_t test48__riscv_th_vfsin(vfloat32m4_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin(vs2, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test49__riscv_th_vfsin(vfloat32m4_t vd, vfloat32m4_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_tu(vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test50__riscv_th_vfsin(vbool8_t vm, vfloat32m4_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin(vm, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test51__riscv_th_vfsin(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_mu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test52__riscv_th_vfsin(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_tum(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test53__riscv_th_vfsin(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_tumu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}

vfloat32m8_t test54__riscv_th_vfsin(vfloat32m8_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin(vs2, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test55__riscv_th_vfsin(vfloat32m8_t vd, vfloat32m8_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_tu(vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test56__riscv_th_vfsin(vbool4_t vm, vfloat32m8_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin(vm, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test57__riscv_th_vfsin(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_mu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test58__riscv_th_vfsin(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_tum(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test59__riscv_th_vfsin(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfsin_tumu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}

/* { dg-final { scan-assembler-times "th\\.vfsin\\.v\t" 60 } } */
