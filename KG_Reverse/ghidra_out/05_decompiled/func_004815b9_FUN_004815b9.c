// Function: FUN_004815b9
// Entry:    004815b9
// Size:     81 bytes
// Conv:     unknown
// Signature: undefined FUN_004815b9(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_004815b9(int param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = (undefined2 *)FUN_00485cb0(param_2);
  if (puVar1 == (undefined2 *)0x0) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else {
    iVar2 = FUN_00480fe0(puVar1[10] + 0x76c,puVar1[8] + 1,puVar1[6],puVar1[4],puVar1[2],*puVar1,
                         param_1);
    *(uint *)(param_1 + 8) = (uint)(iVar2 == 0);
  }
  return param_1;
}

