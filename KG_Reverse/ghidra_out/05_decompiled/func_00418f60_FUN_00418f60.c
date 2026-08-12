// Function: FUN_00418f60
// Entry:    00418f60
// Size:     302 bytes
// Conv:     unknown
// Signature: undefined FUN_00418f60(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00418f60(void)

{
  bool bVar1;
  HWND pHVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  LPACCEL lpAccelDst;
  LPACCEL ptVar6;
  uint unaff_ESI;
  int iVar7;
  HACCEL__ *hAccelSrc;
  HACCEL__ local_18 [2];
  int *piStack_10;
  
  pHVar2 = GetFocus();
  uVar3 = FUN_00494bb2(pHVar2);
  puVar4 = (undefined4 *)FUN_00418e70(uVar3);
  if (puVar4 != (undefined4 *)0x0) {
    hAccelSrc = local_18;
    iVar5 = (**(code **)*puVar4)(puVar4);
    if (-1 < iVar5) {
      iVar5 = (*pcRamb196b294)(&DAT_02f9a8f0);
      if (((-1 < iVar5) && ((short)unaff_ESI != 0)) && (hAccelSrc != (HACCEL__ *)0x0)) {
        lpAccelDst = (LPACCEL)FUN_00492f17((unaff_ESI & 0xffff) * 6);
        iVar5 = CopyAcceleratorTableA(hAccelSrc,lpAccelDst,unaff_ESI & 0xffff);
        bVar1 = false;
        iVar7 = 0;
        if (0 < iVar5) {
          ptVar6 = lpAccelDst;
          do {
            if (((ptVar6->fVirt & 0xfd) == ((piStack_10[1] != 0x106) - 1U & 0x10)) &&
               (ptVar6->key == *(WORD *)(piStack_10 + 2))) {
              bVar1 = true;
              break;
            }
            iVar7 = iVar7 + 1;
            ptVar6 = ptVar6 + 1;
          } while (iVar7 < iVar5);
        }
        FUN_00492f40(lpAccelDst);
        if (bVar1) {
          (**(code **)(unaff_ESI + 0x10))(&stack0xffffffe4);
          (**(code **)(*piStack_10 + 8))(piStack_10);
          return 1;
        }
      }
      (**(code **)(unaff_ESI + 8))(&stack0xffffffe4);
    }
  }
  return 0;
}

