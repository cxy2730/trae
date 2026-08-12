// Function: FUN_00484524
// Entry:    00484524
// Size:     46 bytes
// Conv:     unknown
// Signature: undefined FUN_00484524(void)
// Decompiled by Ghidra 12.1.2


int FUN_00484524(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00484552(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)(param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_0048cfa8(*(undefined4 *)(param_1 + 0x10));
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

