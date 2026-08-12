// Function: `scalar_deleting_destructor'
// Entry:    004914a2
// Size:     28 bytes
// Conv:     __thiscall
// Signature: void * `scalar_deleting_destructor'(CMiniDockFrameWnd * this, uint param_1)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: virtual void * __thiscall CMiniDockFrameWnd::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __thiscall
CMiniDockFrameWnd::_scalar_deleting_destructor_(CMiniDockFrameWnd *this,uint param_1)

{
  ~CMiniDockFrameWnd(this);
  if ((param_1 & 1) != 0) {
    FUN_00492f40(this);
  }
  return this;
}

