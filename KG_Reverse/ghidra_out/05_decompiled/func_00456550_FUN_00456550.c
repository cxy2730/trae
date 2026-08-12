// Function: FUN_00456550
// Entry:    00456550
// Size:     173 bytes
// Conv:     unknown
// Signature: undefined FUN_00456550(void)
// Decompiled by Ghidra 12.1.2


void FUN_00456550(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x1a4);
  iVar2 = *(int *)(param_1 + 0x138);
  iVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x20) << 3);
  *(int *)(iVar1 + 0x38) = iVar3;
  iVar5 = 0;
  *(int *)(iVar1 + 0x3c) = iVar3 + *(int *)(param_1 + 0x20) * 4;
  if (0 < *(int *)(param_1 + 0x20)) {
    piVar6 = (int *)(*(int *)(param_1 + 0xd8) + 0xc);
    do {
      iVar4 = (piVar6[6] * *piVar6) / *(int *)(param_1 + 0x138);
      iVar7 = (iVar2 + 4) * iVar4;
      iVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,iVar7 * 8);
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 0x15;
      iVar3 = iVar3 + iVar4 * 4;
      *(int *)(*(int *)(iVar1 + 0x38) + -4 + iVar5 * 4) = iVar3;
      *(int *)(*(int *)(iVar1 + 0x3c) + -4 + iVar5 * 4) = iVar3 + iVar7 * 4;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  return;
}

