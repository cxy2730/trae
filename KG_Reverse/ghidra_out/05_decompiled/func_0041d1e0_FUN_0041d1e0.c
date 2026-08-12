// Function: FUN_0041d1e0
// Entry:    0041d1e0
// Size:     51 bytes
// Conv:     unknown
// Signature: undefined FUN_0041d1e0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0041d1e0(void)

{
  BOOL BVar1;
  undefined4 uVar2;
  uint local_2c;
  
  BVar1 = EnumDisplaySettingsA((LPCSTR)0x0,0xffffffff,(DEVMODEA *)&stack0xffffff6c);
  if ((BVar1 == 0) || (uVar2 = 4, local_2c < 0x11)) {
    uVar2 = 3;
  }
  return uVar2;
}

