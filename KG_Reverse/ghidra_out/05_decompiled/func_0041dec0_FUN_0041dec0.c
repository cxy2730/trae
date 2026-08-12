// Function: FUN_0041dec0
// Entry:    0041dec0
// Size:     345 bytes
// Conv:     unknown
// Signature: undefined FUN_0041dec0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0041dec0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_48;
  undefined *local_44;
  CHAR local_40 [52];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049efe0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00493244(*(undefined4 *)(param_1 + 100));
  local_4 = 0;
  FUN_00493566(&DAT_02fafb6c);
  if (*(int *)(param_1 + 0x160) != 0) {
    if (*(int *)(param_1 + 0x160) == 0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = *(int **)(param_1 + 0x158);
    }
    if (*piVar1 < 0) {
      FUN_00493566(&DAT_02fafb60);
    }
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x68) + 0xc4);
  if ((iVar2 < 0) || (*(int *)(param_1 + 0x164) <= iVar2)) {
    wsprintfA(local_40,s_______d__02fafb48,*(undefined4 *)(param_1 + 0x164));
  }
  else {
    wsprintfA(local_40,s__d____d__02fafb54,iVar2 + 1,*(int *)(param_1 + 0x164));
  }
  FUN_00493566(local_40);
  if (*(int *)(*(int *)(param_1 + 0x168) + -8) != 0) {
    FUN_00493566(&DAT_02fafb44);
    FUN_004935a2(param_1 + 0x168);
  }
  local_44 = PTR_DAT_02fd8088;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0049557d(&local_44);
  iVar2 = FUN_00482dc4(local_44,local_48);
  if (iVar2 != 0) {
    FUN_004974ae(local_48);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_004931d6();
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

