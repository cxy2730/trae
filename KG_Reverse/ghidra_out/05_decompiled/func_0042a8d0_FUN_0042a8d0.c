// Function: FUN_0042a8d0
// Entry:    0042a8d0
// Size:     344 bytes
// Conv:     unknown
// Signature: undefined FUN_0042a8d0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0042a8d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0042a600(0);
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  iVar1 = FUN_0042a650();
  if (iVar1 == 0) {
    FUN_00496367(0,0,0,1);
    FUN_00496367(1,0,0,1);
    return;
  }
  iVar1 = FUN_0049633f(0);
  iVar2 = FUN_004279f0();
  iVar3 = FUN_00427960();
  if ((iVar3 - iVar2) + -1 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004279f0();
    iVar3 = FUN_00427960();
    iVar2 = (iVar3 - iVar2) + -1;
  }
  FUN_00496367(0,0,iVar2,1);
  if (param_2 == 1) {
    iVar2 = 0;
  }
  else {
    iVar3 = iVar2;
    if (iVar1 <= iVar2) {
      iVar3 = iVar1;
    }
    if (iVar3 < 0) {
      iVar2 = 0;
    }
    else if (iVar1 <= iVar2) goto LAB_0042a997;
    if (iVar2 == iVar1) goto LAB_0042a997;
  }
  FUN_0049630f(0,iVar2,1);
LAB_0042a997:
  iVar1 = FUN_0049633f(1);
  iVar2 = FUN_004279e0();
  iVar3 = FUN_00427920();
  if ((iVar3 - iVar2) + -1 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004279e0();
    iVar3 = FUN_00427920();
    iVar2 = (iVar3 - iVar2) + -1;
  }
  FUN_00496367(1,0,iVar2,1);
  if (param_2 != 1) {
    iVar3 = iVar2;
    if (iVar1 <= iVar2) {
      iVar3 = iVar1;
    }
    if (iVar3 < 0) {
      iVar2 = 0;
    }
    else if (iVar1 <= iVar2) {
      return;
    }
    if (iVar2 != iVar1) {
      FUN_0049630f(1,iVar2,1);
    }
    return;
  }
  FUN_0049630f(1,0,1);
  return;
}

