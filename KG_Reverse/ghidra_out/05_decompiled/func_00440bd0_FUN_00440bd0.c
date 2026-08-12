// Function: FUN_00440bd0
// Entry:    00440bd0
// Size:     140 bytes
// Conv:     unknown
// Signature: undefined FUN_00440bd0(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00440bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_00440c60(param_1,param_2,param_3);
  iVar2 = FUN_00440c60(param_1,param_5,param_6);
  uVar3 = iVar2 * (0xff - param_4) + iVar1 * param_4;
  if (param_6 == 2) {
    return (uVar3 * 0x101 >> 0x10) + 0x8000 + uVar3 * 0x101 >> 0x10;
  }
  return ((uint)(byte)(&DAT_02f97858)[uVar3 >> 0xf] * (uVar3 & 0x7fff) >> 0xc) +
         (uint)(ushort)(&DAT_02f97458)[uVar3 >> 0xf] >> 8 & 0xff;
}

