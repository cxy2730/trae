// Function: FUN_0046b710
// Entry:    0046b710
// Size:     81 bytes
// Conv:     unknown
// Signature: undefined FUN_0046b710(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0046b710(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = *(int **)(param_1 + 0xc);
  FUN_0046bae0();
  puVar2 = (undefined4 *)FUN_00492f17(8);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if ((undefined4 *)piVar1[1] != (undefined4 *)0x0) {
    *(undefined4 *)piVar1[1] = puVar2;
  }
  piVar1[1] = (int)puVar2;
  if (*piVar1 == 0) {
    *piVar1 = (int)puVar2;
  }
  FUN_0046baf0();
  FUN_0046bb50();
  return 0;
}

