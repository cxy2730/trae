// Function: FUN_0042fe10
// Entry:    0042fe10
// Size:     284 bytes
// Conv:     unknown
// Signature: undefined FUN_0042fe10(void)
// Decompiled by Ghidra 12.1.2


void FUN_0042fe10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  BOOL BVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined ***pppuVar7;
  undefined **appuStack_20 [2];
  uint uStack_18;
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004a01e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_0042a650();
  if (iVar1 != 0) {
    FUN_004062a0();
    pppuVar7 = appuStack_20;
    uStack_4 = 0;
    FUN_0042a650(pppuVar7,param_1,param_2,param_3,param_4);
    iVar1 = FUN_00427d60(pppuVar7,param_1,param_2,param_3,param_4);
    uVar5 = uStack_10;
    if ((iVar1 != 0) && (uStack_10 != 0)) {
      hMem = GlobalAlloc(0x42,uStack_10);
      if (hMem != (HGLOBAL)0x0) {
        puVar2 = GlobalLock(hMem);
        puVar6 = (undefined4 *)(-(uint)(uStack_10 != 0) & uStack_18);
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar2 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar2 = puVar2 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar2 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar2 = (undefined4 *)((int)puVar2 + 1);
        }
        FUN_004064a0();
        GlobalUnlock(hMem);
        BVar3 = OpenClipboard((HWND)0x0);
        if (BVar3 == 0) {
          GlobalFree(hMem);
        }
        else {
          EmptyClipboard();
          SetClipboardData(DAT_02fe8c40 & 0xffff,hMem);
          CloseClipboard();
        }
      }
    }
    uStack_4 = 0xffffffff;
    appuStack_20[0] = &PTR_FUN_02f96430;
    FUN_004064a0();
  }
  ExceptionList = pvStack_c;
  return;
}

