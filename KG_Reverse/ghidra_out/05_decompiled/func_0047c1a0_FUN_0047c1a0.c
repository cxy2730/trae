// Function: FUN_0047c1a0
// Entry:    0047c1a0
// Size:     250 bytes
// Conv:     unknown
// Signature: undefined FUN_0047c1a0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047c1a0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_80;
  int aiStack_7c [7];
  int local_60;
  int aiStack_5c [7];
  undefined1 local_40 [64];
  
  local_80 = param_1[1] + *param_1 >> 1;
  local_60 = DAT_0300d41c * local_80 >> 10;
  piVar7 = param_1 + 0x1c;
  iVar5 = 0;
  do {
    iVar1 = *piVar7;
    iVar4 = param_1[3] + param_1[2];
    iVar2 = piVar7[1];
    iVar6 = iVar5 + 4;
    piVar7 = piVar7 + -2;
    iVar3 = *(int *)((int)&DAT_0300d420 + iVar5);
    *(int *)((int)aiStack_7c + iVar5) = iVar2 + iVar1 + iVar4 >> 1;
    *(int *)((int)aiStack_5c + iVar5) = iVar3 * (iVar4 - (iVar2 + iVar1)) >> 0xb;
    iVar5 = iVar6;
    param_1 = param_1 + 2;
  } while (iVar6 < 0x1c);
  FUN_0047bae0(2,8,&local_80,local_40,&DAT_0300d43c);
  FUN_0047bae0(4,4,local_40,&local_80,&DAT_0300d44c);
  FUN_0047bba0(8,&local_80,local_40);
  FUN_0047bbf0(4,4,local_40,&local_80);
  FUN_0047bbf0(2,8,&local_80,local_40);
  FUN_0047bcf0(0x10,local_40,param_2);
  return;
}

