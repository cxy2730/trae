// Function: FUN_00444560
// Entry:    00444560
// Size:     261 bytes
// Conv:     unknown
// Signature: undefined FUN_00444560(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00444560(int param_1)

{
  int iVar1;
  HFONT pHVar2;
  BYTE *pBVar3;
  HPALETTE pHVar4;
  BYTE *pBVar5;
  LOGPALETTE local_2ec [51];
  undefined4 local_154 [70];
  LOGFONTA local_3c;
  
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x12;
  iVar1 = GetSystemMetrics(0x2d);
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(int *)(param_1 + 0x4c) = iVar1;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  if (*(int *)(param_1 + 0x48) - (iVar1 * 2 + 2) < 5) {
    *(int *)(param_1 + 0x48) = iVar1 * 2 + 7;
  }
  local_154[0] = 0x154;
  SystemParametersInfoA(0x29,0x154,local_154,0);
  pHVar2 = CreateFontIndirectA(&local_3c);
  FUN_00499e1d(pHVar2);
  iVar1 = *(int *)(param_1 + 0x3c);
  local_2ec[0].palNumEntries = *(WORD *)(param_1 + 0x3c);
  local_2ec[0].palVersion = 0x300;
  if (0 < iVar1) {
    pBVar3 = &local_2ec[0].palPalEntry[0].peGreen;
    pBVar5 = (BYTE *)&DAT_02fb21a4;
    do {
      ((PALETTEENTRY *)(pBVar3 + -1))->peRed = *pBVar5;
      *pBVar3 = pBVar5[1];
      pBVar3[1] = (BYTE)((uint)*(undefined4 *)pBVar5 >> 0x10);
      pBVar3[2] = '\0';
      pBVar3 = pBVar3 + 4;
      iVar1 = iVar1 + -1;
      pBVar5 = pBVar5 + 8;
    } while (iVar1 != 0);
  }
  pHVar4 = CreatePalette(local_2ec);
  FUN_00499e1d(pHVar4);
  return;
}

