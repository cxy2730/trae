// Function: FUN_0041d9a0
// Entry:    0041d9a0
// Size:     94 bytes
// Conv:     unknown
// Signature: undefined FUN_0041d9a0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0041d9a0(int param_1)

{
  HWND hWnd;
  BOOL BVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((*(int *)(param_1 + 0x164) != 0) &&
     (puVar3 = *(undefined4 **)(param_1 + 0x15c), puVar3 != (undefined4 *)0x0)) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x164) + (int)puVar3);
    for (; puVar3 < puVar2; puVar3 = puVar3 + 2) {
      hWnd = (HWND)*puVar3;
      BVar1 = IsWindow(hWnd);
      if (BVar1 != 0) {
        EnableWindow(hWnd,puVar3[1]);
      }
    }
    FUN_004064a0();
  }
  return;
}

