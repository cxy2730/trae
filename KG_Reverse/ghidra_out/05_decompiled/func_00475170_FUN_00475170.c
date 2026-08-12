// Function: FUN_00475170
// Entry:    00475170
// Size:     128 bytes
// Conv:     unknown
// Signature: undefined FUN_00475170(void)
// Decompiled by Ghidra 12.1.2


int FUN_00475170(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_4;
  
  iVar4 = 0x18;
  local_4 = 1;
  if ((*(byte *)(param_1 + 1) & 6) == 6) {
    local_4 = 4;
  }
  bVar1 = *(byte *)(param_1 + 2);
  while( true ) {
    iVar2 = FUN_004751f0(param_1,param_2 + -3,iVar4);
    iVar4 = iVar2 + 1;
    iVar2 = iVar2 - (bVar1 >> 1 & 1);
    if (iVar2 < 1) {
      return 0;
    }
    iVar3 = FUN_00475260(param_1,param_2 + -3,iVar2,local_4);
    if (0 < iVar3) break;
    if (1999 < iVar4) {
      return 0;
    }
  }
  return iVar2;
}

