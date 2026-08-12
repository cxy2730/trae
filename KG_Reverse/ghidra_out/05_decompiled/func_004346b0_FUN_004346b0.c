// Function: FUN_004346b0
// Entry:    004346b0
// Size:     327 bytes
// Conv:     unknown
// Signature: undefined FUN_004346b0(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_004346b0(int param_1,char *param_2,char *param_3,undefined4 param_4)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  undefined **local_34 [5];
  undefined **local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a05a0;
  local_c = ExceptionList;
  bVar7 = true;
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0xc);
  pcVar1 = param_2;
  pcVar2 = param_3;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar7 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar7);
  if (bVar7) {
    iVar4 = 0;
  }
  else {
    ExceptionList = &local_c;
    FUN_004062a0();
    local_4 = 0;
    FUN_004062a0();
    local_4._0_1_ = 1;
    pcVar1 = (char *)FUN_00432810(param_2,local_20);
    pcVar2 = (char *)FUN_00432810(param_3,local_34);
    if ((pcVar1 != param_2) && (pcVar2 != param_3)) {
      bVar7 = true;
      iVar4 = *(int *)(*(int *)(param_1 + 4) + 0xc);
      pcVar5 = pcVar1;
      pcVar6 = pcVar2;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar7 = *pcVar5 == *pcVar6;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        local_4 = (uint)local_4._1_3_ << 8;
        local_34[0] = &PTR_FUN_02f96460;
        FUN_004064a0();
        local_4 = 0xffffffff;
        local_20[0] = &PTR_FUN_02f96460;
        FUN_004064a0();
        ExceptionList = local_c;
        return 0;
      }
    }
    iVar4 = FUN_004321f0(0);
    if (iVar4 == 0) {
      FUN_00434520(pcVar1,param_4,0);
      iVar4 = FUN_00434460(pcVar2,param_4,0);
      iVar3 = FUN_00432350();
      if (iVar4 == 0) {
        iVar4 = iVar3;
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    local_34[0] = &PTR_FUN_02f96460;
    FUN_004064a0();
    local_4 = 0xffffffff;
    local_20[0] = &PTR_FUN_02f96460;
    FUN_004064a0();
  }
  ExceptionList = local_c;
  return iVar4;
}

