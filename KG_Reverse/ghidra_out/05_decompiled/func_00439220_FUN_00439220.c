// Function: FUN_00439220
// Entry:    00439220
// Size:     128 bytes
// Conv:     unknown
// Signature: undefined FUN_00439220(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00439220(int param_1)

{
  undefined1 uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  if (*(uint *)(param_1 + 0x50) <= *(uint *)(param_1 + 0x4c)) {
    pbVar2 = *(byte **)(param_1 + 0xb4);
    uVar3 = (uint)*pbVar2;
    *(uint *)(param_1 + 0x50) = uVar3;
    *(byte **)(param_1 + 0xb4) = pbVar2 + 1;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    iVar4 = *(int *)(param_1 + 0x94) + uVar3 + 1;
    *(int *)(param_1 + 0x94) = iVar4;
    if (*(int *)(param_1 + 0x74) < iVar4) {
      iVar4 = (iVar4 - uVar3) + -1;
      *(int *)(param_1 + 0x94) = iVar4;
      return CONCAT31((int3)((uint)iVar4 >> 8),0xff);
    }
    if (uVar3 == 0) {
      *(byte **)(param_1 + 0xb4) = pbVar2;
      *(int *)(param_1 + 0x94) = iVar4 + -1;
      return CONCAT31((int3)((uint)(iVar4 + -1) >> 8),0xff);
    }
  }
  iVar4 = *(int *)(param_1 + 0x4c) + 1;
  *(int *)(param_1 + 0x4c) = iVar4;
  uVar1 = **(undefined1 **)(param_1 + 0xb4);
  *(undefined1 **)(param_1 + 0xb4) = *(undefined1 **)(param_1 + 0xb4) + 1;
  return CONCAT31((int3)((uint)iVar4 >> 8),uVar1);
}

