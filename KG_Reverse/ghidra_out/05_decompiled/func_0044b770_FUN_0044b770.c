// Function: FUN_0044b770
// Entry:    0044b770
// Size:     840 bytes
// Conv:     unknown
// Signature: undefined FUN_0044b770(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044b770(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  FUN_0044bf60(param_1);
  if (*(char *)(param_1 + 0x154) == '\0') {
    iVar5 = *(int *)(param_1 + 0x100);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x104);
    *(int *)(param_1 + 0x114) = iVar5;
  }
  else {
    if ((*(byte *)(param_1 + 0x7c) & 2) == 0) {
      uVar2 = (*(int *)(param_1 + 0x104) + 7U) / 8;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x104);
    }
    iVar5 = *(int *)(param_1 + 0x100);
    *(uint *)(param_1 + 0x108) = uVar2;
    *(uint *)(param_1 + 0x114) =
         ((iVar5 - (uint)*(byte *)((int)&PTR_DAT_02f98638 + (uint)*(byte *)(param_1 + 0x155))) + -1
         + (uint)(byte)(&DAT_02f98640)[*(byte *)(param_1 + 0x155)]) /
         (uint)(byte)(&DAT_02f98640)[*(byte *)(param_1 + 0x155)];
  }
  uVar2 = *(uint *)(param_1 + 0x7c);
  uVar3 = (uint)*(byte *)(param_1 + 0x15a);
  if (((uVar2 & 4) != 0) && (*(byte *)(param_1 + 0x158) < 8)) {
    uVar3 = 8;
  }
  if ((uVar2 & 0x1000) != 0) {
    cVar1 = *(char *)(param_1 + 0x157);
    if (cVar1 == '\x03') {
      uVar3 = (-(uint)(*(short *)(param_1 + 0x150) != 0) & 8) + 0x18;
    }
    else if (cVar1 == '\0') {
      if (uVar3 < 8) {
        uVar3 = 8;
      }
      if (*(short *)(param_1 + 0x150) != 0) {
        uVar3 = uVar3 * 2;
      }
    }
    else if ((cVar1 == '\x02') && (*(short *)(param_1 + 0x150) != 0)) {
      uVar3 = (uVar3 * 4) / 3;
    }
  }
  if ((uVar2 & 0x200) != 0) {
    if ((uVar2 & 0x1000) == 0) {
      *(uint *)(param_1 + 0x7c) = uVar2 & 0xfffffdff;
    }
    else if (*(byte *)(param_1 + 0x158) < 0x10) {
      uVar3 = uVar3 * 2;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x7c);
  if ((uVar2 & 0x8000) != 0) {
    cVar1 = *(char *)(param_1 + 0x157);
    if (cVar1 == '\0') {
      uVar3 = ((8 < uVar3) - 1 & 0xfffffff0) + 0x20;
    }
    else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      uVar3 = ((0x20 < uVar3) - 1 & 0xffffffe0) + 0x40;
    }
  }
  if ((uVar2 & 0x4000) != 0) {
    if ((((*(short *)(param_1 + 0x150) == 0) || ((uVar2 & 0x1000) == 0)) && ((uVar2 & 0x8000) == 0))
       && (cVar1 = *(char *)(param_1 + 0x157), cVar1 != '\x04')) {
      if ((int)uVar3 < 9) {
        uVar3 = (-(uint)(cVar1 != '\x06') & 0xfffffff8) + 0x20;
      }
      else {
        uVar3 = (-(uint)(cVar1 != '\x06') & 0xfffffff0) + 0x40;
      }
    }
    else {
      uVar3 = ((0x10 < (int)uVar3) - 1 & 0xffffffe0) + 0x40;
    }
  }
  if (((uVar2 & 0x100000) != 0) &&
     (uVar2 = (uint)*(byte *)(param_1 + 0x71) * (uint)*(byte *)(param_1 + 0x70),
     uVar2 - uVar3 != 0 && (int)uVar3 <= (int)uVar2)) {
    uVar3 = uVar2;
  }
  *(char *)(param_1 + 0x15e) = (char)uVar3;
  uVar2 = iVar5 + 7U & 0xfffffff8;
  *(undefined1 *)(param_1 + 0x15f) = 0;
  if ((int)uVar3 < 8) {
    uVar2 = uVar2 * uVar3 + 7 >> 3;
  }
  else {
    uVar2 = (uVar3 >> 3) * uVar2;
  }
  uVar2 = ((int)(uVar3 + 7) >> 3) + uVar2 + 0x31;
  if (*(uint *)(param_1 + 0x2b4) < uVar2) {
    FUN_00446d20(param_1,*(undefined4 *)(param_1 + 0x27c));
    FUN_00446d20(param_1,*(undefined4 *)(param_1 + 0x2c8));
    if (*(char *)(param_1 + 0x154) == '\0') {
      uVar4 = FUN_00446cb0(param_1,uVar2);
    }
    else {
      uVar4 = FUN_00446b10();
    }
    *(undefined4 *)(param_1 + 0x27c) = uVar4;
    iVar5 = FUN_00446cb0(param_1,uVar2);
    uVar3 = *(int *)(param_1 + 0x27c) + 0x20;
    *(int *)(param_1 + 0x2c8) = iVar5;
    *(uint *)(param_1 + 0x2b4) = uVar2;
    *(uint *)(param_1 + 0x124) = (uVar3 - (uVar3 & 0xf)) + -1;
    *(uint *)(param_1 + 0x120) = ((iVar5 + 0x20U) - (iVar5 + 0x20U & 0xf)) + -1;
  }
  if (*(int *)(param_1 + 0x110) == -1) {
    FUN_004463d0(param_1,s_Row_has_too_many_bytes_to_alloca_02fb2ab0);
  }
  uVar3 = *(int *)(param_1 + 0x110) + 1;
  puVar6 = *(undefined4 **)(param_1 + 0x120);
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  iVar5 = *(int *)(param_1 + 0x2b8);
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 700) = 0;
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    FUN_00446d20(param_1,iVar5);
  }
  iVar5 = FUN_00448940(param_1,0x49444154);
  if (iVar5 != 0) {
    FUN_004463d0(param_1,*(undefined4 *)(param_1 + 0x9c));
  }
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x40;
  return;
}

