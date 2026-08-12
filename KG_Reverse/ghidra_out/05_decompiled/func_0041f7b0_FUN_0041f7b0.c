// Function: FUN_0041f7b0
// Entry:    0041f7b0
// Size:     586 bytes
// Conv:     unknown
// Signature: undefined FUN_0041f7b0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0041f7b0(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int local_208;
  CDialog local_204 [504];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puVar1 = PTR_DAT_02fd8088;
  puStack_8 = &LAB_0049f1ec;
  local_c = ExceptionList;
  local_4 = 0;
  if (*(int *)(param_1 + 0x60) == 0xc) {
    ExceptionList = &local_c;
    FUN_00493313(&DAT_02fafc90);
  }
  else if (*(int *)(param_1 + 0x7c) == 1) {
    ExceptionList = &local_c;
    uVar3 = FUN_00423d60();
    FUN_00493313(uVar3);
  }
  else {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0x7c) == 2) {
      ExceptionList = &local_c;
      FUN_00493313(&DAT_02fafc38);
    }
    FUN_00493566(&DAT_02fafc20);
  }
  FUN_0049135c(param_2,(*(int *)(param_1 + 0x60) != 0xc) - 1 & 0x2fafc1c,0,
               (-(uint)(param_2 != 1) & 0x7002) + 0x1804,puVar1,param_1);
  local_4._0_1_ = 1;
  iVar2 = FUN_004914f6();
  if (iVar2 != 1) goto LAB_0041f9a7;
  FUN_004915d1(&local_208);
  local_4._0_1_ = 2;
  if (*(int *)(local_208 + -8) != 0) {
    if (param_2 == 1) {
      FUN_0041fb90();
      iVar2 = FUN_004066d0(&local_208,0xffffffff);
      if (iVar2 != -1) {
        if ((*(int *)(param_1 + 0x60) == 0xc) && (0 < *(int *)(param_1 + 0x74))) {
          if (*(int *)(param_1 + 0x74) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(param_1 + 0x6c);
          }
          iVar2 = FUN_00406d30(uVar3,*(int *)(param_1 + 0x74),0);
          if (iVar2 == -1) {
            FUN_00406570(0);
            FUN_0041f180();
            goto LAB_0041f996;
          }
          FUN_00406390(iVar2 + 1);
        }
        FUN_0041f180();
      }
    }
    else {
      if (*(int *)(param_1 + 0x60) == 0xc) {
        FUN_0041fbf0();
        if (*(int *)(param_1 + 0x74) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(param_1 + 0x6c);
        }
        iVar2 = FUN_00406d30(uVar3,*(undefined4 *)(param_1 + 0x74),0);
        if (iVar2 == -1) {
          iVar2 = *(int *)(param_1 + 0x74);
        }
      }
      else {
        iVar2 = -1;
      }
      iVar2 = FUN_00406820(&local_208,iVar2,0);
      if (iVar2 == 0) {
        FUN_004961e7(&DAT_02fafc0c,&DAT_02fafb28,0x10);
      }
    }
  }
LAB_0041f996:
  local_4._0_1_ = 1;
  FUN_004931d6();
LAB_0041f9a7:
  local_4._0_1_ = 3;
  FUN_004931d6();
  local_4 = (uint)local_4._1_3_ << 8;
  CDialog::~CDialog(local_204);
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

