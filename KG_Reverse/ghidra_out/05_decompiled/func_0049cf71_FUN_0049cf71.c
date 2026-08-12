// Function: FUN_0049cf71
// Entry:    0049cf71
// Size:     310 bytes
// Conv:     unknown
// Signature: undefined FUN_0049cf71(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049cf71(void)

{
  int *piVar1;
  int iVar2;
  CWinThread *this;
  int unaff_EBP;
  
  FUN_004858b8();
  *(CWinThread **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_LAB_02f9bfd8;
  piVar1 = *(int **)(this + 0x80);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(1);
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 0x14))(1);
  }
  iVar2 = FUN_0049c724();
  if (*(char *)(iVar2 + 0x14) == '\0') {
    if (DAT_03010c20 != (int *)0x0) {
      (**(code **)(*DAT_03010c20 + 4))(1);
      DAT_03010c20 = (int *)0x0;
    }
    if (DAT_03010c1c != (int *)0x0) {
      (**(code **)(*DAT_03010c1c + 4))(1);
      DAT_03010c1c = (int *)0x0;
    }
  }
  if (*(int *)(this + 0x94) != 0) {
    FUN_0049a83c(*(int *)(this + 0x94));
  }
  if (*(int *)(this + 0x98) != 0) {
    FUN_0049a83c(*(int *)(this + 0x98));
  }
  if (*(ATOM *)(this + 0xb0) != 0) {
    GlobalDeleteAtom(*(ATOM *)(this + 0xb0));
  }
  if (*(ATOM *)(this + 0xb2) != 0) {
    GlobalDeleteAtom(*(ATOM *)(this + 0xb2));
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))(1);
  }
  iVar2 = FUN_0049c724();
  if (*(int *)(iVar2 + 0x10) == *(int *)(this + 0x78)) {
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  if (*(CWinThread **)(iVar2 + 4) == this) {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  FUN_004837fe(*(undefined4 *)(this + 0x78));
  FUN_004837fe(*(undefined4 *)(this + 0x7c));
  FUN_004837fe(*(undefined4 *)(this + 0x88));
  FUN_004837fe(*(undefined4 *)(this + 0x8c));
  FUN_004837fe(*(undefined4 *)(this + 0x90));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 0;
  CWinThread::~CWinThread(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

