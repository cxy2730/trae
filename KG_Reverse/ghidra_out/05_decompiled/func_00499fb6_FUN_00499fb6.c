// Function: FUN_00499fb6
// Entry:    00499fb6
// Size:     87 bytes
// Conv:     unknown
// Signature: undefined FUN_00499fb6(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00499fb6(void)

{
  uint local_c;
  undefined4 local_8;
  
  FUN_0048138e((int)&local_8 + 3);
  if (local_8._3_1_ == 0xff) {
    FUN_004813bd(&local_8);
    if ((short)local_8 == -2) {
      local_c = 0xffffffff;
    }
    else if ((short)local_8 == -1) {
      FUN_0048147c(&local_c);
    }
    else {
      local_c = local_8 & 0xffff;
    }
  }
  else {
    local_c = (uint)local_8._3_1_;
  }
  return local_c;
}

