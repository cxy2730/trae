// Function: OnDevModeChange
// Entry:    0049676a
// Size:     75 bytes
// Conv:     unknown
// Signature: undefined OnDevModeChange(void)
// Decompiled by Ghidra 12.1.2


/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CWnd::OnDevModeChange(char *)
    protected: void __thiscall CWnd::OnDevModeChange(wchar_t *)
   
   Library: Visual Studio 2003 Release */

void __thiscall OnDevModeChange(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0049c724();
  if ((*(int *)(iVar1 + 4) != 0) && (*(int *)(*(int *)(iVar1 + 4) + 0x1c) == param_1)) {
    FUN_004979b3(param_2);
  }
  uVar2 = FUN_00497418();
  if ((uVar2 & 0x40000000) == 0) {
    iVar1 = FUN_00494ae4();
    FUN_00496292(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(iVar1 + 4),
                 *(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),1,1);
  }
  return;
}

