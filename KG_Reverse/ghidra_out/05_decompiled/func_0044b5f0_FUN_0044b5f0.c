// Function: FUN_0044b5f0
// Entry:    0044b5f0
// Size:     101 bytes
// Conv:     unknown
// Signature: undefined FUN_0044b5f0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044b5f0(int param_1)

{
  if ((*(byte *)(param_1 + 0x78) & 8) == 0) {
    FUN_0044b400(param_1,0,0);
    *(undefined4 *)(param_1 + 0x90) = 0;
    if ((*(uint *)(param_1 + 0x78) & 8) == 0) {
      *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 8;
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 8;
    }
  }
  if (*(int *)(param_1 + 0x80) == 0x49444154) {
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_004479f0(param_1,*(undefined4 *)(param_1 + 0x13c));
  }
  return;
}

