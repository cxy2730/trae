// Function: FUN_004939f3
// Entry:    004939f3
// Size:     58 bytes
// Conv:     unknown
// Signature: undefined FUN_004939f3(void)
// Decompiled by Ghidra 12.1.2


DWORD __thiscall FUN_004939f3(int param_1,LPVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    BVar1 = ReadFile(*(HANDLE *)(param_1 + 4),param_2,param_3,&param_3,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      FUN_004985b1(DVar2,BVar1);
    }
  }
  return param_3;
}

