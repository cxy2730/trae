// Function: FUN_00430cf0
// Entry:    00430cf0
// Size:     64 bytes
// Conv:     unknown
// Signature: undefined FUN_00430cf0(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00430cf0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return -0x1b;
  }
  if (param_2 < 0) {
    return -0x1c - (uint)(param_3 != 1);
  }
  iVar1 = FUN_00430d30(*(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 0xc0),param_3);
  return iVar1;
}

