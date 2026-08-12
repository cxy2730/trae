// Function: FUN_00498672
// Entry:    00498672
// Size:     107 bytes
// Conv:     unknown
// Signature: undefined FUN_00498672(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00498672(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  puVar3 = (undefined4 *)FUN_00492f17(0x14);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_004936eb();
    puVar3[4] = PTR_DAT_02fd8088;
    uVar1 = *(undefined4 *)(unaff_EBP + 0x10);
    puVar3[2] = *(undefined4 *)(unaff_EBP + 8);
    uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *puVar3 = &PTR_LAB_02f9aafc;
    puVar3[3] = uVar2;
    FUN_00493313(uVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 **)(unaff_EBP + -0x10) = puVar3;
  __CxxThrowException_8(unaff_EBP + -0x10,&DAT_02fa3d58);
  if (0x10b < extraout_ECX) {
    if (extraout_ECX == 0x3e3) {
      return 10;
    }
    if (extraout_ECX == 0x3e4) {
      return 10;
    }
    if (extraout_ECX == 0x3e5) {
      return 10;
    }
    if (extraout_ECX == 999) {
      return 5;
    }
    return 1;
  }
  if (extraout_ECX == 0x10b) {
    return 3;
  }
  if (extraout_ECX < 0x3f) {
    if (extraout_ECX == 0x3e) {
      return 8;
    }
    if (extraout_ECX < 0x1a) {
      if (extraout_ECX == 0x19) {
        return 9;
      }
      switch(extraout_ECX) {
      case 0:
        return 0;
      default:
        return 1;
      case 2:
      case 6:
      case 0x12:
        goto LAB_004987df;
      case 3:
      case 0xf:
      case 0x11:
        goto LAB_004987df;
      case 4:
        return 4;
      case 5:
      case 0xc:
      case 0x13:
LAB_004987df:
        return 5;
      case 0xb:
LAB_004987df:
        return 6;
      case 0x10:
        return 7;
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
LAB_004987df:
        return 10;
      case 0x18:
        return 9;
      }
    }
    if (0x27 < extraout_ECX) {
      switch(extraout_ECX) {
      case 0x34:
      case 0x35:
      case 0x37:
        goto LAB_004987df;
      case 0x36:
      case 0x3a:
        goto LAB_004987df;
      default:
        return 1;
      case 0x39:
      case 0x3b:
        goto LAB_004987df;
      case 0x3c:
        goto LAB_004987df;
      }
    }
    if (extraout_ECX == 0x27) {
      return 0xd;
    }
    if (0x20 < extraout_ECX) {
      if (extraout_ECX == 0x21) {
        return 0xc;
      }
      if (extraout_ECX == 0x22) {
        return 3;
      }
      if (extraout_ECX == 0x24) {
        return 4;
      }
      if (extraout_ECX == 0x26) {
        return 0xe;
      }
      return 1;
    }
    if (extraout_ECX == 0x20) {
      return 0xb;
    }
    if (extraout_ECX == 0x1a) {
      return 6;
    }
    if (extraout_ECX == 0x1b) {
      return 9;
    }
    iVar4 = extraout_ECX - 0x1d;
    if (iVar4 == 0) {
      return 5;
    }
LAB_00498755:
    if (iVar4 == 1) {
      return 9;
    }
  }
  else {
    if (extraout_ECX < 0x6c) {
      if (extraout_ECX == 0x6b) {
LAB_004987df:
        return 2;
      }
      if (0x47 < extraout_ECX) {
        if (extraout_ECX == 0x50) {
          return 5;
        }
        if (extraout_ECX == 0x52) {
          return 5;
        }
        if (extraout_ECX == 0x55) {
          return 3;
        }
        if (extraout_ECX != 0x56) {
          if (extraout_ECX == 0x58) {
            return 10;
          }
          return 1;
        }
        return 5;
      }
      if (extraout_ECX == 0x47) {
        return 5;
      }
      if (extraout_ECX == 0x40) {
        return 5;
      }
      if (extraout_ECX == 0x41) {
        return 5;
      }
      if (extraout_ECX == 0x42) {
        return 6;
      }
      if (extraout_ECX == 0x43) {
        return 3;
      }
      iVar4 = extraout_ECX - 0x44;
      if (iVar4 == 0) {
        return 4;
      }
    }
    else {
      if (extraout_ECX < 0x91) {
        if (extraout_ECX == 0x90) {
          return 3;
        }
        if (extraout_ECX < 0x76) {
          if (extraout_ECX == 0x75) {
            return 10;
          }
          if (extraout_ECX == 0x6c) {
            return 0xc;
          }
          if (extraout_ECX == 0x6f) {
            return 3;
          }
          if (extraout_ECX == 0x70) {
            return 0xd;
          }
          if (extraout_ECX == 0x71) {
            return 4;
          }
          if (extraout_ECX != 0x72) {
            return 1;
          }
          return 6;
        }
        if (extraout_ECX == 0x7b) {
          return 3;
        }
        if (extraout_ECX == 0x7c) {
          return 3;
        }
        if (extraout_ECX == 0x7d) {
          return 3;
        }
        iVar4 = extraout_ECX - 0x83;
        if (iVar4 == 0) {
          return 9;
        }
        goto LAB_00498755;
      }
      if (extraout_ECX < 0xb7) {
        if (extraout_ECX == 0xb6) {
          return 6;
        }
        if (extraout_ECX == 0x91) {
          return 7;
        }
        if (extraout_ECX == 0x9a) {
          return 3;
        }
        if (extraout_ECX != 0xa1) {
          if (extraout_ECX == 0xa7) {
            return 0xc;
          }
          if (extraout_ECX == 0xaa) {
            return 5;
          }
          return 1;
        }
        return 3;
      }
      if (extraout_ECX == 0xb7) {
        return 5;
      }
      if (extraout_ECX == 0xbf) {
        return 6;
      }
      if (extraout_ECX == 0xc1) {
        return 6;
      }
      iVar4 = extraout_ECX - 0xce;
      if (iVar4 == 0) {
        return 3;
      }
    }
    if (iVar4 == 2) {
LAB_004987df:
      return 3;
    }
  }
  return 1;
}

