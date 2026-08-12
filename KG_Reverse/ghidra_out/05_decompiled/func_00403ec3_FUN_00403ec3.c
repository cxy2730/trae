// Function: FUN_00403ec3
// Entry:    00403ec3
// Size:     1560 bytes
// Conv:     unknown
// Signature: undefined FUN_00403ec3(void)
// Decompiled by Ghidra 12.1.2


void FUN_00403ec3(void)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  char **local_20;
  char *pcStack_1c;
  int *local_18;
  undefined *local_14;
  char *local_10;
  undefined *local_c;
  int local_8;
  
  local_8 = 0;
  thunk_FUN_0041b1d0(1,2000,0,0x80000301);
  local_c = (undefined *)0x0;
  local_10 = (char *)0x0;
  FUN_004044db(0,0,&local_c,0);
  if (local_c != (undefined *)0x0) {
    thunk_FUN_0041b7c0(local_c);
  }
  local_c = (undefined *)0x0;
  local_10 = "LeagueClient.exe";
  local_14 = (undefined *)FUN_004047cc(&local_10,0,0);
  if (local_10 != (char *)0x0) {
    thunk_FUN_0041b7c0(local_10);
  }
  local_8 = (int)local_14;
  if (local_14 == (undefined *)0x1) {
    thunk_FUN_0041b210(4,&DAT_02ee84b9,0,0x80000004,2,0,0x80000301,&DAT_02ee84b0,0,0x80000004,0,0,0)
    ;
    thunk_FUN_0041b6a0(0);
  }
  local_c = (undefined *)FUN_00401b4e();
  local_10 = (char *)FUN_00402616(&local_c);
  if (local_c != (undefined *)0x0) {
    thunk_FUN_0041b7c0(local_c);
  }
  local_14 = (undefined *)FUN_00401383(local_10,"\\Program Files\\AntiCheatExpert\\SGuard\\x64\\");
  if (local_10 != (char *)0x0) {
    thunk_FUN_0041b7c0(local_10);
  }
  local_18 = (int *)FUN_00404c8d(&local_14);
  if (local_14 != (undefined *)0x0) {
    thunk_FUN_0041b7c0(local_14);
  }
  if (local_18 == (int *)0x0) {
    local_20 = (char **)0x2ee850a;
    iVar2 = FUN_00404c8d(&local_20);
    if (local_20 != (char **)0x0) {
      thunk_FUN_0041b7c0(local_20);
    }
    if (iVar2 == 0) {
      bVar1 = true;
      goto LAB_00404056;
    }
  }
  bVar1 = false;
