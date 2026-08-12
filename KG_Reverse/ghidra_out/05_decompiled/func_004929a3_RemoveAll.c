// Function: RemoveAll
// Entry:    004929a3
// Size:     32 bytes
// Conv:     unknown
// Signature: undefined RemoveAll(void)
// Decompiled by Ghidra 12.1.2


/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall CObList::RemoveAll(void)
    public: void __thiscall CPtrList::RemoveAll(void)
   
   Library: Visual Studio 2015 Release */

void __fastcall RemoveAll(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_00492a20();
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

