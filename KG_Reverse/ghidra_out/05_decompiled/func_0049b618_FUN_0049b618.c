// Function: FUN_0049b618
// Entry:    0049b618
// Size:     256 bytes
// Conv:     unknown
// Signature: undefined FUN_0049b618(void)
// Decompiled by Ghidra 12.1.2


WPARAM __thiscall FUN_0049b618(int param_1,int param_2,int param_3,int *param_4)

{
  POINT pt;
  uint uVar1;
  LRESULT LVar2;
  int iVar3;
  BOOL BVar4;
  RECT local_20;
  int local_10;
  WPARAM local_c;
  WPARAM local_8;
  
  local_c = 0xffffffff;
  *param_4 = 0;
  local_10 = FUN_0049cd41(&LAB_0049c415);
  uVar1 = FUN_00497418();
  if ((uVar1 & 0x210) == 0x10) {
    local_8 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x1a1,0,0);
    LVar2 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x18b,0,0);
    if (param_3 < (int)(LVar2 * local_8)) {
      LVar2 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x18e,0,0);
      local_c = LVar2 + param_3 / (int)local_8;
      iVar3 = *(int *)(local_10 + 8) + 2;
LAB_0049b704:
      if (param_2 < iVar3) {
        *param_4 = *param_4 + 1;
      }
    }
  }
  else {
    local_8 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x18e,0,0);
    while( true ) {
      LVar2 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x18b,0,0);
      if (LVar2 <= (int)local_8) break;
      SendMessageA(*(HWND *)(param_1 + 0x1c),0x198,local_8,(LPARAM)&local_20);
      pt.y = param_3;
      pt.x = param_2;
      BVar4 = PtInRect(&local_20,pt);
      if (BVar4 != 0) {
        local_c = local_8;
        iVar3 = *(int *)(local_10 + 8) + 2 + local_20.left;
        goto LAB_0049b704;
      }
      local_8 = local_8 + 1;
    }
  }
  return local_c;
}

