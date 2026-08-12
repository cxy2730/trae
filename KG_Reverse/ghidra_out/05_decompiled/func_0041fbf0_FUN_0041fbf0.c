// Function: FUN_0041fbf0
// Entry:    0041fbf0
// Size:     131 bytes
// Conv:     unknown
// Signature: undefined FUN_0041fbf0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0041fbf0(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049f228;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x60) == 0xc) {
    local_10 = PTR_DAT_02fd8088;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_0049557d(&local_10);
    puVar1 = local_10;
    uVar2 = FUN_00406cf0(local_10);
    *(undefined4 *)(param_1 + 0x74) = 0;
    FUN_004069d0(puVar1,uVar2);
    local_4 = 0xffffffff;
    FUN_004931d6();
  }
  ExceptionList = local_c;
  return;
}

