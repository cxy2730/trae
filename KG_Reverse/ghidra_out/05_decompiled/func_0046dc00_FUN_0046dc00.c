// Function: FUN_0046dc00
// Entry:    0046dc00
// Size:     262 bytes
// Conv:     unknown
// Signature: undefined FUN_0046dc00(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046dc00(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_14;
  undefined1 local_10 [4];
  char local_c [3];
  char local_9;
  byte local_7;
  uint local_6;
  
  iVar2 = 0;
  iVar1 = FUN_0046de10(local_c,10,*(undefined4 *)(param_1 + 0x148));
  if (iVar1 == 10) {
    iVar1 = _strncmp(local_c,&DAT_02fd2750,3);
    if (iVar1 != 0) {
      FUN_00484e21(*(undefined4 *)(param_1 + 0x148),0,0);
      return;
    }
    if (local_9 == '\x03') {
      if ((local_7 & 0x40) != 0) {
        iVar1 = FUN_0046de10(local_10,4,*(undefined4 *)(param_1 + 0x148));
        if (iVar1 != 4) {
          return;
        }
        FUN_00484e21(*(undefined4 *)(param_1 + 0x148),6,1);
        iVar1 = FUN_0046de10(&local_14,4,*(undefined4 *)(param_1 + 0x148));
        if (iVar1 != 4) {
          return;
        }
        iVar2 = Ordinal_14(local_14);
      }
      FUN_00484e21(*(undefined4 *)(param_1 + 0x148),
                   ((((local_6 & 0x7f) << 7 | local_6 >> 8 & 0x7f) << 7 | local_6 >> 0x10 & 0x7f) <<
                    7 | local_6 >> 0x18 & 0x7f) + iVar2,1);
    }
  }
  return;
}

