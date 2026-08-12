// Function: FUN_0041b9c0
// Entry:    0041b9c0
// Size:     149 bytes
// Conv:     unknown
// Signature: undefined FUN_0041b9c0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0041b9c0(int param_1)

{
  byte bVar1;
  SHORT SVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar3;
  ushort uVar4;
  
  bVar1 = *(byte *)(param_1 + 8);
  uVar4 = (ushort)bVar1;
  if ((bVar1 < 0x60) || (0x69 < bVar1)) {
    if (uVar4 == 0x6d) {
      uVar4 = 0xbd;
    }
    else if (uVar4 == 0x6e) {
      uVar4 = 0xbe;
    }
    else {
      if (uVar4 != 0x6f) goto LAB_0041b9e9;
      uVar4 = 0xbf;
    }
  }
  else {
    uVar4 = uVar4 - 0x30;
LAB_0041b9e9:
    if (uVar4 == 0x11) goto LAB_0041b9fe;
  }
  SVar2 = GetKeyState(0x11);
  param_1 = CONCAT22(extraout_var,SVar2);
  if (SVar2 < 0) {
    uVar4 = uVar4 | 0x2000;
  }
LAB_0041b9fe:
  uVar3 = (undefined2)((uint)param_1 >> 0x10);
  if (uVar4 != 0x10) {
    SVar2 = GetKeyState(0x10);
    uVar3 = extraout_var_00;
    if (SVar2 < 0) {
      uVar4 = uVar4 | 0x4000;
    }
  }
  if (uVar4 != 0x12) {
    SVar2 = GetKeyState(0x12);
    uVar3 = extraout_var_01;
    if (SVar2 < 0) {
      uVar4 = uVar4 | 0x8000;
    }
  }
  return CONCAT22(uVar3,uVar4);
}

