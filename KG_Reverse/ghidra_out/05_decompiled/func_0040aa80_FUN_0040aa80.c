// Function: FUN_0040aa80
// Entry:    0040aa80
// Size:     289 bytes
// Conv:     unknown
// Signature: undefined FUN_0040aa80(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0040aa80(int param_1)

{
  LRESULT LVar1;
  WPARAM wParam;
  undefined *local_40;
  LRESULT local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049e078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00493161();
  wParam = 0;
  local_3c = SendMessageA(*(HWND *)(param_1 + 0x1c),0x18b,0,0);
  if (0 < local_3c) {
    if (*(int *)(param_1 + 0x4c) == 1) {
      local_40 = PTR_DAT_02fd8088;
      local_4 = 0;
      if (0 < local_3c) {
        do {
          LVar1 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x187,wParam,0);
          if (LVar1 != 0) {
            FUN_0049b24f(wParam,&local_40);
            if (*(int *)(*(int *)(param_1 + 0x48) + -8) != 0) {
              FUN_00493566(&DAT_02faacb8);
            }
            FUN_004935a2(&local_40);
          }
          wParam = wParam + 1;
        } while ((int)wParam < local_3c);
      }
      local_4 = 0xffffffff;
      FUN_004931d6();
    }
    else {
      LVar1 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x188,0,0);
      if (LVar1 != -1) {
        FUN_0049b24f(LVar1,(int *)(param_1 + 0x48));
      }
    }
    local_38 = *(undefined4 *)(param_1 + 0xa8);
    local_34 = *(undefined4 *)(param_1 + 0xac);
    local_30 = 0;
    local_2c = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_00413d70(0x7d8,&local_38,0);
  }
  ExceptionList = local_c;
  return;
}

