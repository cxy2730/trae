// Function: FUN_0049bd5a
// Entry:    0049bd5a
// Size:     116 bytes
// Conv:     unknown
// Signature: undefined FUN_0049bd5a(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_0049bd5a(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xa0))(0x199,param_2,0);
  puVar2 = puVar1;
  if (puVar1 != (undefined4 *)0xffffffff) {
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_00492f17(0xc);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
        puVar1[2] = 0;
        puVar1[1] = 1;
      }
    }
    puVar1[2] = unaff_EBX;
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0xa0))(0x19a,unaff_ESI,puVar1);
    if (puVar2 == (undefined4 *)0xffffffff) {
      FUN_00492f40(puVar1);
    }
  }
  return puVar2;
}

