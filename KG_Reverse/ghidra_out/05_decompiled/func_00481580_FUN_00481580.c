// Function: FUN_00481580
// Entry:    00481580
// Size:     42 bytes
// Conv:     unknown
// Signature: undefined FUN_00481580(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00481580(undefined8 *param_1)

{
  int iVar1;
  undefined4 local_28 [9];
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = FUN_0048111d(*param_1,local_28);
    if (iVar1 != 0) {
      return local_28[0];
    }
  }
  return 0xffffffff;
}

