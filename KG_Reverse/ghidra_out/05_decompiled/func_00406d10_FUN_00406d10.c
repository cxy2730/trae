// Function: FUN_00406d10
// Entry:    00406d10
// Size:     19 bytes
// Conv:     unknown
// Signature: undefined FUN_00406d10(void)
// Decompiled by Ghidra 12.1.2


int FUN_00406d10(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return ~uVar2 - 1;
}

