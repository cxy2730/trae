// Function: FUN_00414d20
// Entry:    00414d20
// Size:     256 bytes
// Conv:     unknown
// Signature: undefined FUN_00414d20(void)
// Decompiled by Ghidra 12.1.2


void FUN_00414d20(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  HMENU hMenu;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 local_8;
  HMENU local_4;
  
  iVar1 = FUN_0040e730(0,0);
  iVar1 = iVar1 + 0x18;
  iVar2 = FUN_00406cf0(iVar1);
  iVar2 = iVar1 + iVar2;
  iVar3 = FUN_00406cf0(iVar2);
  iVar4 = *(int *)(iVar2 + 0x1c + iVar3);
  iVar3 = iVar2 + 0x1c + iVar3;
  iVar3 = iVar3 + iVar4 * 4 + 8 + *(int *)(iVar3 + 4 + iVar4 * 4);
  iVar4 = FUN_00406cf0(iVar3);
  uVar7 = *(uint *)(iVar4 + 4 + iVar3) >> 3 & 1;
  iVar3 = FUN_00406cf0(iVar1);
  iVar4 = FUN_00406cf0(iVar1 + iVar3);
  iVar1 = *(int *)(iVar1 + iVar3 + iVar4);
  if (iVar1 != 0) {
    BVar5 = IsWindow(*(HWND *)(iVar1 + 0x1c));
    if (BVar5 != 0) {
      local_4 = GetMenu(*(HWND *)(iVar1 + 0x1c));
      hMenu = (HMENU)0x0;
      iVar3 = FUN_0040f200(&local_8);
      param_1 = 0;
      if (0 < iVar3) {
        puVar10 = &param_1;
        uVar9 = 0;
        uVar8 = 0xffffffff;
        uVar6 = FUN_0040e730(local_8,0);
        hMenu = (HMENU)FUN_0041fcb0(uVar6,iVar3,uVar8,uVar9,puVar10,uVar7);
      }
      if (*(HACCEL *)(iVar1 + 0x1dc) != (HACCEL)0x0) {
        DestroyAcceleratorTable(*(HACCEL *)(iVar1 + 0x1dc));
      }
      *(undefined4 *)(iVar1 + 0x1dc) = param_1;
      SetMenu(*(HWND *)(iVar1 + 0x1c),hMenu);
      if (local_4 != (HMENU)0x0) {
        DestroyMenu(local_4);
      }
    }
  }
  return;
}

