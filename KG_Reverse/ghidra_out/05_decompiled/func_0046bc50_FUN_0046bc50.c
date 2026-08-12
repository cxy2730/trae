// Function: FUN_0046bc50
// Entry:    0046bc50
// Size:     82 bytes
// Conv:     unknown
// Signature: undefined FUN_0046bc50(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0046bc50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_0046bae0();
  (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(param_2,param_3);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x30))((undefined4 *)(param_1 + 0x30));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x20))
                      (*(undefined4 *)(param_1 + 0x30),param_1 + 0x18);
  }
  FUN_0046baf0();
  return iVar1;
}

