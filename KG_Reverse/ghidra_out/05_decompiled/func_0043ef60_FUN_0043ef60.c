// Function: FUN_0043ef60
// Entry:    0043ef60
// Size:     744 bytes
// Conv:     unknown
// Signature: undefined FUN_0043ef60(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043ef60(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  FUN_00447880(param_1,param_2);
LAB_0043ef86:
  uVar3 = FUN_00447920(param_1);
  iVar1 = *(int *)(param_1 + 0x11c);
  uVar2 = *(uint *)(param_1 + 0x74);
  if (iVar1 == 0x49444154) {
    if ((uVar2 & 1) == 0) {
      FUN_00446680(param_1,s_Missing_IHDR_before_IDAT_02fb1a34);
    }
    else if ((*(char *)(param_1 + 0x157) == '\x03') && ((uVar2 & 2) == 0)) {
      FUN_00446680(param_1,s_Missing_PLTE_before_IDAT_02fb1a18);
    }
    else if ((uVar2 & 8) != 0) {
      FUN_004467e0(param_1,s_Too_many_IDATs_found_02fb1a00);
    }
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 4;
  }
  else {
    if ((uVar2 & 4) != 0) {
      *(uint *)(param_1 + 0x74) = uVar2 | 8;
    }
    if (iVar1 == 0x49484452) {
      FUN_00447b30(param_1,param_2,uVar3);
      goto LAB_0043ef86;
    }
    if (iVar1 == 0x49454e44) {
      FUN_00447e70(param_1,param_2,uVar3);
      goto LAB_0043ef86;
    }
  }
  iVar4 = FUN_0043ca70(param_1,iVar1);
  if (iVar4 == 0) {
    if (iVar1 == 0x504c5445) {
      FUN_00447ca0(param_1,param_2,uVar3);
    }
    else {
      if (iVar1 == 0x49444154) {
        *(undefined4 *)(param_1 + 0x13c) = uVar3;
        return;
      }
      if (iVar1 == 0x624b4744) {
        FUN_00449080(param_1,param_2,uVar3);
      }
      else if (iVar1 == 0x6348524d) {
        FUN_00448120(param_1,param_2,uVar3);
      }
      else if (iVar1 == 0x67414d41) {
        FUN_00447ec0(param_1,param_2,uVar3);
      }
      else if (iVar1 == 0x68495354) {
        FUN_00449280(param_1,param_2,uVar3);
      }
      else if (iVar1 == 0x6f464673) {
        FUN_00449500(param_1,param_2,uVar3);
      }
      else if (iVar1 == 0x7043414c) {
        FUN_00449650(param_1,param_2,uVar3);
      }
      else if (iVar1 == 0x7343414c) {
        FUN_004498e0(param_1,param_2,uVar3);
      }
      else if (iVar1 == 0x70485973) {
        FUN_004493c0(param_1,param_2,uVar3);
      }
      else if (iVar1 == 0x73424954) {
        FUN_00447fb0(param_1,param_2,uVar3);
      }
      else if (iVar1 == 0x73524742) {
        FUN_004482e0(param_1,param_2,uVar3);
      }
      else if (iVar1 == 0x69434350) {
        FUN_004483c0(param_1,param_2,uVar3);
      }
      else if (iVar1 == 0x73504c54) {
        FUN_00448b50(param_1,param_2,uVar3);
      }
      else if (iVar1 == 0x74455874) {
        FUN_00449be0(param_1,param_2,uVar3);
      }
      else if (iVar1 == 0x74494d45) {
        FUN_00449af0(param_1,param_2,uVar3);
      }
      else if (iVar1 == 0x74524e53) {
        FUN_00448df0(param_1,param_2,uVar3);
      }
      else if (iVar1 == 0x7a545874) {
        FUN_00449d20(param_1,param_2,uVar3);
      }
      else if (iVar1 == 0x69545874) {
        FUN_0044a260(param_1,param_2,uVar3);
      }
      else {
        FUN_0044a4b0(param_1,param_2,uVar3,0);
      }
    }
  }
  else {
    FUN_0044a4b0(param_1,param_2,uVar3,iVar4);
    if (iVar1 == 0x504c5445) {
      *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 2;
    }
    else if (iVar1 == 0x49444154) {
      *(undefined4 *)(param_1 + 0x13c) = 0;
      return;
    }
  }
  goto LAB_0043ef86;
}

