// Function: FUN_0042d0b0
// Entry:    0042d0b0
// Size:     501 bytes
// Conv:     unknown
// Signature: undefined FUN_0042d0b0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0042d0b0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iStack_1c;
  undefined4 uStack_c;
  
  iVar1 = FUN_0042a650();
  iVar2 = FUN_00427920();
  iVar3 = FUN_00427960();
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uStack_c = 0;
  if ((((iVar1 != 0) && (-1 < param_2)) && (-1 < param_3)) &&
     ((param_2 < iVar2 && (param_3 < iVar3)))) {
    iVar1 = FUN_0049633f(1);
    iVar4 = FUN_004279e0();
    iVar1 = iVar1 + iVar4;
    iVar4 = FUN_0049633f(0);
    iVar5 = FUN_004279f0();
    iVar4 = iVar4 + iVar5;
    uStack_c = 0;
    if (param_2 < iVar1) {
      iStack_1c = param_2;
      do {
        iVar5 = FUN_0042a0a0(iStack_1c);
        uStack_c = FUN_0042a470(uStack_c,-iVar5);
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < iVar1);
    }
    else if (iVar1 < param_2) {
      for (; iVar1 < param_2; iVar1 = iVar1 + 1) {
        uVar9 = FUN_0042a0a0(iVar1);
        uStack_c = FUN_0042a470(uStack_c,uVar9);
      }
    }
    uVar8 = 0;
    if (param_3 < iVar4) {
      iStack_1c = param_3;
      do {
        iVar1 = FUN_0042a180(iStack_1c);
        uVar8 = FUN_0042a340(uVar8,-iVar1);
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < iVar4);
    }
    else if (iVar4 < param_3) {
      for (; iVar4 < param_3; iVar4 = iVar4 + 1) {
        uVar9 = FUN_0042a180(iVar4);
        uVar8 = FUN_0042a340(uVar8,uVar9);
      }
    }
    uVar7 = uStack_c;
    iVar1 = param_2;
    if (param_4 + param_2 <= iVar2) {
      iVar2 = param_4 + param_2;
    }
    for (; param_2 = iVar2, iVar1 < param_2; iVar1 = iVar1 + 1) {
      uVar9 = FUN_0042a0a0(iVar1);
      uVar7 = FUN_0042a470(uVar7,uVar9);
      iVar2 = param_2;
    }
    uVar9 = uVar8;
    param_2 = iVar3;
    if (param_5 + param_3 <= iVar3) {
      param_2 = param_5 + param_3;
    }
    for (; param_3 < param_2; param_3 = param_3 + 1) {
      uVar6 = FUN_0042a180(param_3);
      uVar9 = FUN_0042a340(uVar9,uVar6);
    }
  }
  *param_1 = uVar8;
  param_1[1] = uStack_c;
  param_1[2] = uVar9;
  param_1[3] = uVar7;
  return;
}

