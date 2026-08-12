// Function: FUN_0043f940
// Entry:    0043f940
// Size:     62 bytes
// Conv:     unknown
// Signature: undefined FUN_0043f940(void)
// Decompiled by Ghidra 12.1.2


uint FUN_0043f940(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = *(byte *)(param_1 + 0x157);
  if ((bVar1 & 2) != 0) {
    uVar2 = 2;
  }
  if (((bVar1 & 4) != 0) || (*(short *)(param_1 + 0x150) != 0)) {
    uVar2 = uVar2 | 1;
  }
  if (*(char *)(param_1 + 0x158) == '\x10') {
    uVar2 = uVar2 | 4;
  }
  if ((bVar1 & 1) != 0) {
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}

