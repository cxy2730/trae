// Function: FUN_00474bf0
// Entry:    00474bf0
// Size:     97 bytes
// Conv:     unknown
// Signature: undefined FUN_00474bf0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00474bf0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)FUN_00492f17(8);
  uVar3 = FUN_00475480();
  *puVar2 = uVar3;
  puVar2[1] = param_2;
  piVar1 = *(int **)(param_1 + 0x30);
  FUN_0046bae0();
  puVar4 = (undefined4 *)FUN_00492f17(8);
  puVar4[1] = puVar2;
  *puVar4 = 0;
  if ((undefined4 *)piVar1[1] != (undefined4 *)0x0) {
    *(undefined4 *)piVar1[1] = puVar4;
  }
  piVar1[1] = (int)puVar4;
  if (*piVar1 == 0) {
    *piVar1 = (int)puVar4;
  }
  FUN_0046baf0();
  return 0;
}

