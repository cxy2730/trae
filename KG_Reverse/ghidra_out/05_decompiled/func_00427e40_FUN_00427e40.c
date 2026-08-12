// Function: FUN_00427e40
// Entry:    00427e40
// Size:     183 bytes
// Conv:     unknown
// Signature: undefined FUN_00427e40(void)
// Decompiled by Ghidra 12.1.2


undefined4
FUN_00427e40(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  CMemFile local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f768;
  local_c = ExceptionList;
  if (param_2 == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  FUN_0049a8c4(0x400);
  local_4 = 0;
  FUN_0049a910(param_1,param_2,0);
  uVar1 = FUN_00427f00(local_34,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  local_4 = 0xffffffff;
  CMemFile::~CMemFile(local_34);
  ExceptionList = local_c;
  return uVar1;
}

