// Function: FUN_00481502
// Entry:    00481502
// Size:     42 bytes
// Conv:     unknown
// Signature: undefined FUN_00481502(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00481502(undefined8 *param_1)

{
  int iVar1;
  undefined1 local_28 [12];
  undefined4 local_1c;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = FUN_0048111d(*param_1,local_28);
    if (iVar1 != 0) {
      return local_1c;
    }
  }
  return 0xffffffff;
}

