// Function: FUN_00411100
// Entry:    00411100
// Size:     448 bytes
// Conv:     unknown
// Signature: undefined FUN_00411100(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00411100(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  HWND pHVar5;
  int iVar6;
  int iVar7;
  HWND pHVar8;
  undefined4 local_c;
  int local_8;
  HWND local_4;
  
  local_8 = param_1;
  iVar2 = FUN_0040ec30(param_2,&local_c,0);
  if (iVar2 != 0) {
    iVar2 = FUN_0040e730(0,0);
    iVar3 = FUN_00406cf0(iVar2 + 0x18);
    iVar3 = iVar2 + 0x18 + iVar3;
    iVar2 = FUN_00406cf0(iVar3);
    iVar2 = *(int *)(iVar3 + iVar2);
    if (((iVar2 != 0) && (local_4 = *(HWND *)(iVar2 + 0x1c), local_4 != (HWND)0x0)) &&
       (BVar4 = IsWindow(local_4), BVar4 != 0)) {
      if (*(int *)(iVar2 + 0x1b8) == 0) {
        if (param_3 != 0) {
          FUN_00497580(5);
          return;
        }
      }
      else {
        *(undefined4 *)(iVar2 + 0x1b8) = 0;
        if (*(int *)(iVar2 + 0x1bc) == 1) {
          pHVar5 = GetParent(*(HWND *)(iVar2 + 0x1c));
          iVar3 = FUN_00494bb2(pHVar5);
          if (((iVar3 != 0) && (pHVar5 = *(HWND *)(iVar3 + 0x1c), pHVar5 != (HWND)0x0)) &&
             (BVar4 = IsWindow(pHVar5), BVar4 != 0)) {
            iVar3 = 0;
            do {
              iVar6 = FUN_0040ebf0(iVar3,&local_c);
              param_1 = local_8;
              if (iVar6 == 0) goto LAB_00411273;
              iVar6 = FUN_0040e730(0,0);
              iVar7 = FUN_00406cf0(iVar6 + 0x18);
              iVar7 = iVar6 + 0x18 + iVar7;
              iVar6 = FUN_00406cf0(iVar7);
              iVar6 = *(int *)(iVar7 + iVar6);
              if (iVar6 == 0) {
                pHVar8 = (HWND)0x0;
              }
              else {
                pHVar8 = *(HWND *)(iVar6 + 0x1c);
              }
              iVar3 = iVar3 + 1;
            } while (pHVar8 != pHVar5);
            param_1 = local_8;
            if (*(int *)(iVar6 + 0x1b0) == 1) {
              SetWindowPos(local_4,(HWND)0xffffffff,0,0,0,0,0x13);
              *(undefined4 *)(iVar2 + 0x1b0) = 1;
              param_1 = local_8;
            }
          }
        }
LAB_00411273:
        if (param_3 != 0) {
          FUN_004114b0(param_2,local_c,0);
        }
        if (*(int *)(iVar2 + 0x1bc) == 1) {
          uVar1 = *(undefined4 *)(param_1 + 0x1e0);
          *(undefined4 *)(param_1 + 0x1e0) = param_2;
          FUN_00412530(1);
          *(undefined4 *)(param_1 + 0x1e0) = uVar1;
        }
      }
    }
  }
  return;
}

