// Function: FUN_0042c1c0
// Entry:    0042c1c0
// Size:     175 bytes
// Conv:     unknown
// Signature: undefined FUN_0042c1c0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0042c1c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_8 [4];
  undefined4 uStack_4;
  
  iVar1 = FUN_0042a650();
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  puVar2 = (undefined4 *)FUN_0042a260(auStack_8);
  uVar4 = *puVar2;
  uStack_4 = puVar2[1];
  iVar1 = FUN_004279e0();
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      uVar3 = FUN_0042a0a0(iVar5);
      uStack_4 = FUN_0042a470(uStack_4,uVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  iVar1 = FUN_004279f0();
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      uVar3 = FUN_0042a180(iVar5);
      uVar4 = FUN_0042a340(uVar4,uVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  *param_1 = uVar4;
  param_1[1] = uStack_4;
  return;
}

