// Function: FUN_00444450
// Entry:    00444450
// Size:     266 bytes
// Conv:     unknown
// Signature: undefined FUN_00444450(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall
FUN_00444450(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined *param_6,undefined *param_7)

{
  undefined4 uVar1;
  undefined *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0f08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00494787();
  param_1[0x16] = PTR_DAT_02fd8088;
  param_1[0x17] = PTR_DAT_02fd8088;
  param_1[0x25] = 0;
  param_1[0x24] = &PTR_LAB_02f980c4;
  param_1[0x27] = 0;
  param_1[0x26] = &PTR_LAB_02f980b8;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  FUN_00491f6b();
  local_4 = CONCAT31(local_4._1_3_,5);
  *param_1 = &PTR_LAB_02f98000;
  FUN_00444560();
  param_1[0x28] = param_4;
  param_1[0x29] = param_4;
  if (param_5 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_5 + 0x1c);
  }
  param_1[0x40] = uVar1;
  puVar2 = param_6;
  if (param_6 == (undefined *)0x0) {
    puVar2 = &DAT_02fe8d2c;
  }
  FUN_00493313(puVar2);
  puVar2 = param_7;
  if (param_7 == (undefined *)0x0) {
    puVar2 = &DAT_02fe8d2c;
  }
  FUN_00493313(puVar2);
  FUN_00444730(param_2,param_3,param_4,param_5,param_6,param_7);
  ExceptionList = local_c;
  return param_1;
}

