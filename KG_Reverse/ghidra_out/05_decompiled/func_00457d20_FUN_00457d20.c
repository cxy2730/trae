// Function: FUN_00457d20
// Entry:    00457d20
// Size:     237 bytes
// Conv:     unknown
// Signature: undefined FUN_00457d20(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00457d20(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_1;
  iVar1 = param_1[1];
  for (; param_3 < 0x19; param_3 = param_3 + 8) {
    if (param_1[2] == 0) {
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*(int *)(param_1[5] + 0x14) + 0xc))(param_1[5]);
        if (iVar1 == 0) {
          return 0;
        }
        pbVar3 = (byte *)**(undefined4 **)(param_1[5] + 0x14);
        iVar1 = (*(undefined4 **)(param_1[5] + 0x14))[1];
      }
      iVar1 = iVar1 + -1;
      uVar2 = (uint)*pbVar3;
      pbVar3 = pbVar3 + 1;
      if (uVar2 == 0xff) {
        do {
          if (iVar1 == 0) {
            iVar1 = (**(code **)(*(int *)(param_1[5] + 0x14) + 0xc))(param_1[5]);
            if (iVar1 == 0) {
              return 0;
            }
            pbVar3 = (byte *)**(undefined4 **)(param_1[5] + 0x14);
            iVar1 = (*(undefined4 **)(param_1[5] + 0x14))[1];
          }
          iVar1 = iVar1 + -1;
          uVar2 = (uint)*pbVar3;
          pbVar3 = pbVar3 + 1;
        } while (uVar2 == 0xff);
        if (uVar2 != 0) {
          param_1[2] = uVar2;
          goto LAB_00457dad;
        }
        uVar2 = 0xff;
      }
    }
    else {
LAB_00457dad:
      if (param_4 <= param_3) break;
      if (*(int *)param_1[6] == 0) {
        (**(code **)(*(int *)param_1[5] + 4))((int *)param_1[5],0xffffffff);
        *(undefined4 *)param_1[6] = 1;
      }
      uVar2 = 0;
    }
    param_2 = param_2 << 8 | uVar2;
  }
  *param_1 = pbVar3;
  param_1[1] = iVar1;
  param_1[3] = param_2;
  param_1[4] = param_3;
  return 1;
}

