// Function: FUN_00497879
// Entry:    00497879
// Size:     34 bytes
// Conv:     unknown
// Signature: undefined FUN_00497879(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00497879(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_0049bfb4();
    if (iVar1 != 0) {
      AfxPostQuitMessage(0);
    }
  }
  FUN_00497fa0();
  return;
}

