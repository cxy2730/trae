// Function: FUN_00409f40
// Entry:    00409f40
// Size:     215 bytes
// Conv:     unknown
// Signature: undefined FUN_00409f40(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00409f40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined *local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049dff8;
  local_c = ExceptionList;
  local_24 = PTR_DAT_02fd8088;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00436e20();
  if (iVar1 != 0) {
    iVar1 = FUN_004291c0(*(undefined4 *)(param_1 + 0x84));
    if (iVar1 != -1) {
      ppuVar4 = &local_24;
      uVar2 = FUN_00427c00(iVar1,ppuVar4);
      FUN_00427b70(uVar2,iVar1,ppuVar4);
    }
  }
  if (*(int *)(local_24 + -8) != 0) {
    iVar1 = FUN_0041c080(local_24,&local_20);
    if (iVar1 != 0) {
      local_18 = local_20;
      local_10 = 0;
      puVar3 = &local_18;
      goto LAB_00409fe3;
    }
  }
  puVar3 = (undefined8 *)FUN_004813f0(&local_18);
LAB_00409fe3:
  FUN_00481c5f(puVar3);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

