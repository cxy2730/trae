// Function: FUN_00430fe0
// Entry:    00430fe0
// Size:     162 bytes
// Conv:     unknown
// Signature: undefined FUN_00430fe0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00430fe0(int *param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004a0358;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  GetTickCount();
  FUN_00493768();
  local_8 = 1;
  if (param_2 == -1) {
    if (param_3 == 1) {
      (**(code **)(*param_1 + 0x3c))(0,0x7fffffff);
    }
    else {
      (**(code **)(*param_1 + 0x40))(0,0x7fffffff);
    }
  }
  else if (param_3 == 1) {
    (**(code **)(*param_1 + 0x3c))();
  }
  else {
    (**(code **)(*param_1 + 0x40))(param_2,1);
  }
  local_8 = 0xffffffff;
  FUN_004937a6();
  ExceptionList = local_10;
  return 0;
}

