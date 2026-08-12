// Function: FUN_00446a50
// Entry:    00446a50
// Size:     108 bytes
// Conv:     unknown
// Signature: undefined FUN_00446a50(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00446a50(int *param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_50 [64];
  undefined4 local_10;
  uint local_c;
  int *local_8;
  
  local_8 = param_1;
  local_10 = *(undefined4 *)(*param_1 + 8);
  iVar1 = __setjmp3(local_50,0);
  local_c = (uint)(iVar1 == 0);
  if (local_c != 0) {
    *(undefined1 **)(*local_8 + 8) = local_50;
    local_c = (*param_2)(param_3);
  }
  *(undefined4 *)(*local_8 + 8) = local_10;
  if (local_c == 0) {
    FUN_0043edc0(local_8);
  }
  return local_c;
}

