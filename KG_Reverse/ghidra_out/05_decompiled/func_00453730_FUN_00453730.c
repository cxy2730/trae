// Function: FUN_00453730
// Entry:    00453730
// Size:     144 bytes
// Conv:     unknown
// Signature: undefined FUN_00453730(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_00453730(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[1];
  if (0xffe0 < param_3) {
    FUN_0045cb90(param_1,3);
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    (**(code **)*param_1)(param_1);
  }
  puVar2 = (undefined4 *)FUN_00456430(param_1,param_3 + 0x10);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_0045cb90(param_1,4);
  }
  *(uint *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + param_3 + 0x10;
  *puVar2 = *(undefined4 *)(iVar1 + 0x38 + param_2 * 4);
  puVar2[1] = param_3;
  puVar2[2] = 0;
  *(undefined4 **)(iVar1 + 0x38 + param_2 * 4) = puVar2;
  return puVar2 + 4;
}

