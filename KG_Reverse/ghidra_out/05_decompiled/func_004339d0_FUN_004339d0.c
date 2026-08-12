// Function: FUN_004339d0
// Entry:    004339d0
// Size:     307 bytes
// Conv:     unknown
// Signature: undefined FUN_004339d0(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_004339d0(int param_1,undefined4 *param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0518;
  local_c = ExceptionList;
  param_2 = (undefined4 *)*param_2;
  while( true ) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    if ((int)param_2[4] < (int)param_2[3]) break;
    param_2 = (undefined4 *)*param_2;
  }
  ExceptionList = &local_c;
  FUN_004062a0();
  local_4 = 0;
  uVar1 = FUN_004062c0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  iVar2 = FUN_00431c90(param_2[2],uVar1);
  if (iVar2 != 0) {
    local_4 = 0xffffffff;
    FUN_004064a0();
    ExceptionList = local_c;
    return iVar2;
  }
  pcVar3 = (char *)FUN_00432b30(uVar1,param_2[4]);
  bVar8 = true;
  uVar5 = *(uint *)(*(int *)(param_1 + 4) + 0xc);
  uVar4 = uVar5;
  pcVar6 = pcVar3;
  pcVar7 = param_3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    bVar8 = *pcVar6 == *pcVar7;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    local_4 = 0xffffffff;
    FUN_004064a0();
    ExceptionList = local_c;
    return 0;
  }
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)param_3;
    param_3 = param_3 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar3 = *param_3;
    param_3 = param_3 + 1;
    pcVar3 = pcVar3 + 1;
  }
  iVar2 = FUN_00431e20(param_2[2],uVar1);
  local_4 = 0xffffffff;
  FUN_004064a0();
  ExceptionList = local_c;
  return iVar2;
}

