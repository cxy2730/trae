// Function: FUN_004080c0
// Entry:    004080c0
// Size:     184 bytes
// Conv:     unknown
// Signature: undefined FUN_004080c0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004080c0(int param_1)

{
  LONG LVar1;
  HWND pHVar2;
  int iVar3;
  int iVar4;
  tagRECT local_10;
  
  if ((param_1 != -0xd0) && (*(int *)(param_1 + 0xec) != 0)) {
    pHVar2 = GetParent(*(HWND *)(param_1 + 0x1c));
    iVar3 = FUN_00494bb2(pHVar2);
    if (iVar3 != 0) {
      pHVar2 = GetParent(*(HWND *)(param_1 + 0xec));
      iVar4 = FUN_00494bb2(pHVar2);
      pHVar2 = (HWND)0x0;
      if (iVar4 != 0) {
        pHVar2 = *(HWND *)(iVar4 + 0x1c);
      }
      if (*(HWND *)(iVar3 + 0x1c) != pHVar2) {
        pHVar2 = SetParent(*(HWND *)(param_1 + 0xec),*(HWND *)(iVar3 + 0x1c));
        FUN_00494bb2(pHVar2);
      }
      GetWindowRect(*(HWND *)(param_1 + 0x1c),&local_10);
      FUN_004999e3(&local_10);
      LVar1 = local_10.right;
      iVar3 = (local_10.right + 0x12) - local_10.right;
      local_10.left = local_10.right;
      local_10.right = local_10.right + 0x12;
      FUN_004974f0(LVar1,local_10.top,iVar3,local_10.bottom - local_10.top,1);
    }
  }
  return;
}

