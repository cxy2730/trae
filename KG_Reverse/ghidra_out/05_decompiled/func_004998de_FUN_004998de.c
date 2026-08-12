// Function: FUN_004998de
// Entry:    004998de
// Size:     66 bytes
// Conv:     unknown
// Signature: undefined FUN_004998de(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_004998de(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    iVar1 = ExcludeClipRect(*(HDC *)(param_1 + 4),param_2,param_3,param_4,param_5);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    iVar1 = ExcludeClipRect(*(HDC *)(param_1 + 8),param_2,param_3,param_4,param_5);
  }
  return iVar1;
}

