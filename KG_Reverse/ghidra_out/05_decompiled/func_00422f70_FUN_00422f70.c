// Function: FUN_00422f70
// Entry:    00422f70
// Size:     548 bytes
// Conv:     unknown
// Signature: undefined FUN_00422f70(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00422f70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  HDC pHVar4;
  HBITMAP pHVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  HDC local_44;
  undefined1 local_38 [4];
  HDC local_34;
  HDC local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f4a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004235b0(param_1,param_2);
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  puVar2 = (undefined4 *)FUN_004225f0(param_1,param_2);
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  local_20 = 0;
  local_24 = (HDC)0x0;
  local_14 = 0;
  local_10 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_00499b75(0);
  local_4 = 0;
  iVar3 = FUN_004226d0(local_38,puVar2,&local_24,param_3);
  uVar6 = local_10;
  uVar7 = 0;
  if (iVar3 == 1) {
    if ((iVar1 == 3) || (iVar1 == 4)) {
      FUN_00499226();
      local_4._0_1_ = 1;
      pHVar4 = CreateCompatibleDC((HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x38) &
                                       (uint)local_34));
      FUN_004992dd(pHVar4);
      local_4._0_1_ = 2;
      pHVar5 = CreateCompatibleBitmap(local_34,local_1c,local_18);
      FUN_00499e1d(pHVar5);
      iVar1 = FUN_0049941e(local_44,0);
      PatBlt(local_44,0,0,local_1c,local_18,0xff0062);
      local_24 = local_44;
      FUN_00422b10(&local_24,0,0,0xffffffff,0xffffffff,&DAT_00cc0020);
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(iVar1 + 4);
      }
      FUN_0049941e(local_44,uVar6);
      uVar6 = Detach();
      local_4._0_1_ = 3;
      FUN_00499e74();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0049935b();
    }
    else {
      local_10 = 0;
    }
    FUN_00422eb0(&local_24);
    uVar7 = uVar6;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  if ((HICON)puVar2[3] != (HICON)0x0) {
    DestroyIcon((HICON)puVar2[3]);
    puVar2[3] = 0;
  }
  if (puVar2[4] != 0) {
    FUN_00492f40(puVar2[4]);
    puVar2[4] = 0;
  }
  FUN_00492f40(puVar2);
  local_4 = 0xffffffff;
  FID_conflict__CClientDC();
  ExceptionList = local_c;
  return uVar7;
}

