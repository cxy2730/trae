// Function: FUN_0049c655
// Entry:    0049c655
// Size:     174 bytes
// Conv:     unknown
// Signature: undefined FUN_0049c655(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049c655(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int iVar3;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_02f9bef0;
  puVar1 = (undefined4 *)extraout_ECX[5];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  if ((undefined4 *)extraout_ECX[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[6])(1);
  }
  if ((undefined4 *)extraout_ECX[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[7])(1);
  }
  if ((undefined4 *)extraout_ECX[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[8])(1);
  }
  if ((undefined4 *)extraout_ECX[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[9])(1);
  }
  iVar3 = extraout_ECX[0xe];
  if (iVar3 != 0) {
    while (*(int *)(iVar3 + 0xc) != 0) {
      uVar2 = FUN_004929dc();
      FUN_00492f40(uVar2);
      iVar3 = extraout_ECX[0xe];
    }
  }
  if ((int *)extraout_ECX[0xc] != (int *)0x0) {
    (**(code **)(*(int *)extraout_ECX[0xc] + 4))(1);
  }
  if ((int *)extraout_ECX[0xd] != (int *)0x0) {
    (**(code **)(*(int *)extraout_ECX[0xd] + 4))(1);
  }
  if ((int *)extraout_ECX[0xe] != (int *)0x0) {
    (**(code **)(*(int *)extraout_ECX[0xe] + 4))(1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

