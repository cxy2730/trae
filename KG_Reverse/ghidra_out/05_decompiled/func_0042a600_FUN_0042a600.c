// Function: FUN_0042a600
// Entry:    0042a600
// Size:     78 bytes
// Conv:     unknown
// Signature: undefined FUN_0042a600(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0042a600(int param_1,int param_2)

{
  BOOL BVar1;
  
  if (*(HWND *)(param_1 + 0x68) != (HWND)0x0) {
    BVar1 = IsWindow(*(HWND *)(param_1 + 0x68));
    if (BVar1 != 0) {
      if (param_2 == 1) {
        SendMessageA(*(HWND *)(param_1 + 0x68),0x8001,0,0);
        *(undefined4 *)(param_1 + 0x68) = 0;
        return;
      }
      SendMessageA(*(HWND *)(param_1 + 0x68),0x10,0,0);
    }
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}

