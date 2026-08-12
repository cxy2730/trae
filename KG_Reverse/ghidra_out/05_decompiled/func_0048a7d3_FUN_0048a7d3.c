// Function: FUN_0048a7d3
// Entry:    0048a7d3
// Size:     127 bytes
// Conv:     unknown
// Signature: undefined FUN_0048a7d3(void)
// Decompiled by Ghidra 12.1.2


void FUN_0048a7d3(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 uStack_c;
  int local_8;
  
  uVar3 = 0;
  uVar1 = FUN_0048f56f(local_1c,&local_8,param_2,0,0,0,0);
  if ((uVar1 & 4) == 0) {
    iVar2 = FUN_0048efb7(local_1c,&local_10);
    if (((uVar1 & 2) != 0) || (iVar2 == 1)) {
      uVar3 = 0x80;
    }
    if (((uVar1 & 1) != 0) || (iVar2 == 2)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    local_10 = 0;
    uStack_c = 0;
  }
  *param_1 = uVar3;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_c,local_10);
  param_1[1] = local_8 - param_2;
  return;
}

