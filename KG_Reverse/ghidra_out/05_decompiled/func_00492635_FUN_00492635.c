// Function: FUN_00492635
// Entry:    00492635
// Size:     105 bytes
// Conv:     unknown
// Signature: undefined FUN_00492635(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00492635(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((~*(uint *)(param_2 + 0x14) & 1) == 0) {
    uVar1 = FUN_0049a522();
    FUN_00492438(uVar1,0xffffffff);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        FUN_0049a00d(param_2,*(int *)(param_1 + 4) + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 8));
    }
  }
  else {
    FUN_0049a4f4(*(undefined4 *)(param_1 + 8));
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        FUN_00499f3d(param_2,*(int *)(param_1 + 4) + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 8));
    }
  }
  return;
}

