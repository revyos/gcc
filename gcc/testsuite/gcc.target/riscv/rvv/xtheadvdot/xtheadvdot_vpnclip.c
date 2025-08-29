/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_xtheadvdot -mabi=ilp32d" { target { rv32 } } } */
/* { dg-options "-march=rv64gcv_xtheadvdot -mabi=lp64d" { target { rv64 } } } */

#include <riscv_vector.h>

vint8m1_t test_vpnclip_wv_i8m1 (vint16m2_t op1, vuint8m1_t shift, size_t vl) { return __riscv_th_vpnclip_wv_i8m1 (op1, shift, vl); }
vint8m2_t test_vpnclip_wv_i8m2 (vint16m4_t op1, vuint8m2_t shift, size_t vl) { return __riscv_th_vpnclip_wv_i8m2 (op1, shift, vl); }
vint8m4_t test_vpnclip_wv_i8m4 (vint16m8_t op1, vuint8m4_t shift, size_t vl) { return __riscv_th_vpnclip_wv_i8m4 (op1, shift, vl); }
vint8mf2_t test_vpnclip_wv_i8mf2 (vint16m1_t op1, vuint8mf2_t shift, size_t vl) { return __riscv_th_vpnclip_wv_i8mf2 (op1, shift, vl); }
vint8mf4_t test_vpnclip_wv_i8mf4 (vint16mf2_t op1, vuint8mf4_t shift, size_t vl) { return __riscv_th_vpnclip_wv_i8mf4 (op1, shift, vl); }
vint8mf8_t test_vpnclip_wv_i8mf8 (vint16mf4_t op1, vuint8mf8_t shift, size_t vl) { return __riscv_th_vpnclip_wv_i8mf8 (op1, shift, vl); }
vint8m1_t test_vpnclip_wx_i8m1 (vint16m2_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclip_wx_i8m1 (op1, shift, vl); }
vint8m2_t test_vpnclip_wx_i8m2 (vint16m4_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclip_wx_i8m2 (op1, shift, vl); }
vint8m4_t test_vpnclip_wx_i8m4 (vint16m8_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclip_wx_i8m4 (op1, shift, vl); }
vint8mf2_t test_vpnclip_wx_i8mf2 (vint16m1_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclip_wx_i8mf2 (op1, shift, vl); }
vint8mf4_t test_vpnclip_wx_i8mf4 (vint16mf2_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclip_wx_i8mf4 (op1, shift, vl); }
vint8mf8_t test_vpnclip_wx_i8mf8 (vint16mf4_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclip_wx_i8mf8 (op1, shift, vl); }
vuint8m1_t test_vpnclipu_wv_u8m1 (vuint16m2_t op1, vuint8m1_t shift, size_t vl) { return __riscv_th_vpnclipu_wv_u8m1 (op1, shift, vl); }
vuint8m2_t test_vpnclipu_wv_u8m2 (vuint16m4_t op1, vuint8m2_t shift, size_t vl) { return __riscv_th_vpnclipu_wv_u8m2 (op1, shift, vl); }
vuint8m4_t test_vpnclipu_wv_u8m4 (vuint16m8_t op1, vuint8m4_t shift, size_t vl) { return __riscv_th_vpnclipu_wv_u8m4 (op1, shift, vl); }
vuint8mf2_t test_vpnclipu_wv_u8mf2 (vuint16m1_t op1, vuint8mf2_t shift, size_t vl) { return __riscv_th_vpnclipu_wv_u8mf2 (op1, shift, vl); }
vuint8mf4_t test_vpnclipu_wv_u8mf4 (vuint16mf2_t op1, vuint8mf4_t shift, size_t vl) { return __riscv_th_vpnclipu_wv_u8mf4 (op1, shift, vl); }
vuint8mf8_t test_vpnclipu_wv_u8mf8 (vuint16mf4_t op1, vuint8mf8_t shift, size_t vl) { return __riscv_th_vpnclipu_wv_u8mf8 (op1, shift, vl); }
vuint8m1_t test_vpnclipu_wx_u8m1 (vuint16m2_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclipu_wx_u8m1 (op1, shift, vl); }
vuint8m2_t test_vpnclipu_wx_u8m2 (vuint16m4_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclipu_wx_u8m2 (op1, shift, vl); }
vuint8m4_t test_vpnclipu_wx_u8m4 (vuint16m8_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclipu_wx_u8m4 (op1, shift, vl); }
vuint8mf2_t test_vpnclipu_wx_u8mf2 (vuint16m1_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclipu_wx_u8mf2 (op1, shift, vl); }
vuint8mf4_t test_vpnclipu_wx_u8mf4 (vuint16mf2_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclipu_wx_u8mf4 (op1, shift, vl); }
vuint8mf8_t test_vpnclipu_wx_u8mf8 (vuint16mf4_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclipu_wx_u8mf8 (op1, shift, vl); }
// masked functions
vint8m1_t test_vpnclip_wv_i8m1_m (vbool8_t mask, vint16m2_t op1, vuint8m1_t shift, size_t vl) { return __riscv_th_vpnclip_wv_i8m1_m (mask, op1, shift, vl); }
vint8m2_t test_vpnclip_wv_i8m2_m (vbool4_t mask, vint16m4_t op1, vuint8m2_t shift, size_t vl) { return __riscv_th_vpnclip_wv_i8m2_m (mask, op1, shift, vl); }
vint8m4_t test_vpnclip_wv_i8m4_m (vbool2_t mask, vint16m8_t op1, vuint8m4_t shift, size_t vl) { return __riscv_th_vpnclip_wv_i8m4_m (mask, op1, shift, vl); }
vint8mf2_t test_vpnclip_wv_i8mf2_m (vbool16_t mask, vint16m1_t op1, vuint8mf2_t shift, size_t vl) { return __riscv_th_vpnclip_wv_i8mf2_m (mask, op1, shift, vl); }
vint8mf4_t test_vpnclip_wv_i8mf4_m (vbool32_t mask, vint16mf2_t op1, vuint8mf4_t shift, size_t vl) { return __riscv_th_vpnclip_wv_i8mf4_m (mask, op1, shift, vl); }
vint8mf8_t test_vpnclip_wv_i8mf8_m (vbool64_t mask, vint16mf4_t op1, vuint8mf8_t shift, size_t vl) { return __riscv_th_vpnclip_wv_i8mf8_m (mask, op1, shift, vl); }
vint8m1_t test_vpnclip_wx_i8m1_m (vbool8_t mask, vint16m2_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclip_wx_i8m1_m (mask, op1, shift, vl); }
vint8m2_t test_vpnclip_wx_i8m2_m (vbool4_t mask, vint16m4_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclip_wx_i8m2_m (mask, op1, shift, vl); }
vint8m4_t test_vpnclip_wx_i8m4_m (vbool2_t mask, vint16m8_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclip_wx_i8m4_m (mask, op1, shift, vl); }
vint8mf2_t test_vpnclip_wx_i8mf2_m (vbool16_t mask, vint16m1_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclip_wx_i8mf2_m (mask, op1, shift, vl); }
vint8mf4_t test_vpnclip_wx_i8mf4_m (vbool32_t mask, vint16mf2_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclip_wx_i8mf4_m (mask, op1, shift, vl); }
vint8mf8_t test_vpnclip_wx_i8mf8_m (vbool64_t mask, vint16mf4_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclip_wx_i8mf8_m (mask, op1, shift, vl); }
vuint8m1_t test_vpnclipu_wv_u8m1_m (vbool8_t mask, vuint16m2_t op1, vuint8m1_t shift, size_t vl) { return __riscv_th_vpnclipu_wv_u8m1_m (mask, op1, shift, vl); }
vuint8m2_t test_vpnclipu_wv_u8m2_m (vbool4_t mask, vuint16m4_t op1, vuint8m2_t shift, size_t vl) { return __riscv_th_vpnclipu_wv_u8m2_m (mask, op1, shift, vl); }
vuint8m4_t test_vpnclipu_wv_u8m4_m (vbool2_t mask, vuint16m8_t op1, vuint8m4_t shift, size_t vl) { return __riscv_th_vpnclipu_wv_u8m4_m (mask, op1, shift, vl); }
vuint8mf2_t test_vpnclipu_wv_u8mf2_m (vbool16_t mask, vuint16m1_t op1, vuint8mf2_t shift, size_t vl) { return __riscv_th_vpnclipu_wv_u8mf2_m (mask, op1, shift, vl); }
vuint8mf4_t test_vpnclipu_wv_u8mf4_m (vbool32_t mask, vuint16mf2_t op1, vuint8mf4_t shift, size_t vl) { return __riscv_th_vpnclipu_wv_u8mf4_m (mask, op1, shift, vl); }
vuint8mf8_t test_vpnclipu_wv_u8mf8_m (vbool64_t mask, vuint16mf4_t op1, vuint8mf8_t shift, size_t vl) { return __riscv_th_vpnclipu_wv_u8mf8_m (mask, op1, shift, vl); }
vuint8m1_t test_vpnclipu_wx_u8m1_m (vbool8_t mask, vuint16m2_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclipu_wx_u8m1_m (mask, op1, shift, vl); }
vuint8m2_t test_vpnclipu_wx_u8m2_m (vbool4_t mask, vuint16m4_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclipu_wx_u8m2_m (mask, op1, shift, vl); }
vuint8m4_t test_vpnclipu_wx_u8m4_m (vbool2_t mask, vuint16m8_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclipu_wx_u8m4_m (mask, op1, shift, vl); }
vuint8mf2_t test_vpnclipu_wx_u8mf2_m (vbool16_t mask, vuint16m1_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclipu_wx_u8mf2_m (mask, op1, shift, vl); }
vuint8mf4_t test_vpnclipu_wx_u8mf4_m (vbool32_t mask, vuint16mf2_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclipu_wx_u8mf4_m (mask, op1, shift, vl); }
vuint8mf8_t test_vpnclipu_wx_u8mf8_m (vbool64_t mask, vuint16mf4_t op1, size_t shift, size_t vl) { return __riscv_th_vpnclipu_wx_u8mf8_m (mask, op1, shift, vl); }

/* { dg-final { scan-assembler-times "th\\.vpnclip\\.wv\t" 12 } } */
/* { dg-final { scan-assembler-times "th\\.vpnclip\\.wx\t" 12 } } */
/* { dg-final { scan-assembler-times "th\\.vpnclipu\\.wv\t" 12 } } */
/* { dg-final { scan-assembler-times "th\\.vpnclipu\\.wx\t" 12 } } */
