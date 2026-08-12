// Function: FUN_00499662
// Entry:    00499662
// Size:     76 bytes
// Conv:     unknown
// Signature: undefined FUN_00499662(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00499662(int param_1,int *param_2,int param_3,int param_4)

{
  tagPOINT local_c;
  
  local_c.x = param_1;
  local_c.y = param_1;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    SetViewportOrgEx(*(HDC *)(param_1 + 4),param_3,param_4,&local_c);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    SetViewportOrgEx(*(HDC *)(param_1 + 8),param_3,param_4,&local_c);
  }
  *param_2 = local_c.x;
  param_2[1] = local_c.y;
  return;
}

