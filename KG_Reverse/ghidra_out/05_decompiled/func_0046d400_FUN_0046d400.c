// Function: FUN_0046d400
// Entry:    0046d400
// Size:     67 bytes
// Conv:     unknown
// Signature: undefined FUN_0046d400(void)
// Decompiled by Ghidra 12.1.2


int __fastcall FUN_0046d400(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  local_4 = param_1;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))(&local_4,uVar1);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x10))(uVar1);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x7c) = iVar2;
      (**(code **)(**(int **)(param_1 + 0x18) + 0x2c))(iVar2);
      iVar2 = 0;
    }
  }
  return iVar2;
}

