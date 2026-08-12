// Function: FUN_00418af0
// Entry:    00418af0
// Size:     99 bytes
// Conv:     unknown
// Signature: undefined FUN_00418af0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00418af0(int param_1)

{
  HWND hWnd;
  BOOL BVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x1bc) == 1) {
    if (*(int *)(param_1 + 0x1d0) == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = *(undefined4 **)(param_1 + 0x1c8);
    }
    puVar2 = (undefined4 *)((int)puVar3 + *(int *)(param_1 + 0x1d0));
    for (; puVar3 < puVar2; puVar3 = puVar3 + 2) {
      hWnd = (HWND)*puVar3;
      BVar1 = IsWindow(hWnd);
      if (BVar1 != 0) {
        EnableWindow(hWnd,puVar3[1]);
      }
    }
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  return;
}

