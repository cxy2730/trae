// Function: FUN_0041b300
// Entry:    0041b300
// Size:     569 bytes
// Conv:     unknown
// Signature: undefined FUN_0041b300(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0041b300(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBX;
  undefined8 uVar3;
  int local_20;
  
  pcVar1 = (code *)FUN_00414b60(*param_2,param_2[1],param_2[2],param_2[3]);
  if (pcVar1 == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    local_20 = param_2[3];
    do {
      local_20 = local_20 + -1;
    } while (-1 < local_20);
    uVar3 = (*pcVar1)();
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    if (unaff_EBX != 0) {
      param_2[0x34] = 1;
      *(undefined8 *)(param_2 + 0x35) = uVar3;
    }
    uVar2 = 1;
  }
  return uVar2;
}

