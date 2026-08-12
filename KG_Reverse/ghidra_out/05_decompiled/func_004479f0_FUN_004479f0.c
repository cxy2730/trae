// Function: FUN_004479f0
// Entry:    004479f0
// Size:     152 bytes
// Conv:     unknown
// Signature: undefined FUN_004479f0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004479f0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 local_400 [1024];
  
  for (; param_2 != 0; param_2 = param_2 - uVar2) {
    uVar2 = 0x400;
    if (param_2 < 0x400) {
      uVar2 = param_2;
    }
    FUN_004479c0(param_1,local_400,uVar2);
  }
  iVar1 = FUN_00447a90(param_1);
  if (iVar1 != 0) {
    if ((*(uint *)(param_1 + 0x11c) & 0x20000000) == 0) {
      uVar2 = *(uint *)(param_1 + 0x78) & 0x400;
    }
    else {
      uVar2 = ~*(uint *)(param_1 + 0x78) >> 9 & 1;
    }
    if (uVar2 != 0) {
      FUN_00446780();
      return 1;
    }
    FUN_004467e0(param_1,s_CRC_error_02fb259c);
  }
  return 0;
}

