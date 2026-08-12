// Function: FUN_0042fdc0
// Entry:    0042fdc0
// Size:     72 bytes
// Conv:     unknown
// Signature: undefined FUN_0042fdc0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0042fdc0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c);
  uVar3 = (int)uVar1 >> 0x1f;
  uVar2 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48);
  uVar4 = (int)uVar2 >> 0x1f;
  iVar5 = *(int *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0x54) <= *(int *)(param_1 + 0x4c)) {
    iVar5 = *(int *)(param_1 + 0x54);
  }
  iVar6 = *(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x50) <= *(int *)(param_1 + 0x48)) {
    iVar6 = *(int *)(param_1 + 0x50);
  }
  FUN_0042fe10(iVar6,iVar5,((uVar2 ^ uVar4) - uVar4) + 1,((uVar1 ^ uVar3) - uVar3) + 1);
  return;
}

