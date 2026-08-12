// Function: FUN_00401b7e
// Entry:    00401b7e
// Size:     188 bytes
// Conv:     unknown
// Signature: undefined FUN_00401b7e(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00401b7e(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  local_8 = 0;
  if (param_4 == 0) {
    iVar1 = FUN_00401d0d(param_1,1,0,0);
    if (local_8 != 0) {
      thunk_FUN_0041b7c0(local_8);
    }
  }
  else {
    iVar1 = FUN_00401d0d(0,0,param_3,1);
    if (local_8 != 0) {
      thunk_FUN_0041b7c0(local_8);
    }
  }
  local_8 = iVar1;
  uVar2 = FUN_00402259(&local_8);
  if (local_8 != 0) {
    thunk_FUN_0041b7c0(local_8);
  }
  return uVar2;
}

