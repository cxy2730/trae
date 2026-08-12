// Function: FUN_00471b70
// Entry:    00471b70
// Size:     89 bytes
// Conv:     unknown
// Signature: undefined FUN_00471b70(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00471b70(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < 0) {
    param_1 = -param_1;
    uVar3 = 0x80;
  }
  if (0x1f5f < param_1) {
    param_1 = 0x1f5f;
  }
  iVar2 = 0;
  uVar1 = param_1 + 0x21U;
  do {
    if ((uVar1 & 0x4000) != 0) break;
    uVar1 = uVar1 << 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xf);
  return (iVar2 * -0x10 + 0x10U & 0x70 | (int)(param_1 + 0x21U << ((byte)iVar2 & 0x1f)) >> 10 & 0xfU
         | uVar3) ^ 0xff;
}

