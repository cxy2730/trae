// Function: FUN_0045f290
// Entry:    0045f290
// Size:     116 bytes
// Conv:     unknown
// Signature: undefined FUN_0045f290(void)
// Decompiled by Ghidra 12.1.2


void FUN_0045f290(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  puVar2 = (ushort *)(param_1 + 0x8c);
  iVar3 = 7;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 2;
    uVar4 = uVar4 + uVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = (ushort *)(param_1 + 0xa8);
  iVar3 = 0x79;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 2;
    uVar5 = uVar5 + uVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = (ushort *)(param_1 + 0x28c);
  iVar3 = 0x80;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 2;
    uVar4 = uVar4 + uVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(bool *)(param_1 + 0x1c) = uVar4 <= uVar5 >> 2;
  return;
}

