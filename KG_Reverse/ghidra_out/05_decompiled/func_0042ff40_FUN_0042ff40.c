// Function: FUN_0042ff40
// Entry:    0042ff40
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_0042ff40(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0042ff40(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0x54) <= *(int *)(param_1 + 0x4c)) {
    iVar2 = *(int *)(param_1 + 0x54);
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x50) <= *(int *)(param_1 + 0x48)) {
    iVar1 = *(int *)(param_1 + 0x50);
  }
  FUN_0042ff70(iVar1,iVar2,param_2);
  return;
}

