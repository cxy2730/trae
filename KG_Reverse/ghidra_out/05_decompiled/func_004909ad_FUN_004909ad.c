// Function: FUN_004909ad
// Entry:    004909ad
// Size:     293 bytes
// Conv:     unknown
// Signature: undefined FUN_004909ad(void)
// Decompiled by Ghidra 12.1.2


int FUN_004909ad(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  HANDLE hFile;
  BOOL BVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  int iVar7;
  undefined1 local_1008 [4064];
  undefined4 uStackY_28;
  undefined4 uStackY_24;
  undefined4 uStackY_20;
  
  FUN_004835e0();
  iVar7 = 0;
  iVar1 = FUN_0048e097();
  if ((iVar1 == -1) || (iVar1 = FUN_0048e097(), iVar1 == -1)) {
    iVar7 = -1;
  }
  else {
    param_2 = param_2 - iVar1;
    if (param_2 < 1) {
      if (param_2 < 0) {
        uStackY_20 = 0x490a7e;
        FUN_0048e097();
        uStackY_20 = param_1;
        uStackY_24 = 0x490a86;
        hFile = (HANDLE)FUN_0048fd8d();
        BVar4 = SetEndOfFile(hFile);
        iVar7 = (BVar4 != 0) - 1;
        if (iVar7 == -1) {
          puVar3 = (undefined4 *)FUN_004843ad();
          *puVar3 = 0xd;
          DVar5 = GetLastError();
          pDVar6 = (DWORD *)FUN_004843b6();
          *pDVar6 = DVar5;
        }
      }
    }
    else {
      uStackY_20 = 0x490a0d;
      _memset(local_1008,0,0x1000);
      uStackY_20 = 0x8000;
      uStackY_24 = param_1;
      uStackY_28 = 0x490a1a;
      FUN_00490ad2();
      do {
        uStackY_20 = 0x490a38;
        iVar1 = FUN_0048d0a0();
        if (iVar1 == -1) {
          piVar2 = (int *)FUN_004843b6();
          if (*piVar2 == 5) {
            puVar3 = (undefined4 *)FUN_004843ad();
            *puVar3 = 0xd;
          }
          iVar7 = -1;
          break;
        }
        param_2 = param_2 - iVar1;
      } while (0 < param_2);
      FUN_00490ad2();
    }
    uStackY_20 = 0x490ac4;
    FUN_0048e097();
  }
  return iVar7;
}

