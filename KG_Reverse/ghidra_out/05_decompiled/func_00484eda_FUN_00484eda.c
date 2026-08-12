// Function: FUN_00484eda
// Entry:    00484eda
// Size:     82 bytes
// Conv:     unknown
// Signature: undefined FUN_00484eda(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00484eda(undefined1 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  uVar1 = FUN_0048bf7b(&local_24,param_2,&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_0048df1a(0,&local_24);
  }
  else {
    *local_24 = 0;
  }
  return uVar1;
}

