/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvsfa -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvsfa -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>
vfloat32mf2_t test__riscv_th_vfrec_v_f32mf2(vfloat32mf2_t vs2, size_t vl){return __riscv_th_vfrec_v_f32mf2(vs2, vl);}
vfloat32mf2_t test__riscv_th_vfrec_v_f32mf2_tu(vfloat32mf2_t vd, vfloat32mf2_t vs2, size_t vl){return __riscv_th_vfrec_v_f32mf2_tu(vd, vs2, vl);}
vfloat32mf2_t test__riscv_th_vfrec_v_f32mf2_m(vbool64_t vm, vfloat32mf2_t vs2, size_t vl){return __riscv_th_vfrec_v_f32mf2_m(vm, vs2, vl);}
vfloat32mf2_t test__riscv_th_vfrec_v_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, size_t vl){return __riscv_th_vfrec_v_f32mf2_mu(vm, vd, vs2, vl);}
vfloat32mf2_t test__riscv_th_vfrec_v_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, size_t vl){return __riscv_th_vfrec_v_f32mf2_tum(vm, vd, vs2, vl);}
vfloat32mf2_t test__riscv_th_vfrec_v_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, size_t vl){return __riscv_th_vfrec_v_f32mf2_tumu(vm, vd, vs2, vl);}

vfloat32m1_t test__riscv_th_vfrec_v_f32m1(vfloat32m1_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m1(vs2, vl);}
vfloat32m1_t test__riscv_th_vfrec_v_f32m1_tu(vfloat32m1_t vd, vfloat32m1_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m1_tu(vd, vs2, vl);}
vfloat32m1_t test__riscv_th_vfrec_v_f32m1_m(vbool32_t vm, vfloat32m1_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m1_m(vm, vs2, vl);}
vfloat32m1_t test__riscv_th_vfrec_v_f32m1_mu(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m1_mu(vm, vd, vs2, vl);}
vfloat32m1_t test__riscv_th_vfrec_v_f32m1_tum(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m1_tum(vm, vd, vs2, vl);}
vfloat32m1_t test__riscv_th_vfrec_v_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m1_tumu(vm, vd, vs2, vl);}

vfloat32m2_t test__riscv_th_vfrec_v_f32m2(vfloat32m2_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m2(vs2, vl);}
vfloat32m2_t test__riscv_th_vfrec_v_f32m2_tu(vfloat32m2_t vd, vfloat32m2_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m2_tu(vd, vs2, vl);}
vfloat32m2_t test__riscv_th_vfrec_v_f32m2_m(vbool16_t vm, vfloat32m2_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m2_m(vm, vs2, vl);}
vfloat32m2_t test__riscv_th_vfrec_v_f32m2_mu(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m2_mu(vm, vd, vs2, vl);}
vfloat32m2_t test__riscv_th_vfrec_v_f32m2_tum(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m2_tum(vm, vd, vs2, vl);}
vfloat32m2_t test__riscv_th_vfrec_v_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m2_tumu(vm, vd, vs2, vl);}

vfloat32m4_t test__riscv_th_vfrec_v_f32m4(vfloat32m4_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m4(vs2, vl);}
vfloat32m4_t test__riscv_th_vfrec_v_f32m4_tu(vfloat32m4_t vd, vfloat32m4_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m4_tu(vd, vs2, vl);}
vfloat32m4_t test__riscv_th_vfrec_v_f32m4_m(vbool8_t vm, vfloat32m4_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m4_m(vm, vs2, vl);}
vfloat32m4_t test__riscv_th_vfrec_v_f32m4_mu(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m4_mu(vm, vd, vs2, vl);}
vfloat32m4_t test__riscv_th_vfrec_v_f32m4_tum(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m4_tum(vm, vd, vs2, vl);}
vfloat32m4_t test__riscv_th_vfrec_v_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m4_tumu(vm, vd, vs2, vl);}

vfloat32m8_t test__riscv_th_vfrec_v_f32m8(vfloat32m8_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m8(vs2, vl);}
vfloat32m8_t test__riscv_th_vfrec_v_f32m8_tu(vfloat32m8_t vd, vfloat32m8_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m8_tu(vd, vs2, vl);}
vfloat32m8_t test__riscv_th_vfrec_v_f32m8_m(vbool4_t vm, vfloat32m8_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m8_m(vm, vs2, vl);}
vfloat32m8_t test__riscv_th_vfrec_v_f32m8_mu(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m8_mu(vm, vd, vs2, vl);}
vfloat32m8_t test__riscv_th_vfrec_v_f32m8_tum(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m8_tum(vm, vd, vs2, vl);}
vfloat32m8_t test__riscv_th_vfrec_v_f32m8_tumu(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, size_t vl){return __riscv_th_vfrec_v_f32m8_tumu(vm, vd, vs2, vl);}

