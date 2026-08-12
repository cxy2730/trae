// Function: FUN_00493ec7
// Entry:    00493ec7
// Size:     133 bytes
// Conv:     unknown
// Signature: undefined FUN_00493ec7(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall
FUN_00493ec7(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  HWND pHVar2;
  int *piVar3;
  CWinThread *pCVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00497bac(param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    if ((((param_3 == 0) || (param_3 == -1)) && ((param_2 & 0x8000) != 0)) && (param_2 < 0xf000)) {
      pHVar2 = GetParent(*(HWND *)(param_1 + 0x1c));
      piVar3 = (int *)FUN_00494bb2(pHVar2);
      if (piVar3 != (int *)0x0) {
        iVar1 = (**(code **)(*piVar3 + 0xc))(param_2,param_3,param_4,param_5);
        if (iVar1 != 0) goto LAB_00493f3e;
      }
      pCVar4 = AfxGetThread();
      if (pCVar4 != (CWinThread *)0x0) {
        iVar1 = (**(code **)(*(int *)pCVar4 + 0xc))(param_2,param_3,param_4,param_5);
        if (iVar1 != 0) goto LAB_00493f3e;
      }
    }
    uVar5 = 0;
  }
  else {
LAB_00493f3e:
    uVar5 = 1;
  }
  return uVar5;
}

