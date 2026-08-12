// Function: Catch@00498cd3
// Entry:    00498cd3
// Size:     17 bytes
// Conv:     unknown
// Signature: undefined Catch@00498cd3(void)
// Decompiled by Ghidra 12.1.2


void Catch_00498cd3(void)

{
  undefined4 *puVar1;
  int extraout_ECX;
  undefined1 auStack_10 [4];
  code *pcStack_c;
  int *piStack_8;
  
  piStack_8 = (int *)0x498cdb;
  FUN_00492f05();
  piStack_8 = (int *)0x0;
  pcStack_c = FUN_00498ce4;
  __CxxThrowException_8();
  if (extraout_ECX != 0) {
    pcStack_c = (code *)-(uint)(*(int *)(extraout_ECX + 0x2c) != 0);
    while (pcStack_c != (code *)0x0) {
      FUN_00492c2a(&pcStack_c,auStack_10,&piStack_8);
      puVar1 = (undefined4 *)(*(int *)(extraout_ECX + 0x40) + (int)piStack_8);
      *puVar1 = 0;
      if (*(int *)(extraout_ECX + 0x44) == 2) {
        puVar1[1] = 0;
      }
      if (piStack_8 != (int *)0x0) {
        (**(code **)(*piStack_8 + 4))(1);
      }
    }
    RemoveAll();
  }
  return;
}

