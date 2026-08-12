// Function: FUN_0046c7c0
// Entry:    0046c7c0
// Size:     844 bytes
// Conv:     unknown
// Signature: undefined FUN_0046c7c0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046c7c0(int *param_1)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  WPARAM wParam;
  undefined4 *puVar4;
  longlong lVar5;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [8];
  uint local_4;
  
  local_4 = 0;
  FUN_0046bb40();
  (**(code **)(*(int *)param_1[0xb] + 0xc))();
  iVar2 = (**(code **)(*param_1 + 0x30))();
  if (iVar2 != 0x1c) {
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x18))();
      return;
    }
    iStack_24 = 0;
    iVar2 = FUN_0046c630(auStack_c,auStack_10,&iStack_24,auStack_14,auStack_18);
    if (iVar2 != 0x1c) {
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x18))();
        return;
      }
      iVar2 = (**(code **)(*param_1 + 0x24))();
      if (iVar2 != 0x1c) {
        if (iVar2 != 0) {
LAB_0046c85a:
          (**(code **)(*param_1 + 0x18))();
          return;
        }
        param_1[0x22] = 0;
        if (param_1[10] != 0) {
          FUN_0046cce0(param_1[10]);
          param_1[10] = 0;
        }
        if (*(char *)((int)param_1 + 0x1d) == '\0') {
          do {
            if ((((HWND)param_1[0x2b] != (HWND)0x0) &&
                (BVar3 = IsWindow((HWND)param_1[0x2b]), BVar3 != 0)) &&
               (wParam = __ftol(), wParam != param_1[0x2c])) {
              PostMessageA((HWND)param_1[0x2b],0x8075,wParam,0);
              param_1[0x2c] = wParam;
            }
            if (*(char *)((int)param_1 + 0x1d) != '\0') {
              return;
            }
            do {
              if (((char)param_1[7] != '\0') &&
                 (FUN_0046bb40(), *(char *)((int)param_1 + 0x1d) != '\0')) {
                return;
              }
              iVar2 = (**(code **)(*(int *)param_1[5] + 4))(&uStack_20,param_1[0xd]);
              lVar5 = (ulonglong)local_4 << 0x20;
              if (iVar2 == 0x1c) break;
              if (iVar2 == 7) {
                cVar1 = (**(code **)(*param_1 + 0x1c))();
joined_r0x0046c9c3:
                lVar5 = (ulonglong)local_4 << 0x20;
                if (cVar1 != '\0') break;
              }
              else {
                if (iVar2 != 0) goto LAB_0046c85a;
                iVar2 = FUN_0046cb10(&uStack_1c,0x5a1,1);
                if (iVar2 == 0x1c) {
                  (**(code **)(*(int *)param_1[5] + 8))(0);
                  lVar5 = (ulonglong)local_4 << 0x20;
                  break;
                }
                if (iVar2 == 0x21) {
                  (**(code **)(*(int *)param_1[5] + 8))(0);
LAB_0046cabe:
                  puVar4 = (undefined4 *)FUN_00492f17(8);
                  if (puVar4 != (undefined4 *)0x0) {
                    *puVar4 = &PTR_FUN_02f99ee0;
                    puVar4[1] = 3;
                    (**(code **)(*(int *)param_1[5] + 0x1c))(puVar4);
                    return;
                  }
                  (**(code **)(*(int *)param_1[5] + 0x1c))(0);
                  return;
                }
                if (iVar2 == 0x18) {
                  (**(code **)(*(int *)param_1[5] + 8))(0);
                  cVar1 = (**(code **)(*param_1 + 0x1c))();
                  goto joined_r0x0046c9c3;
                }
                if (iVar2 != 0) goto LAB_0046c85a;
                lVar5 = (*(code *)param_1[0x27])(uStack_1c,uStack_20);
                local_4 = (uint)((ulonglong)lVar5 >> 0x20);
                if ((int)lVar5 != 0) break;
                FUN_0046cca0(0);
                (**(code **)(*(int *)param_1[5] + 8))(0);
                iVar2 = FUN_0046c040();
                lVar5 = (ulonglong)local_4 << 0x20;
                if (iVar2 == 0x1c) break;
                if (iVar2 == 0x21) goto LAB_0046cabe;
                if (iVar2 != 0) goto LAB_0046c85a;
                (*(code *)param_1[0x25])(param_1 + 0x12,param_1[0xe],0,0,0,24000);
              }
              lVar5 = (ulonglong)local_4 << 0x20;
            } while (*(char *)((int)param_1 + 0x1d) == '\0');
            local_4 = (uint)((ulonglong)lVar5 >> 0x20);
            if (*(char *)((int)param_1 + 0x1d) != '\0') {
              return;
            }
            if (iVar2 == 0x1c) {
              return;
            }
            FUN_0046cca0((int)lVar5);
            (**(code **)(*(int *)param_1[0xb] + 0xc))();
            if ((int *)param_1[5] != (int *)0x0) {
              iVar2 = (**(code **)(*(int *)param_1[5] + 8))(local_4);
              if (iVar2 == 0x1c) {
                return;
              }
              if (iVar2 != 0) {
                (**(code **)(*param_1 + 0x18))();
                return;
              }
            }
            param_1[0x22] = param_1[0x22] + 1;
            if (*(char *)((int)param_1 + 0x1d) != '\0') {
              return;
            }
          } while( true );
        }
      }
    }
  }
  return;
}

