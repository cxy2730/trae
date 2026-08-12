// Function: FUN_00425f60
// Entry:    00425f60
// Size:     119 bytes
// Conv:     unknown
// Signature: undefined FUN_00425f60(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00425f60(int *param_1)

{
  MMRESULT MVar1;
  int iVar2;
  
  if (param_1[0xf] != 0) {
    iVar2 = 0;
    do {
      MVar1 = midiOutUnprepareHeader((HMIDIOUT)param_1[7],(LPMIDIHDR)(param_1[0x20] + iVar2),0x40);
      if (MVar1 != 0) {
        (**(code **)(*param_1 + 4))(MVar1);
      }
      iVar2 = iVar2 + 0x54;
    } while (iVar2 < 0xa8);
    param_1[0xf] = 0;
  }
  iVar2 = 0;
  do {
    if (*(int *)(param_1[0x20] + iVar2) != 0) {
      FUN_00492f40(*(int *)(param_1[0x20] + iVar2));
      *(undefined4 *)(param_1[0x20] + iVar2) = 0;
    }
    iVar2 = iVar2 + 0x54;
  } while (iVar2 < 0xa8);
  return;
}

