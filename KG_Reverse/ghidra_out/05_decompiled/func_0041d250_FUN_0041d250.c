// Function: FUN_0041d250
// Entry:    0041d250
// Size:     74 bytes
// Conv:     unknown
// Signature: undefined FUN_0041d250(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041d250(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 2) != 0) {
    if (*(short *)(param_1 + 0x2e) == 0x77) {
      *(undefined2 *)(param_1 + 0x32) = 0x96a;
      *(undefined2 *)(param_1 + 0x30) = 0x578;
      *(undefined2 *)(param_1 + 0x2e) = 0x100;
      *(uint *)(param_1 + 0x28) = uVar1 | 0xe;
    }
    else if (*(short *)(param_1 + 0x2e) == 0x78) {
      *(undefined2 *)(param_1 + 0x32) = 0x96a;
      *(undefined2 *)(param_1 + 0x30) = 0x3a2;
      *(undefined2 *)(param_1 + 0x2e) = 0x100;
      *(uint *)(param_1 + 0x28) = uVar1 | 0xe;
      return;
    }
  }
  return;
}

