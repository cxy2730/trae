// Function: FUN_00420a60
// Entry:    00420a60
// Size:     332 bytes
// Conv:     unknown
// Signature: undefined FUN_00420a60(void)
// Decompiled by Ghidra 12.1.2


HGLOBAL FUN_00420a60(int param_1)

{
  int iVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined **local_28;
  undefined4 local_24;
  undefined **local_20 [2];
  uint local_18;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0049f370;
  local_c = ExceptionList;
  if (param_1 != 0) {
    local_24 = 0;
    local_28 = &PTR_LAB_02f95fac;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_00499e1d(param_1);
    FUN_004062a0();
    local_4._0_1_ = 1;
    iVar1 = FUN_00420640(&local_28,local_20,0,0);
    Detach();
    uVar4 = local_10;
    if ((iVar1 != 0) && (0 < (int)local_10)) {
      hMem = GlobalAlloc(2,local_10);
      if (hMem != (HGLOBAL)0x0) {
        puVar2 = GlobalLock(hMem);
        puVar5 = (undefined4 *)(-(uint)(local_10 != 0) & local_18);
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar2 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar2 = puVar2 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar2 = (undefined4 *)((int)puVar2 + 1);
        }
        GlobalUnlock(hMem);
        local_4 = (uint)local_4._1_3_ << 8;
        local_20[0] = &PTR_FUN_02f95fd0;
        FUN_004064a0();
        local_28 = &PTR_LAB_02f95fb8;
        local_4 = 2;
        FUN_00499e74();
        ExceptionList = local_c;
        return hMem;
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    local_20[0] = &PTR_FUN_02f95fd0;
    FUN_004064a0();
    local_28 = &PTR_LAB_02f95fb8;
    local_4 = 3;
    FUN_00499e74();
  }
  ExceptionList = local_c;
  return (HGLOBAL)0x0;
}

