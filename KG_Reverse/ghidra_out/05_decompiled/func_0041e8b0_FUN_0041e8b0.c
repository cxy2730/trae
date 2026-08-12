// Function: FUN_0041e8b0
// Entry:    0041e8b0
// Size:     547 bytes
// Conv:     unknown
// Signature: undefined FUN_0041e8b0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0041e8b0(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  int local_1c0;
  CDialog local_1bc [96];
  int local_15c;
  undefined **local_158 [2];
  uint uStack_150;
  int local_148;
  uint local_144;
  undefined4 local_140;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f082;
  local_c = ExceptionList;
  if (param_2 < 1) {
    return;
  }
  if (*(int *)(param_1 + 0x120) < param_2) {
    return;
  }
  param_2 = param_2 + -1;
  iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x11c) + param_2 * 4) + 0x14);
  if ((iVar5 != 0xc) && (iVar5 != 0xb)) {
    return;
  }
  ExceptionList = &local_c;
  FUN_0041f050(0);
  local_4 = 0;
  if ((*(uint *)(param_1 + 0x170) & 8) != 0) {
    local_140 = 0xffffffff;
  }
  local_144 = *(uint *)(param_1 + 0x170) & 1;
  puVar1 = &DAT_02fafbd4;
  if (iVar5 != 0xb) {
    puVar1 = &DAT_02fafbc8;
  }
  local_15c = iVar5;
  FUN_00493313(puVar1);
  puVar1 = &DAT_02fafbc0;
  if (local_144 != 1) {
    puVar1 = &DAT_02fafbb8;
  }
  FUN_00493566(puVar1);
  iVar5 = 0;
  local_1c0 = 0;
  if (0 < param_2) {
    piVar3 = *(int **)(param_1 + 0x11c);
    do {
      if ((*(int *)(*piVar3 + 0x14) == 0xc) || (*(int *)(*piVar3 + 0x14) == 0xb)) {
        iVar5 = iVar5 + 1;
      }
      piVar3 = piVar3 + 1;
      param_2 = param_2 + -1;
      local_1c0 = iVar5;
    } while (param_2 != 0);
  }
  uVar4 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 300) + local_1c0 * 4);
  local_148 = 0;
  if (*(int *)(iVar5 + 0x10) != 0) {
    uVar4 = *(undefined4 *)(iVar5 + 8);
  }
  FUN_004069d0(uVar4,*(int *)(iVar5 + 0x10));
  iVar2 = FUN_0049428a();
  if ((iVar2 == 1) && ((*(byte *)(param_1 + 0x170) & 1) == 0)) {
    if (*(int *)(iVar5 + 0x10) == local_148) {
      if (*(int *)(iVar5 + 0x10) == 0) {
        pcVar6 = (char *)0x0;
      }
      else {
        pcVar6 = *(char **)(iVar5 + 8);
      }
      bVar8 = true;
      iVar5 = local_148;
      pcVar7 = (char *)(-(uint)(local_148 != 0) & uStack_150);
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar8 = *pcVar6 == *pcVar7;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) goto LAB_0041ea3b;
    }
    FUN_004065e0(local_158);
    if (*(int *)(param_1 + 0x148) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x140);
    }
    *(undefined1 *)(iVar5 + local_1c0) = 1;
  }
LAB_0041ea3b:
  local_4 = 5;
  FUN_00424da0();
  local_4._0_1_ = 4;
  FID_conflict__CHotKeyCtrl();
  local_4._0_1_ = 3;
  FID_conflict__CHotKeyCtrl();
  local_4._0_1_ = 2;
  local_158[0] = &PTR_FUN_02f95d48;
  FUN_004064a0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004931d6();
  local_4 = 0xffffffff;
  CDialog::~CDialog(local_1bc);
  ExceptionList = local_c;
  return;
}

