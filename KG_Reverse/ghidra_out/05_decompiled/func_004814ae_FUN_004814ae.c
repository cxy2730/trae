// Function: FUN_004814ae
// Entry:    004814ae
// Size:     42 bytes
// Conv:     unknown
// Signature: undefined FUN_004814ae(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_004814ae(undefined8 *param_1)

{
  int iVar1;
  undefined1 local_28 [20];
  undefined4 local_14;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = FUN_0048111d(*param_1,local_28);
    if (iVar1 != 0) {
      return local_14;
    }
  }
  return 0xffffffff;
}

