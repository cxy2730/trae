// Function: FUN_0041c740
// Entry:    0041c740
// Size:     240 bytes
// Conv:     unknown
// Signature: undefined FUN_0041c740(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0041c740(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  CMemFile local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049ee58;
  local_c = ExceptionList;
  if ((param_1 != 0) && (0 < param_2)) {
    ExceptionList = &local_c;
    FUN_0049a8c4(0x400);
    local_4 = 0;
    FUN_0049a910(param_1,param_2,0);
    puVar2 = (undefined4 *)FUN_004237d0(local_34,param_3);
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = puVar2[3];
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      if ((HICON)puVar2[3] != (HICON)0x0) {
        DestroyIcon((HICON)puVar2[3]);
        puVar2[3] = 0;
      }
      if (puVar2[4] != 0) {
        FUN_00492f40(puVar2[4]);
        puVar2[4] = 0;
      }
      FUN_00492f40(puVar2);
      local_4 = 0xffffffff;
      CMemFile::~CMemFile(local_34);
      ExceptionList = local_c;
      return uVar1;
    }
    local_4 = 0xffffffff;
    CMemFile::~CMemFile(local_34);
  }
  ExceptionList = local_c;
  return 0;
}

