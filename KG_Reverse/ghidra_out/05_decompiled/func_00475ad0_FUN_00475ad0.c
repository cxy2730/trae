// Function: FUN_00475ad0
// Entry:    00475ad0
// Size:     238 bytes
// Conv:     unknown
// Signature: undefined FUN_00475ad0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00475ad0(int param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined **ppuVar10;
  undefined1 local_24 [8];
  CHAR local_1c [12];
  byte local_10 [16];
  
  pcVar3 = param_2;
  FUN_0043ade0(local_24,(uint *)(param_1 + 0x44),8);
  iVar5 = 0x38;
  uVar4 = *(uint *)(param_1 + 0x44) >> 3 & 0x3f;
  if (0x37 < uVar4) {
    iVar5 = 0x78;
  }
  FUN_00475bc0(&DAT_02fd31ac,iVar5 - uVar4);
  FUN_00475bc0(local_24,8);
  FUN_0043ade0(local_10,param_1 + 0x4c,0x10);
  param_2 = (char *)0x0;
  *pcVar3 = '\0';
  do {
    bVar2 = local_10[(int)param_2];
    if (bVar2 == 0) {
      pcVar7 = &DAT_02fd31f4;
    }
    else {
      if (bVar2 < 0x10) {
        ppuVar10 = &PTR_DAT_02fd31f0;
      }
      else {
        ppuVar10 = (undefined **)&DAT_02fd31ec;
      }
      wsprintfA(local_1c,(LPCSTR)ppuVar10,(uint)bVar2);
      pcVar7 = local_1c;
    }
    uVar4 = 0xffffffff;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar7 = pcVar3;
    do {
      pcVar8 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = pcVar8 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    param_2 = (char *)((int)param_2 + 1);
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    if (0xf < (int)param_2) {
      return;
    }
  } while( true );
}

