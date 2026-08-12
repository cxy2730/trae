// Function: FUN_0049954d
// Entry:    0049954d
// Size:     46 bytes
// Conv:     unknown
// Signature: undefined FUN_0049954d(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0049954d(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    iVar1 = SetBkMode(*(HDC *)(param_1 + 4),param_2);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    iVar1 = SetBkMode(*(HDC *)(param_1 + 8),param_2);
  }
  return iVar1;
}

