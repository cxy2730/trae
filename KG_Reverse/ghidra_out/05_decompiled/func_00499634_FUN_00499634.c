// Function: FUN_00499634
// Entry:    00499634
// Size:     46 bytes
// Conv:     unknown
// Signature: undefined FUN_00499634(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00499634(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    iVar1 = SetMapMode(*(HDC *)(param_1 + 4),param_2);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    iVar1 = SetMapMode(*(HDC *)(param_1 + 8),param_2);
  }
  return iVar1;
}

