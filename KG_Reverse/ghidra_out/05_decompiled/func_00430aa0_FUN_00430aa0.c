// Function: FUN_00430aa0
// Entry:    00430aa0
// Size:     167 bytes
// Conv:     unknown
// Signature: undefined FUN_00430aa0(void)
// Decompiled by Ghidra 12.1.2


int FUN_00430aa0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 == 1) {
    return -1;
  }
  if (iVar1 == 2) {
    return -3;
  }
  if (iVar1 == 3) {
    return -4;
  }
  if (iVar1 == 4) {
    return -5;
  }
  if (iVar1 == 5) {
    return -6;
  }
  if (iVar1 == 6) {
    return -7;
  }
  if (iVar1 == 7) {
    return -8;
  }
  if (iVar1 == 8) {
    return -9;
  }
  if (iVar1 == 9) {
    return -10;
  }
  if (iVar1 == 10) {
    return -0xb;
  }
  if (iVar1 == 0xb) {
    return -0xc;
  }
  if (iVar1 == 0xc) {
    return -0xd;
  }
  if (iVar1 == 0xd) {
    return -0xe;
  }
  return (-(uint)(iVar1 != 0xe) & 0xe) - 0xf;
}

