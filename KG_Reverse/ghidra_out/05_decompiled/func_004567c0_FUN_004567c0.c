// Function: FUN_004567c0
// Entry:    004567c0
// Size:     116 bytes
// Conv:     unknown
// Signature: undefined FUN_004567c0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004567c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(iVar2 + 0x30) == 0) {
    iVar4 = (**(code **)(*(int *)(param_1 + 0x1a8) + 0xc))(param_1,iVar2 + 8);
    if (iVar4 == 0) {
      return;
    }
    *(undefined4 *)(iVar2 + 0x30) = 1;
  }
  uVar3 = *(uint *)(param_1 + 0x138);
  puVar1 = (uint *)(iVar2 + 0x34);
  (**(code **)(*(int *)(param_1 + 0x1ac) + 4))
            (param_1,iVar2 + 8,puVar1,uVar3,param_2,param_3,param_4);
  if (uVar3 <= *puVar1) {
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *puVar1 = 0;
  }
  return;
}

