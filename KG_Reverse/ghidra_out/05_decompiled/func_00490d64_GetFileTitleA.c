// Function: GetFileTitleA
// Entry:    00490d64
// Size:     6 bytes
// Conv:     __stdcall
// Signature: short GetFileTitleA(LPCSTR param_1, LPSTR Buf, WORD cchSize)
// Decompiled by Ghidra 12.1.2


short GetFileTitleA(LPCSTR param_1,LPSTR Buf,WORD cchSize)

{
  short sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00490d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = GetFileTitleA(param_1,Buf,cchSize);
  return sVar1;
}

