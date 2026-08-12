// Function: FUN_00401100
// Entry:    00401100
// Size:     157 bytes
// Conv:     unknown
// Signature: undefined FUN_00401100(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00401100(byte *param_1,byte *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_1 == (byte *)0x0) {
    uVar5 = 0;
    if ((param_2 != (byte *)0x0) && (*param_2 != 0)) {
      uVar5 = 0xffffffff;
    }
    return uVar5;
  }
  if (param_2 == (byte *)0x0) {
    return (uint)(*param_1 != 0);
  }
  if (((uint)param_1 & 3) != 0) {
    if (((uint)param_1 & 1) != 0) {
      bVar4 = *param_1;
      param_1 = param_1 + 1;
      bVar6 = bVar4 < *param_2;
      if (bVar4 != *param_2) goto LAB_0040115f;
      param_2 = param_2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)param_1 & 2) == 0) goto LAB_0040112e;
    }
    uVar1 = *(undefined2 *)param_1;
    param_1 = param_1 + 2;
    bVar4 = (byte)uVar1;
    bVar6 = bVar4 < *param_2;
    if (bVar4 != *param_2) goto LAB_0040115f;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar6 = bVar4 < param_2[1];
    if (bVar4 != param_2[1]) goto LAB_0040115f;
    if (bVar4 == 0) {
      return 0;
    }
    param_2 = param_2 + 2;
  }
LAB_0040112e:
  while( true ) {
    uVar2 = *(undefined4 *)param_1;
    bVar4 = (byte)uVar2;
    bVar6 = bVar4 < *param_2;
    if (bVar4 != *param_2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar6 = bVar4 < param_2[1];
    if (bVar4 != param_2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar6 = bVar4 < param_2[2];
    if (bVar4 != param_2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar6 = bVar3 < param_2[3];
    if (bVar3 != param_2[3]) break;
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_0040115f:
  return (uint)bVar6 * -2 + 1;
}

