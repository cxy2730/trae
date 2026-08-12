// Function: FUN_0040c530
// Entry:    0040c530
// Size:     395 bytes
// Conv:     unknown
// Signature: undefined FUN_0040c530(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0040c530(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  LRESULT LVar2;
  undefined4 uVar3;
  LRESULT LVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  uint local_70;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049e1c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004062a0();
  iVar6 = 0;
  local_4 = 0;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x18b,0,0);
  if ((LVar2 != -1) && (0 < LVar2)) {
    do {
      uVar3 = FUN_0049b4df(iVar6);
      FUN_00406570(uVar3);
      iVar6 = iVar6 + 1;
    } while (iVar6 < LVar2);
  }
  FUN_0040c0d0();
  FUN_0049b88d(param_2,param_3,param_4);
  FUN_0040c130();
  LVar4 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x18b,0,0);
  if (LVar2 == LVar4) {
    if (LVar2 != -1) {
      iVar6 = 0;
      pbVar7 = (byte *)(-(uint)(local_68 != 0) & local_70);
      if (0 < LVar2) {
        do {
          uVar5 = FUN_0049b4df(iVar6);
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          if (uVar5 != bVar1) {
            FUN_004064a0();
            local_64 = *(undefined4 *)(param_1 + 0xa4);
            local_60 = *(undefined4 *)(param_1 + 0xa8);
            local_58 = 0;
            local_40 = 0;
            local_3c = 0;
            puVar8 = &local_64;
            local_5c = 1;
            goto LAB_0040c680;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < LVar2);
      }
    }
  }
  else {
    FUN_004064a0();
    local_38 = *(undefined4 *)(param_1 + 0xa4);
    local_34 = *(undefined4 *)(param_1 + 0xa8);
    puVar8 = &local_38;
    local_30 = 1;
    local_2c = 0;
    local_14 = 0;
    local_10 = 0;
LAB_0040c680:
    FUN_00413d70(0x7d8,puVar8,0);
  }
  local_4 = 0xffffffff;
  FUN_004064a0();
  ExceptionList = local_c;
  return;
}

