// Function: FUN_0049aaed
// Entry:    0049aaed
// Size:     70 bytes
// Conv:     unknown
// Signature: undefined FUN_0049aaed(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0049aaed(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 != 2) {
        return -1;
      }
      iVar1 = *(int *)(param_1 + 0x1c);
    }
    param_2 = iVar1 + param_2;
  }
  if (param_2 < 0) {
    FUN_00498672(9,0xffffffff,0);
  }
  *(int *)(param_1 + 0x14) = param_2;
  return param_2;
}

