// Function: FUN_0041ba60
// Entry:    0041ba60
// Size:     285 bytes
// Conv:     unknown
// Signature: undefined FUN_0041ba60(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041ba60(uint *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  if ((int)uVar1 < 100) {
LAB_0041ba80:
    uVar1 = 100;
  }
  else if ((int)uVar1 < 10000) {
    if ((int)uVar1 < 100) goto LAB_0041ba80;
  }
  else {
    uVar1 = 9999;
  }
  *param_1 = uVar1;
  iVar2 = *param_2;
  if (iVar2 < 1) {
LAB_0041baa3:
    iVar2 = 1;
  }
  else if (iVar2 < 0xd) {
    if (iVar2 < 1) goto LAB_0041baa3;
  }
  else {
    iVar2 = 0xc;
  }
  *param_2 = iVar2;
  iVar2 = *param_3;
  if (iVar2 < 1) {
LAB_0041bac6:
    iVar2 = 1;
  }
  else if (iVar2 < 0x20) {
    if (iVar2 < 1) goto LAB_0041bac6;
  }
  else {
    iVar2 = 0x1f;
  }
  *param_3 = iVar2;
  iVar2 = *param_4;
  if (iVar2 < 0x18) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x17 < iVar2) goto LAB_0041bae5;
  }
  else {
LAB_0041bae5:
    iVar2 = 0x17;
  }
  *param_4 = iVar2;
  iVar2 = *param_5;
  if (iVar2 < 0x3c) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x3b < iVar2) goto LAB_0041bb04;
  }
  else {
LAB_0041bb04:
    iVar2 = 0x3b;
  }
  *param_5 = iVar2;
  iVar2 = *param_6;
  if (iVar2 < 0x3c) {
    if (iVar2 < 0) {
      iVar2 = 0;
      goto LAB_0041bb28;
    }
    if (iVar2 < 0x3c) goto LAB_0041bb28;
  }
  iVar2 = 0x3b;
LAB_0041bb28:
  *param_6 = iVar2;
  iVar2 = *(int *)(*param_2 * 4 + 0x2fab6b4);
  if (*param_2 == 2) {
    uVar1 = *param_1;
    uVar3 = uVar1 & 0x80000003;
    bVar4 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar4 = (uVar3 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((bVar4) && ((int)uVar1 % 100 != 0)) || ((int)uVar1 % 400 == 0)) {
      iVar2 = 0x1d;
    }
  }
  if (iVar2 < *param_3) {
    *param_3 = iVar2;
    return;
  }
  *param_3 = *param_3;
  return;
}

