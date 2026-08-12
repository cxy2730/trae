// Function: FUN_004297f0
// Entry:    004297f0
// Size:     37 bytes
// Conv:     unknown
// Signature: undefined FUN_004297f0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004297f0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)(param_1 + 0xc);
  iVar2 = -1;
  pcVar4 = pcVar3;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (iVar2 == -2) {
    pcVar3 = &DAT_02fb03e4;
  }
  FUN_00493313(pcVar3);
  return;
}

