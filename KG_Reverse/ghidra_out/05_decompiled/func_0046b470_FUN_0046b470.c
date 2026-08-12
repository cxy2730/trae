// Function: FUN_0046b470
// Entry:    0046b470
// Size:     304 bytes
// Conv:     unknown
// Signature: undefined FUN_0046b470(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046b470(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  *param_1 = &PTR_FUN_02f99e0c;
  if ((undefined4 *)param_1[0x8d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x8d])(1);
    param_1[0x8d] = 0;
  }
  if (param_1[5] != 0) {
    param_1[4] = 1;
    FUN_0046bb50();
    (**(code **)(*(int *)param_1[5] + 0x14))();
    if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[5])(1);
    }
    param_1[5] = 0;
  }
  if (param_1[7] != 0) {
    FUN_00492f40(param_1[7]);
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    FUN_0046bb30();
    FUN_00492f40(iVar1);
    param_1[1] = 0;
  }
  puVar2 = (undefined4 *)param_1[3];
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0046bae0();
    puVar3 = (undefined4 *)*puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_0046baf0();
    while (puVar3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)*puVar3;
      if ((*(char *)(puVar2 + 2) != '\0') && ((undefined4 *)puVar3[1] != (undefined4 *)0x0)) {
        (*(code *)**(undefined4 **)puVar3[1])(1);
      }
      FUN_00492f40(puVar3);
      puVar3 = puVar4;
    }
    if ((undefined4 *)puVar2[3] != puVar4) {
      FUN_0046b5a0(1);
    }
    FUN_00492f40(puVar2);
    param_1[3] = puVar4;
  }
  iVar1 = param_1[9];
  if ((undefined4 *)iVar1 != puVar4) {
    FUN_0046bad0();
    FUN_00492f40(iVar1);
    param_1[9] = puVar4;
  }
  iVar1 = param_1[10];
  if ((undefined4 *)iVar1 != puVar4) {
    FUN_0046bad0();
    FUN_00492f40(iVar1);
    param_1[10] = puVar4;
  }
  iVar1 = param_1[0xb];
  if ((undefined4 *)iVar1 != puVar4) {
    FUN_0046bad0();
    FUN_00492f40(iVar1);
    param_1[0xb] = puVar4;
  }
  return;
}

