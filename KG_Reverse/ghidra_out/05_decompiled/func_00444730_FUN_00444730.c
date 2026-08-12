// Function: FUN_00444730
// Entry:    00444730
// Size:     312 bytes
// Conv:     unknown
// Signature: undefined FUN_00444730(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall
FUN_00444730(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  HWND pHVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0f98;
  local_c = ExceptionList;
  if (param_5 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_5 + 0x1c);
  }
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = param_4;
  *(undefined4 *)(param_1 + 0xa4) = param_4;
  uVar1 = FUN_0041c6c0(s__EL_ColourPopup_02fb23a0,0x843,0,0x10,0);
  FUN_00493244(uVar1);
  local_4 = 0;
  uVar1 = 0;
  if (param_5 != 0) {
    uVar1 = *(undefined4 *)(param_5 + 0x1c);
  }
  iVar2 = FUN_0049510e(0,param_5,&DAT_02fe8d2c,0x90000000,param_2,param_3,100,100,uVar1,0,0);
  if (iVar2 == 0) {
    local_4 = 0xffffffff;
    FUN_004931d6();
    ExceptionList = local_c;
    return 0;
  }
  if (param_7 != 0) {
    FUN_00493313(param_7);
  }
  if (param_6 != 0) {
    FUN_00493313(param_6);
  }
  FUN_00445010();
  FUN_004452d0();
  FUN_00444ed0(param_4);
  pHVar3 = SetCapture(*(HWND *)(param_1 + 0x1c));
  FUN_00494bb2(pHVar3);
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return 1;
}

