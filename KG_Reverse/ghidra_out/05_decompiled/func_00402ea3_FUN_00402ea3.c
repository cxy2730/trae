// Function: FUN_00402ea3
// Entry:    00402ea3
// Size:     3882 bytes
// Conv:     unknown
// Signature: undefined FUN_00402ea3(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x00403c47) */
/* WARNING: Removing unreachable block (ram,0x00403b0d) */
/* WARNING: Removing unreachable block (ram,0x00403a65) */
/* WARNING: Removing unreachable block (ram,0x00403893) */
/* WARNING: Removing unreachable block (ram,0x004037fd) */
/* WARNING: Removing unreachable block (ram,0x0040393b) */
/* WARNING: Removing unreachable block (ram,0x004039d3) */
/* WARNING: Removing unreachable block (ram,0x00403b9f) */
/* WARNING: Removing unreachable block (ram,0x00403cbc) */

void FUN_00402ea3(void)

{
  bool bVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)thunk_FUN_0041b6c0(0x2c);
  piVar2 = local_8;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  local_c = (int *)FUN_00401383(DAT_02fdc0f8,"/TerSafe.dll");
  piVar2 = local_c;
  if (local_c == (int *)0x0) {
    piVar2 = (int *)&DAT_004a5d3c;
  }
  iVar5 = thunk_FUN_0041b210(1,piVar2,0,0x80000004);
  if (local_c != (int *)0x0) {
    thunk_FUN_0041b7c0(local_c);
  }
  if (iVar5 == 1) {
    local_c = (int *)FUN_00401383(DAT_02fdc0f8,"\\LY.ini");
    piVar2 = local_c;
    if (local_c == (int *)0x0) {
      piVar2 = (int *)&DAT_004a5d3c;
    }
    thunk_FUN_0041b210(4,piVar2,0,0x80000004,&DAT_004a604b,0,0x80000004,&DAT_004a6048,0,0x80000004,
                       &DAT_004a6043,0,0x80000004);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0(local_c);
    }
    local_c = (int *)FUN_00401383(DAT_02fdc0f8,"\\LY.ini");
    puVar3 = (undefined *)thunk_FUN_0041b210(0);
    puVar4 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar4 = &DAT_004a5d3c;
    }
    piVar2 = local_c;
    if (local_c == (int *)0x0) {
      piVar2 = (int *)&DAT_004a5d3c;
    }
    thunk_FUN_0041b210(4,piVar2,0,0x80000004,&DAT_004a604b,0,0x80000004,&DAT_004a604e,0,0x80000004,
                       puVar4,0,0x80000004);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0(local_c);
    }
    if (puVar3 != (undefined *)0x0) {
      thunk_FUN_0041b7c0(puVar3);
    }
    local_c = (int *)FUN_00401383(DAT_02fdc0f8,"\\LY.ini");
    puVar3 = (undefined *)thunk_FUN_0041b210(0);
    puVar4 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar4 = &DAT_004a5d3c;
    }
    piVar2 = local_c;
    if (local_c == (int *)0x0) {
      piVar2 = (int *)&DAT_004a5d3c;
    }
    thunk_FUN_0041b210(4,piVar2,0,0x80000004,"Paths",0,0x80000004,"BaseDir",0,0x80000004,puVar4,0,
                       0x80000004);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0(local_c);
    }
    if (puVar3 != (undefined *)0x0) {
      thunk_FUN_0041b7c0(puVar3);
    }
    local_c = (int *)FUN_00401383(DAT_02fdc0f8,"/version.dll");
    piVar2 = local_c;
    if (local_c == (int *)0x0) {
      piVar2 = (int *)&DAT_004a5d3c;
    }
    thunk_FUN_0041b210(1,piVar2,0,0x80000004);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0(local_c);
    }
    local_c = (int *)FUN_00401383(DAT_02fdc0f8,"/version.dll");
    piVar2 = local_c;
    if (local_c == (int *)0x0) {
      piVar2 = (int *)&DAT_004a5d3c;
    }
    thunk_FUN_0041b210(2,piVar2,0,0x80000004,&DAT_004a6064,0,0x80000005);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0(local_c);
    }
    local_c = (int *)FUN_00401b4e();
    iVar5 = FUN_00402616(&local_c);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0(local_c);
    }
    puVar4 = (undefined *)
             FUN_00401383(iVar5,"\\Program Files\\AntiCheatExpert\\SGuard\\x64\\netbios.dll");
    if (iVar5 != 0) {
      thunk_FUN_0041b7c0(iVar5);
    }
    puVar3 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar3 = &DAT_004a5d3c;
    }
    thunk_FUN_0041b210(1,puVar3,0,0x80000004);
    if (puVar4 != (undefined *)0x0) {
      thunk_FUN_0041b7c0(puVar4);
    }
    local_c = (int *)FUN_00401b4e();
    iVar5 = FUN_00402616(&local_c);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0(local_c);
    }
    puVar4 = (undefined *)
             FUN_00401383(iVar5,"\\Program Files\\AntiCheatExpert\\SGuard\\x64\\Plugins\\sg.dll");
    if (iVar5 != 0) {
      thunk_FUN_0041b7c0(iVar5);
    }
    puVar3 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar3 = &DAT_004a5d3c;
    }
    thunk_FUN_0041b210(1,puVar3,0,0x80000004);
    if (puVar4 != (undefined *)0x0) {
      thunk_FUN_0041b7c0(puVar4);
    }
    local_c = (int *)FUN_00401383(DAT_02fdc100,"netbios.dll");
    piVar2 = local_c;
    if (local_c == (int *)0x0) {
      piVar2 = (int *)&DAT_004a5d3c;
    }
    thunk_FUN_0041b210(1,piVar2,0,0x80000004);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0(local_c);
    }
    local_c = (int *)FUN_00401383(DAT_02fdc100,"netbios.dll");
    piVar2 = local_c;
    if (local_c == (int *)0x0) {
      piVar2 = (int *)&DAT_004a5d3c;
    }
    thunk_FUN_0041b210(1,piVar2,0,0x80000004);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0(local_c);
    }
    local_c = (int *)FUN_00401383(DAT_02fdc100,"Plugins\\sg.dll");
    piVar2 = local_c;
    if (local_c == (int *)0x0) {
      piVar2 = (int *)&DAT_004a5d3c;
    }
    thunk_FUN_0041b210(1,piVar2,0,0x80000004);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0(local_c);
    }
    local_c = (int *)FUN_00402616(&DAT_02fdc0f8);
    puVar4 = (undefined *)FUN_00401383(local_c,"LeagueClient\\netbios.dll");
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0(local_c);
    }
    puVar3 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar3 = &DAT_004a5d3c;
    }
    thunk_FUN_0041b210(1,puVar3,0,0x80000004);
    if (puVar4 != (undefined *)0x0) {
      thunk_FUN_0041b7c0(puVar4);
    }
    local_c = (int *)FUN_00401383(DAT_02fdc0f8,"\\AntiCheatExpert\\SGuard\\x64\\Plugins\\sg.dll");
    piVar2 = local_c;
    if (local_c == (int *)0x0) {
      piVar2 = (int *)&DAT_004a5d3c;
    }
    thunk_FUN_0041b210(1,piVar2,0,0x80000004);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0(local_c);
    }
    local_c = (int *)FUN_00401b4e();
    iVar5 = FUN_00402616(&local_c);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0(local_c);
    }
    puVar4 = (undefined *)
             FUN_00401383(iVar5,"\\Program Files\\AntiCheatExpert\\SGuard\\x64\\netbios.dll");
    if (iVar5 != 0) {
      thunk_FUN_0041b7c0(iVar5);
    }
    puVar3 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar3 = &DAT_004a5d3c;
    }
    thunk_FUN_0041b210(1,puVar3,0,0x80000004);
    if (puVar4 != (undefined *)0x0) {
      thunk_FUN_0041b7c0(puVar4);
    }
    local_c = (int *)FUN_00401b4e();
    iVar5 = FUN_00402616(&local_c);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0(local_c);
    }
    puVar4 = (undefined *)
             FUN_00401383(iVar5,"\\Program Files\\AntiCheatExpert\\SGuard\\x64\\netbios.dll");
    if (iVar5 != 0) {
      thunk_FUN_0041b7c0(iVar5);
    }
    puVar3 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar3 = &DAT_004a5d3c;
    }
    thunk_FUN_0041b210(2,puVar3,0,0x80000004,&DAT_01204b04,0,0x80000005);
    if (puVar4 != (undefined *)0x0) {
      thunk_FUN_0041b7c0(puVar4);
    }
    thunk_FUN_0041b210(2,"C:\\Windows\\DJ.dat",0,0x80000004,&DAT_020b330c,0,0x80000005);
    thunk_FUN_0041b210(2,"C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\ACE-SSC64.dll",0,
                       0x80000004,&DAT_020b3317,0,0x80000005);
    thunk_FUN_0041b210(2,"C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\ACE-SSC-DRV64.sys",0,
                       0x80000004,&DAT_0288def7,0,0x80000005);
    thunk_FUN_0041b210(2,"C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\123.dll",0,0x80000004,
                       &DAT_02a6c7af,0,0x80000005);
    thunk_FUN_0041b210(2,"C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\sguard.dat",0,0x80000004,
                       &DAT_02ee81b7,0,0x80000005);
    thunk_FUN_0041b1d0(2,"C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\Plugins\\ACE-SSC64.dll",0
                       ,0x80000004,local_8,0,0x50005);
    iVar5 = thunk_FUN_0041b210(1,
                               "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\Plugins\\ACE-SSC64.dll"
                               ,0,0x80000004);
    if ((iVar5 == 0) || (iVar5 = FUN_00401100(*local_8,"0.1.2607.606"), iVar5 != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_004013df();
      thunk_FUN_0041b210(4,&DAT_02ee83de,0,0x80000004,0,0,0x80000301);
      thunk_FUN_0041b6a0(0);
    }
    iVar5 = thunk_FUN_0041b210(2,"C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\netbios.dll",0,
                               0x80000004,&DAT_01204b04,0,0x80000005);
    if (iVar5 == 0) {
      FUN_004013df();
      thunk_FUN_0041b210(4,&DAT_02ee841b,0,0x80000004,0,0,0x80000301);
      thunk_FUN_0041b6a0(0);
    }
  }
  FUN_004013df();
  thunk_FUN_0041b1d0(3,&LAB_00403eb7,0,0x80000006);
  local_c = (int *)0xffffffff;
  iVar5 = thunk_FUN_0041b570(0x52010003,0x1601022b,0x10);
  if (iVar5 == 1) {
    local_c = (int *)0x4a5e6e;
    FUN_00401383(DAT_02fdc0f8);
    local_c = (int *)0x80000004;
    thunk_FUN_0041b210(4,0x80000004,0,0x80000004,&DAT_004a604b,0,0x80000004,&DAT_02ee844e,0,
                       0x80000004,&PTR_DAT_02ee844a,0);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0();
    }
    local_c = (int *)0x4a5e6e;
    FUN_00401383(DAT_02fdc0f8);
    local_c = (int *)0xffffffff;
    thunk_FUN_0041b570(0x52010003,0x160101d9,0x26);
    local_c = (int *)0x80000004;
    piVar2 = (int *)0x0;
    thunk_FUN_0041b210(4,0x80000004,0,0x80000004,&DAT_004a604b,0,0x80000004,&DAT_02ee8453,0,
                       0x80000004,&DAT_004a5d3c);
    if (local_c != (int *)0x0) {
      piVar2 = (int *)0x4038b8;
      thunk_FUN_0041b7c0();
    }
    if (piVar2 != (int *)0x0) {
      local_c = piVar2;
      thunk_FUN_0041b7c0();
    }
  }
  local_c = (int *)0xffffffff;
  iVar5 = thunk_FUN_0041b570(0x52010003,0x1601022c,0x10);
  if (iVar5 == 1) {
    local_c = (int *)0x4a5e6e;
    FUN_00401383(DAT_02fdc0f8);
    local_c = (int *)0x80000004;
    thunk_FUN_0041b210(4,0x80000004,0,0x80000004,&DAT_004a604b,0,0x80000004,&DAT_02ee844e,0,
                       0x80000004,&PTR_DAT_02ee845b,0);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0();
    }
  }
  local_c = (int *)0xffffffff;
  iVar5 = thunk_FUN_0041b570(0x52010003,0x1601022e,0x10);
  if (iVar5 == 1) {
    local_c = (int *)0x4a5e6e;
    FUN_00401383(DAT_02fdc0f8);
    local_c = (int *)0x80000004;
    thunk_FUN_0041b210(4,0x80000004,0,0x80000004,&DAT_004a604b,0,0x80000004,&DAT_02ee844e,0,
                       0x80000004,&DAT_02ee845f,0);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0();
    }
    local_c = (int *)0x4a5e6e;
    FUN_00401383(DAT_02fdc0f8);
    local_c = (int *)0x0;
    thunk_FUN_0041b210();
    local_c = (int *)0x80000004;
    piVar2 = (int *)0x0;
    thunk_FUN_0041b210(4,0x80000004,0,0x80000004,&DAT_004a604b,0,0x80000004,&DAT_02ee8462,0,
                       0x80000004,&DAT_004a5d3c);
    if (local_c != (int *)0x0) {
      piVar2 = (int *)0x403a8a;
      thunk_FUN_0041b7c0();
    }
    if (piVar2 != (int *)0x0) {
      local_c = piVar2;
      thunk_FUN_0041b7c0();
    }
  }
  local_c = (int *)0xffffffff;
  iVar5 = thunk_FUN_0041b570(0x52010003,0x1601022d,0x10);
  if (iVar5 == 1) {
    local_c = (int *)0x4a5e6e;
    FUN_00401383(DAT_02fdc0f8);
    local_c = (int *)0x80000004;
    thunk_FUN_0041b210(4,0x80000004,0,0x80000004,&DAT_004a604b,0,0x80000004,&DAT_02ee844e,0,
                       0x80000004,&DAT_02ee8469,0);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0();
    }
    local_c = (int *)0x4a5e6e;
    FUN_00401383(DAT_02fdc0f8);
    local_c = (int *)0x0;
    thunk_FUN_0041b210();
    local_c = (int *)0x80000004;
    piVar2 = (int *)0x0;
    thunk_FUN_0041b210(4,0x80000004,0,0x80000004,&DAT_004a604b,0,0x80000004,&DAT_02ee846c,0,
                       0x80000004,&DAT_004a5d3c);
    if (local_c != (int *)0x0) {
      piVar2 = (int *)0x403bc4;
      thunk_FUN_0041b7c0();
    }
    if (piVar2 != (int *)0x0) {
      local_c = piVar2;
      thunk_FUN_0041b7c0();
    }
  }
  local_c = (int *)0xffffffff;
  iVar5 = thunk_FUN_0041b570(0x52010003,0x16010231,0x10);
  if (iVar5 == 1) {
    local_c = (int *)0x4a5e6e;
    FUN_00401383(DAT_02fdc0f8);
    local_c = (int *)0x80000004;
    thunk_FUN_0041b210(4,0x80000004,0,0x80000004,&DAT_004a604b,0,0x80000004,&DAT_02ee8476,0,
                       0x80000004,&DAT_02ee8473,0);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0();
    }
    local_c = (int *)0x4a5e6e;
    FUN_00401383(DAT_02fdc0f8);
    local_c = (int *)0x80000004;
    thunk_FUN_0041b210(4,0x80000004,0,0x80000004,&DAT_004a604b,0,0x80000004,&DAT_02ee8476,0,
                       0x80000004,&DAT_02ee847d,0);
    if (local_c != (int *)0x0) {
      thunk_FUN_0041b7c0();
    }
  }
  local_c = local_8;
  piVar2 = local_8;
  if (*local_8 != 0) {
    thunk_FUN_0041b7c0(*local_8);
  }
  piVar2 = piVar2 + 1;
  if (*piVar2 != 0) {
    thunk_FUN_0041b7c0(*piVar2);
  }
  piVar2 = piVar2 + 1;
  if (*piVar2 != 0) {
    thunk_FUN_0041b7c0(*piVar2);
  }
  piVar2 = piVar2 + 1;
  if (*piVar2 != 0) {
    thunk_FUN_0041b7c0(*piVar2);
  }
  piVar2 = piVar2 + 1;
  if (*piVar2 != 0) {
    thunk_FUN_0041b7c0(*piVar2);
  }
  piVar2 = piVar2 + 1;
  if (*piVar2 != 0) {
    thunk_FUN_0041b7c0(*piVar2);
  }
  piVar2 = piVar2 + 1;
  if (*piVar2 != 0) {
    thunk_FUN_0041b7c0(*piVar2);
  }
  piVar2 = piVar2 + 1;
  if (*piVar2 != 0) {
    thunk_FUN_0041b7c0(*piVar2);
  }
  piVar2 = piVar2 + 1;
  if (*piVar2 != 0) {
    thunk_FUN_0041b7c0(*piVar2);
  }
  piVar2 = piVar2 + 1;
  if (*piVar2 != 0) {
    thunk_FUN_0041b7c0(*piVar2);
  }
  iVar5 = piVar2[1];
  if (iVar5 != 0) {
    thunk_FUN_0041b7c0(iVar5,piVar2 + 1);
  }
  thunk_FUN_0041b7c0();
  return;
}

