// Function: FUN_00412f90
// Entry:    00412f90
// Size:     754 bytes
// Conv:     unknown
// Signature: undefined FUN_00412f90(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00412f90(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  CHAR local_148 [256];
  undefined1 local_48 [52];
  undefined *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  iVar5 = param_5;
  puStack_c = &LAB_0049e878;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
  local_14 = PTR_DAT_02fd8088;
  local_8 = 0;
  wsprintfA(local_148,s__d___d_02faae84,param_4,param_5);
  FUN_00493566(local_148);
  if (param_4 != 0) {
    iVar2 = FUN_0040e650(param_4);
    if (iVar2 == 0x2000000) {
      iVar2 = FUN_0040ec30(param_4,&param_5,0);
      if (iVar2 == 0) {
        puVar6 = &DAT_02faae6c;
      }
      else {
        FUN_00493566(&DAT_02faae68);
        iVar2 = FUN_0040e730(0,0);
        iVar3 = FUN_00406cf0(iVar2 + 0x18);
        iVar3 = iVar2 + 0x18 + iVar3;
        iVar2 = FUN_00406cf0(iVar3);
        iVar4 = *(int *)(iVar3 + 0x1c + iVar2);
        iVar2 = iVar3 + 0x1c + iVar2;
        FUN_00493566(*(int *)(iVar2 + 4 + iVar4 * 4) + iVar2 + 8 + iVar4 * 4);
        FUN_00493566(&DAT_02faae64);
        if (iVar5 == 0) {
          iVar2 = FUN_0040e730(0,0);
          iVar5 = FUN_0040e780(0);
        }
        else {
          iVar2 = FUN_0040e7b0(iVar5,0,0);
        }
        if (iVar2 != 0) {
          iVar5 = FUN_0040ede0(iVar5);
          if (iVar5 != 1) {
            FUN_00493566(&DAT_02faae68);
            iVar4 = FUN_00406cf0(iVar2 + 0x18);
            iVar4 = iVar2 + 0x18 + iVar4;
            iVar5 = FUN_00406cf0(iVar4);
            iVar2 = *(int *)(iVar4 + 0x1c + iVar5);
            iVar5 = iVar4 + 0x1c + iVar5;
            FUN_00493566(*(int *)(iVar5 + 4 + iVar2 * 4) + iVar5 + 8 + iVar2 * 4);
            puVar6 = &DAT_02faae64;
            goto LAB_00413121;
          }
        }
        puVar6 = &DAT_02faae48;
      }
LAB_00413121:
      FUN_00493566(puVar6);
    }
  }
  FUN_00493566(&DAT_02faae44);
  if ((*(int *)(param_1 + 0xc0) != 0) && (DAT_02fe8200 == 0)) {
    FUN_00493244(param_2);
    local_8._0_1_ = 1;
    FUN_004935a2(&local_14);
    DAT_02fe8200 = 1;
    iVar5 = (**(code **)(param_1 + 0xc0))(param_3,param_5);
    DAT_02fe8200 = 0;
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004931d6();
    if (iVar5 != 0) goto LAB_00413241;
  }
  FUN_00493244(&DAT_02faae34);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (param_3 != 0) {
    FUN_0041b850(param_3,local_48);
    FUN_00493566(&DAT_02faae24);
    FUN_00493566(local_48);
    FUN_00493566(&DAT_02faae44);
  }
  iVar5 = FUN_00406c20(param_2);
  if (iVar5 == 0) {
    FUN_00493566(&DAT_02faae14);
    FUN_00493566(param_2);
    FUN_00493566(&DAT_02faae44);
  }
  FUN_004935a2(&local_14);
  FUN_0041cb70(param_5);
  local_8 = local_8 & 0xffffff00;
  FUN_004931d6();
LAB_00413241:
  if (*(int *)(param_1 + 0xc4) == 2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_004064a0();
  FUN_0041b6a0(0xffffffff);
  local_8 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_10;
  return;
}

