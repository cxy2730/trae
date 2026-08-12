// Function: FUN_0049be52
// Entry:    0049be52
// Size:     76 bytes
// Conv:     unknown
// Signature: undefined FUN_0049be52(void)
// Decompiled by Ghidra 12.1.2


void __thiscall
FUN_0049be52(int param_1,int param_2,int param_3,int param_4,int param_5,COLORREF param_6)

{
  RECT local_14;
  
  SetBkColor(*(HDC *)(param_1 + 4),param_6);
  local_14.left = param_2;
  local_14.right = param_2 + param_4;
  local_14.top = param_3;
  local_14.bottom = param_3 + param_5;
  ExtTextOutA(*(HDC *)(param_1 + 4),0,0,2,&local_14,(LPCSTR)0x0,0,(INT *)0x0);
  return;
}

