// Function: FUN_0042a180
// Entry:    0042a180
// Size:     223 bytes
// Conv:     unknown
// Signature: undefined FUN_0042a180(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0042a180(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049fd08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_0042a650();
  if (iVar1 == 0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  uStack_28 = FUN_00427970(param_2);
  uStack_24 = 0;
  if (DAT_02fe8c60 == 0) {
    FUN_00499b75(0);
    uStack_4 = 0;
    FUN_00442c00(auStack_20,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
    FUN_00499aa3(&uStack_28);
    FUN_00499b0c(&uStack_28);
    uStack_4 = 0xffffffff;
    FID_conflict__CClientDC();
  }
  else {
    FUN_00499aa3(&uStack_28);
    FUN_00499b0c(&uStack_28);
  }
  ExceptionList = pvStack_c;
  return uStack_28;
}

