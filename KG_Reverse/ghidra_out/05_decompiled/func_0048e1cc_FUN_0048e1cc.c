// Function: FUN_0048e1cc
// Entry:    0048e1cc
// Size:     70 bytes
// Conv:     unknown
// Signature: undefined FUN_0048e1cc(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048e1cc(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    uVar2 = FUN_0048a71c();
    return uVar2;
  }
  if ((DAT_030111c8 != (code *)0x0) && (iVar3 = FUN_0048f557(DAT_030111c8), iVar3 != 0)) {
    uVar2 = (*DAT_030111c8)(param_1);
    return uVar2;
  }
  return 0;
}

