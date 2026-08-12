// Function: FUN_00443ce0
// Entry:    00443ce0
// Size:     306 bytes
// Conv:     unknown
// Signature: undefined FUN_00443ce0(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall
FUN_00443ce0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char *param_7,int param_8,undefined4 param_9,
            undefined4 param_10,COLORREF param_11)

{
  char cVar1;
  HBRUSH pHVar2;
  int iVar3;
  WPARAM wParam;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0e33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00494787();
  param_1[0x1a] = 0;
  param_1[0x19] = &PTR_LAB_02f97ef0;
  param_1[0xf] = param_5;
  *param_1 = &PTR_LAB_02f97e38;
  param_1[0x10] = param_6;
  param_1[0x11] = 0;
  local_4 = 1;
  param_1[0x12] = *param_3;
  param_1[0x13] = param_3[1];
  param_1[0x14] = param_3[2];
  param_1[0x15] = param_3[3];
  param_1[0x17] = param_10;
  param_1[0x18] = param_11;
  pHVar2 = CreateSolidBrush(param_11);
  FUN_00499e1d(pHVar2);
  iVar3 = FUN_0049b339(0x50800044,param_3,param_2,param_4);
  if (iVar3 != 0) {
    wParam = Detach();
    param_1[0x16] = wParam;
    SendMessageA((HWND)param_1[7],0x30,wParam,0);
    if (param_7 != (char *)0x0) {
      FUN_004974ae(param_7);
    }
    FUN_00443fa0();
    if (param_8 == 1) {
      uVar4 = 0xffffffff;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *param_7;
        param_7 = param_7 + 1;
      } while (cVar1 != '\0');
      SendMessageA((HWND)param_1[7],0xb1,~uVar4 - 1,-1);
      SendMessageA((HWND)param_1[7],0xb7,0,0);
    }
    FUN_004975e9();
  }
  ExceptionList = local_c;
  return param_1;
}

