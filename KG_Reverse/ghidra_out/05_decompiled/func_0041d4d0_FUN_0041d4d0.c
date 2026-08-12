// Function: FUN_0041d4d0
// Entry:    0041d4d0
// Size:     212 bytes
// Conv:     unknown
// Signature: undefined FUN_0041d4d0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0041d4d0(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049ef88;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x137) == '\0') {
    ExceptionList = &local_c;
    FUN_00493a2d(param_2,param_3);
    ExceptionList = local_c;
    return;
  }
  if (param_3 != 0) {
    ExceptionList = &local_c;
    FUN_004062a0();
    local_4 = 0;
    puVar1 = (undefined4 *)FUN_004062c0(param_3);
    uVar5 = 0;
    puVar4 = puVar1;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar4 = puVar1;
    uVar3 = param_3;
    uVar2 = FUN_00493aa7(puVar1,param_3,0);
    FUN_0041d700(uVar2,puVar4,uVar3,uVar5);
    FUN_00493a2d(puVar1,param_3);
    local_4 = 0xffffffff;
    FUN_004064a0();
  }
  ExceptionList = local_c;
  return;
}

