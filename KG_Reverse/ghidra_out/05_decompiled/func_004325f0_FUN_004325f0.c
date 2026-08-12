// Function: FUN_004325f0
// Entry:    004325f0
// Size:     501 bytes
// Conv:     unknown
// Signature: undefined FUN_004325f0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004325f0(double *param_1,double *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  double local_20;
  undefined4 local_18;
  double local_14;
  undefined4 local_c;
  
  iVar1 = *(int *)(param_3 + 0x18);
  local_2c = 0;
  if (0 < iVar1) {
    piVar4 = (int *)(param_3 + 0x3c);
    do {
      switch(*piVar4) {
      case 1:
        if (*(byte *)param_2 < *(byte *)param_1) {
          return 1;
        }
        if (*(byte *)param_1 < *(byte *)param_2) {
          return 0xffffffff;
        }
        param_1 = (double *)((int)param_1 + 1);
        param_2 = (double *)((int)param_2 + 1);
        break;
      case 2:
        if (*(short *)param_2 < *(short *)param_1) {
          return 1;
        }
        if (*(short *)param_1 < *(short *)param_2) {
          return 0xffffffff;
        }
        param_1 = (double *)((int)param_1 + 2);
        param_2 = (double *)((int)param_2 + 2);
        break;
      case 3:
        if ((int)*(float *)param_2 < (int)*(float *)param_1) {
          return 1;
        }
        if ((int)*(float *)param_1 < (int)*(float *)param_2) {
          return 0xffffffff;
        }
        param_1 = (double *)((int)param_1 + 4);
        param_2 = (double *)((int)param_2 + 4);
        break;
      case 4:
        fVar2 = *(float *)((int)param_1 + 4);
        fVar3 = *(float *)((int)param_2 + 4);
        if ((int)fVar3 < (int)fVar2) {
          return 1;
        }
        if (((int)fVar3 <= (int)fVar2) && ((uint)*(float *)param_2 < (uint)*(float *)param_1)) {
          return 1;
        }
        if ((int)fVar2 < (int)fVar3) {
          return 0xffffffff;
        }
        if (((int)fVar2 <= (int)fVar3) && ((uint)*(float *)param_1 < (uint)*(float *)param_2)) {
          return 0xffffffff;
        }
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        break;
      case 5:
        if (*(float *)param_2 < *(float *)param_1) {
          return 1;
        }
        if (*(float *)param_1 < *(float *)param_2) {
          return 0xffffffff;
        }
        param_1 = (double *)((int)param_1 + 4);
        param_2 = (double *)((int)param_2 + 4);
        break;
      case 6:
        if (*param_2 < *param_1) {
          return 1;
        }
        if (*param_1 < *param_2) {
          return 0xffffffff;
        }
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        break;
      case 7:
        if (*(char *)param_1 == '\0') {
LAB_0043272e:
          if (*(char *)param_2 != '\0') {
            return 0xffffffff;
          }
        }
        else {
          if (*(char *)param_2 == '\0') {
            return 1;
          }
          if (*(char *)param_1 == '\0') goto LAB_0043272e;
        }
        param_1 = (double *)((int)param_1 + 1);
        param_2 = (double *)((int)param_2 + 1);
        break;
      case 8:
        local_14 = *param_1;
        local_20 = *param_2;
        local_c = 0;
        local_18 = 0;
        iVar5 = FUN_00481640(&local_20);
        if (iVar5 != 0) {
          return 1;
        }
        iVar5 = FUN_0048160a(&local_20);
        if (iVar5 != 0) {
          return 0xffffffff;
        }
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        break;
      case 9:
        fVar2 = *(float *)param_1;
        fVar3 = *(float *)param_2;
        if ((uint)fVar2 >= (uint)fVar3 && fVar2 != fVar3) {
          return 1;
        }
        if ((uint)fVar2 < (uint)fVar3) {
          return 0xffffffff;
        }
        param_1 = (double *)((int)param_1 + 4);
        param_2 = (double *)((int)param_2 + 4);
        break;
      default:
        iVar5 = -*piVar4;
        iVar6 = FUN_0048360f(param_1,param_2,iVar5);
        if (iVar6 < 0) {
          return 0xffffffff;
        }
        if (0 < iVar6) {
          return 1;
        }
        param_1 = (double *)((int)param_1 + iVar5);
        param_2 = (double *)((int)param_2 + iVar5);
      }
      local_2c = local_2c + 1;
      piVar4 = piVar4 + 1;
    } while (local_2c < iVar1);
  }
  return 0;
}

