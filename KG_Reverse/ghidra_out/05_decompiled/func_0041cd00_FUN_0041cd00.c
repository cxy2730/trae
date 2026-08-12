// Function: FUN_0041cd00
// Entry:    0041cd00
// Size:     234 bytes
// Conv:     unknown
// Signature: undefined FUN_0041cd00(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041cd00(int *param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_ESI;
  int iStack_8;
  
  switch(param_2) {
  case 0:
    (**(code **)(*param_1 + 0x34))();
    return;
  case 1:
    iVar1 = *param_1;
    break;
  case 2:
    (**(code **)(*param_1 + 0x34))();
    goto switchD_0041cd11_default;
  case 3:
    iVar1 = *param_1;
    break;
  case 4:
    (**(code **)(*param_1 + 0x34))();
    goto switchD_0041cd11_default;
  case 5:
    iVar1 = *param_1;
    break;
  default:
    goto switchD_0041cd11_default;
  }
  (**(code **)(iVar1 + 0x34))();
switchD_0041cd11_default:
  (**(code **)(*param_1 + 0x34))();
  GetWindowExtEx((HDC)param_1[2],(LPSIZE)&stack0xfffffff4);
  iVar1 = -iStack_8;
  (**(code **)(*param_1 + 0x48))(&stack0xfffffff4);
  GetViewportOrgEx((HDC)param_1[2],(LPPOINT)&stack0xffffffe8);
  if ((unaff_ESI != 0) || (iVar1 != 0)) {
    (**(code **)(*param_1 + 0x38))(&stack0xffffffe8,0,0);
  }
  GetWindowOrgEx((HDC)param_1[2],(LPPOINT)&stack0xffffffe8);
  if ((unaff_ESI != 0) || (iVar1 != 0)) {
    FUN_0049979e(&stack0xffffffe8,0,0);
  }
  return;
}

