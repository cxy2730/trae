// Function: FUN_00401318
// Entry:    00401318
// Size:     107 bytes
// Conv:     unknown
// Signature: undefined FUN_00401318(void)
// Decompiled by Ghidra 12.1.2


char * FUN_00401318(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *unaff_EBX;
  
  puVar2 = unaff_EBX;
  if (unaff_EBX == (uint *)0x0) {
    return (char *)0x0;
  }
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_00401338;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_0040136b:
  return (char *)((int)puVar2 + (-1 - (int)unaff_EBX));
LAB_00401338:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (char *)((int)puVar3 - (int)unaff_EBX);
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (char *)((int)puVar3 + (1 - (int)unaff_EBX));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (char *)((int)puVar3 + (2 - (int)unaff_EBX));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_0040136b;
}

