// Function: FUN_00406390
// Entry:    00406390
// Size:     269 bytes
// Conv:     unknown
// Signature: undefined FUN_00406390(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_00406390(int param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_2 == 0) {
    FUN_004064a0();
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_004062c0(param_2);
      return puVar2;
    }
    if ((puVar2 < (undefined4 *)(*(int *)(param_1 + 4) + 100U)) ||
       ((undefined4 *)(*(int *)(param_1 + 4) + 0xc064U) <= puVar2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((int)param_2 <= *(int *)(param_1 + 0xc)) &&
       ((bVar1 || ((int)(*(int *)(param_1 + 0xc) - param_2) < 0x101)))) {
      *(uint *)(param_1 + 0x10) = param_2;
      return puVar2;
    }
    if (DAT_02fe81ec == (HANDLE)0x0) {
      DAT_02fe81ec = GetProcessHeap();
    }
    if (bVar1) {
      puVar2 = HeapAlloc(DAT_02fe81ec,0,param_2 + 0x80);
      if (puVar2 != (undefined4 *)0x0) {
        uVar4 = *(uint *)(param_1 + 0x10);
        if ((int)param_2 < (int)*(uint *)(param_1 + 0x10)) {
          uVar4 = param_2;
        }
        puVar5 = *(undefined4 **)(param_1 + 8);
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
        FUN_004064c0(*(undefined4 *)(param_1 + 8));
        *(uint *)(param_1 + 0x10) = param_2;
        *(undefined4 **)(param_1 + 8) = puVar2;
        *(uint *)(param_1 + 0xc) = param_2 + 0x80;
        return puVar2;
      }
    }
    else {
      puVar2 = HeapReAlloc(DAT_02fe81ec,0,*(LPVOID *)(param_1 + 8),param_2 + 0x80);
      if (puVar2 != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0xc) = param_2 + 0x80;
        *(uint *)(param_1 + 0x10) = param_2;
        *(undefined4 **)(param_1 + 8) = puVar2;
        return puVar2;
      }
    }
  }
  return (undefined4 *)0x0;
}

