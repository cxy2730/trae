// Function: FUN_0046cff0
// Entry:    0046cff0
// Size:     284 bytes
// Conv:     unknown
// Signature: undefined FUN_0046cff0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046cff0(undefined4 *param_1)

{
  MMRESULT MVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a12e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_02f99f0c;
  iVar3 = 0;
  local_4 = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 1;
  FUN_0046bb50();
  FUN_0046bb50();
  if ((int *)param_1[0x19] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x19] + 0x14))();
    if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x19])(1);
    }
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    waveOutReset((HWAVEOUT)param_1[0xf]);
    uVar2 = 0;
    if (param_1[0x16] != 0) {
      do {
        if (*(int *)(param_1[0xe] + 0xc + iVar3) < 0) {
          waveOutUnprepareHeader((HWAVEOUT)param_1[0xf],(LPWAVEHDR)(param_1[0xe] + iVar3),0x20);
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x20;
      } while (uVar2 < (uint)param_1[0x16]);
    }
    MVar1 = waveOutClose((HWAVEOUT)param_1[0xf]);
    while (MVar1 == 0x21) {
      Sleep(100);
      MVar1 = waveOutClose((HWAVEOUT)param_1[0xf]);
    }
    FUN_00492f40(param_1[0xe]);
    FUN_00492f40(param_1[0xd]);
  }
  iVar3 = DAT_02fff094;
  if (DAT_02fff094 != 0) {
    FUN_0046bad0();
    FUN_00492f40(iVar3);
    DAT_02fff094 = 0;
  }
  local_4 = 0xffffffff;
  FUN_0046bbc0();
  ExceptionList = pvStack_c;
  return;
}

