// Function: FUN_00445dc0
// Entry:    00445dc0
// Size:     366 bytes
// Conv:     unknown
// Signature: undefined FUN_00445dc0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00445dc0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[8];
  if (iVar1 == 1) {
    param_1[9] = 1;
    param_1[10] = 1;
    goto LAB_00445ee7;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      if ((param_1[0x49] == 0) || ((char)param_1[0x4a] == '\0')) {
        param_1[9] = 4;
        param_1[10] = 4;
      }
      else {
        if ((char)param_1[0x4a] != '\x02') {
          (**(code **)(*param_1 + 4))(param_1,0xffffffff);
        }
        param_1[9] = 5;
        param_1[10] = 4;
      }
    }
    else {
      param_1[9] = 0;
      param_1[10] = 0;
    }
    goto LAB_00445ee7;
  }
  if (param_1[0x46] != 0) {
    param_1[9] = 3;
    param_1[10] = 2;
    goto LAB_00445ee7;
  }
  if (param_1[0x49] == 0) {
    piVar2 = (int *)param_1[0x36];
    if (*piVar2 == 1) {
      if ((piVar2[0x15] == 2) && (piVar2[0x2a] == 3)) {
        param_1[9] = 3;
        param_1[10] = 2;
        goto LAB_00445ee7;
      }
    }
    else if (((*piVar2 == 0x52) && (piVar2[0x15] == 0x47)) && (piVar2[0x2a] == 0x42))
    goto LAB_00445ebb;
    (**(code **)(*param_1 + 4))(param_1,1);
    param_1[9] = 3;
    param_1[10] = 2;
  }
  else {
    if ((char)param_1[0x4a] != '\0') {
      if ((char)param_1[0x4a] != '\x01') {
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
      }
      param_1[9] = 3;
      param_1[10] = 2;
      goto LAB_00445ee7;
    }
LAB_00445ebb:
    param_1[9] = 2;
    param_1[10] = 2;
  }
LAB_00445ee7:
  param_1[0xe] = 0;
  param_1[0xb] = 1;
  param_1[0xc] = 1;
  param_1[0xf] = 0x3ff00000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 1;
  param_1[0x14] = 1;
  param_1[0x15] = 0;
  param_1[0x16] = 2;
  param_1[0x17] = 1;
  param_1[0x18] = 0x100;
  param_1[0x22] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return;
}

