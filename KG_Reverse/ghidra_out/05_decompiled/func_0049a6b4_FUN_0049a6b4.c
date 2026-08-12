// Function: FUN_0049a6b4
// Entry:    0049a6b4
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_0049a6b4(void)
// Decompiled by Ghidra 12.1.2


bool FUN_0049a6b4(HWND param_1,LPCSTR param_2)

{
  int iVar1;
  CHAR local_24 [32];
  
  GetClassNameA(param_1,local_24,0x20);
  iVar1 = lstrcmpiA(local_24,param_2);
  return iVar1 == 0;
}

