// Function: FUN_00404c8d
// Entry:    00404c8d
// Size:     74 bytes
// Conv:     unknown
// Signature: undefined FUN_00404c8d(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00404c8d(undefined4 param_1)

{
  undefined4 uVar1;
  int local_c [2];
  
  local_c[1] = 0;
  local_c[0] = FUN_00404cd7(param_1,0,0);
  uVar1 = FUN_00405175(local_c);
  if (local_c[0] != 0) {
    thunk_FUN_0041b7c0(local_c[0]);
  }
  return uVar1;
}

