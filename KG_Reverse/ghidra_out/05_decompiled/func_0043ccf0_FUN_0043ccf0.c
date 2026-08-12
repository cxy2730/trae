// Function: FUN_0043ccf0
// Entry:    0043ccf0
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_0043ccf0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043ccf0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x2dc);
    puVar3 = (undefined4 *)(param_2 + 0x28);
    for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_0043cc80(param_1,param_2);
  }
  return;
}

