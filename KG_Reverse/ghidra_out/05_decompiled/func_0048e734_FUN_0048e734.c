// Function: FUN_0048e734
// Entry:    0048e734
// Size:     428 bytes
// Conv:     unknown
// Signature: undefined FUN_0048e734(void)
// Decompiled by Ghidra 12.1.2


bool FUN_0048e734(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  if (DAT_02fdbd44 != 0) {
    iVar2 = param_1[5];
    if ((iVar2 != DAT_02fdbdd8) || (iVar2 != DAT_02fdbde8)) {
      if (DAT_030111d0 == 0) {
        FUN_0048e8e0(1,1,iVar2,4,1,0,0,2,0,0,0);
        FUN_0048e8e0(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_03011270 != 0) {
          uVar4 = 0;
          uVar3 = 0;
          uVar5 = DAT_03011276;
        }
        else {
          uVar4 = DAT_03011274;
          uVar3 = DAT_03011276;
          uVar5 = 0;
        }
        FUN_0048e8e0(1,DAT_03011270 == 0,iVar2,DAT_03011272,uVar3,uVar4,uVar5,DAT_03011278,
                     DAT_0301127a,DAT_0301127c,DAT_0301127e);
        if (DAT_0301121c != 0) {
          uVar4 = 0;
          uVar3 = 0;
          iVar2 = param_1[5];
          uVar5 = DAT_03011222;
        }
        else {
          iVar2 = param_1[5];
          uVar4 = DAT_03011220;
          uVar3 = DAT_03011222;
          uVar5 = 0;
        }
        FUN_0048e8e0(0,DAT_0301121c == 0,iVar2,DAT_0301121e,uVar3,uVar4,uVar5,DAT_03011224,
                     DAT_03011226,DAT_03011228,DAT_0301122a);
      }
    }
    iVar2 = param_1[7];
    if (DAT_02fdbddc < DAT_02fdbdec) {
      if ((DAT_02fdbddc <= iVar2) && (iVar2 <= DAT_02fdbdec)) {
        if ((DAT_02fdbddc < iVar2) && (iVar2 < DAT_02fdbdec)) {
          return true;
        }
LAB_0048e8ac:
        iVar1 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar2 == DAT_02fdbddc) {
          return DAT_02fdbde0 <= iVar1;
        }
        return iVar1 < DAT_02fdbdf0;
      }
    }
    else {
      if (iVar2 < DAT_02fdbdec) {
        return true;
      }
      if (DAT_02fdbddc < iVar2) {
        return true;
      }
      if ((iVar2 <= DAT_02fdbdec) || (DAT_02fdbddc <= iVar2)) goto LAB_0048e8ac;
    }
  }
  return false;
}

