// Function: `scalar_deleting_destructor'
// Entry:    0049a8f4
// Size:     28 bytes
// Conv:     __thiscall
// Signature: void * `scalar_deleting_destructor'(CMemFile * this, uint param_1)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: virtual void * __thiscall CMemFile::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __thiscall CMemFile::_scalar_deleting_destructor_(CMemFile *this,uint param_1)

{
  ~CMemFile(this);
  if ((param_1 & 1) != 0) {
    FUN_00492f40(this);
  }
  return this;
}

