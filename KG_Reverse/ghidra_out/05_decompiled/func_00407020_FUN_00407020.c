// Function: FUN_00407020
// Entry:    00407020
// Size:     94 bytes
// Conv:     unknown
// Signature: undefined FUN_00407020(void)
// Decompiled by Ghidra 12.1.2


void FUN_00407020(int param_1,LONG *param_2)

{
  HFONT pHVar1;
  int iVar2;
  LOGFONTA *pLVar3;
  LOGFONTA local_3c;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    FUN_00499e74();
  }
  pLVar3 = &local_3c;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    pLVar3->lfHeight = *param_2;
    param_2 = param_2 + 1;
    pLVar3 = (LOGFONTA *)&pLVar3->lfWidth;
  }
  local_3c.lfCharSet = '\x01';
  local_3c.lfOutPrecision = '\0';
  local_3c.lfClipPrecision = '\0';
  local_3c.lfQuality = '\x02';
  local_3c.lfPitchAndFamily = '\0';
  pHVar1 = CreateFontIndirectA(&local_3c);
  FUN_00499e1d(pHVar1);
  return;
}

