// Function: FUN_00425ff0
// Entry:    00425ff0
// Size:     443 bytes
// Conv:     unknown
// Signature: undefined FUN_00425ff0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00425ff0(int *param_1)

{
  int iVar1;
  MMRESULT MVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_1[0x14];
  if (iVar1 != 200) {
    iVar4 = param_1[0x12] + 1;
    param_1[0x12] = iVar4;
    if (iVar1 == 300) {
      if (1 < iVar4) {
        param_1[0x14] = 200;
        FUN_00425310(1);
        SetEvent((HANDLE)param_1[0x15]);
        return;
      }
    }
    else if (iVar1 == 100) {
      if (1 < iVar4) {
        param_1[0x14] = 200;
        SetEvent((HANDLE)param_1[0x15]);
        return;
      }
    }
    else {
      param_1[8] = param_1[8] + *(int *)(param_1[0x20] + 8 + param_1[0x10] * 0x54);
      if ((param_1[6] != 0) && (iVar4 != 0)) {
        *(undefined4 *)(param_1[0x20] + 0x40 + param_1[0x10] * 0x54) = 0;
        *(undefined4 *)(param_1[0x20] + 0x44 + param_1[0x10] * 0x54) = 0x400;
        *(undefined4 *)(param_1[0x20] + 0x4c + param_1[0x10] * 0x54) = 0;
        *(undefined4 *)(param_1[0x20] + 0x48 + param_1[0x10] * 0x54) = 0;
        *(undefined4 *)(param_1[0x20] + 0x50 + param_1[0x10] * 0x54) = 0;
        iVar1 = FUN_004254e0(0,param_1[0x20] + param_1[0x10] * 0x54);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1[0x20] + param_1[0x10] * 0x54 + 8) =
               *(undefined4 *)(param_1[0x20] + 0x48 + param_1[0x10] * 0x54);
          MVar2 = midiStreamOut((HMIDISTRM)param_1[7],
                                (LPMIDIHDR)(param_1[0x20] + param_1[0x10] * 0x54),0x40);
          if (MVar2 != 0) {
            (**(code **)(*param_1 + 4))(MVar2);
            return;
          }
          uVar3 = param_1[0x10] + 1U & 0x80000001;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
          }
          param_1[0x10] = uVar3;
          param_1[0x12] = param_1[0x12] + -1;
        }
        else if (iVar1 == -0x67) {
          param_1[0x14] = 300;
          return;
        }
      }
    }
  }
  return;
}

