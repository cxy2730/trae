// Function: FUN_00425460
// Entry:    00425460
// Size:     120 bytes
// Conv:     unknown
// Signature: undefined FUN_00425460(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00425460(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x60) + iVar3;
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 8);
      *(undefined1 *)(iVar3 + 0x14 + *(int *)(param_1 + 0x60)) = 0;
      *(undefined4 *)(iVar3 + 0x10 + *(int *)(param_1 + 0x60)) = 0;
      *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x60)) = 0;
      iVar1 = *(int *)(param_1 + 0x60);
      if (*(int *)(iVar3 + 4 + iVar1) == 0) {
        *(uint *)(iVar3 + iVar1) = *(uint *)(iVar3 + iVar1) | 1;
      }
      else {
        iVar1 = FUN_004259d0(iVar1 + iVar3,iVar3 + 0x10 + iVar1);
        if (iVar1 == 0) {
          return 0;
        }
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (uVar2 < *(uint *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 1;
}

