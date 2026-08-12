// Function: FUN_00405c80
// Entry:    00405c80
// Size:     176 bytes
// Conv:     unknown
// Signature: undefined FUN_00405c80(void)
// Decompiled by Ghidra 12.1.2


void FUN_00405c80(byte *param_1,LPSTR param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < 0x80000402) {
    if (uVar1 == 0x80000401) {
      FUN_004834b5(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_2,10);
      return;
    }
    if (uVar1 == 0x80000101) {
      wsprintfA(param_2,&DAT_02fa71e8,(uint)*param_1);
      return;
    }
    if (uVar1 == 0x80000201) {
      FUN_0041b850((int)*(short *)param_1,param_2);
      return;
    }
    if (uVar1 == 0x80000301) {
      FUN_0041b850(*(undefined4 *)param_1,param_2);
      return;
    }
  }
  else if (uVar1 == 0x80000501) {
    FUN_0041bd10(*(undefined4 *)param_1,param_2);
  }
  else if (uVar1 == 0x80000601) {
    FUN_0041bda0(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_2);
    return;
  }
  return;
}

