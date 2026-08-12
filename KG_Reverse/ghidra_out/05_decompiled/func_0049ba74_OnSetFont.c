// Function: OnSetFont
// Entry:    0049ba74
// Size:     55 bytes
// Conv:     __thiscall
// Signature: long OnSetFont(CCheckListBox * this, uint param_1, long param_2)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    protected: long __thiscall CCheckListBox::OnSetFont(unsigned int,long)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

long __thiscall CCheckListBox::OnSetFont(CCheckListBox *this,uint param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  
  FUN_00494b19();
  bVar1 = FUN_00497418();
  if ((bVar1 & 0x50) == 0x50) {
    uVar2 = FUN_0049b52b();
    SendMessageA(*(HWND *)(this + 0x1c),0x1a0,0,uVar2 & 0xffff);
  }
  return 0;
}

