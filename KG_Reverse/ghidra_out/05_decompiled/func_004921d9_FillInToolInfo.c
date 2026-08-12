// Function: FillInToolInfo
// Entry:    004921d9
// Size:     83 bytes
// Conv:     unknown
// Signature: undefined FillInToolInfo(void)
// Decompiled by Ghidra 12.1.2


/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall CToolTipCtrl::FillInToolInfo(struct tagTOOLINFOA &,class CWnd *,unsigned
   int)const 
    public: void __thiscall CToolTipCtrl::FillInToolInfo(struct tagTOOLINFOW &,class CWnd *,unsigned
   int)const 
   
   Library: Visual Studio 2003 Release */

void FillInToolInfo(undefined4 *param_1,int param_2,int param_3)

{
  HWND pHVar1;
  HWND hWnd;
  
  _memset(param_1,0,0x28);
  *param_1 = 0x28;
  if (param_2 == 0) {
    hWnd = (HWND)0x0;
  }
  else {
    hWnd = *(HWND *)(param_2 + 0x1c);
  }
  if (param_3 == 0) {
    pHVar1 = GetParent(hWnd);
    param_1[2] = pHVar1;
    param_1[1] = 1;
    param_1[3] = hWnd;
  }
  else {
    param_1[1] = 0;
    param_1[2] = hWnd;
    param_1[3] = param_3;
  }
  return;
}

