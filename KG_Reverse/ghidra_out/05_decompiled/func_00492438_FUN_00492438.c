// Function: FUN_00492438
// Entry:    00492438
// Size:     285 bytes
// Conv:     unknown
// Signature: undefined FUN_00492438(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00492438(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_3 != -1) {
    *(int *)(param_1 + 0x10) = param_3;
  }
  if (param_2 == 0) {
    FUN_00492416(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    FUN_00492f40(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar2 = FUN_00492f17(param_2 << 2);
    *(undefined4 *)(param_1 + 4) = uVar2;
    FUN_00492555(uVar2,param_2);
    *(int *)(param_1 + 0xc) = param_2;
LAB_0049249a:
    *(int *)(param_1 + 8) = param_2;
    return;
  }
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 < param_2) {
      FUN_00492555(iVar3 + iVar1 * 4,param_2 - iVar1);
    }
    else if (param_2 < iVar1) {
      FUN_00492416(iVar3 + param_2 * 4,iVar1 - param_2);
    }
    goto LAB_0049249a;
  }
  param_3 = *(int *)(param_1 + 0x10);
  if (param_3 != 0) goto LAB_004924fc;
  param_3 = *(int *)(param_1 + 8) / 8;
  if (3 < param_3) {
    if (0x400 < param_3) {
      param_3 = 0x400;
      goto LAB_004924fc;
    }
    if (3 < param_3) goto LAB_004924fc;
  }
  param_3 = 4;
LAB_004924fc:
  param_3 = param_3 + *(int *)(param_1 + 0xc);
  if (param_3 <= param_2) {
    param_3 = param_2;
  }
  iVar3 = FUN_00492f17(param_3 << 2);
  FUN_00485580(iVar3,*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8) << 2);
  FUN_00492555(iVar3 + *(int *)(param_1 + 8) * 4,param_2 - *(int *)(param_1 + 8));
  FUN_00492f40(*(undefined4 *)(param_1 + 4));
  *(int *)(param_1 + 4) = iVar3;
  *(int *)(param_1 + 8) = param_2;
  *(int *)(param_1 + 0xc) = param_3;
  return;
}

