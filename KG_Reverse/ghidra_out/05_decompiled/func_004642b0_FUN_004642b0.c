// Function: FUN_004642b0
// Entry:    004642b0
// Size:     307 bytes
// Conv:     unknown
// Signature: undefined FUN_004642b0(void)
// Decompiled by Ghidra 12.1.2


int FUN_004642b0(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int *piVar7;
  
  iVar1 = param_1[1];
  if (*(int *)(*param_1 + 0x7c) != 0) {
    iVar6 = *(int *)(*param_1 + 0x78) + iVar1;
    if ((*(int *)(iVar6 + 0x18) != 0) && (*(int *)(iVar6 + 0x14) != 0)) {
      if (param_2 >> 0x10 == 0) {
        if ((param_2 & 0xffff) < *(uint *)(iVar6 + 0x10)) goto LAB_004643d1;
        uVar2 = (param_2 & 0xffff) - *(uint *)(iVar6 + 0x10);
      }
      else {
        if (param_1[0xc] == 0) {
          iVar4 = *(int *)(iVar6 + 0x24);
          piVar7 = (int *)(*(int *)(iVar6 + 0x20) + iVar1);
          piVar3 = _malloc(*(int *)(iVar6 + 0x18) * 8);
          param_1[0xc] = (int)piVar3;
          if (piVar3 == (int *)0x0) {
            SetLastError(0xe);
            return 0;
          }
          uVar2 = 0;
          puVar5 = (undefined2 *)(iVar4 + iVar1);
          if (*(int *)(iVar6 + 0x18) != 0) {
            do {
              iVar4 = *piVar7;
              piVar7 = piVar7 + 1;
              uVar2 = uVar2 + 1;
              *piVar3 = iVar4 + iVar1;
              *(undefined2 *)(piVar3 + 1) = *puVar5;
              piVar3 = piVar3 + 2;
              puVar5 = puVar5 + 1;
            } while (uVar2 < *(uint *)(iVar6 + 0x18));
          }
          FUN_00482572(param_1[0xc],*(undefined4 *)(iVar6 + 0x18),8,&LAB_004643f0);
        }
        iVar4 = FUN_00484c12(&param_2,param_1[0xc],*(undefined4 *)(iVar6 + 0x18),8,&LAB_004643f0);
        if (iVar4 == 0) goto LAB_004643d1;
        uVar2 = (uint)*(ushort *)(iVar4 + 4);
      }
      if (uVar2 <= *(uint *)(iVar6 + 0x14)) {
        return *(int *)(*(int *)(iVar6 + 0x1c) + uVar2 * 4 + iVar1) + iVar1;
      }
    }
  }
LAB_004643d1:
  SetLastError(0x7f);
  return 0;
}

