// Function: FUN_00440c60
// Entry:    00440c60
// Size:     132 bytes
// Conv:     unknown
// Signature: undefined FUN_00440c60(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00440c60(undefined4 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 3) {
    param_3 = param_1[8];
  }
  if (param_3 == 0) {
    FUN_00440d00(param_1);
    param_3 = param_1[8];
  }
  switch(param_3) {
  case 1:
    return (uint)(ushort)(&DAT_02f97258)[param_2];
  case 2:
    goto switchD_00440c87_caseD_2;
  case 3:
    uVar1 = FUN_0043e660(param_2 * 0x101,param_1[9]);
    return uVar1 & 0xffff;
  case 4:
    return param_2 * 0x101;
  default:
    FUN_004463d0(**(undefined4 **)*param_1,s_unexpected_encoding__internal_er_02fb1f24);
switchD_00440c87_caseD_2:
    return param_2;
  }
}

