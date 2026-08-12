// Function: FUN_0041b960
// Entry:    0041b960
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_0041b960(void)
// Decompiled by Ghidra 12.1.2


char FUN_0041b960(uint param_1)

{
  if (param_1 == 0) {
    return '\0';
  }
  if ((param_1 & 0xc0000000) == 0x80000000) {
    return '\x01';
  }
  return ((param_1 & 0xc0000000) != 0x40000000) + '\x02';
}

