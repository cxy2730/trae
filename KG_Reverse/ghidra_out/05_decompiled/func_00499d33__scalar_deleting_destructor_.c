// Function: `scalar_deleting_destructor'
// Entry:    00499d33
// Size:     28 bytes
// Conv:     __thiscall
// Signature: void * `scalar_deleting_destructor'(CPaintDC * this, uint param_1)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: virtual void * __thiscall CPaintDC::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __thiscall CPaintDC::_scalar_deleting_destructor_(CPaintDC *this,uint param_1)

{
  ~CPaintDC(this);
  if ((param_1 & 1) != 0) {
    FUN_00492f40(this);
  }
  return this;
}

