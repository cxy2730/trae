// Function: FUN_0043a380
// Entry:    0043a380
// Size:     2504 bytes
// Conv:     unknown
// Signature: undefined FUN_0043a380(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0043a380(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_4c = *(uint *)(param_1 + 0x50);
  local_48 = *(uint *)(param_1 + 0x54);
  local_50 = *(uint *)(param_1 + 0x4c);
  local_44 = *(uint *)(param_1 + 0x58);
  FUN_0043a330(&local_40,param_2,0x40);
  uVar1 = local_50 + 0xd76aa478 + (~local_4c & local_44 | local_48 & local_4c) + local_40;
  uVar2 = (uVar1 >> 0x19 | uVar1 * 0x80) + local_4c;
  uVar1 = local_44 + 0xe8c7b756 + (~uVar2 & local_48 | local_4c & uVar2) + local_3c;
  uVar3 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar2;
  uVar1 = local_48 + 0x242070db + (~uVar3 & local_4c | uVar3 & uVar2) + local_38;
  uVar4 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar3;
  uVar1 = local_4c + 0xc1bdceee + (~uVar4 & uVar2 | uVar3 & uVar4) + local_34;
  uVar5 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar4;
  uVar1 = uVar2 + 0xf57c0faf + (~uVar5 & uVar3 | uVar4 & uVar5) + local_30;
  uVar6 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar5;
  uVar1 = uVar3 + 0x4787c62a + (~uVar6 & uVar4 | uVar5 & uVar6) + local_2c;
  uVar2 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar6;
  uVar1 = uVar4 + 0xa8304613 + (~uVar2 & uVar5 | uVar2 & uVar6) + local_28;
  uVar3 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar2;
  uVar1 = uVar5 + 0xfd469501 + (~uVar3 & uVar6 | uVar2 & uVar3) + local_24;
  uVar4 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar3;
  uVar1 = uVar6 + 0x698098d8 + (~uVar4 & uVar2 | uVar3 & uVar4) + local_20;
  uVar5 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar1 = uVar2 + 0x8b44f7af + (~uVar5 & uVar3 | uVar4 & uVar5) + local_1c;
  uVar6 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar5;
  uVar1 = (uVar3 - 0xa44f) + (~uVar6 & uVar4 | uVar6 & uVar5) + local_18;
  uVar3 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar6;
  uVar1 = uVar4 + 0x895cd7be + (~uVar3 & uVar5 | uVar6 & uVar3) + local_14;
  uVar2 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar3;
  uVar1 = uVar5 + 0x6b901122 + (~uVar2 & uVar6 | uVar3 & uVar2) + local_10;
  uVar4 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar2;
  uVar1 = uVar6 + 0xfd987193 + (~uVar4 & uVar3 | uVar2 & uVar4) + local_c;
  uVar5 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar4;
  uVar1 = uVar3 + 0xa679438e + (~uVar5 & uVar2 | uVar5 & uVar4) + local_8;
  uVar7 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar5;
  uVar2 = (~uVar7 & uVar4 | uVar5 & uVar7) + local_4 + 0x49b40821 + uVar2;
  uVar2 = (uVar2 * 0x400000 | uVar2 >> 10) + uVar7;
  uVar1 = uVar4 + 0xf61e2562 + (~uVar5 & uVar7 | uVar5 & uVar2) + local_3c;
  uVar6 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar2;
  uVar1 = uVar5 + 0xc040b340 + (~uVar7 & uVar2 | uVar7 & uVar6) + local_28;
  uVar3 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar6;
  uVar1 = uVar7 + 0x265e5a51 + (~uVar2 & uVar6 | uVar3 & uVar2) + local_14;
  uVar4 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar3;
  uVar1 = uVar2 + 0xe9b6c7aa + (~uVar6 & uVar3 | uVar4 & uVar6) + local_40;
  uVar5 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar4;
  uVar1 = uVar6 + 0xd62f105d + (~uVar3 & uVar4 | uVar3 & uVar5) + local_2c;
  uVar2 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar5;
  uVar3 = ((uint)(&DAT_02441453 + (~uVar4 & uVar5 | uVar4 & uVar2) + local_18 + uVar3) >> 0x17 |
          (int)(&DAT_02441453 + (~uVar4 & uVar5 | uVar4 & uVar2) + local_18 + uVar3) * 0x200) +
          uVar2;
  uVar1 = uVar4 + 0xd8a1e681 + (~uVar5 & uVar2 | uVar3 & uVar5) + local_4;
  uVar4 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar3;
  uVar1 = uVar5 + 0xe7d3fbc8 + (~uVar2 & uVar3 | uVar4 & uVar2) + local_30;
  uVar5 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar4;
  uVar1 = uVar2 + 0x21e1cde6 + (~uVar3 & uVar4 | uVar3 & uVar5) + local_1c;
  uVar6 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar5;
  uVar1 = uVar3 + 0xc33707d6 + (~uVar4 & uVar5 | uVar4 & uVar6) + local_8;
  uVar7 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar6;
  uVar1 = uVar4 + 0xf4d50d87 + (~uVar5 & uVar6 | uVar7 & uVar5) + local_34;
  uVar2 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar7;
  uVar1 = uVar5 + 0x455a14ed + (~uVar6 & uVar7 | uVar2 & uVar6) + local_20;
  uVar3 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar2;
  uVar1 = uVar6 + 0xa9e3e905 + (~uVar7 & uVar2 | uVar7 & uVar3) + local_c;
  uVar4 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar3;
  uVar1 = uVar7 + 0xfcefa3f8 + (~uVar2 & uVar3 | uVar2 & uVar4) + local_38;
  uVar5 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar4;
  uVar1 = uVar2 + 0x676f02d9 + (~uVar3 & uVar4 | uVar5 & uVar3) + local_24;
  uVar6 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar5;
  uVar1 = uVar3 + 0x8d2a4c8a + (~uVar4 & uVar5 | uVar6 & uVar4) + local_10;
  uVar2 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar6;
  uVar1 = (uVar4 - 0x5c6be) + (uVar5 ^ uVar6 ^ uVar2) + local_2c;
  uVar3 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar2;
  uVar1 = uVar5 + 0x8771f681 + (uVar6 ^ uVar2 ^ uVar3) + local_20;
  uVar5 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar3;
  uVar1 = uVar6 + 0x6d9d6122 + (uVar5 ^ uVar2 ^ uVar3) + local_14;
  uVar6 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar5;
  uVar1 = uVar2 + 0xfde5380c + (uVar5 ^ uVar6 ^ uVar3) + local_8;
  uVar4 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar6;
  uVar1 = uVar3 + 0xa4beea44 + (uVar5 ^ uVar6 ^ uVar4) + local_3c;
  uVar3 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar1 = uVar5 + 0x4bdecfa9 + (uVar6 ^ uVar4 ^ uVar3) + local_30;
  uVar2 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar3;
  uVar1 = uVar6 + 0xf6bb4b60 + (uVar2 ^ uVar4 ^ uVar3) + local_24;
  uVar5 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar2;
  uVar1 = uVar4 + 0xbebfbc70 + (uVar2 ^ uVar5 ^ uVar3) + local_18;
  uVar4 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar5;
  uVar1 = uVar3 + 0x289b7ec6 + (uVar2 ^ uVar5 ^ uVar4) + local_c;
  uVar3 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = (uVar5 ^ uVar4 ^ uVar3) + local_40 + -0x155ed806 + uVar2;
  uVar6 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar3;
  uVar1 = uVar5 + 0xd4ef3085 + (uVar6 ^ uVar4 ^ uVar3) + local_34;
  uVar5 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar6;
  uVar1 = uVar4 + 0x4881d05 + (uVar6 ^ uVar5 ^ uVar3) + local_28;
  uVar2 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar5;
  uVar1 = uVar3 + 0xd9d4d039 + (uVar6 ^ uVar5 ^ uVar2) + local_1c;
  uVar3 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar2;
  uVar1 = uVar6 + 0xe6db99e5 + (uVar5 ^ uVar2 ^ uVar3) + local_10;
  uVar6 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar3;
  uVar1 = uVar5 + 0x1fa27cf8 + (uVar6 ^ uVar2 ^ uVar3) + local_4;
  uVar4 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar6;
  uVar1 = uVar2 + 0xc4ac5665 + (uVar6 ^ uVar4 ^ uVar3) + local_38;
  local_4c = (uVar1 * 0x800000 | uVar1 >> 9) + uVar4;
  uVar1 = uVar3 + 0xf4292244 + ((~uVar6 | local_4c) ^ uVar4) + local_40;
  local_50 = (uVar1 >> 0x1a | uVar1 * 0x40) + local_4c;
  uVar1 = uVar6 + 0x432aff97 + ((~uVar4 | local_50) ^ local_4c) + local_24;
  local_44 = (uVar1 >> 0x16 | uVar1 * 0x400) + local_50;
  uVar1 = uVar4 + 0xab9423a7 + ((~local_4c | local_44) ^ local_50) + local_8;
  local_48 = (uVar1 >> 0x11 | uVar1 * 0x8000) + local_44;
  FUN_0043ad50(&local_4c,local_48,local_44,local_50,local_2c,0x15,0xfc93a039);
  FUN_0043ad50(&local_50,local_4c,local_48,local_44,local_10,6,0x655b59c3);
  FUN_0043ad50(&local_44,local_50,local_4c,local_48,local_34,10,0x8f0ccc92);
  FUN_0043ad50(&local_48,local_44,local_50,local_4c,local_18,0xf,0xffeff47d);
  FUN_0043ad50(&local_4c,local_48,local_44,local_50,local_3c,0x15,0x85845dd1);
  FUN_0043ad50(&local_50,local_4c,local_48,local_44,local_20,6,0x6fa87e4f);
  FUN_0043ad50(&local_44,local_50,local_4c,local_48,local_4,10,0xfe2ce6e0);
  FUN_0043ad50(&local_48,local_44,local_50,local_4c,local_28,0xf,0xa3014314);
  FUN_0043ad50(&local_4c,local_48,local_44,local_50,local_c,0x15,0x4e0811a1);
  FUN_0043ad50(&local_50,local_4c,local_48,local_44,local_30,6,0xf7537e82);
  FUN_0043ad50(&local_44,local_50,local_4c,local_48,local_14,10,0xbd3af235);
  FUN_0043ad50(&local_48,local_44,local_50,local_4c,local_38,0xf,0x2ad7d2bb);
  FUN_0043ad50(&local_4c,local_48,local_44,local_50,local_1c,0x15,0xeb86d391);
  *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + local_50;
  *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + local_4c;
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + local_48;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_44;
  return;
}

