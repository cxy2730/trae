// Function: FUN_0041c6c0
// Entry:    0041c6c0
// Size:     114 bytes
// Conv:     unknown
// Signature: undefined FUN_0041c6c0(void)
// Decompiled by Ghidra 12.1.2


LPCSTR FUN_0041c6c0(LPCSTR param_1,UINT param_2,HCURSOR param_3,HBRUSH param_4,HICON param_5)

{
  HINSTANCE hInstance;
  int iVar1;
  tagWNDCLASSA local_28;
  
  iVar1 = FUN_0049c724();
  hInstance = *(HINSTANCE *)(iVar1 + 8);
  local_28.cbClsExtra = GetClassInfoA(hInstance,param_1,&local_28);
  if ((LPCSTR)local_28.cbClsExtra == (LPCSTR)0x0) {
    local_28.lpfnWndProc = DefWindowProcA_exref;
    local_28.style = param_2;
    local_28.hCursor = param_3;
    local_28.hIcon = param_5;
    local_28.hbrBackground = param_4;
    local_28.lpszClassName = param_1;
    local_28.cbWndExtra = local_28.cbClsExtra;
    local_28.hInstance = hInstance;
    local_28.lpszMenuName = (LPCSTR)local_28.cbClsExtra;
    FUN_00495752(&local_28);
  }
  return param_1;
}

