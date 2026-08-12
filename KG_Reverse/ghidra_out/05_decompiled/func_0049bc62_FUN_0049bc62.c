// Function: FUN_0049bc62
// Entry:    0049bc62
// Size:     104 bytes
// Conv:     unknown
// Signature: undefined FUN_0049bc62(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0049bc62(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)0x0;
  uVar1 = FUN_00497418();
  if ((uVar1 & 0x40) == 0) {
    puVar3 = (undefined4 *)FUN_00492f17(0xc);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[2] = 0;
      puVar3[1] = 1;
    }
    puVar3[2] = param_3;
    param_3 = puVar3;
  }
  iVar2 = (**(code **)(*param_1 + 0xa0))(0x181,param_2,param_3);
  if ((iVar2 == -1) && (puVar3 != (undefined4 *)0x0)) {
    FUN_00492f40(puVar3);
  }
  return iVar2;
}

