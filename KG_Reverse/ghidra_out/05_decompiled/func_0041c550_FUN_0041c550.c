// Function: FUN_0041c550
// Entry:    0041c550
// Size:     62 bytes
// Conv:     unknown
// Signature: undefined FUN_0041c550(void)
// Decompiled by Ghidra 12.1.2


undefined8 __fastcall
FUN_0041c550(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = -1;
  iVar1 = -1;
  if (0 < param_4) {
    iVar2 = 0;
    for (; (iVar1 = local_8, iVar2 < param_4 && (iVar1 = iVar2, param_5 < *param_3));
        param_3 = param_3 + 1) {
      iVar2 = iVar2 + 1;
    }
  }
  return CONCAT44(param_2,iVar1);
}

