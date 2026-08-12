// Function: FUN_004853ce
// Entry:    004853ce
// Size:     143 bytes
// Conv:     unknown
// Signature: undefined FUN_004853ce(void)
// Decompiled by Ghidra 12.1.2


uint FUN_004853ce(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 local_8;
  
  if (param_1 < 0x100) {
    if (1 < DAT_02fd9ac0) {
      uVar2 = FUN_0048a852(param_1,4);
      return uVar2;
    }
    return (byte)PTR_DAT_02fd98b4[param_1 * 2] & 4;
  }
  local_8 = 0;
  uVar3 = (undefined1)param_1;
  uVar2 = param_1 >> 8;
  param_1 = CONCAT13(uVar3,CONCAT12((char)uVar2,(undefined2)param_1));
  if (DAT_03014fdc != 0) {
    iVar1 = FUN_0048e230(1,(int)&param_1 + 2,2,&local_8,DAT_03014fc4,DAT_030151e4,1);
    if (((iVar1 != 0) && (local_8._2_2_ == 0)) && ((local_8 & 4) != 0)) {
      return 1;
    }
  }
  return 0;
}

