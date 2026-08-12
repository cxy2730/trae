// Function: FUN_00434520
// Entry:    00434520
// Size:     395 bytes
// Conv:     unknown
// Signature: undefined FUN_00434520(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00434520(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined **local_34;
  undefined **local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0580;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004321f0(0);
  if (iVar1 == 0) {
    FUN_004062a0();
    local_4 = 0;
    if (param_4 == 1) {
      param_2 = FUN_00432810(param_2,local_20);
    }
    FUN_004062a0();
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar2 = FUN_004062c0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
    iVar1 = FUN_00433430(param_2,&local_3c,&local_38,&local_40,uVar2);
    if (iVar1 == 0) {
      if (local_3c == -1) {
        bVar5 = param_3 == -1;
      }
      else {
        while (bVar5 = local_3c == param_3, local_3c < param_3) {
          iVar1 = FUN_00432cf0(&local_38,&local_40,uVar2);
          if (iVar1 != 0) {
            if (iVar1 == -0x39) {
LAB_0043462e:
              iVar1 = -0x3a;
            }
            goto LAB_0043464f;
          }
          uVar3 = FUN_00432b30(uVar2,*(undefined4 *)(local_40 + 0x10));
          iVar1 = FUN_004325d0(param_2,uVar3);
          if (iVar1 != 0) goto LAB_0043462e;
          local_3c = FUN_00432b50(uVar2,*(undefined4 *)(local_40 + 0x10));
        }
      }
      if (bVar5) {
        iVar1 = FUN_00433b10(local_40,uVar2);
      }
      else {
        iVar1 = -0x3a;
      }
    }
LAB_0043464f:
    FUN_00432520(local_38);
    iVar4 = FUN_00432350();
    if (iVar1 == 0) {
      iVar1 = iVar4;
    }
    local_4 = local_4 & 0xffffff00;
    local_34 = &PTR_FUN_02f96460;
    FUN_004064a0();
    local_4 = 0xffffffff;
    local_20[0] = &PTR_FUN_02f96460;
    FUN_004064a0();
  }
  ExceptionList = local_c;
  return iVar1;
}

