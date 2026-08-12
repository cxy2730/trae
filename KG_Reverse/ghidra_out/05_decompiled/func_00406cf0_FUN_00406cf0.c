// Function: FUN_00406cf0
// Entry:    00406cf0
// Size:     20 bytes
// Conv:     unknown
// Signature: undefined FUN_00406cf0(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00406cf0(char *param_1)

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
  return ~uVar2;
}

