// Function: FUN_0041ae90
// Entry:    0041ae90
// Size:     248 bytes
// Conv:     unknown
// Signature: undefined FUN_0041ae90(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0041ae90(int param_1)

{
  HWND hWnd;
  BOOL BVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  FARPROC pFVar3;
  int iVar4;
  int *piVar5;
  int local_58 [4];
  undefined4 auStack_48 [5];
  int aiStack_34 [13];
  
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x1c));
  if (BVar1 == 0) {
    BVar1 = IsZoomed(*(HWND *)(param_1 + 0x1c));
    if (BVar1 != 0) goto LAB_0041aeb4;
  }
  else {
LAB_0041aeb4:
    FUN_00497580(9);
  }
  FUN_00497580(3);
  hWnd = *(HWND *)(param_1 + 0x1c);
  piVar5 = (int *)0x0;
  hModule = LoadLibraryA(s_User32_dll_02fab660);
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,s_MonitorFromWindow_02fab64c);
    pFVar3 = GetProcAddress(hModule,s_GetMonitorInfoA_02fab63c);
    if ((pFVar2 != (FARPROC)0x0) && (pFVar3 != (FARPROC)0x0)) {
      iVar4 = (*pFVar2)(hWnd,2);
      if (iVar4 != 0) {
        auStack_48[0] = 0x48;
        (*pFVar3)(iVar4,auStack_48);
        piVar5 = aiStack_34;
      }
    }
    FreeLibrary(hModule);
    if (piVar5 != (int *)0x0) goto LAB_0041af4b;
  }
  SystemParametersInfoA(0x30,0,local_58,0);
  piVar5 = local_58;
LAB_0041af4b:
  FUN_00497531(0,*piVar5,piVar5[1],piVar5[2] - *piVar5,piVar5[3] - piVar5[1],4);
  BVar1 = IsWindow(hWnd);
  if (BVar1 != 0) {
    ShowWindow(hWnd,5);
  }
  return;
}

