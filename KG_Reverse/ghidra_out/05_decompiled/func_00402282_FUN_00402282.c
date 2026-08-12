// Function: FUN_00402282
// Entry:    00402282
// Size:     202 bytes
// Conv:     unknown
// Signature: undefined FUN_00402282(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x004022bc) */

undefined4 FUN_00402282(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int extraout_ECX;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_3 == 0) {
    param_2 = 0;
  }
  puVar1 = (undefined *)FUN_004023a3(param_1,param_2);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = &DAT_004a5fbc;
  }
  uVar3 = thunk_FUN_0041b210(3,puVar2,0,0x80000005,10,0,0x80000301,0,0,0);
  uVar4 = (undefined4)uVar3;
  if (extraout_ECX != -0x7ffffffc) {
    thunk_FUN_0041b540(5,0x401a337,0x9b,uVar3);
  }
  if (puVar1 != (undefined *)0x0) {
    thunk_FUN_0041b7c0(puVar1);
  }
  return uVar4;
}

