// Function: FUN_004302f0
// Entry:    004302f0
// Size:     141 bytes
// Conv:     unknown
// Signature: undefined FUN_004302f0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004302f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0042a650();
  if (iVar1 != 0) {
    if (param_2 != 0) {
      FUN_0042c270();
      *(undefined4 *)(param_1 + 0x44c) = 0;
    }
    FUN_0042eed0(0,0,param_2 != 0);
    iVar1 = FUN_00427920();
    *(int *)(param_1 + 0x48) = iVar1 + -1;
    iVar1 = FUN_00427960();
    *(int *)(param_1 + 0x4c) = iVar1 + -1;
    uVar2 = FUN_004279e0();
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    uVar2 = FUN_004279f0();
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    if (param_2 != 0) {
      UpdateWindow(*(HWND *)(param_1 + 0x1c));
      FUN_0042c270();
      *(undefined4 *)(param_1 + 0x44c) = 1;
    }
  }
  return;
}

