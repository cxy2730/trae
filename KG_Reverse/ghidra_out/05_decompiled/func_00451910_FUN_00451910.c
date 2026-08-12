// Function: FUN_00451910
// Entry:    00451910
// Size:     383 bytes
// Conv:     unknown
// Signature: undefined FUN_00451910(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00451910(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piStack_4;
  
  puVar3 = param_1;
  iVar1 = param_1[0x51];
  if (iVar1 != 1) {
    if ((iVar1 < 1) || (4 < iVar1)) {
      (**(code **)*param_1)(param_1);
    }
    uVar4 = FUN_00456360(param_1[6],param_1[0x4c] << 3);
    param_1[0x56] = uVar4;
    uVar4 = FUN_00456360(param_1[7],param_1[0x4d] << 3);
    param_1[0x57] = uVar4;
    uVar6 = param_1[0x51];
    param_1[0x58] = 0;
    param_1 = (undefined4 *)0x0;
    if (0 < (int)uVar6) {
      piStack_4 = puVar3 + 0x52;
      do {
        iVar1 = *piStack_4;
        uVar6 = *(uint *)(iVar1 + 8);
        *(uint *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x24) * uVar6;
        uVar2 = *(uint *)(iVar1 + 0xc);
        uVar5 = *(uint *)(iVar1 + 0x1c) % uVar6;
        *(uint *)(iVar1 + 0x34) = uVar6;
        iVar7 = uVar2 * uVar6;
        *(uint *)(iVar1 + 0x38) = uVar2;
        *(int *)(iVar1 + 0x3c) = iVar7;
        if (uVar5 == 0) {
          uVar5 = uVar6;
        }
        *(uint *)(iVar1 + 0x44) = uVar5;
        uVar6 = *(uint *)(iVar1 + 0x20) % uVar2;
        if (uVar6 == 0) {
          uVar6 = uVar2;
        }
        *(uint *)(iVar1 + 0x48) = uVar6;
        if (10 < puVar3[0x58] + iVar7) {
          (**(code **)*puVar3)(puVar3);
        }
        if (0 < iVar7) {
          do {
            puVar3[puVar3[0x58] + 0x59] = param_1;
            iVar7 = iVar7 + -1;
            puVar3[0x58] = puVar3[0x58] + 1;
          } while (iVar7 != 0);
        }
        uVar6 = (int)param_1 + 1;
        piStack_4 = piStack_4 + 1;
        param_1 = (undefined4 *)uVar6;
      } while ((int)uVar6 < (int)puVar3[0x51]);
    }
    return uVar6;
  }
  iVar1 = param_1[0x52];
  param_1[0x56] = *(undefined4 *)(iVar1 + 0x1c);
  param_1[0x57] = *(undefined4 *)(iVar1 + 0x20);
  uVar6 = *(uint *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x24);
  uVar2 = *(uint *)(iVar1 + 0x20);
  uVar5 = uVar2 % uVar6;
  *(undefined4 *)(iVar1 + 0x34) = 1;
  *(undefined4 *)(iVar1 + 0x38) = 1;
  *(undefined4 *)(iVar1 + 0x3c) = 1;
  *(undefined4 *)(iVar1 + 0x44) = 1;
  if (uVar5 == 0) {
    uVar5 = uVar6;
  }
  *(uint *)(iVar1 + 0x48) = uVar5;
  param_1[0x58] = 1;
  param_1[0x59] = 0;
  return uVar2 / uVar6;
}

