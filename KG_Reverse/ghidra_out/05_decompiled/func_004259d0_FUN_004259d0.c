// Function: FUN_004259d0
// Entry:    004259d0
// Size:     77 bytes
// Conv:     unknown
// Signature: undefined FUN_004259d0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004259d0(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  if ((*param_1 & 1) == 0) {
    uVar3 = 0;
    while (pbVar2 = *(byte **)(param_1 + 0xc),
          (int)pbVar2 - *(int *)(param_1 + 8) != *(int *)(param_1 + 4)) {
      bVar1 = *pbVar2;
      *(byte **)(param_1 + 0xc) = pbVar2 + 1;
      uVar3 = uVar3 << 7 | bVar1 & 0x7f;
      if ((bVar1 & 0x80) == 0) {
        *param_2 = uVar3;
        return 1;
      }
    }
  }
  return 0;
}

