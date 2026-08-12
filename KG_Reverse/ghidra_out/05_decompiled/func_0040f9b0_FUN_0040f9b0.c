// Function: FUN_0040f9b0
// Entry:    0040f9b0
// Size:     65 bytes
// Conv:     unknown
// Signature: undefined FUN_0040f9b0(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_0040f9b0(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_2 == 0) {
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)FUN_00413d70(0x7e8,param_2 + 8,0);
  puVar1[1] = param_2;
  *puVar1 = 1;
  puVar3 = puVar1 + 2;
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return puVar1;
}