vfloat32mf2_t test__riscv_th_vfrec_v_f32mf2_rm(vfloat32mf2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32mf2_rm(vs2, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test__riscv_th_vfrec_v_f32mf2_rm_tu(vfloat32mf2_t vd, vfloat32mf2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32mf2_rm_tu(vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test__riscv_th_vfrec_v_f32mf2_rm_m(vbool64_t vm, vfloat32mf2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32mf2_rm_m(vm, vs2, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test__riscv_th_vfrec_v_f32mf2_rm_mu(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32mf2_rm_mu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test__riscv_th_vfrec_v_f32mf2_rm_tum(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32mf2_rm_tum(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32mf2_t test__riscv_th_vfrec_v_f32mf2_rm_tumu(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32mf2_rm_tumu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}

vfloat32m1_t test__riscv_th_vfrec_v_f32m1_rm(vfloat32m1_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m1_rm(vs2, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test__riscv_th_vfrec_v_f32m1_rm_tu(vfloat32m1_t vd, vfloat32m1_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m1_rm_tu(vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test__riscv_th_vfrec_v_f32m1_rm_m(vbool32_t vm, vfloat32m1_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m1_rm_m(vm, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test__riscv_th_vfrec_v_f32m1_rm_mu(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m1_rm_mu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test__riscv_th_vfrec_v_f32m1_rm_tum(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m1_rm_tum(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m1_t test__riscv_th_vfrec_v_f32m1_rm_tumu(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m1_rm_tumu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}

vfloat32m2_t test__riscv_th_vfrec_v_f32m2_rm(vfloat32m2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m2_rm(vs2, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test__riscv_th_vfrec_v_f32m2_rm_tu(vfloat32m2_t vd, vfloat32m2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m2_rm_tu(vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test__riscv_th_vfrec_v_f32m2_rm_m(vbool16_t vm, vfloat32m2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m2_rm_m(vm, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test__riscv_th_vfrec_v_f32m2_rm_mu(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m2_rm_mu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test__riscv_th_vfrec_v_f32m2_rm_tum(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m2_rm_tum(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m2_t test__riscv_th_vfrec_v_f32m2_rm_tumu(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m2_rm_tumu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}

vfloat32m4_t test__riscv_th_vfrec_v_f32m4_rm(vfloat32m4_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m4_rm(vs2, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test__riscv_th_vfrec_v_f32m4_rm_tu(vfloat32m4_t vd, vfloat32m4_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m4_rm_tu(vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test__riscv_th_vfrec_v_f32m4_rm_m(vbool8_t vm, vfloat32m4_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m4_rm_m(vm, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test__riscv_th_vfrec_v_f32m4_rm_mu(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m4_rm_mu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test__riscv_th_vfrec_v_f32m4_rm_tum(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m4_rm_tum(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m4_t test__riscv_th_vfrec_v_f32m4_rm_tumu(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m4_rm_tumu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}

vfloat32m8_t test__riscv_th_vfrec_v_f32m8_rm(vfloat32m8_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m8_rm(vs2, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test__riscv_th_vfrec_v_f32m8_rm_tu(vfloat32m8_t vd, vfloat32m8_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m8_rm_tu(vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test__riscv_th_vfrec_v_f32m8_rm_m(vbool4_t vm, vfloat32m8_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m8_rm_m(vm, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test__riscv_th_vfrec_v_f32m8_rm_mu(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m8_rm_mu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test__riscv_th_vfrec_v_f32m8_rm_tum(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m8_rm_tum(vm, vd, vs2, __RISCV_FRM_RDN, vl);}
vfloat32m8_t test__riscv_th_vfrec_v_f32m8_rm_tumu(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, unsigned int frm, size_t vl){return __riscv_th_vfrec_v_f32m8_rm_tumu(vm, vd, vs2, __RISCV_FRM_RDN, vl);}

/* { dg-final { scan-assembler-times "th\\.vfrec\\.v\t" 60 } } */
