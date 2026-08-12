// Function: FUN_004373e0
// Entry:    004373e0
// Size:     400 bytes
// Conv:     unknown
// Signature: undefined FUN_004373e0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004373e0(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  undefined8 local_10;
  int local_8;
  int local_4;
  
  *param_3 = 0;
  *param_2 = 0;
  GetClientRect(*(HWND *)(param_1 + 0x1c),(LPRECT)&local_10);
  local_8 = local_8 - (int)local_10;
  local_4 = local_4 - local_10._4_4_;
  if (*(int *)(param_1 + 0xd0) == 2) {
    *param_4 = *(int *)(param_1 + 0xd4);
    *param_5 = *(int *)(param_1 + 0xd8);
    if (*(int *)(param_1 + 0xd4) < local_8) {
      *param_2 = (local_8 - *(int *)(param_1 + 0xd4)) / 2;
      local_8 = *(int *)(param_1 + 0xd4);
    }
    iVar1 = *(int *)(param_1 + 0xd8);
    if (iVar1 < local_4) {
      *param_3 = (local_4 - iVar1) / 2;
      iVar1 = *(int *)(param_1 + 0xd8);
      local_4 = iVar1;
    }
    if ((local_8 < *(int *)(param_1 + 0xd4)) || (local_4 < iVar1)) {
      local_10 = (double)local_4 / (double)iVar1;
      iVar1 = __ftol();
      *param_4 = iVar1;
      iVar1 = __ftol();
      *param_5 = iVar1;
      *param_2 = *param_2 + (local_8 - *param_4) / 2;
      *param_3 = *param_3 + (local_4 - *param_5) / 2;
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0xd0) != 0) {
      *param_4 = local_8;
      *param_5 = local_4;
      return;
    }
    *param_4 = *(int *)(param_1 + 0xd4);
    *param_5 = *(int *)(param_1 + 0xd8);
  }
  return;
}

