// Function: FUN_004814d8
// Entry:    004814d8
// Size:     42 bytes
// Conv:     unknown
// Signature: undefined FUN_004814d8(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_004814d8(undefined8 *param_1)

{
  int iVar1;
  undefined1 local_28 [16];
  undefined4 local_18;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = FUN_0048111d(*param_1,local_28);
    if (iVar1 != 0) {
      return local_18;
    }
  }
  return 0xffffffff;
}

