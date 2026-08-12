// Function: FUN_0044bbf0
// Entry:    0044bbf0
// Size:     340 bytes
// Conv:     unknown
// Signature: undefined FUN_0044bbf0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044bbf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar2 = false;
  iVar3 = FUN_0044bb60(param_1,0);
  if (iVar3 != 0) {
    iVar3 = FUN_0044bd60(param_1,param_3,1);
    if ((iVar3 < 70000) || (300000 < iVar3)) {
      FUN_004463d0(param_1,s_output_gamma_out_of_expected_ran_02fb2bc4);
    }
    uVar4 = FUN_0043e540(iVar3);
    switch(param_2) {
    case 0:
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xff7fffff;
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xffffdfff;
      break;
    case 1:
      bVar2 = true;
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xff7fffff;
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xffffdfff;
      iVar3 = 100000;
      break;
    case 2:
      bVar2 = true;
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xff7fffff;
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x2000;
      break;
    case 3:
      bVar2 = true;
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x800000;
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xffffdfff;
      break;
    default:
      FUN_004463d0(param_1,s_invalid_alpha_mode_02fb2bb0);
    }
    if (*(int *)(param_1 + 0x2dc) == 0) {
      *(byte *)(param_1 + 0x326) = *(byte *)(param_1 + 0x326) | 1;
      *(undefined4 *)(param_1 + 0x2dc) = uVar4;
    }
    *(int *)(param_1 + 0x18c) = iVar3;
    if (bVar2) {
      *(undefined4 *)(param_1 + 0x168) = 0;
      *(undefined4 *)(param_1 + 0x16c) = 0;
      *(undefined2 *)(param_1 + 0x170) = 0;
      uVar1 = *(uint *)(param_1 + 0x7c);
      *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x2dc);
      *(undefined1 *)(param_1 + 0x162) = 2;
      *(uint *)(param_1 + 0x7c) = uVar1 & 0xfffffeff;
      if ((uVar1 & 0x80) != 0) {
        FUN_004463d0(param_1,s_conflicting_calls_to_set_alpha_m_02fb2b7c);
      }
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x80;
    }
  }
  return;
}

