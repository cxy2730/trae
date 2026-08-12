// Function: InitString
// Entry:    004912be
// Size:     41 bytes
// Conv:     __thiscall
// Signature: void InitString(CSimpleException * this)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: void __thiscall CSimpleException::InitString(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CSimpleException::InitString(CSimpleException *this)

{
  int iVar1;
  
  *(undefined4 *)(this + 0xc) = 1;
  iVar1 = FUN_00498a96(*(undefined4 *)(this + 0x94),this + 0x14,0x80);
  *(uint *)(this + 0x10) = (uint)(iVar1 != 0);
  return;
}

