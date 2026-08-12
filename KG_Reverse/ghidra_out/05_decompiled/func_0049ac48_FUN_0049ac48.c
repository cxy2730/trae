// Function: FUN_0049ac48
// Entry:    0049ac48
// Size:     231 bytes
// Conv:     unknown
// Signature: undefined FUN_0049ac48(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0049ac48(int param_1,LPCSTR param_2,UINT param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  CHAR *lpCaption;
  CHAR local_118 [260];
  int local_14;
  HWND local_10;
  int local_c;
  HWND local_8;
  
  local_14 = param_1;
  FUN_0049ac1a(0);
  local_10 = (HWND)FUN_0049adc0(0,&local_8);
  if (((local_10 == (HWND)0x0) ||
      (piVar1 = (int *)SendMessageA(local_8,0x376,0,0), piVar1 == (int *)0x0)) &&
     (piVar1 = (int *)0x0, param_1 != 0)) {
    piVar1 = (int *)(param_1 + 0x9c);
  }
  local_c = 0;
  if ((piVar1 != (int *)0x0) && (local_c = *piVar1, param_4 != 0)) {
    *piVar1 = param_4 + 0x30000;
  }
  if (((param_3 & 0xf0) == 0) &&
     ((uVar2 = param_3 & 0xf, uVar2 < 2 || ((2 < uVar2 && (uVar2 < 5)))))) {
    param_3 = param_3 | 0x30;
  }
  if (param_1 == 0) {
    lpCaption = local_118;
    GetModuleFileNameA((HMODULE)0x0,local_118,0x104);
  }
  else {
    lpCaption = *(CHAR **)(param_1 + 0x78);
  }
  iVar3 = MessageBoxA(local_10,param_2,lpCaption,param_3);
  if (piVar1 != (int *)0x0) {
    *piVar1 = local_c;
  }
  if (local_8 != (HWND)0x0) {
    EnableWindow(local_8,1);
  }
  FUN_0049ac1a(1);
  return iVar3;
}

