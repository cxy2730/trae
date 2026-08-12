// Function: FUN_0040f920
// Entry:    0040f920
// Size:     75 bytes
// Conv:     unknown
// Signature: undefined FUN_0040f920(void)
// Decompiled by Ghidra 12.1.2


char * FUN_0040f920(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return (char *)0x0;
  }
  uVar3 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar3 - 1;
  pcVar2 = (char *)FUN_00413d70(0x7e8,~uVar3,0);
  pcVar5 = pcVar2;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *param_1;
    param_1 = param_1 + 1;
    pcVar5 = pcVar5 + 1;
  }
  pcVar2[uVar4] = '\0';
  return pcVar2;
}

