// Function: FUN_00405360
// Entry:    00405360
// Size:     356 bytes
// Conv:     unknown
// Signature: undefined FUN_00405360(void)
// Decompiled by Ghidra 12.1.2


int FUN_00405360(double *param_1,double *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 < 0x80000102) {
    if (uVar1 == 0x80000101) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      return 0;
    }
    switch(uVar1) {
    case 0x80000002:
      *(uint *)param_1 = (uint)(*(int *)param_2 != 0);
      return 0;
    case 0x80000003:
      if ((*param_2 <= 2958465.0) && (*param_2 < -657434.0)) {
        *param_1 = -657434.0;
        return 0;
      }
      if (*param_2 <= 2958465.0) {
        *param_1 = *param_2;
        return 0;
      }
      *param_1 = 2958465.0;
      return 0;
    case 0x80000004:
      if (0 < param_3) {
        iVar2 = FUN_00406d30(param_2,param_3,0);
        if (iVar2 != -1) {
          param_3 = iVar2;
        }
        uVar3 = FUN_0040f970(param_2,param_3);
        *(undefined4 *)param_1 = uVar3;
        if (iVar2 != -1) {
          param_3 = param_3 + 1;
        }
        return param_3;
      }
      *(undefined4 *)param_1 = 0;
      return 0;
    case 0x80000005:
      uVar3 = FUN_0040f9b0(param_2,param_3);
      *(undefined4 *)param_1 = uVar3;
      return 0;
    case 0x80000006:
switchD_00405388_caseD_80000006:
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      return 0;
    }
  }
  else if (uVar1 < 0x80000402) {
    if (uVar1 == 0x80000401) {
LAB_004054a4:
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_2 + 4);
      return 0;
    }
    if (uVar1 == 0x80000201) {
      *(undefined2 *)param_1 = *(undefined2 *)param_2;
      return 0;
    }
    if (uVar1 == 0x80000301) goto switchD_00405388_caseD_80000006;
  }
  else if (uVar1 == 0x80000501) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
  }
  else if (uVar1 == 0x80000601) goto LAB_004054a4;
  return 0;
}

