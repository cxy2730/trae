// Function: FUN_00415bc0
// Entry:    00415bc0
// Size:     57 bytes
// Conv:     unknown
// Signature: undefined FUN_00415bc0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00415bc0(int param_1)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 0x380) != 0) {
    pcVar1 = (code *)FUN_00426d20(s_RemovePlayer_02faaf9c);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*(undefined4 *)(param_1 + 0x380));
    }
    *(undefined4 *)(param_1 + 0x380) = 0;
  }
  return;
}

