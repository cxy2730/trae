// Function: FUN_0040eba0
// Entry:    0040eba0
// Size:     65 bytes
// Conv:     unknown
// Signature: undefined FUN_0040eba0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0040eba0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x10);
  }
  uVar1 = *(uint *)(param_1 + 0x18) >> 3;
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00406d80(iVar3 + uVar1 * 4,uVar1,param_2);
  if (iVar2 == -1) {
    return 0;
  }
  return *(undefined4 *)(iVar3 + iVar2 * 4);
}

