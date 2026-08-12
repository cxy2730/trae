// Function: FUN_0045d930
// Entry:    0045d930
// Size:     393 bytes
// Conv:     unknown
// Signature: undefined FUN_0045d930(void)
// Decompiled by Ghidra 12.1.2


int FUN_0045d930(uint param_1,undefined4 param_2,int param_3,int *param_4,int *param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(param_9 + 0x20))(*(undefined4 *)(param_9 + 0x28),0x120,4);
  if (iVar1 == 0) {
    return -4;
  }
  iVar2 = FUN_0045d460(param_3,param_1,0x101,&DAT_02f991ac,&DAT_02f99228,param_6,param_4,param_8,
                       &local_4,iVar1);
  if (iVar2 == 0) {
    if (*param_4 != 0) {
      iVar2 = FUN_0045d460(param_3 + param_1 * 4,param_2,0,&DAT_02f992a4,&DAT_02f9931c,param_7,
                           param_5,param_8,&local_4,iVar1);
      if (iVar2 == 0) {
        if ((*param_5 != 0) || (param_1 < 0x102)) {
          (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),iVar1);
          return 0;
        }
      }
      else {
        if (iVar2 == -3) {
          *(char **)(param_9 + 0x18) = s_oversubscribed_distance_tree_02fb4510;
          (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),iVar1);
          return -3;
        }
        if (iVar2 == -5) {
          *(char **)(param_9 + 0x18) = s_incomplete_distance_tree_02fb44f4;
          (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),iVar1);
          return -3;
        }
        if (iVar2 == -4) goto LAB_0045da63;
      }
      *(char **)(param_9 + 0x18) = s_empty_distance_tree_with_lengths_02fb44d0;
      iVar2 = -3;
LAB_0045da63:
      (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),iVar1);
      return iVar2;
    }
  }
  else {
    if (iVar2 == -3) {
      *(char **)(param_9 + 0x18) = s_oversubscribed_literal_length_tr_02fb44ac;
      (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),iVar1);
      return -3;
    }
    if (iVar2 == -4) goto LAB_0045daa6;
  }
  *(char **)(param_9 + 0x18) = s_incomplete_literal_length_tree_02fb448c;
  iVar2 = -3;
LAB_0045daa6:
  (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),iVar1);
  return iVar2;
}

