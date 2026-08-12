// Function: FUN_0042dd60
// Entry:    0042dd60
// Size:     825 bytes
// Conv:     unknown
// Signature: undefined FUN_0042dd60(void)
// Decompiled by Ghidra 12.1.2


void __thiscall
FUN_0042dd60(int param_1,CDC *param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 *param_7,byte param_8,uint param_9)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  HGDIOBJ pvVar5;
  undefined4 uVar6;
  int iVar7;
  undefined ***pppuVar8;
  byte bVar9;
  tagPOINT tStack_2c;
  undefined **appuStack_24 [2];
  undefined **appuStack_1c [2];
  undefined1 auStack_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004a00b0;
  local_c = ExceptionList;
  if ((param_8 & 0x1e) == 0) {
    return;
  }
  ExceptionList = &local_c;
  FUN_0042a650();
  iVar3 = FUN_00428970();
  if ((iVar3 == 0) || (bVar1 = true, *(int *)(iVar3 + 0x28) != 1)) {
    bVar1 = false;
  }
  if ((*(int *)(param_1 + 0x6c) != 0) || (bVar2 = true, (*(byte *)(param_1 + 0x44) & 4) == 0)) {
    bVar2 = false;
  }
  bVar9 = (*(int *)(param_1 + 0x6c) != 2) - 1U & 3;
  FUN_00499e8a(0,bVar9,*(undefined4 *)(param_1 + 0x3c));
  uStack_4 = 0;
  iVar3 = FUN_004279e0();
  if (param_5 < iVar3) {
LAB_0042de0b:
    puVar4 = &DAT_00808080;
  }
  else {
    iVar3 = FUN_004279f0();
    puVar4 = &DAT_00c0c0c0;
    if (param_6 < iVar3) goto LAB_0042de0b;
  }
  FUN_00499e8a(0,bVar9,puVar4);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  pvVar5 = GetCurrentObject(*(HDC *)(param_2 + 8),1);
  uVar6 = FUN_00499e08(pvVar5);
  iVar3 = FUN_0042a340(param_3,*param_7);
  iVar7 = FUN_0042a470(param_4,param_7[1]);
  tStack_2c.x = iVar3;
  tStack_2c.y = iVar7;
  LPtoDP(*(HDC *)(param_2 + 8),&tStack_2c,1);
  tStack_2c.x = tStack_2c.x + 1;
  tStack_2c.y = tStack_2c.y + 1;
  DPtoLP(*(HDC *)(param_2 + 8),&tStack_2c,1);
  if ((((param_8 & 2) != 0) && (param_6 == 0)) && ((param_9 & 0x40000) == 0)) {
    if ((param_9 & 0x10) == 0) {
      if (!bVar1) {
        if (!bVar2) goto LAB_0042df1d;
        goto LAB_0042ded3;
      }
LAB_0042dee0:
      pppuVar8 = appuStack_1c;
    }
    else {
LAB_0042ded3:
      if ((bVar1) || (pppuVar8 = appuStack_24, (param_9 & 0x10) != 0)) goto LAB_0042dee0;
    }
    FUN_00499471(pppuVar8);
    FUN_00499962(auStack_14,param_3,param_4);
    CDC::LineTo(param_2,param_3,tStack_2c.y);
  }
LAB_0042df1d:
  if ((((param_8 & 4) != 0) && ((*(int *)(param_1 + 0x6c) != 0 || (param_5 == 0)))) &&
     ((param_9 & 0x80000) == 0)) {
    if ((param_9 & 0x20) == 0) {
      if (!bVar1) {
        if (!bVar2) goto LAB_0042df8e;
        goto LAB_0042df4e;
      }
LAB_0042df5b:
      pppuVar8 = appuStack_1c;
    }
    else {
LAB_0042df4e:
      if ((bVar1) || (pppuVar8 = appuStack_24, (param_9 & 0x20) != 0)) goto LAB_0042df5b;
    }
    FUN_00499471(pppuVar8);
    FUN_00499962(auStack_14,param_3,param_4);
    CDC::LineTo(param_2,tStack_2c.x,param_4);
  }
LAB_0042df8e:
  if (((param_8 & 8) != 0) && ((param_9 & 0x100000) == 0)) {
    if ((param_9 & 0x40) == 0) {
      if (!bVar1) {
        if (!bVar2) goto LAB_0042dfec;
        goto LAB_0042dfb0;
      }
LAB_0042dfbd:
      pppuVar8 = appuStack_1c;
    }
    else {
LAB_0042dfb0:
      if ((bVar1) || (pppuVar8 = appuStack_24, (param_9 & 0x40) != 0)) goto LAB_0042dfbd;
    }
    FUN_00499471(pppuVar8);
    FUN_00499962(auStack_14,iVar3,param_4);
    CDC::LineTo(param_2,iVar3,tStack_2c.y);
  }
LAB_0042dfec:
  if (((param_8 & 0x10) == 0) || ((param_9 & 0x200000) != 0)) goto LAB_0042e04c;
  if ((param_9 & 0x80) == 0) {
    if (!bVar1) {
      if (!bVar2) goto LAB_0042e04c;
      goto LAB_0042e010;
    }
LAB_0042e01d:
    pppuVar8 = appuStack_1c;
  }
  else {
LAB_0042e010:
    if ((bVar1) || (pppuVar8 = appuStack_24, (param_9 & 0x80) != 0)) goto LAB_0042e01d;
  }
  FUN_00499471(pppuVar8);
  FUN_00499962(auStack_14,param_3,iVar7);
  CDC::LineTo(param_2,tStack_2c.x,iVar7);
LAB_0042e04c:
  FUN_00499471(uVar6);
  appuStack_24[0] = &PTR_LAB_02f96400;
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  FUN_00499e74();
  appuStack_1c[0] = &PTR_LAB_02f96400;
  uStack_4 = 3;
  FUN_00499e74();
  ExceptionList = local_c;
  return;
}

