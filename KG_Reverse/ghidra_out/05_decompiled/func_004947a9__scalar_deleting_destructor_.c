// Function: `scalar_deleting_destructor'
// Entry:    004947a9
// Size:     28 bytes
// Conv:     __thiscall
// Signature: void * `scalar_deleting_destructor'(CWnd * this, uint param_1)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: virtual void * __thiscall CWnd::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __thiscall CWnd::_scalar_deleting_destructor_(CWnd *this,uint param_1)

{
  ~CWnd(this);
  if ((param_1 & 1) != 0) {
    FUN_00492f40(this);
  }
  return this;
}

