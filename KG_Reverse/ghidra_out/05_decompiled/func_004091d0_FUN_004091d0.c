// Function: FUN_004091d0
// Entry:    004091d0
// Size:     297 bytes
// Conv:     unknown
// Signature: undefined FUN_004091d0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004091d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [60];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049df48;
  local_c = ExceptionList;
  local_4c = 0;
  local_50 = 0;
  ExceptionList = &local_c;
  FUN_00429700();
  local_4 = 0;
  iVar2 = FUN_00436e20();
  if (iVar2 != 0) {
    iVar2 = FUN_004291c0(*(undefined4 *)(param_1 + 0x130));
    if (iVar2 != -1) {
      uVar4 = 1;
      uVar3 = FUN_00427c00(iVar2,1);
      iVar2 = FUN_00427a00(local_48,uVar3,iVar2,uVar4);
      if (iVar2 != 0) {
        local_4c = FUN_004299c0(&local_50);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  FUN_004069d0(local_4c,local_50);
  puVar1 = *(undefined4 **)(param_1 + 0xf4);
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
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  if (*(int *)(param_1 + 0x120) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x118);
  }
  FUN_004241a0(uVar3,*(undefined4 *)(param_1 + 0x120));
  local_4 = 0xffffffff;
  thunk_FUN_00429740();
  ExceptionList = local_c;
  return;
}

