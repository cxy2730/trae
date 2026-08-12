// Function: FUN_00447880
// Entry:    00447880
// Size:     150 bytes
// Conv:     unknown
// Signature: undefined FUN_00447880(void)
// Decompiled by Ghidra 12.1.2


void FUN_00447880(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(byte *)(param_1 + 0x15d) < 8) {
    uVar1 = (uint)*(byte *)(param_1 + 0x15d);
    *(undefined4 *)(param_1 + 0x2c4) = 0x11;
    iVar2 = -uVar1 + 8;
    FUN_00447770(param_1,uVar1 + 0x20 + param_2,iVar2);
    *(undefined1 *)(param_1 + 0x15d) = 8;
    iVar2 = FUN_0043c190(param_2 + 0x20,uVar1,iVar2);
    if (iVar2 != 0) {
      if ((uVar1 < 4) && (iVar2 = FUN_0043c190(param_2 + 0x20,uVar1,-uVar1 + 4), iVar2 != 0)) {
        pcVar3 = s_Not_a_PNG_file_02fb258c;
      }
      else {
        pcVar3 = s_PNG_file_corrupted_by_ASCII_conv_02fb2564;
      }
      FUN_004463d0(param_1,pcVar3);
    }
    if (uVar1 < 3) {
      *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x1000;
    }
    return;
  }
  return;
}

