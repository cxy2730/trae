// Function: FUN_00451390
// Entry:    00451390
// Size:     88 bytes
// Conv:     unknown
// Signature: undefined FUN_00451390(void)
// Decompiled by Ghidra 12.1.2


byte FUN_00451390(int param_1,byte param_2)

{
  byte bVar1;
  
  param_2 = param_2 & 0xb;
  if (param_2 == 0) {
    if ((*(uint *)(param_1 + 0x74) & 0x8000) == 0) {
      FUN_00446620(param_1,s_png_set_unknown_chunks_now_expec_02fb30f0);
      param_2 = *(byte *)(param_1 + 0x74) & 0xb;
      if ((*(byte *)(param_1 + 0x74) & 0xb) != 0) goto LAB_004513cb;
    }
    FUN_004463d0(param_1,s_invalid_location_in_png_set_unkn_02fb30c4);
  }
LAB_004513cb:
  bVar1 = -param_2 & param_2;
  if (param_2 != bVar1) {
    do {
      param_2 = param_2 & ~bVar1;
      bVar1 = -param_2 & param_2;
    } while (param_2 != bVar1);
  }
  return param_2;
}

