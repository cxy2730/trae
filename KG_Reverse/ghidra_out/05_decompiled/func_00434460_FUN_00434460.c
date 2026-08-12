// Function: FUN_00434460
// Entry:    00434460
// Size:     188 bytes
// Conv:     unknown
// Signature: undefined FUN_00434460(void)
// Decompiled by Ghidra 12.1.2


int FUN_00434460(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_28;
  undefined1 local_24 [4];
  undefined **local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004321f0(0);
  if (iVar1 == 0) {
    FUN_004062a0();
    local_4 = 0;
    if (param_3 == 1) {
      param_1 = FUN_00432810(param_1,local_20);
    }
    iVar1 = FUN_004335e0(param_1,param_2,&local_28,local_24);
    FUN_00432520(local_28);
    iVar2 = FUN_00432350();
    if (iVar1 == 0) {
      iVar1 = iVar2;
    }
    local_4 = 0xffffffff;
    local_20[0] = &PTR_FUN_02f96460;
    FUN_004064a0();
  }
  ExceptionList = local_c;
  return iVar1;
}

