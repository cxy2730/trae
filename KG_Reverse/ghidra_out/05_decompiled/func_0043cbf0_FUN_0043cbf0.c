// Function: FUN_0043cbf0
// Entry:    0043cbf0
// Size:     141 bytes
// Conv:     unknown
// Signature: undefined FUN_0043cbf0(void)
// Decompiled by Ghidra 12.1.2


bool FUN_0043cbf0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2;
  if ((*(byte *)((int)param_2 + 0x4a) & 1) == 0) {
    return true;
  }
  iVar2 = FUN_0043e4c0(&param_2,*param_2,100000,param_3);
  if ((iVar2 != 0) && (iVar2 = FUN_0043e590(param_2), iVar2 == 0)) {
    return true;
  }
  iVar2 = param_4;
  if (((*(byte *)((int)puVar1 + 0x4a) & 0x20) == 0) && (param_4 != 2)) {
    FUN_00446810(param_1,s_gamma_value_does_not_match_libpn_02fb13b4,0);
    return iVar2 == 1;
  }
  FUN_00446810(param_1,s_gamma_value_does_not_match_sRGB_02fb1394,2);
  return iVar2 == 2;
}

