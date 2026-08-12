// Function: FUN_00422b10
// Entry:    00422b10
// Size:     861 bytes
// Conv:     unknown
// Signature: undefined FUN_00422b10(void)
// Decompiled by Ghidra 12.1.2


void FUN_00422b10(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  int *piVar2;
  HDC pHVar3;
  undefined4 uVar4;
  int iVar5;
  HBITMAP pHVar6;
  HDC hdc;
  HGDIOBJ h;
  int unaff_retaddr;
  undefined4 uStack_50;
  uint uStack_3c;
  HDC pHStack_2c;
  undefined1 auStack_20 [4];
  int iStack_1c;
  int iStack_18;
  int iStack_4;
  
  pHVar3 = (HDC)*param_1;
  iVar1 = FUN_0041d1e0();
  SetStretchBltMode(pHVar3,iVar1);
  if ((param_1[1] != 3) && (param_1[1] != 4)) {
    if ((param_6 & 0x80000000) != 0) {
      piVar2 = (int *)FUN_004992c8(pHVar3);
      iVar1 = FUN_00499e08(param_1[5]);
      (**(code **)(*piVar2 + 0x2c))(0xffffff);
      (**(code **)(*piVar2 + 0x30))(0);
      FUN_00499226();
      FUN_00499226();
      if (piVar2 == (int *)0x0) {
        pHVar3 = (HDC)0x0;
      }
      else {
        pHVar3 = (HDC)piVar2[1];
      }
      pHVar3 = CreateCompatibleDC(pHVar3);
      FUN_004992dd(pHVar3);
      if (piVar2 == (int *)0x0) {
        pHVar3 = (HDC)0x0;
      }
      else {
        pHVar3 = (HDC)piVar2[1];
      }
      pHVar3 = CreateCompatibleDC(pHVar3);
      FUN_004992dd(pHVar3);
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar1 + 4);
      }
      iVar5 = FUN_0049941e(uStack_3c,uVar4);
      GetObjectA(*(HANDLE *)(iVar1 + 4),0x18,auStack_20);
      pHVar6 = CreateBitmap(iStack_1c,iStack_18,1,1,(void *)0x0);
      FUN_00499e1d(pHVar6);
      iVar1 = FUN_0049941e(pHStack_2c,0);
      FUN_0049951e(param_4);
      BitBlt(pHStack_2c,0,0,iStack_1c,iStack_18,
             (HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x40) & uStack_3c),0,0,0xcc0020);
      if (param_2 == -1) {
        param_2 = *(int *)(iStack_4 + 8);
      }
      if (param_3 == -1) {
        param_3 = *(int *)(iStack_4 + 0xc);
      }
      StretchBlt((HDC)piVar2[1],unaff_retaddr,(int)param_1,param_2,param_3,
                 (HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x40) & uStack_3c),0,0,iStack_1c,
                 iStack_18,0x660046);
      StretchBlt((HDC)piVar2[1],unaff_retaddr,(int)param_1,param_2,param_3,
                 (HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x30) & (uint)pHStack_2c),0,0,
                 iStack_1c,iStack_18,0x8800c6);
      StretchBlt((HDC)piVar2[1],unaff_retaddr,(int)param_1,param_2,param_3,
                 (HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x40) & uStack_3c),0,0,iStack_1c,
                 iStack_18,0x660046);
      uVar4 = 0;
      if (iVar5 != 0) {
        uVar4 = *(undefined4 *)(iVar5 + 4);
      }
      FUN_0049941e(uStack_3c,uVar4);
      uVar4 = 0;
      if (iVar1 != 0) {
        uVar4 = *(undefined4 *)(iVar1 + 4);
      }
      FUN_0049941e(pHStack_2c,uVar4);
      (**(code **)(*piVar2 + 0x2c))(uStack_50);
      (**(code **)(*piVar2 + 0x30))(uStack_50);
      FUN_00499e74();
      FUN_0049935b();
      FUN_0049935b();
      return;
    }
    hdc = CreateCompatibleDC(pHVar3);
    h = SelectObject(hdc,(HGDIOBJ)param_1[5]);
    if (param_5 == -1) {
      param_5 = param_1[3];
    }
    if (param_4 == -1) {
      param_4 = param_1[2];
    }
    StretchBlt(pHVar3,param_2,param_3,param_4,param_5,hdc,0,0,param_1[2],param_1[3],param_6);
    SelectObject(hdc,h);
    DeleteDC(hdc);
    return;
  }
  if (param_5 == -1) {
    param_5 = param_1[3];
  }
  if (param_4 == -1) {
    param_4 = param_1[2];
  }
  DrawIconEx(pHVar3,param_2,param_3,(HICON)param_1[4],param_4,param_5,0,(HBRUSH)0x0,3);
  return;
}

