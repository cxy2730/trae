// Function: FUN_0041f180
// Entry:    0041f180
// Size:     639 bytes
// Conv:     unknown
// Signature: undefined FUN_0041f180(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0041f180(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int local_94;
  undefined4 local_90;
  undefined *local_8c;
  undefined **local_88;
  uint local_80;
  int local_78;
  CHAR local_74 [52];
  CHAR local_40 [52];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f191;
  local_c = ExceptionList;
  local_94 = *(int *)(param_1 + 0x74);
  if (*(int *)(param_1 + 0x60) == 0xc) {
    if (local_94 < 1) {
      ExceptionList = &local_c;
      FUN_004974ae(&DAT_02fe87ec);
    }
    else if (local_94 == 0) {
      ExceptionList = &local_c;
      FUN_004974ae(0);
    }
    else {
      ExceptionList = &local_c;
      FUN_004974ae(*(undefined4 *)(param_1 + 0x6c));
    }
  }
  else {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x7c) == 0) {
      if (600 < local_94) {
        local_94 = 600;
      }
      if (*(int *)(param_1 + 0x74) == 0) {
        pbVar5 = (byte *)0x0;
      }
      else {
        pbVar5 = *(byte **)(param_1 + 0x6c);
      }
      ExceptionList = &local_c;
      FUN_004062a0();
      local_4 = 0;
      if (0 < local_94) {
        do {
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          wsprintfA(local_74,&DAT_02fafbf4,(uint)bVar1);
          uVar2 = FUN_00406d10(local_74);
          FUN_004069d0(local_74,uVar2);
          if (iVar3 != local_94 + -1) {
            FUN_00406570(0x2c);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_94);
      }
      if (local_94 < *(int *)(param_1 + 0x74)) {
        FUN_00406530(0x2020);
        FUN_00406530(0x2e2e);
        FUN_00406570(0x2e);
      }
      FUN_00406570(0);
      FUN_004974ae(-(uint)(local_78 != 0) & local_80);
      local_4 = 0xffffffff;
      local_88 = &PTR_FUN_02f95d48;
      FUN_004064a0();
    }
    else {
      ExceptionList = &local_c;
      if ((*(int *)(param_1 + 0x7c) == 1) &&
         (ExceptionList = &local_c, *(int *)(param_1 + 0xfc) != 0)) {
        if (*(int *)(param_1 + 0x74) == 0) {
          ExceptionList = &local_c;
          FUN_004241a0(0,local_94);
        }
        else {
          ExceptionList = &local_c;
          FUN_004241a0(*(undefined4 *)(param_1 + 0x6c),local_94);
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x74);
  if ((*(int *)(param_1 + 0x60) == 0xc) && (0 < iVar3)) {
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x6c);
    }
    if (*(char *)(iVar4 + -1 + iVar3) == '\0') {
      iVar3 = iVar3 + -1;
    }
  }
  wsprintfA(local_40,&DAT_02fafbe0,iVar3);
  FUN_0049341f(&local_90,param_1 + 0x5c,local_40);
  local_8c = PTR_DAT_02fd8088;
  local_4 = 2;
  FUN_0049557d(&local_8c);
  iVar3 = FUN_00482dc4(local_8c,local_90);
  if (iVar3 != 0) {
    FUN_004974ae(local_90);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004931d6();
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

