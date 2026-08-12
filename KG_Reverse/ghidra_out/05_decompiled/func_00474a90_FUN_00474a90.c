// Function: FUN_00474a90
// Entry:    00474a90
// Size:     197 bytes
// Conv:     unknown
// Signature: undefined FUN_00474a90(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00474a90(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a13a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_02f9a02c;
  puVar1 = (undefined4 *)param_1[0xc];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0046bae0();
    puVar2 = (undefined4 *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_0046baf0();
    while (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar2;
      if ((*(char *)(puVar1 + 2) != '\0') && (puVar2[1] != 0)) {
        FUN_00492f40(puVar2[1]);
      }
      FUN_00492f40(puVar2);
      puVar2 = puVar3;
    }
    iVar4 = puVar1[3];
    if (iVar4 != 0) {
      FUN_0046bad0();
      FUN_00492f40(iVar4);
    }
    FUN_00492f40(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_00475390();
  ExceptionList = local_c;
  return;
}

