// Function: FUN_00496508
// Entry:    00496508
// Size:     91 bytes
// Conv:     unknown
// Signature: undefined FUN_00496508(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall
FUN_00496508(int param_1,uint param_2,WPARAM param_3,LPARAM param_4,LRESULT *param_5)

{
  LRESULT LVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar2 = FUN_00496563(param_2,param_3,param_4,param_5);
  }
  else {
    LVar1 = SendMessageA(*(HWND *)(param_1 + 0x1c),param_2 + 0x2000,param_3,param_4);
    if (((param_2 < 0x132) || (0x138 < param_2)) || (uVar2 = 0, LVar1 != 0)) {
      if (param_5 != (LRESULT *)0x0) {
        *param_5 = LVar1;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

