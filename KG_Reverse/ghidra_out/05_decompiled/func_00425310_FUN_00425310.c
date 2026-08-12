// Function: FUN_00425310
// Entry:    00425310
// Size:     260 bytes
// Conv:     unknown
// Signature: undefined FUN_00425310(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00425310(int *param_1,int param_2)

{
  HMIDISTRM hms;
  MMRESULT MVar1;
  DWORD DVar2;
  int iVar3;
  
  if ((param_1[6] != 0) || (param_1[0x14] != 200)) {
    param_1[0x13] = 0;
    param_1[6] = 0;
    if ((param_1[0x14] != 200) && (param_1[0x14] != 300)) {
      param_1[0x14] = 100;
    }
    MVar1 = midiStreamStop((HMIDISTRM)param_1[7]);
    if (MVar1 != 0) {
      (**(code **)(*param_1 + 4))(MVar1);
      return 0;
    }
    MVar1 = midiOutReset((HMIDIOUT)param_1[7]);
    if (MVar1 != 0) {
      (**(code **)(*param_1 + 4))(MVar1);
      return 0;
    }
    DVar2 = WaitForSingleObject((HANDLE)param_1[0x15],2000);
    if (DVar2 == 0x102) {
      param_1[0x14] = 200;
    }
    if (param_1[0x14] != 200) {
      return 1;
    }
  }
  param_1[0x14] = 0;
  FUN_00425f60();
  hms = (HMIDISTRM)param_1[7];
  param_1[7] = 0;
  if (param_2 != 0) {
    iVar3 = FUN_00425c70();
    if (iVar3 == 0) {
      if ((hms != (HMIDISTRM)0x0) && (MVar1 = midiStreamClose(hms), MVar1 != 0)) {
        (**(code **)(*param_1 + 4))(MVar1);
      }
      return 0;
    }
    if (param_1[9] == 0) {
      FUN_00425460();
      param_1[8] = 0;
      param_1[0x25] = 0;
    }
  }
  if ((hms != (HMIDISTRM)0x0) && (MVar1 = midiStreamClose(hms), MVar1 != 0)) {
    (**(code **)(*param_1 + 4))(MVar1);
  }
  return 1;
}

