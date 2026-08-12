// Function: FID_conflict:~CHotKeyCtrl
// Entry:    00491dd1
// Size:     56 bytes
// Conv:     unknown
// Signature: undefined FID_conflict:~CHotKeyCtrl(void)
// Decompiled by Ghidra 12.1.2


/* Library Function - Multiple Matches With Different Base Names
    public: virtual __thiscall CAnimateCtrl::~CAnimateCtrl(void)
    public: virtual __thiscall CButton::~CButton(void)
    public: virtual __thiscall CComboBox::~CComboBox(void)
    public: virtual __thiscall CDateTimeCtrl::~CDateTimeCtrl(void)
     21 names - too many to list
   
   Library: Visual Studio 2003 Release */

void FID_conflict__CHotKeyCtrl(void)

{
  CWnd *this;
  int unaff_EBP;
  
  FUN_004858b8();
  *(CWnd **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_LAB_02f9c164;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004953fe();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CWnd::~CWnd(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

