// Function: FUN_00429600
// Entry:    00429600
// Size:     190 bytes
// Conv:     unknown
// Signature: undefined FUN_00429600(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00429600(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[0xb] = param_2[0xb];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    FUN_004932c3(param_2 + 8);
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    FUN_004932c3(param_2 + 0xf);
    param_1[0x14] = 0;
    if (param_2[0x14] == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_2[0x12];
    }
    FUN_004069d0(uVar1,param_2[0x14]);
    *(undefined2 *)(param_1 + 0x15) = *(undefined2 *)(param_2 + 0x15);
    *(undefined2 *)((int)param_1 + 0x56) = *(undefined2 *)((int)param_2 + 0x56);
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = param_2[0x17];
  }
  return;
}

