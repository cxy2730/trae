// Function: FUN_0048742c
// Entry:    0048742c
// Size:     339 bytes
// Conv:     unknown
// Signature: undefined FUN_0048742c(void)
// Decompiled by Ghidra 12.1.2


void FUN_0048742c(undefined *param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  char acStackY_1e3 [7];
  undefined1 *puStackY_1dc;
  char *pcStackY_1d8;
  undefined4 uStackY_1d4;
  undefined1 *puStackY_1d0;
  undefined4 uStackY_1cc;
  undefined1 *puStackY_1c8;
  undefined *puStackY_1c4;
  LPCVOID lpBuffer;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_1a8 [260];
  undefined1 local_a4 [160];
  
  iVar5 = 0;
  ppuVar2 = (undefined **)&DAT_02fd9428;
  do {
    if (param_1 == *ppuVar2) break;
    ppuVar2 = ppuVar2 + 2;
    iVar5 = iVar5 + 1;
  } while (ppuVar2 < &PTR_FUN_02fd94b8);
  if (param_1 == (undefined *)(&DAT_02fd9428)[iVar5 * 2]) {
    if ((DAT_03010f40 == 1) || ((DAT_03010f40 == 0 && (DAT_02fd8974 == 1)))) {
      lpNumberOfBytesWritten = (LPDWORD)&param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x2fd942c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      puStackY_1c4 = (undefined *)0x487575;
      hFile = GetStdHandle(0xfffffff4);
      puStackY_1c4 = (undefined *)0x48757c;
      WriteFile(hFile,lpBuffer,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != (undefined *)0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_00489dc0();
      }
      sVar4 = _strlen(local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen(local_1a8);
        puStackY_1c4 = (undefined *)0x4874f6;
        _strncpy(acStackY_1e3 + sVar4,"...",3);
      }
      FUN_00489dc0();
      puStackY_1c4 = (undefined *)0x487517;
      FUN_00489dd0();
      puStackY_1c8 = local_a4;
      puStackY_1c4 = &DAT_02f9cec4;
      uStackY_1cc = 0x487528;
      FUN_00489dd0();
      uStackY_1cc = *(undefined4 *)(iVar5 * 8 + 0x2fd942c);
      puStackY_1d0 = local_a4;
      uStackY_1d4 = 0x48753a;
      FUN_00489dd0();
      uStackY_1d4 = 0x12010;
      puStackY_1dc = local_a4;
      pcStackY_1d8 = "Microsoft Visual C++ Runtime Library";
      builtin_strncpy(acStackY_1e3 + 3,"PuH",4);
      FUN_0048ea62();
    }
  }
  return;
}

