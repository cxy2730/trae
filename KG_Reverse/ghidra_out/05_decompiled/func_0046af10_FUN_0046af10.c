// Function: FUN_0046af10
// Entry:    0046af10
// Size:     93 bytes
// Conv:     unknown
// Signature: undefined FUN_0046af10(void)
// Decompiled by Ghidra 12.1.2


void FUN_0046af10(uint *param_1,DWORD param_2,undefined4 *param_3)

{
  DWORD DVar1;
  undefined4 *puVar2;
  LPVOID lpParameter;
  HANDLE hObject;
  
  puVar2 = param_3;
  DVar1 = param_2;
  if (((int)param_2 < 2) || (param_3[5] == 0)) {
    lpParameter = (LPVOID)0x0;
  }
  else {
    lpParameter = (LPVOID)param_3[3];
  }
  hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)*param_3,lpParameter,0
                         ,&param_2);
  *param_1 = (uint)(hObject != (HANDLE)0x0);
  if ((2 < (int)DVar1) && (puVar2[8] != 0)) {
    *(HANDLE *)puVar2[6] = hObject;
    return;
  }
  CloseHandle(hObject);
  return;
}

