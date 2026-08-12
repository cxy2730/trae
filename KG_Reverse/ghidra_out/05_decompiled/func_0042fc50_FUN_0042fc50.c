// Function: FUN_0042fc50
// Entry:    0042fc50
// Size:     364 bytes
// Conv:     unknown
// Signature: undefined FUN_0042fc50(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0042fc50(undefined *param_1,uint param_2)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  byte bVar4;
  uint uVar6;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined1 uVar5;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a01c8;
  local_c = ExceptionList;
  if (0x1f < (byte)param_2) {
    uVar6 = param_2;
    if ((param_2 & 0x80) != 0) {
      if (DAT_02fe8c64 == 0) {
        DAT_02fe8c64 = param_2;
        return;
      }
      uVar6 = param_2 << 0x10 | DAT_02fe8c64 & 0xffff;
    }
    DAT_02fe8c64 = 0;
    bVar4 = (byte)uVar6;
    uVar5 = (undefined1)(uVar6 >> 0x10);
    ExceptionList = &local_c;
    local_10 = param_1;
    if ((*(HWND *)(param_1 + 0x68) != (HWND)0x0) &&
       (ExceptionList = &local_c, BVar2 = IsWindow(*(HWND *)(param_1 + 0x68)), BVar2 != 0)) {
      iVar3 = FUN_00494bb2(*(undefined4 *)(param_1 + 0x68));
      if (iVar3 == 0) {
        ExceptionList = local_c;
        return;
      }
      local_10 = PTR_DAT_02fd8088;
      local_4 = 0;
      FUN_0049557d(&local_10);
      SendMessageA(*(HWND *)(iVar3 + 0x1c),0xb1,*(WPARAM *)(local_10 + -8),-1);
      SendMessageA(*(HWND *)(iVar3 + 0x1c),0xb7,0,0);
      uVar1 = param_2;
      if ((uVar6 & 0x80) == 0) {
        param_2._0_2_ = (ushort)bVar4;
      }
      else {
        param_2._0_2_ = CONCAT11(uVar5,bVar4);
        param_2._3_1_ = SUB41(uVar1,3);
        param_2._0_3_ = (uint3)(ushort)param_2;
      }
      SendMessageA(*(HWND *)(iVar3 + 0x1c),0xc2,0,(LPARAM)&param_2);
      local_4 = 0xffffffff;
      FUN_004931d6();
      ExceptionList = local_c;
      return;
    }
    uVar1 = param_2;
    if ((uVar6 & 0x80) == 0) {
      param_2._0_2_ = (ushort)bVar4;
    }
    else {
      param_2._0_2_ = CONCAT11(uVar5,bVar4);
      param_2._3_1_ = SUB41(uVar1,3);
      param_2._0_3_ = (uint3)(ushort)param_2;
    }
    FUN_00430070(&param_2);
  }
  ExceptionList = local_c;
  return;
}

