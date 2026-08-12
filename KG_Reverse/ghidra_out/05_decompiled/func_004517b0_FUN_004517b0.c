// Function: FUN_004517b0
// Entry:    004517b0
// Size:     197 bytes
// Conv:     unknown
// Signature: undefined FUN_004517b0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004517b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a1138;
  local_c = ExceptionList;
  local_10 = PTR_DAT_02fd8088;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0049557d(&local_10);
  iVar2 = *(int *)(param_1 + 0xd8);
  iVar1 = FUN_00482c94(local_10);
  if (iVar1 <= iVar2) {
    iVar2 = FUN_00482c94(local_10);
  }
  iVar1 = *(int *)(param_1 + 0xd4);
  if (iVar1 <= iVar2) {
    iVar1 = *(int *)(param_1 + 0xd8);
    iVar2 = FUN_00482c94(local_10);
    if (iVar2 <= iVar1) {
      iVar1 = FUN_00482c94(local_10);
    }
  }
  *(int *)(param_1 + 0xdc) = iVar1;
  FUN_00494577();
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

