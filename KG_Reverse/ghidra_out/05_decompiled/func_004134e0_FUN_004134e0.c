// Function: FUN_004134e0
// Entry:    004134e0
// Size:     56 bytes
// Conv:     unknown
// Signature: undefined FUN_004134e0(void)
// Decompiled by Ghidra 12.1.2


char * FUN_004134e0(char *param_1,char param_2,undefined4 *param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    param_1 = (char *)*param_3;
  }
  cVar2 = *param_1;
  pcVar3 = param_1;
  while ((cVar2 != '\0' && (cVar2 != param_2))) {
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar1;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
  }
  *param_3 = pcVar3;
  return param_1;
}

