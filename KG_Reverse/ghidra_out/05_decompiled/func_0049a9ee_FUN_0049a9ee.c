// Function: FUN_0049a9ee
// Entry:    0049a9ee
// Size:     89 bytes
// Conv:     unknown
// Signature: undefined FUN_0049a9ee(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049a9ee(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1[6];
  if (uVar2 < param_2) {
    if (param_1[4] == 0) {
      FUN_0049132a();
    }
    if (uVar2 < param_2) {
      do {
        uVar2 = uVar2 + param_1[4];
      } while (uVar2 < param_2);
    }
    if (param_1[8] == 0) {
      iVar1 = (**(code **)(*param_1 + 0x54))(uVar2);
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x58))(param_1[8],uVar2);
    }
    if (iVar1 == 0) {
      FUN_0049132a();
    }
    param_1[8] = iVar1;
    param_1[6] = uVar2;
  }
  return;
}

