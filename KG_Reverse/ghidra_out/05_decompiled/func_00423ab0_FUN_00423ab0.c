// Function: FUN_00423ab0
// Entry:    00423ab0
// Size:     170 bytes
// Conv:     unknown
// Signature: undefined FUN_00423ab0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00423ab0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049f520;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_02f96084;
  puVar1 = (undefined4 *)param_1[0x3d];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    if ((HICON)puVar1[3] != (HICON)0x0) {
      DestroyIcon((HICON)puVar1[3]);
      puVar1[3] = 0;
    }
    if (puVar1[4] != 0) {
      FUN_00492f40(puVar1[4]);
      puVar1[4] = 0;
    }
    FUN_00492f40(puVar1);
  }
  param_1[0x3e] = &PTR_LAB_02f9605c;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00499e74();
  local_4 = 0xffffffff;
  FUN_00437210();
  ExceptionList = local_c;
  return;
}

