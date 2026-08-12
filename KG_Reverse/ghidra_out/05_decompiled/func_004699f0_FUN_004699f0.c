// Function: FUN_004699f0
// Entry:    004699f0
// Size:     117 bytes
// Conv:     unknown
// Signature: undefined FUN_004699f0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004699f0(undefined4 *param_1)

{
  HWND hWnd;
  HWND hWnd_00;
  int iVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  
  if (param_1[2] == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)*param_1;
  }
  hWnd = (HWND)*puVar3;
  hWnd_00 = (HWND)puVar3[1];
  iVar1 = ((uint)param_1[2] >> 3) - 1;
  if (0 < iVar1) {
    do {
      EnableWindow((HWND)puVar3[2],puVar3[3]);
      iVar1 = iVar1 + -1;
      puVar3 = puVar3 + 2;
    } while (iVar1 != 0);
  }
  if ((hWnd_00 != (HWND)0x0) && (BVar2 = IsWindow(hWnd_00), BVar2 != 0)) {
    SetForegroundWindow(hWnd_00);
  }
  if ((hWnd != (HWND)0x0) && (BVar2 = IsWindow(hWnd), BVar2 != 0)) {
    SetActiveWindow(hWnd);
  }
  return;
}

