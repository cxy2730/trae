// Function: FUN_0045d3b0
// Entry:    0045d3b0
// Size:     163 bytes
// Conv:     unknown
// Signature: undefined FUN_0045d3b0(void)
// Decompiled by Ghidra 12.1.2


int FUN_0045d3b0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(param_5 + 0x20))(*(undefined4 *)(param_5 + 0x28),0x13,4);
  if (iVar1 == 0) {
    return -4;
  }
  iVar2 = FUN_0045d460(param_1,0x13,0x13,0,0,param_3,param_2,param_4,&local_4,iVar1);
  if (iVar2 == -3) {
    *(char **)(param_5 + 0x18) = s_oversubscribed_dynamic_bit_lengt_02fb4464;
    (**(code **)(param_5 + 0x24))(*(undefined4 *)(param_5 + 0x28),iVar1);
    return -3;
  }
  if ((iVar2 == -5) || (*param_2 == 0)) {
    *(char **)(param_5 + 0x18) = s_incomplete_dynamic_bit_lengths_t_02fb4440;
    iVar2 = -3;
  }
  (**(code **)(param_5 + 0x24))(*(undefined4 *)(param_5 + 0x28),iVar1);
  return iVar2;
}

