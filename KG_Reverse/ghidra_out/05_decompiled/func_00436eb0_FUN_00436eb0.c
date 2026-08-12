// Function: FUN_00436eb0
// Entry:    00436eb0
// Size:     143 bytes
// Conv:     unknown
// Signature: undefined FUN_00436eb0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00436eb0(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  HWND hWnd;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_8;
  undefined4 *local_4;
  
  hWnd = (HWND)*param_3;
  iVar2 = GetDlgCtrlID(hWnd);
  uVar1 = param_3[2];
  iVar3 = FUN_0049c4f2();
  if (*(int *)(iVar3 + 0xb8) == param_1[7]) {
    return 1;
  }
  iVar3 = FUN_00436e60(hWnd,param_4);
  if (iVar3 != 0) {
    return 1;
  }
  local_8 = param_4;
  local_4 = param_3;
  uVar4 = (**(code **)(*param_1 + 0xc))(iVar2,uVar1 & 0xffff | 0x4e0000,&local_8,0);
  return uVar4;
}

