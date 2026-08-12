// Function: FUN_00494caf
// Entry:    00494caf
// Size:     291 bytes
// Conv:     unknown
// Signature: undefined FUN_00494caf(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00494caf(void)

{
  HWND hWnd;
  ATOM nAtom;
  HANDLE pvVar1;
  undefined4 uVar2;
  LRESULT LVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EBP;
  bool bVar6;
  
  FUN_004858b8();
  hWnd = *(HWND *)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffb4;
  pvVar1 = GetPropA(hWnd,"AfxOldWndProc423");
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(HANDLE *)(unaff_EBP + -0x18) = pvVar1;
  iVar4 = *(int *)(unaff_EBP + 0xc);
  bVar6 = true;
  if (iVar4 == 6) {
    uVar2 = FUN_00494bb2(*(undefined4 *)(unaff_EBP + 0x14));
    uVar5 = FUN_00494bb2(hWnd);
    FUN_00494910(uVar5,*(undefined4 *)(unaff_EBP + 0x10),uVar2);
LAB_00494db3:
    if (!bVar6) goto LAB_00494d40;
  }
  else {
    if (iVar4 == 0x20) {
      uVar2 = FUN_00494bb2(hWnd);
      iVar4 = FUN_00494971(uVar2,(int)*(short *)(unaff_EBP + 0x14),
                           *(uint *)(unaff_EBP + 0x14) >> 0x10);
      bVar6 = iVar4 == 0;
      goto LAB_00494db3;
    }
    if (iVar4 == 0x82) {
      SetWindowLongA(hWnd,-4,*(LONG *)(unaff_EBP + -0x18));
      RemovePropA(hWnd,"AfxOldWndProc423");
      nAtom = GlobalFindAtomA("AfxOldWndProc423");
      GlobalDeleteAtom(nAtom);
    }
    else if (iVar4 == 0x110) {
      uVar2 = FUN_00494bb2(hWnd);
      FUN_00494874(uVar2,unaff_EBP + -0x30,unaff_EBP + -0x1c);
      LVar3 = CallWindowProcA(*(WNDPROC *)(unaff_EBP + -0x18),hWnd,0x110,
                              *(WPARAM *)(unaff_EBP + 0x10),*(LPARAM *)(unaff_EBP + 0x14));
      *(LRESULT *)(unaff_EBP + -0x14) = LVar3;
      FUN_00494897(uVar2,unaff_EBP + -0x30,*(undefined4 *)(unaff_EBP + -0x1c));
      goto LAB_00494d40;
    }
  }
  LVar3 = CallWindowProcA(*(WNDPROC *)(unaff_EBP + -0x18),hWnd,*(UINT *)(unaff_EBP + 0xc),
                          *(WPARAM *)(unaff_EBP + 0x10),*(LPARAM *)(unaff_EBP + 0x14));
  *(LRESULT *)(unaff_EBP + -0x14) = LVar3;
LAB_00494d40:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}

