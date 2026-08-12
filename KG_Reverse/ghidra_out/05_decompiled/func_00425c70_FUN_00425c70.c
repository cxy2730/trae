// Function: FUN_00425c70
// Entry:    00425c70
// Size:     737 bytes
// Conv:     unknown
// Signature: undefined FUN_00425c70(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00425c70(int *param_1)

{
  bool bVar1;
  MMRESULT MVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  BYTE local_5c [4];
  int local_58;
  undefined4 local_54 [16];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  bVar1 = false;
  if ((param_1[7] == 0) &&
     (MVar2 = midiStreamOpen((LPHMIDISTRM)(param_1 + 7),(LPUINT)(param_1 + 0x11),1,0x4262a0,
                             (DWORD_PTR)param_1,0x30000), MVar2 != 0)) {
    (**(code **)(*param_1 + 4))(MVar2);
    return 0;
  }
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  puVar7 = local_54;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar6 = FUN_00426c90(param_1[0x21],param_1[0x21],param_1[0x20]);
  FUN_00426c40(iVar6,param_1[0x21]);
  param_1[0x21] = iVar6;
  if ((param_1[0x20] == 0) || ((uint)((iVar6 - param_1[0x20]) / 0x54) < 2)) {
    iVar6 = param_1[0x21];
    puVar7 = local_54;
    iVar3 = FUN_004268c0(puVar7);
    FUN_004268f0(iVar6,2 - iVar3,puVar7);
  }
  else {
    uVar4 = FUN_004268c0();
    if (2 < uVar4) {
      FUN_00426c00(param_1[0x20] + 0xa8,param_1[0x21]);
    }
  }
  local_58 = param_1[5];
  local_5c[0] = '\b';
  local_5c[1] = '\0';
  local_5c[2] = '\0';
  local_5c[3] = '\0';
  MVar2 = midiStreamProperty((HMIDISTRM)param_1[7],local_5c,0x80000001);
  if (MVar2 == 0) {
    param_1[0x12] = 0;
    uVar8 = 1;
    param_1[0x10] = 0;
    while( true ) {
      *(undefined4 *)(param_1[0x20] + 4 + param_1[0x10] * 0x54) = 0x400;
      uVar5 = FUN_00492f17(0x400);
      *(undefined4 *)(param_1[0x20] + param_1[0x10] * 0x54) = uVar5;
      if (*(int *)(param_1[0x20] + param_1[0x10] * 0x54) == 0) break;
      *(undefined4 *)(param_1[0x20] + param_1[0x10] * 0x54 + 0x40) = 0;
      *(undefined4 *)(param_1[0x20] + 0x44 + param_1[0x10] * 0x54) = 0x400;
      *(undefined4 *)(param_1[0x20] + 0x4c + param_1[0x10] * 0x54) = 0;
      *(undefined4 *)(param_1[0x20] + 0x50 + param_1[0x10] * 0x54) = 0;
      iVar6 = FUN_004254e0(uVar8,param_1[0x20] + param_1[0x10] * 0x54);
      if (iVar6 != 0) {
        if (iVar6 != -0x67) {
          return 0;
        }
        bVar1 = true;
      }
      *(undefined4 *)(param_1[0x20] + param_1[0x10] * 0x54 + 8) =
           *(undefined4 *)(param_1[0x20] + 0x48 + param_1[0x10] * 0x54);
      if ((param_1[0xf] == 0) &&
         (MVar2 = midiOutPrepareHeader
                            ((HMIDIOUT)param_1[7],(LPMIDIHDR)(param_1[0x20] + param_1[0x10] * 0x54),
                             0x40), MVar2 != 0)) goto LAB_00425d8c;
      MVar2 = midiStreamOut((HMIDISTRM)param_1[7],(LPMIDIHDR)(param_1[0x20] + param_1[0x10] * 0x54),
                            0x40);
      if (MVar2 != 0) {
        (**(code **)(*param_1 + 4))(MVar2);
LAB_00425f3e:
        param_1[0x10] = 0;
        param_1[0xf] = 1;
        return 1;
      }
      uVar8 = 0;
      if (bVar1) goto LAB_00425f3e;
      iVar6 = param_1[0x10];
      param_1[0x10] = iVar6 + 1;
      if (1 < iVar6 + 1) {
        param_1[0x10] = 0;
        param_1[0xf] = 1;
        return 1;
      }
    }
  }
  else {
LAB_00425d8c:
    (**(code **)(*param_1 + 4))(MVar2);
  }
  return 0;
}

