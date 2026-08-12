// Function: FUN_00493043
// Entry:    00493043
// Size:     130 bytes
// Conv:     unknown
// Signature: undefined FUN_00493043(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00493043(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    *param_1 = PTR_DAT_02fd8088;
  }
  else {
    uVar2 = 0x40;
    if ((((param_2 < 0x41) || (uVar2 = 0x80, param_2 < 0x81)) || (uVar2 = 0x100, param_2 < 0x101))
       || (uVar2 = 0x200, param_2 < 0x201)) {
      puVar1 = (undefined4 *)FUN_00481d46();
      puVar1[2] = uVar2;
    }
    else {
      puVar1 = (undefined4 *)FUN_00492f17(param_2 + 0xd);
      puVar1[2] = param_2;
    }
    *puVar1 = 1;
    *(undefined1 *)((int)puVar1 + param_2 + 0xc) = 0;
    puVar1[1] = param_2;
    *param_1 = puVar1 + 3;
  }
  return;
}

