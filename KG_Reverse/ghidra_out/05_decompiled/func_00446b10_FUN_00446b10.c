// Function: FUN_00446b10
// Entry:    00446b10
// Size:     53 bytes
// Conv:     unknown
// Signature: undefined FUN_00446b10(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_00446b10(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00446cb0(param_1,param_2);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    return puVar1;
  }
  return (undefined4 *)0x0;
}

