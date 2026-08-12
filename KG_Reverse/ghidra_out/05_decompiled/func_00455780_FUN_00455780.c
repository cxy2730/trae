// Function: FUN_00455780
// Entry:    00455780
// Size:     343 bytes
// Conv:     unknown
// Signature: undefined FUN_00455780(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00455780(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0xffff;
  if (param_1[3] - 5U < 0xffff) {
    uVar6 = param_1[3] - 5U;
  }
  do {
    uVar3 = param_1[0x1b];
    if (uVar3 < 2) {
      FUN_004558e0(param_1);
      uVar3 = param_1[0x1b];
      if (uVar3 == 0) {
        if (param_2 == 0) {
          return 0;
        }
        iVar5 = param_1[0x15];
        if (iVar5 < 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = param_1[0xc] + iVar5;
        }
        FUN_0045dd40(param_1,iVar4,param_1[0x19] - iVar5,param_2 == 4);
        param_1[0x15] = param_1[0x19];
        FUN_00455650(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          return (-(uint)(param_2 != 4) & 0xfffffffe) + 3;
        }
        return (param_2 != 4) - 1 & 2;
      }
    }
    iVar5 = param_1[0x19];
    param_1[0x1b] = 0;
    param_1[0x19] = iVar5 + uVar3;
    iVar4 = param_1[0x15];
    uVar2 = param_1[0x19];
    uVar1 = iVar4 + uVar6;
    if ((iVar5 + uVar3 == 0) || (uVar1 <= uVar2)) {
      param_1[0x19] = uVar1;
      param_1[0x1b] = uVar2 - uVar1;
      if (iVar4 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = param_1[0xc] + iVar4;
      }
      FUN_0045dd40(param_1,iVar5,uVar1 - iVar4,0);
      param_1[0x15] = param_1[0x19];
      FUN_00455650(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
    iVar5 = param_1[0x15];
    if (param_1[9] - 0x106U <= (uint)(param_1[0x19] - iVar5)) {
      if (iVar5 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[0xc] + iVar5;
      }
      FUN_0045dd40(param_1,iVar4,param_1[0x19] - iVar5,0);
      param_1[0x15] = param_1[0x19];
      FUN_00455650(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}

