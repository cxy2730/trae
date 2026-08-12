// Function: FUN_0041b700
// Entry:    0041b700
// Size:     178 bytes
// Conv:     unknown
// Signature: undefined FUN_0041b700(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_0041b700(undefined4 *param_1,SIZE_T param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  SIZE_T local_10;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_0041b6c0(param_2);
  }
  else {
    iVar2 = FUN_00415c20(param_1);
    if (iVar2 == 0) {
      puVar1 = HeapReAlloc(DAT_02fe863c,0,param_1,param_2);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_00412f50(param_2);
      }
    }
    else {
      puVar1 = (undefined4 *)FUN_0041b6c0(param_2);
      if ((int)param_2 < iVar2 - (int)param_1) {
        local_10 = param_2;
      }
      else {
        local_10 = iVar2 - (int)param_1;
      }
      puVar4 = puVar1;
      for (uVar3 = local_10 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = *param_1;
        param_1 = param_1 + 1;
        puVar4 = puVar4 + 1;
      }
      for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
  }
  return puVar1;
}

