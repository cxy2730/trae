// Function: FUN_00497bac
// Entry:    00497bac
// Size:     271 bytes
// Conv:     unknown
// Signature: undefined FUN_00497bac(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00497bac(int *param_1,uint param_2,uint param_3,int param_4,undefined4 param_5)

{
  void *_Buf1;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  AFX_MSGMAP_ENTRY *pAVar4;
  uint uVar5;
  int *piVar6;
  
  if (param_3 == 0xfffffffe) {
    iVar1 = FUN_0049c724();
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x1038) + 4))(param_1,param_2,param_4,param_5);
    return iVar1;
  }
  if (param_3 == 0xfffffffd) {
    param_3 = 0;
    _Buf1 = *(void **)(param_4 + 0x30);
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x2c))();
    do {
      if (puVar2 == (undefined4 *)0x0) {
        return param_3;
      }
      if (param_3 != 0) {
        return param_3;
      }
      piVar6 = (int *)puVar2[1];
      while (((piVar6[1] != 0 && (piVar6[2] != 0)) && (param_3 == 0))) {
        if (param_2 == piVar6[1]) {
          if (_Buf1 == (void *)0x0) {
            iVar1 = *piVar6;
          }
          else {
            if ((void *)*piVar6 == (void *)0x0) goto LAB_00497c4f;
            iVar1 = _memcmp(_Buf1,(void *)*piVar6,0x10);
          }
          if (iVar1 == 0) {
            param_3 = 1;
            *(int *)(param_4 + 4) = piVar6[2];
          }
        }
LAB_00497c4f:
        piVar6 = piVar6 + 3;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while( true );
  }
  if (param_3 != 0xffffffff) {
    uVar3 = param_3 & 0xffff;
    uVar5 = param_3 >> 0x10;
    param_3 = uVar3;
    if (uVar5 != 0) goto LAB_00497c74;
  }
  uVar5 = 0x111;
LAB_00497c74:
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    pAVar4 = AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)puVar2[1],uVar5,param_3,param_2);
    if (pAVar4 != (AFX_MSGMAP_ENTRY *)0x0) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  iVar1 = FUN_00497aa5(param_1,param_2,param_3,*(undefined4 *)(pAVar4 + 0x14),param_4,
                       *(undefined4 *)(pAVar4 + 0x10),param_5);
  return iVar1;
}

