// Function: FillSolidRect
// Entry:    0049be28
// Size:     42 bytes
// Conv:     __thiscall
// Signature: void FillSolidRect(CDC * this, tagRECT * param_1, ulong param_2)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: void __thiscall CDC::FillSolidRect(struct tagRECT const *,unsigned long)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDC::FillSolidRect(CDC *this,tagRECT *param_1,ulong param_2)

{
  SetBkColor(*(HDC *)(this + 4),param_2);
  ExtTextOutA(*(HDC *)(this + 4),0,0,2,param_1,(LPCSTR)0x0,0,(INT *)0x0);
  return;
}

