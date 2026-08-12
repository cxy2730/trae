// Function: FUN_00434be0
// Entry:    00434be0
// Size:     94 bytes
// Conv:     unknown
// Signature: undefined FUN_00434be0(void)
// Decompiled by Ghidra 12.1.2


int __fastcall FUN_00434be0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 100) == 1) {
    iVar1 = param_1 + 0x4c;
    if (iVar1 == 0) {
      iVar2 = 0;
      goto LAB_00434c06;
    }
  }
  else if ((*(int *)(param_1 + 100) != 2) || (iVar1 = param_1 + 0x54, iVar1 == 0))
  goto LAB_00434c06;
  iVar2 = *(int *)(iVar1 + 4);
LAB_00434c06:
  iVar1 = FUN_004975a7();
  if (((((iVar1 != 0) || (param_1 == -0x5c)) || (*(int *)(param_1 + 0x60) == 0)) ||
      (iVar2 = *(int *)(param_1 + 0x60), param_1 != -0x5c)) && (iVar2 != 0)) {
    return iVar2;
  }
  if (param_1 != -0x44) {
    return *(int *)(param_1 + 0x48);
  }
  return 0;
}

