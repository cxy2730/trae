// Function: FUN_00405ea0
// Entry:    00405ea0
// Size:     204 bytes
// Conv:     unknown
// Signature: undefined FUN_00405ea0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00405ea0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049dc70;
  local_10 = ExceptionList;
  pcVar1 = (char *)*param_3;
  ExceptionList = &local_10;
  *param_1 = 0;
  if (*pcVar1 != '\0') {
    FUN_00493768();
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    FUN_004937c4();
    local_8 = CONCAT31(local_8._1_3_,2);
    iVar3 = FUN_004938d6(pcVar1,0x1011,0);
    if (iVar3 == 1) {
      for (iVar3 = 1; iVar3 < param_2; iVar3 = iVar3 + 1) {
        iVar2 = *(int *)(param_3[iVar3 * 3] + 4);
        if (0 < iVar2) {
          FUN_00493a2d(param_3[iVar3 * 3] + 8,iVar2);
        }
      }
      FUN_00493af1();
      *param_1 = 1;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00493819();
    local_8 = 0xffffffff;
    FUN_004937a6();
  }
  ExceptionList = local_10;
  return;
}

