// Function: FUN_004859df
// Entry:    004859df
// Size:     22 bytes
// Conv:     unknown
// Signature: undefined FUN_004859df(void)
// Decompiled by Ghidra 12.1.2


char FUN_004859df(byte *param_1)

{
  return ((*(byte *)((int)&DAT_030150e0 + *param_1 + 1) & 4) != 0) + '\x01';
}

