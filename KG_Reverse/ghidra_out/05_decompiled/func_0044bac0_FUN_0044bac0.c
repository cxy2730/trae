// Function: FUN_0044bac0
// Entry:    0044bac0
// Size:     156 bytes
// Conv:     unknown
// Signature: undefined FUN_0044bac0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044bac0(int param_1,undefined4 *param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_0044bb60(param_1,0);
  if ((iVar3 != 0) && (param_2 != (undefined4 *)0x0)) {
    if (param_3 == 0) {
      FUN_00446560(param_1,s_Application_must_supply_a_known_b_02fb2ae0);
      return;
    }
    uVar2 = *(uint *)(param_1 + 0x7c);
    uVar4 = uVar2 & 0xff7fffff;
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xffffdfff;
    *(uint *)(param_1 + 0x7c) = uVar4 | 0x40080;
    *(undefined4 *)(param_1 + 0x168) = *param_2;
    *(undefined4 *)(param_1 + 0x16c) = param_2[1];
    uVar1 = *(undefined2 *)(param_2 + 2);
    *(char *)(param_1 + 0x162) = (char)param_3;
    *(undefined2 *)(param_1 + 0x170) = uVar1;
    *(undefined4 *)(param_1 + 0x164) = param_5;
    if (param_4 != 0) {
      *(uint *)(param_1 + 0x7c) = uVar4 | 0x40180;
      return;
    }
    *(uint *)(param_1 + 0x7c) = uVar2 & 0xff7ffeff | 0x40080;
  }
  return;
}

