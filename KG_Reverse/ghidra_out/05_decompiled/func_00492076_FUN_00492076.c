// Function: FUN_00492076
// Entry:    00492076
// Size:     116 bytes
// Conv:     unknown
// Signature: undefined FUN_00492076(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00492076(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_30 [8];
  int local_10;
  int local_c [2];
  
  puVar1 = param_3;
  puVar3 = local_30;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  if (((local_10 == 0) && (local_c[0] != -1)) && (local_c[0] != 0)) {
    iVar2 = FUN_00492e57(local_c[0],&param_3);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)FUN_00492e9b(local_c[0]);
      *puVar1 = 0;
    }
    FUN_00492e79(local_c[0],local_c);
  }
  (**(code **)(*param_1 + 0xa0))(0x404,param_2,local_30);
  return;
}

