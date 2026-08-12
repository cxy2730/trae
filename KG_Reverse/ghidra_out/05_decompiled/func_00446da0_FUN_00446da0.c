// Function: FUN_00446da0
// Entry:    00446da0
// Size:     309 bytes
// Conv:     unknown
// Signature: undefined FUN_00446da0(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00446da0(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  param_1 = ~param_1;
  if (7 < param_3) {
    uVar2 = param_3 >> 3;
    do {
      param_3 = param_3 - 8;
      uVar1 = *(uint *)("0123456789ABCDEF" + (param_1 & 0xff ^ (uint)*param_2) * 4 + 0x10) ^
              param_1 >> 8;
      uVar1 = *(uint *)("0123456789ABCDEF" + (uVar1 & 0xff ^ (uint)param_2[1]) * 4 + 0x10) ^
              uVar1 >> 8;
      uVar1 = *(uint *)("0123456789ABCDEF" + (uVar1 & 0xff ^ (uint)param_2[2]) * 4 + 0x10) ^
              uVar1 >> 8;
      uVar1 = *(uint *)("0123456789ABCDEF" + (uVar1 & 0xff ^ (uint)param_2[3]) * 4 + 0x10) ^
              uVar1 >> 8;
      uVar1 = *(uint *)("0123456789ABCDEF" + (uVar1 & 0xff ^ (uint)param_2[4]) * 4 + 0x10) ^
              uVar1 >> 8;
      uVar1 = *(uint *)("0123456789ABCDEF" + (uVar1 & 0xff ^ (uint)param_2[5]) * 4 + 0x10) ^
              uVar1 >> 8;
      uVar1 = *(uint *)("0123456789ABCDEF" + (uVar1 & 0xff ^ (uint)param_2[6]) * 4 + 0x10) ^
              uVar1 >> 8;
      param_1 = uVar1 >> 8 ^
                *(uint *)("0123456789ABCDEF" + (uVar1 & 0xff ^ (uint)param_2[7]) * 4 + 0x10);
      param_2 = param_2 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    param_1 = param_1 >> 8 ^
              *(uint *)("0123456789ABCDEF" + (param_1 & 0xff ^ (uint)*param_2) * 4 + 0x10);
    param_2 = param_2 + 1;
  }
  return ~param_1;
}

