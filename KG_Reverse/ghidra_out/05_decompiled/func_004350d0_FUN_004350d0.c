// Function: FUN_004350d0
// Entry:    004350d0
// Size:     755 bytes
// Conv:     unknown
// Signature: undefined FUN_004350d0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004350d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  HBRUSH hbr;
  int iVar3;
  DWORD DVar4;
  uint unaff_EBX;
  uint uVar5;
  int unaff_retaddr;
  uint local_44;
  undefined1 local_3c [4];
  undefined1 auStack_38 [4];
  undefined1 local_34 [8];
  tagRECT local_2c;
  tagRECT local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a06c0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)FUN_004992c8(*(undefined4 *)(param_2 + 0x18));
  CopyRect(&local_2c,(RECT *)(param_2 + 0x1c));
  local_44 = *(uint *)(param_2 + 0x10);
  local_4 = 0;
  iVar2 = FUN_00499eda(0xffffff);
  hbr = (HBRUSH)0x0;
  if (iVar2 != 0) {
    hbr = *(HBRUSH *)(iVar2 + 4);
  }
  FillRect((HDC)piVar1[1],&local_2c,hbr);
  local_34._0_4_ = &PTR_LAB_02f96778;
  local_4._0_1_ = 1;
  FUN_00499e74();
  local_4 = (uint)local_4._1_3_ << 8;
  iVar2 = GetSystemMetrics(0x2e);
  iVar3 = GetSystemMetrics(0x2d);
  if (*(int *)(param_1 + 0x3c) != 0) {
    local_44 = local_44 | 1;
  }
  local_1c.right = local_2c.right - iVar3;
  local_1c.left = (local_1c.right - *(int *)(param_1 + 0x58)) + *(int *)(param_1 + 0x50);
  uVar5 = local_44 & 4;
  local_1c.bottom = local_2c.bottom - iVar2;
  local_1c.top = local_2c.top + iVar2;
  DrawFrameControl((HDC)piVar1[1],&local_1c,3,((local_44 & 1) << 3 | uVar5) << 6 | 1);
  DrawEdge((HDC)piVar1[1],&local_2c,10,0xf);
  InflateRect(&local_2c,-(iVar3 + 2),-(iVar2 + 1));
  local_2c.right = local_2c.right + (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x58));
  if (uVar5 == 0) {
    DVar4 = *(DWORD *)(param_1 + 0x44);
    if (DVar4 == 0xff000000) {
      DVar4 = 0xffffff;
    }
  }
  else {
    DVar4 = GetSysColor(0xf);
  }
  FUN_00499eda(DVar4);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00499471(local_3c);
  (**(code **)(*piVar1 + 0x24))(7);
  Rectangle((HDC)piVar1[1],local_34._4_4_,local_2c.left,local_2c.top,local_2c.right);
  FUN_00499471(local_44);
  if (*(int *)(param_1 + 0x44) == -0x1000000) {
    FUN_004932c3(param_1 + 0x60);
  }
  else {
    FUN_0049557d(&stack0x00000000);
  }
  if (*(int *)(unaff_retaddr + -8) != 0) {
    (**(code **)(*piVar1 + 0x24))(0x11);
    FUN_0049954d(1);
    if (uVar5 == 0) {
      (**(code **)(*piVar1 + 0x30))
                (-(uint)(*(uint *)(param_1 + 0x48) != 0xff000000) & *(uint *)(param_1 + 0x48));
    }
    else {
      OffsetRect((LPRECT)local_34,1,1);
      iVar2 = *piVar1;
      DVar4 = GetSysColor(0x14);
      (**(code **)(iVar2 + 0x30))(DVar4);
      (**(code **)(*piVar1 + 0x68))(puStack_8,*(undefined4 *)(puStack_8 + -8),auStack_38,0x25);
      OffsetRect((LPRECT)&stack0xffffffb8,-1,-1);
      iVar2 = *piVar1;
      DVar4 = GetSysColor(0x10);
      (**(code **)(iVar2 + 0x30))(DVar4);
    }
    (**(code **)(*piVar1 + 0x68))
              (local_1c.left,*(undefined4 *)(local_1c.left + -8),&stack0xffffffb4,0x25);
  }
  if ((unaff_EBX & 0x10) != 0) {
    InflateRect((LPRECT)(local_34 + 4),-1,-1);
    DrawFocusRect((HDC)piVar1[1],(RECT *)(local_34 + 4));
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
  FUN_00499e74();
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_004931d6();
  ExceptionList = (void *)local_1c.bottom;
  return;
}

