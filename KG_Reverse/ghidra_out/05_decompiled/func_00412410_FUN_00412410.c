// Function: FUN_00412410
// Entry:    00412410
// Size:     118 bytes
// Conv:     unknown
// Signature: undefined FUN_00412410(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00412410(int param_1,HWND param_2,int param_3,undefined4 param_4)

{
  BOOL BVar1;
  int iVar2;
  
  if ((param_2 != (HWND)0x0) && (BVar1 = IsWindow(param_2), BVar1 != 0)) {
    if ((*(uint *)(param_1 + 0x1fc) != 0) &&
       ((*(int *)(param_1 + 500) != 0 &&
        (iVar2 = FUN_00406d80(*(int *)(param_1 + 500),*(uint *)(param_1 + 0x1fc) >> 2,param_2),
        iVar2 != -1)))) {
      return;
    }
    if (param_3 != 0) {
      FUN_004065a0(param_2);
      FUN_004065a0(param_3);
      FUN_004065a0(param_4);
    }
  }
  return;
}

