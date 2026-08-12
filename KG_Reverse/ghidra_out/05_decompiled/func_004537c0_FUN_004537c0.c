// Function: FUN_004537c0
// Entry:    004537c0
// Size:     159 bytes
// Conv:     unknown
// Signature: undefined FUN_004537c0(void)
// Decompiled by Ghidra 12.1.2


int FUN_004537c0(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = (uint)(0xffe0 / (ulonglong)param_3);
  iVar2 = param_1[1];
  if (uVar1 == 0) {
    (**(code **)*param_1)(param_1);
  }
  if ((int)param_4 <= (int)uVar1) {
    uVar1 = param_4;
  }
  *(uint *)(iVar2 + 0x4c) = uVar1;
  iVar2 = FUN_00453600(param_1,param_2,param_4 * 4);
  uVar6 = 0;
  if (param_4 != 0) {
    do {
      if (param_4 - uVar6 <= uVar1) {
        uVar1 = param_4 - uVar6;
      }
      iVar3 = FUN_00453730(param_1,param_2,uVar1 * param_3);
      if (uVar1 != 0) {
        piVar4 = (int *)(iVar2 + uVar6 * 4);
        uVar6 = uVar6 + uVar1;
        uVar5 = uVar1;
        do {
          *piVar4 = iVar3;
          piVar4 = piVar4 + 1;
          iVar3 = iVar3 + param_3;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    } while (uVar6 < param_4);
  }
  return iVar2;
}

