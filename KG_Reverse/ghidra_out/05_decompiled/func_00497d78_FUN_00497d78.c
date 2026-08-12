// Function: FUN_00497d78
// Entry:    00497d78
// Size:     144 bytes
// Conv:     unknown
// Signature: undefined FUN_00497d78(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00497d78(int param_1,int param_2)

{
  HWND pHVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (param_2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      pHVar1 = GetFocus();
      if (pHVar1 == *(HWND *)(iVar2 + 0x1c)) {
        pHVar1 = GetParent(*(HWND *)(iVar2 + 0x1c));
        iVar2 = FUN_00494bb2(pHVar1);
        pHVar1 = (HWND)0x0;
        if (*(int *)(param_1 + 0x14) != 0) {
          pHVar1 = *(HWND *)(*(int *)(param_1 + 0x14) + 0x1c);
        }
        pHVar1 = GetNextDlgTabItem(*(HWND *)(iVar2 + 0x1c),pHVar1,0);
        FUN_00494bb2(pHVar1);
        FUN_004975e9();
      }
    }
    FUN_004975c2(param_2);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return;
    }
    EnableMenuItem(*(HMENU *)(*(int *)(param_1 + 0xc) + 4),*(UINT *)(param_1 + 8),
                   (-(uint)(param_2 != 0) & 0xfffffffd) + 3 | 0x400);
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  return;
}

