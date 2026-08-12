// Function: FUN_0048152c
// Entry:    0048152c
// Size:     42 bytes
// Conv:     unknown
// Signature: undefined FUN_0048152c(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_0048152c(undefined8 *param_1)

{
  int iVar1;
  undefined1 local_28 [8];
  undefined4 local_20;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = FUN_0048111d(*param_1,local_28);
    if (iVar1 != 0) {
      return local_20;
    }
  }
  return 0xffffffff;
}

