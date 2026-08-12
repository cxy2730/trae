// Function: FUN_00416950
// Entry:    00416950
// Size:     152 bytes
// Conv:     unknown
// Signature: undefined FUN_00416950(void)
// Decompiled by Ghidra 12.1.2


LPCSTR FUN_00416950(char *param_1)

{
  HINSTANCE hInstance;
  int iVar1;
  BOOL BVar2;
  HCURSOR pHVar3;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  tagWNDCLASSA local_28;
  
  iVar1 = FUN_0049c724();
  hInstance = *(HINSTANCE *)(iVar1 + 8);
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    param_1 = s_WTWindow_02fab62c;
  }
  BVar2 = GetClassInfoA(hInstance,param_1,&local_28);
  if (BVar2 == 0) {
    pHVar3 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
    local_28.hbrBackground = GetStockObject(5);
    local_28.style = 0xb;
    local_28.lpfnWndProc = DefWindowProcA_exref;
    local_28.cbWndExtra = 0;
    local_28.cbClsExtra = 0;
    local_28.hIcon = (HICON)0x0;
    local_28.lpszMenuName = (LPCSTR)0x0;
    local_28.hInstance = hInstance;
    local_28.hCursor = pHVar3;
    local_28.lpszClassName = param_1;
    iVar1 = FUN_00495752(&local_28);
    if (iVar1 == 0) {
      FUN_00499f24(unaff_ESI,unaff_EBP);
    }
  }
  return param_1;
}

