// Function: FUN_00424da0
// Entry:    00424da0
// Size:     194 bytes
// Conv:     unknown
// Signature: undefined FUN_00424da0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00424da0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049f641;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_02f96140;
  local_4 = 2;
  if (param_1[2] != 0) {
    FUN_00425310(0);
  }
  if (param_1[0x27] != 0) {
    FUN_00492f40(param_1[0x2b]);
  }
  if ((HANDLE)param_1[0x15] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x15]);
  }
  FUN_00492f40(param_1[0x20]);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  FUN_00492f40(param_1[0x1c]);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_00492f40(param_1[0x18]);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  ExceptionList = local_c;
  return;
}

