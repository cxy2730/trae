// Function: FUN_00469d00
// Entry:    00469d00
// Size:     263 bytes
// Conv:     unknown
// Signature: undefined FUN_00469d00(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_00469d00(uint *param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_2 == 0) {
    FUN_00469e10();
  }
  else {
    puVar2 = (undefined4 *)*param_1;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_00469c30(param_2);
      return puVar2;
    }
    if ((puVar2 < (undefined4 *)(param_1[3] + 0x34)) ||
       ((undefined4 *)(param_1[3] + 0x6034) <= puVar2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((int)param_2 <= (int)param_1[1]) && ((bVar1 || ((int)(param_1[1] - param_2) < 0x101)))) {
      param_1[2] = param_2;
      return puVar2;
    }
    if (DAT_02ff2bbc == (HANDLE)0x0) {
      DAT_02ff2bbc = GetProcessHeap();
    }
    if (bVar1) {
      puVar2 = HeapAlloc(DAT_02ff2bbc,0,param_2 + 0x80);
      if (puVar2 != (undefined4 *)0x0) {
        uVar4 = param_1[2];
        if ((int)param_2 < (int)param_1[2]) {
          uVar4 = param_2;
        }
        puVar5 = (undefined4 *)*param_1;
        puVar6 = puVar2;
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        FUN_00469e30(*param_1);
        param_1[2] = param_2;
        *param_1 = (uint)puVar2;
        param_1[1] = param_2 + 0x80;
        return puVar2;
      }
    }
    else {
      puVar2 = HeapReAlloc(DAT_02ff2bbc,0,(LPVOID)*param_1,param_2 + 0x80);
      if (puVar2 != (undefined4 *)0x0) {
        param_1[1] = param_2 + 0x80;
        param_1[2] = param_2;
        *param_1 = (uint)puVar2;
        return puVar2;
      }
    }
  }
  return (undefined4 *)0x0;
}

