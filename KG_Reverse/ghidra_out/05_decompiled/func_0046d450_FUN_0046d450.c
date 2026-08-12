// Function: FUN_0046d450
// Entry:    0046d450
// Size:     230 bytes
// Conv:     unknown
// Signature: undefined FUN_0046d450(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0046d450(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x1d);
  do {
    if (cVar1 != '\0') {
      return 0;
    }
    FUN_0046bae0();
    uVar3 = 0;
    if (*(int *)(param_1 + 0x58) != 0) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x38) + 0xc + iVar4);
        if ((iVar2 < 0) && (-(*(int *)(param_1 + 0x78) + 1) == iVar2)) {
          waveOutUnprepareHeader
                    (*(HWAVEOUT *)(param_1 + 0x3c),(LPWAVEHDR)(*(int *)(param_1 + 0x38) + iVar4),
                     0x20);
          iVar2 = FUN_0046d400();
          if (iVar2 != 0) {
            FUN_0046baf0();
            return 0;
          }
          *(undefined4 *)(*(int *)(param_1 + 0x38) + 0xc + iVar4) = 0;
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
        }
        if ((param_2 == '\0') && (*(int *)(*(int *)(param_1 + 0x38) + 0xc + iVar4) == 0)) {
          iVar2 = uVar3 * 0x20 + *(int *)(param_1 + 0x38);
          iVar4 = *(int *)(param_1 + 0x74) + 1;
          *(int *)(param_1 + 0x74) = iVar4;
          *(int *)(iVar2 + 0xc) = iVar4;
          FUN_0046baf0();
          return iVar2;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x20;
      } while (uVar3 < *(uint *)(param_1 + 0x58));
    }
    FUN_0046baf0();
    if (param_2 != '\0') {
      return 0;
    }
    Sleep(10);
    cVar1 = *(char *)(param_1 + 0x1d);
  } while( true );
}

