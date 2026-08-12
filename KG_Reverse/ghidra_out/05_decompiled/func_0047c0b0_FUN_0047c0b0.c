// Function: FUN_0047c0b0
// Entry:    0047c0b0
// Size:     230 bytes
// Conv:     unknown
// Signature: undefined FUN_0047c0b0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047c0b0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_80;
  int aiStack_7c [7];
  int local_60;
  int aiStack_5c [7];
  undefined1 local_40 [64];
  
  local_80 = *param_1;
  local_60 = DAT_0300d41c * local_80 >> 10;
  piVar3 = param_1 + 0x1c;
  iVar1 = 0;
  do {
    param_1 = param_1 + 2;
    *(int *)((int)aiStack_7c + iVar1) = *param_1 + *piVar3;
    iVar2 = iVar1 + 4;
    *(int *)((int)aiStack_5c + iVar1) =
         *(int *)((int)&DAT_0300d420 + iVar1) * (*param_1 - *piVar3) >> 10;
    piVar3 = piVar3 + -2;
    iVar1 = iVar2;
  } while (iVar2 < 0x1c);
  FUN_0047bae0(2,8,&local_80,local_40,&DAT_0300d43c);
  FUN_0047bae0(4,4,local_40,&local_80,&DAT_0300d44c);
  FUN_0047bba0(8,&local_80,local_40);
  FUN_0047bbf0(4,4,local_40,&local_80);
  FUN_0047bbf0(2,8,&local_80,local_40);
  FUN_0047bcf0(0x10,local_40,param_2);
  return;
}

