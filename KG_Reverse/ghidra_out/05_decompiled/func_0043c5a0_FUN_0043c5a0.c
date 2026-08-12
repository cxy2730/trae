// Function: FUN_0043c5a0
// Entry:    0043c5a0
// Size:     70 bytes
// Conv:     unknown
// Signature: undefined FUN_0043c5a0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043c5a0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((param_1 != 0) && (param_2 != (undefined4 *)0x0)) &&
     (puVar1 = (undefined4 *)*param_2, puVar1 != (undefined4 *)0x0)) {
    *param_2 = 0;
    FUN_0043c5f0(param_1,puVar1,0x7fff,0xffffffff);
    puVar3 = puVar1;
    for (iVar2 = 0x43; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    FUN_00446d20(param_1,puVar1);
  }
  return;
}

