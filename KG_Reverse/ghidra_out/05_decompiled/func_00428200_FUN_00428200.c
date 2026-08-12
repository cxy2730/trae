// Function: FUN_00428200
// Entry:    00428200
// Size:     169 bytes
// Conv:     unknown
// Signature: undefined FUN_00428200(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00428200(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
LAB_00428214:
    do {
      iVar2 = *param_2;
      if (iVar2 <= param_2[2]) {
        do {
          uVar1 = FUN_00427a40(param_2[1],iVar2);
          if ((uVar1 & 0x80000) != 0) {
            param_2[1] = param_2[1] + -1;
            break;
          }
          uVar1 = FUN_00427a40(param_2[3],iVar2);
          if ((uVar1 & 0x200000) != 0) {
            param_2[3] = param_2[3] + 1;
            break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 <= param_2[2]);
        if (iVar2 <= param_2[2]) goto LAB_00428214;
      }
      iVar2 = param_2[1];
      if (param_2[3] < iVar2) {
        return;
      }
      do {
        uVar1 = FUN_00427a40(iVar2,*param_2);
        if ((uVar1 & 0x40000) != 0) {
          *param_2 = *param_2 + -1;
          break;
        }
        uVar1 = FUN_00427a40(iVar2,param_2[2]);
        if ((uVar1 & 0x100000) != 0) {
          param_2[2] = param_2[2] + 1;
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= param_2[3]);
    } while (iVar2 <= param_2[3]);
  }
  return;
}

