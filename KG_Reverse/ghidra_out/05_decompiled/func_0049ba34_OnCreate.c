// Function: OnCreate
// Entry:    0049ba34
// Size:     64 bytes
// Conv:     unknown
// Signature: undefined OnCreate(void)
// Decompiled by Ghidra 12.1.2


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CCheckListBox::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CCheckListBox::OnCreate(struct tagCREATESTRUCTW *)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release */

undefined4 __fastcall OnCreate(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_00494b19();
  if (iVar2 == -1) {
    uVar4 = 0xffffffff;
  }
  else {
    bVar1 = FUN_00497418();
    if ((bVar1 & 0x50) == 0x50) {
      uVar3 = FUN_0049b52b();
      SendMessageA(*(HWND *)(param_1 + 0x1c),0x1a0,0,uVar3 & 0xffff);
    }
    uVar4 = 0;
  }
  return uVar4;
}

