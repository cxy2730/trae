// Function: FUN_0041b250
// Entry:    0041b250
// Size:     172 bytes
// Conv:     unknown
// Signature: undefined FUN_0041b250(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0041b250(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int local_18;
  
  pcVar1 = (code *)FUN_00414b60(*param_2,param_2[1],param_2[2],param_2[3]);
  if (pcVar1 == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18 = param_2[3];
    do {
      local_18 = local_18 + -1;
    } while (-1 < local_18);
    uVar2 = (*pcVar1)();
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    if (unaff_EBX != 0) {
      param_2[9] = 1;
      param_2[10] = uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}

