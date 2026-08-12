// Function: FUN_004542f0
// Entry:    004542f0
// Size:     131 bytes
// Conv:     unknown
// Signature: undefined FUN_004542f0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004542f0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((((*(int *)(param_1 + 0x4c) != 0) || (*(int *)(param_1 + 300) != 0)) ||
       (*(int *)(param_1 + 0x24) != 3)) ||
      (((*(int *)(param_1 + 0x20) != 3 || (*(int *)(param_1 + 0x28) != 2)) ||
       ((*(int *)(param_1 + 0x78) != 3 ||
        ((iVar1 = *(int *)(param_1 + 0xd8), *(int *)(iVar1 + 8) != 2 ||
         (uVar3 = 1, *(int *)(iVar1 + 0x5c) != 1)))))))) ||
     ((*(int *)(iVar1 + 0xb0) != 1 ||
      (((((2 < *(int *)(iVar1 + 0xc) || (*(int *)(iVar1 + 0x60) != 1)) ||
         (*(int *)(iVar1 + 0xb4) != 1)) ||
        ((iVar2 = *(int *)(param_1 + 0x138), *(int *)(iVar1 + 0x24) != iVar2 ||
         (*(int *)(iVar1 + 0x78) != iVar2)))) || (*(int *)(iVar1 + 0xcc) != iVar2)))))) {
    uVar3 = 0;
  }
  return uVar3;
}

