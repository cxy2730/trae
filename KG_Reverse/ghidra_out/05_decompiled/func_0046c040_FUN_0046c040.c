// Function: FUN_0046c040
// Entry:    0046c040
// Size:     159 bytes
// Conv:     unknown
// Signature: undefined FUN_0046c040(void)
// Decompiled by Ghidra 12.1.2


int __fastcall FUN_0046c040(int *param_1)

{
  int iVar1;
  byte *pbVar2;
  int *local_4;
  
  local_4 = param_1;
  iVar1 = FUN_0046cb10(&local_4,0x5a1,1);
  do {
    if (iVar1 == 0x21) {
      return 0x21;
    }
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x18))();
      return iVar1;
    }
    iVar1 = 0;
    pbVar2 = (byte *)((int)local_4 + 2);
    do {
      if ((*(char *)((int)local_4 + iVar1 + 1) == -1) &&
         (((*pbVar2 & 0xf0) == 0xf0 || ((*pbVar2 & 0xf0) == 0xe0)))) break;
      iVar1 = iVar1 + 1;
      pbVar2 = pbVar2 + 1;
    } while (iVar1 < 0x5a0);
    FUN_0046cca0(iVar1 + 1);
    if ((iVar1 != 0) && (iVar1 < 0x5a0)) {
      return 0;
    }
    iVar1 = FUN_0046cb10(&local_4,0x5a1,1);
  } while( true );
}

