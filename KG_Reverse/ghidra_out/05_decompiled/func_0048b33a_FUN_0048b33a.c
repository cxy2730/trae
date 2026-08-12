// Function: FUN_0048b33a
// Entry:    0048b33a
// Size:     177 bytes
// Conv:     unknown
// Signature: undefined FUN_0048b33a(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_0048b33a(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_03014e98 == DAT_03014e88) {
    pvVar2 = HeapReAlloc(DAT_03014ea4,0,DAT_03014e9c,(DAT_03014e88 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_03014e88 = DAT_03014e88 + 0x10;
    DAT_03014e9c = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_03014e9c + DAT_03014e98 * 0x14);
  pvVar2 = HeapAlloc(DAT_03014ea4,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_03014e98 = DAT_03014e98 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_03014ea4,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