LAB_00404056:
  if (bVar1) {
    thunk_FUN_0041b210(4,&DAT_02ee8537,0,0x80000004,2,0,0x80000301,&DAT_02ee84b0,0,0x80000004,0,0,0)
    ;
    thunk_FUN_0041b6a0(0);
  }
  puVar3 = (undefined *)thunk_FUN_0041b1d0(2,&DAT_02ee855c,0,0x80000004,0,0,0);
  local_c = puVar3;
  if (DAT_02fdc0f8 != (undefined *)0x0) {
    thunk_FUN_0041b7c0(DAT_02fdc0f8);
  }
  DAT_02fdc0f8 = puVar3;
  local_c = (undefined *)FUN_00401383(DAT_02fdc0f8,"/TerSafe.dll");
  puVar3 = local_c;
  if (local_c == (undefined *)0x0) {
    puVar3 = &DAT_004a5d3c;
  }
  local_10 = (char *)thunk_FUN_0041b210(1,puVar3,0,0x80000004);
  if (local_c != (undefined *)0x0) {
    thunk_FUN_0041b7c0(local_c);
  }
  if (local_10 != (char *)0x1) {
    FUN_004013df();
    thunk_FUN_0041b210(4,&DAT_02ee8577,0,0x80000004,0,0,0x80000301);
    local_18 = (int *)0x0;
    pcStack_1c = (char *)0x40418b;
    thunk_FUN_0041b6a0();
    local_c = (undefined *)0x0;
    local_18 = (int *)0x0;
    pcStack_1c = (char *)0x0;
    local_10 = "LeagueClient.exe";
    local_20 = &local_10;
    local_14 = (undefined *)FUN_004047cc();
    if (local_10 != (char *)0x0) {
      local_18 = (int *)local_10;
      pcStack_1c = (char *)0x4041bb;
      thunk_FUN_0041b7c0();
    }
    if (local_14 == (undefined *)0x0) {
      local_18 = (int *)0x4041cd;
      local_c = (undefined *)FUN_00401b4e();
      local_18 = (int *)&local_c;
      pcStack_1c = (char *)0x4041d9;
      local_10 = (char *)FUN_00402616();
      if (local_c != (undefined *)0x0) {
        local_18 = (int *)local_c;
        pcStack_1c = (char *)0x4041e9;
        thunk_FUN_0041b7c0();
      }
      local_18 = (int *)0x2ee858e;
      pcStack_1c = local_10;
      local_20 = (char **)0x4041fe;
      local_14 = (undefined *)FUN_00401383();
      if (local_10 != (char *)0x0) {
        local_18 = (int *)local_10;
        pcStack_1c = (char *)0x404211;
        thunk_FUN_0041b7c0();
      }
      local_18 = (int *)0x80000005;
      pcStack_1c = (char *)0x0;
      local_20 = (char **)&DAT_020b3317;
      puVar3 = local_14;
      if (local_14 == (undefined *)0x0) {
        puVar3 = &DAT_004a5d3c;
      }
      thunk_FUN_0041b210(2,puVar3,0,0x80000004);
      if (local_14 != (undefined *)0x0) {
        local_18 = (int *)local_14;
        pcStack_1c = (char *)0x404253;
        thunk_FUN_0041b7c0();
      }
      local_18 = (int *)0x40425b;
      local_c = (undefined *)FUN_00401b4e();
      local_18 = (int *)&local_c;
      pcStack_1c = (char *)0x404267;
      local_10 = (char *)FUN_00402616();
      if (local_c != (undefined *)0x0) {
        local_18 = (int *)local_c;
        pcStack_1c = (char *)0x404277;
        thunk_FUN_0041b7c0();
      }
      local_18 = (int *)0x2ee85c6;
      pcStack_1c = local_10;
      local_20 = (char **)0x40428c;
      local_14 = (undefined *)FUN_00401383();
      if (local_10 != (char *)0x0) {
        local_18 = (int *)local_10;
        pcStack_1c = (char *)0x40429f;
        thunk_FUN_0041b7c0();
      }
      local_18 = (int *)0x80000005;
      pcStack_1c = (char *)0x0;
      local_20 = (char **)&DAT_0288def7;
      puVar3 = local_14;
      if (local_14 == (undefined *)0x0) {
        puVar3 = &DAT_004a5d3c;
      }
      thunk_FUN_0041b210(2,puVar3,0,0x80000004);
      if (local_14 != (undefined *)0x0) {
        local_18 = (int *)local_14;
        pcStack_1c = (char *)0x4042e1;
        thunk_FUN_0041b7c0();
      }
      local_18 = (int *)0x4042e9;
      local_c = (undefined *)FUN_00401b4e();
      local_18 = (int *)&local_c;
      pcStack_1c = (char *)0x4042f5;
      local_10 = (char *)FUN_00402616();
      if (local_c != (undefined *)0x0) {
        local_18 = (int *)local_c;
        pcStack_1c = (char *)0x404305;
        thunk_FUN_0041b7c0();
      }
      local_18 = (int *)0x4a5f42;
      pcStack_1c = local_10;
      local_20 = (char **)0x40431a;
      local_14 = (undefined *)FUN_00401383();
      if (local_10 != (char *)0x0) {
        local_18 = (int *)local_10;
        pcStack_1c = (char *)0x40432d;
        thunk_FUN_0041b7c0();
      }
      local_18 = (int *)0x80000005;
      pcStack_1c = (char *)0x0;
      local_20 = (char **)&DAT_02a6c7af;
      puVar3 = local_14;
      if (local_14 == (undefined *)0x0) {
        puVar3 = &DAT_004a5d3c;
      }
      thunk_FUN_0041b210(2,puVar3,0,0x80000004);
      if (local_14 != (undefined *)0x0) {
        local_18 = (int *)local_14;
        pcStack_1c = (char *)0x40436f;
        thunk_FUN_0041b7c0();
      }
      local_18 = (int *)0x404377;
      local_c = (undefined *)FUN_00401b4e();
      local_18 = (int *)&local_c;
      pcStack_1c = (char *)0x404383;
      local_10 = (char *)FUN_00402616();
      if (local_c != (undefined *)0x0) {
        local_18 = (int *)local_c;
        pcStack_1c = (char *)0x404393;
        thunk_FUN_0041b7c0();
      }
      local_18 = (int *)0x2ee8602;
      pcStack_1c = local_10;
      local_20 = (char **)0x4043a8;
      local_14 = (undefined *)FUN_00401383();
      if (local_10 != (char *)0x0) {
        local_18 = (int *)local_10;
        pcStack_1c = (char *)0x4043bb;
        thunk_FUN_0041b7c0();
      }
      local_18 = (int *)0x80000005;
      pcStack_1c = (char *)0x0;
      local_20 = (char **)&DAT_02ee81b7;
      puVar3 = local_14;
      if (local_14 == (undefined *)0x0) {
        puVar3 = &DAT_004a5d3c;
      }
      thunk_FUN_0041b210(2,puVar3,0,0x80000004);
      if (local_14 != (undefined *)0x0) {
        local_18 = (int *)local_14;
        pcStack_1c = (char *)0x4043fd;
        thunk_FUN_0041b7c0();
      }
      local_18 = (int *)0x80000005;
      pcStack_1c = (char *)0x0;
      local_20 = (char **)&DAT_020b330c;
      thunk_FUN_0041b210(2,"C:\\Windows\\DJ.dat",0,0x80000004);
      local_18 = (int *)0x80000005;
      pcStack_1c = (char *)0x0;
      local_20 = (char **)&DAT_020b3317;
      thunk_FUN_0041b210(2,"C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\ACE-SSC64.dll",0,
                         0x80000004);
      local_18 = (int *)0x80000005;
      pcStack_1c = (char *)0x0;
      local_20 = (char **)&DAT_0288def7;
      thunk_FUN_0041b210(2,"C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\ACE-SSC-DRV64.sys",0,
                         0x80000004);
      local_18 = (int *)0x80000005;
      pcStack_1c = (char *)0x0;
      local_20 = (char **)&DAT_02a6c7af;
      thunk_FUN_0041b210(2,"C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\123.dll",0,0x80000004);
      local_18 = (int *)0x80000005;
      pcStack_1c = (char *)0x0;
      local_20 = (char **)&DAT_02ee81b7;
      thunk_FUN_0041b210(2,"C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\sguard.dat",0,
                         0x80000004);
    }
  }
  return;
}

