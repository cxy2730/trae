// Function: FUN_0041dbf0
// Entry:    0041dbf0
// Size:     156 bytes
// Conv:     unknown
// Signature: undefined FUN_0041dbf0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0041dbf0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049efb7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0041e020();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x168);
    bVar3 = *(int *)(*(int *)(param_1 + 0x168) + -8) == 0;
    if (bVar3) {
      puVar2 = (undefined4 *)FUN_00493244(&DAT_02fafb30);
      local_4 = 0;
    }
    FUN_004961e7(*puVar2,&DAT_02fafb28,0x10);
    local_4 = 0xffffffff;
    if (bVar3) {
      FUN_004931d6();
    }
  }
  FUN_004952bc();
  ExceptionList = local_c;
  return;
}

