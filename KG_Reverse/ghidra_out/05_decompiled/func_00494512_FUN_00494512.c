// Function: FUN_00494512
// Entry:    00494512
// Size:     101 bytes
// Conv:     unknown
// Signature: undefined FUN_00494512(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00494512(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar1 = FUN_00496c6b(*(undefined4 *)(param_1 + 0x40));
  }
  else {
    iVar1 = FUN_00496cbb(*(int *)(param_1 + 0x4c));
  }
  if (iVar1 != 0) {
    iVar1 = FUN_004969fe(0);
    if (iVar1 != 0) {
      iVar1 = FUN_0049733e(0xe146);
      if (iVar1 != 0) {
        iVar1 = FUN_004944b9();
        FUN_00497580(-(iVar1 != 0) & 5);
      }
      return 1;
    }
  }
  FUN_004943ea(0xffffffff);
  return 0;
}

