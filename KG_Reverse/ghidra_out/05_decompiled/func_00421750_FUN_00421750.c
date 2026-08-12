// Function: FUN_00421750
// Entry:    00421750
// Size:     372 bytes
// Conv:     unknown
// Signature: undefined FUN_00421750(void)
// Decompiled by Ghidra 12.1.2


void __thiscall
FUN_00421750(int param_1,int param_2,int param_3,char *param_4,char *param_5,char *param_6)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x8c);
  param_3 = param_3 / (iVar3 + -1);
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 / param_3;
  }
  if (iVar3 + -2 < param_2) {
    if (*(int *)(param_1 + 0x88) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x80);
    }
    uVar1 = *(undefined4 *)(iVar4 + -4 + iVar3 * 4);
    *param_4 = (char)uVar1;
    *param_5 = (char)((uint)uVar1 >> 8);
    *param_6 = (char)((uint)uVar1 >> 0x10);
    return;
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x80);
  }
  uVar1 = *(undefined4 *)(iVar3 + param_2 * 4);
  cVar2 = __ftol();
  *param_4 = cVar2 + (char)uVar1;
  cVar2 = __ftol();
  *param_5 = cVar2 + (char)((uint)uVar1 >> 8);
  cVar2 = __ftol();
  param_5._0_1_ = (char)((uint)uVar1 >> 0x10);
  *param_6 = cVar2 + (char)param_5;
  return;
}

