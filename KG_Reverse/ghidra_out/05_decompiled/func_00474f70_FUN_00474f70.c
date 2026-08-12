// Function: FUN_00474f70
// Entry:    00474f70
// Size:     81 bytes
// Conv:     unknown
// Signature: undefined FUN_00474f70(void)
// Decompiled by Ghidra 12.1.2


undefined4
FUN_00474f70(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if ((*(char *)(uVar1 + param_1) == -1) &&
         ((bVar3 = *(byte *)(uVar1 + 1 + param_1) & 0xf0, bVar3 == 0xf0 || (bVar3 == 0xe0)))) break;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  if (uVar1 == param_2) {
    return 0;
  }
  *param_5 = uVar1;
  uVar2 = FUN_00474fd0(uVar1 + param_1,param_2,param_3,param_4);
  return uVar2;
}

