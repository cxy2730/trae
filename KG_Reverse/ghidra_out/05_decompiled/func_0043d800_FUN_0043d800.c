// Function: FUN_0043d800
// Entry:    0043d800
// Size:     58 bytes
// Conv:     unknown
// Signature: undefined FUN_0043d800(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0043d800(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_4 < 0x84) {
    pcVar2 = s_too_short_02fb14ec;
  }
  else {
    if ((param_4 & 3) == 0) {
      return 1;
    }
    pcVar2 = s_invalid_length_02fb14dc;
  }
  uVar1 = FUN_0043d5f0(param_1,param_2,param_3,param_4,pcVar2);
  return uVar1;
}

