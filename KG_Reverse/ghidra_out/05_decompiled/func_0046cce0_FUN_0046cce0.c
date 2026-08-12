// Function: FUN_0046cce0
// Entry:    0046cce0
// Size:     140 bytes
// Conv:     unknown
// Signature: undefined FUN_0046cce0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0046cce0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_2;
    if (100 < param_2) {
      iVar2 = 100;
    }
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  if (iVar1 == 0) {
    iVar2 = (int)(((ulonglong)(uint)(*(int *)(param_1 + 0x44) * iVar2) /
                  (ulonglong)*(uint *)(param_1 + 0x38)) / 100);
    *(int *)(param_1 + 0x88) = iVar2;
    iVar2 = iVar2 * *(uint *)(param_1 + 0x38);
  }
  else {
    *(int *)(param_1 + 0x88) = (*(int *)(iVar1 + 0xc) * iVar2) / 100;
    iVar2 = FUN_0046cd70(*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(param_1 + 0x44),iVar2);
  }
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x34))(&param_2,iVar2,0);
  return;
}

