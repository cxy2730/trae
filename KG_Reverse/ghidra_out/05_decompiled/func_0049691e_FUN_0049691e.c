// Function: FUN_0049691e
// Entry:    0049691e
// Size:     99 bytes
// Conv:     unknown
// Signature: undefined FUN_0049691e(void)
// Decompiled by Ghidra 12.1.2


int FUN_0049691e(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_2;
  iVar1 = FUN_00496437(&param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_0049cd41(&LAB_0049c375);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(iVar2 + 0x1c);
    }
    iVar2 = FUN_00496981(*(undefined4 *)(param_1 + 4),uVar3,param_3,*(undefined4 *)(iVar1 + 4),
                         *(undefined4 *)(iVar1 + 8));
    if (iVar2 == 0) {
      param_2 = FUN_00494b19();
    }
    else {
      param_2 = *(int *)(iVar1 + 4);
    }
  }
  return param_2;
}

