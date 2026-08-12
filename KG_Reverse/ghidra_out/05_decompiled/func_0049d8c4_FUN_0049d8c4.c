// Function: FUN_0049d8c4
// Entry:    0049d8c4
// Size:     35 bytes
// Conv:     unknown
// Signature: undefined FUN_0049d8c4(void)
// Decompiled by Ghidra 12.1.2


bool FUN_0049d8c4(void)

{
  UINT CodePage;
  _cpinfo *lpCPInfo;
  _cpinfo local_18;
  
  lpCPInfo = &local_18;
  CodePage = GetOEMCP();
  GetCPInfo(CodePage,lpCPInfo);
  return 1 < local_18.MaxCharSize;
}

