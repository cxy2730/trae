// Function: FUN_0040f680
// Entry:    0040f680
// Size:     138 bytes
// Conv:     unknown
// Signature: undefined FUN_0040f680(void)
// Decompiled by Ghidra 12.1.2


void FUN_0040f680(HWND param_1)

{
  HWND hWnd;
  int iVar1;
  undefined4 *puVar2;
  LRESULT LVar3;
  undefined4 uVar4;
  
  if (param_1 != (HWND)0x0) {
    for (hWnd = GetTopWindow(param_1); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      iVar1 = FUN_0040f4c0(hWnd,0);
      if (iVar1 != -1) {
        uVar4 = 0;
        puVar2 = (undefined4 *)FUN_0040e730(iVar1,0);
        iVar1 = FUN_00413d70(0x3ea,*puVar2,uVar4);
        if (((iVar1 != 0) && ((*(uint *)(iVar1 + 0x14) & 0x400) != 0)) &&
           (LVar3 = SendMessageA(hWnd,0xf0,0,0), LVar3 != 0)) {
          SendMessageA(hWnd,0xf1,0,0);
        }
      }
    }
  }
  return;
}

