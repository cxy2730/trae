// Function: FUN_00439180
// Entry:    00439180
// Size:     154 bytes
// Conv:     unknown
// Signature: undefined FUN_00439180(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00439180(int *param_1)

{
  int unaff_ESI;
  int iVar1;
  tagRECT local_10;
  
  if (param_1[0x2c] != 0) {
    GetClientRect((HWND)param_1[7],&local_10);
    if ((local_10.right - local_10.left != param_1[0x35]) ||
       (local_10.bottom - local_10.top != param_1[0x36])) {
      SetRect(&local_10,0,0,param_1[0x35],param_1[0x36]);
      iVar1 = 0;
      (**(code **)(*param_1 + 0x60))(&local_10,0);
      FUN_00497531(0,0,0,local_10.left - iVar1,local_10.top - unaff_ESI,0x16);
    }
  }
  return;
}

