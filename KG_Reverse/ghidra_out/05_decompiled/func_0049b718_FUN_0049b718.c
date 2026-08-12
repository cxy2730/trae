// Function: FUN_0049b718
// Entry:    0049b718
// Size:     120 bytes
// Conv:     unknown
// Signature: undefined FUN_0049b718(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049b718(int param_1,undefined4 param_2)

{
  WPARAM wParam;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&stack0xffffffec;
  wParam = SendMessageA(*(HWND *)(param_1 + 0x1c),400,0,0);
  if (0 < (int)wParam) {
    FUN_004835e0();
    SendMessageA(*(HWND *)(param_1 + 0x1c),0x191,wParam,(LPARAM)&stack0xffffffec);
    if (0 < (int)wParam) {
      do {
        iVar1 = FUN_0049b504(*puVar2);
        if (iVar1 != 0) {
          FUN_0049b464(*puVar2,param_2);
          FUN_0049b5c6(*puVar2);
        }
        puVar2 = puVar2 + 1;
        wParam = wParam - 1;
      } while (wParam != 0);
    }
  }
  return;
}

