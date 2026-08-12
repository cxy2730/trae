// Function: FUN_0046bd40
// Entry:    0046bd40
// Size:     66 bytes
// Conv:     unknown
// Signature: undefined FUN_0046bd40(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046bd40(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(0);
  if (cVar1 != '\0') {
    (**(code **)(**(int **)(param_1 + 0x24) + 4))();
    (**(code **)(**(int **)(param_1 + 0x20) + 4))();
    (**(code **)(**(int **)(param_1 + 0x24) + 0x10))();
    (**(code **)(**(int **)(param_1 + 0x20) + 8))();
    (**(code **)(**(int **)(param_1 + 0x24) + 8))();
  }
  FUN_0046e620();
  return;
}

