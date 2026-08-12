// Function: FUN_00485460
// Entry:    00485460
// Size:     241 bytes
// Conv:     unknown
// Signature: undefined FUN_00485460(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00485460(byte *param_1,byte *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  iVar2 = _DAT_03014e84;
  uVar7 = 0;
  if (param_3 != 0) {
    if (DAT_0301119c == 0) {
      do {
        bVar3 = *param_1;
        param_1 = param_1 + 1;
        bVar4 = *param_2;
        uVar6 = (uint)CONCAT11(bVar3,bVar4);
        param_2 = param_2 + 1;
        if (bVar3 != bVar4) {
          if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
            uVar6 = (uint)CONCAT11(bVar3 + 0x20,bVar4);
          }
          uVar5 = (undefined2)uVar6;
          bVar3 = (byte)uVar6;
          if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
            uVar5 = (undefined2)CONCAT31((int3)(uVar6 >> 8),bVar3 + 0x20);
          }
          bVar3 = (byte)((ushort)uVar5 >> 8);
          if (bVar3 != (byte)uVar5) {
            if (bVar3 < (byte)uVar5) {
              return 0xffffffff;
            }
            return 1;
          }
        }
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar7 = 0;
    }
    else {
      LOCK();
      _DAT_03014e84 = _DAT_03014e84 + 1;
      UNLOCK();
      bVar1 = 0 < DAT_03014e80;
      if (bVar1) {
        LOCK();
        UNLOCK();
        _DAT_03014e84 = iVar2;
        FUN_00489a54(0x13);
      }
      uVar6 = (uint)bVar1;
      do {
        bVar3 = *param_1;
        param_1 = param_1 + 1;
        bVar4 = *param_2;
        param_2 = param_2 + 1;
        if (bVar3 != bVar4) {
          bVar3 = FUN_00484f9b(bVar4,bVar3);
          bVar4 = FUN_00484f9b();
          if (bVar4 != bVar3) {
            uVar7 = 0xffffffff;
            if (bVar3 <= bVar4) {
              uVar7 = 1;
            }
            goto LAB_0048552e;
          }
        }
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar7 = 0;
LAB_0048552e:
      if (uVar6 == 0) {
        LOCK();
        _DAT_03014e84 = _DAT_03014e84 + -1;
        UNLOCK();
      }
      else {
        FUN_00489ab5(0x13);
      }
    }
  }
  return uVar7;
}

