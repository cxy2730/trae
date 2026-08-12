// Function: FUN_00481556
// Entry:    00481556
// Size:     42 bytes
// Conv:     unknown
// Signature: undefined FUN_00481556(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00481556(undefined8 *param_1)

{
  int iVar1;
  undefined1 local_28 [4];
  undefined4 local_24;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = FUN_0048111d(*param_1,local_28);
    if (iVar1 != 0) {
      return local_24;
    }
  }
  return 0xffffffff;
}

