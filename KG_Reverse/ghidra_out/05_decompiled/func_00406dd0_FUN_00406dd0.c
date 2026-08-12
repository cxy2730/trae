// Function: FUN_00406dd0
// Entry:    00406dd0
// Size:     286 bytes
// Conv:     unknown
// Signature: undefined FUN_00406dd0(void)
// Decompiled by Ghidra 12.1.2


HGLOBAL __fastcall FUN_00406dd0(int *param_1)

{
  int iVar1;
  SIZE_T dwBytes;
  HGLOBAL hMem;
  SIZE_T *unaff_retaddr;
  undefined1 local_84 [52];
  undefined1 local_50 [64];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049dcf3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0049be9e(0x2002,0x1000);
  local_4 = 0;
  FUN_0049a0a5(local_84,0,0x1000,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = (**(code **)(*param_1 + 4))(local_50);
  if (iVar1 == 1) {
    FUN_0049a209();
    dwBytes = FUN_00493bd0();
    hMem = (HGLOBAL)FUN_0049bf95();
    GlobalUnlock(hMem);
    GlobalReAlloc(hMem,dwBytes,2);
    if (unaff_retaddr != (SIZE_T *)0x0) {
      *unaff_retaddr = dwBytes;
    }
    puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
    FUN_0049a181();
    puStack_8 = (undefined1 *)0xffffffff;
    CSharedFile::~CSharedFile((CSharedFile *)&stack0xffffff78);
  }
  else {
    if (unaff_retaddr != (SIZE_T *)0x0) {
      *unaff_retaddr = 0;
    }
    puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
    FUN_0049a181();
    puStack_8 = (undefined1 *)0xffffffff;
    CSharedFile::~CSharedFile((CSharedFile *)&stack0xffffff78);
    hMem = (HGLOBAL)0x0;
  }
  ExceptionList = pvStack_10;
  return hMem;
}

