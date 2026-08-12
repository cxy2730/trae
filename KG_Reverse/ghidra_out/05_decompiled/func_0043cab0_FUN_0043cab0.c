// Function: FUN_0043cab0
// Entry:    0043cab0
// Size:     147 bytes
// Conv:     unknown
// Signature: undefined FUN_0043cab0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043cab0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x9c) == 0) {
    switch(param_2) {
    default:
      *(char **)(param_1 + 0x9c) = s_unexpected_zlib_return_code_02fb128c;
      break;
    case 1:
      *(char **)(param_1 + 0x9c) = s_unexpected_end_of_LZ_stream_02fb1350;
      return;
    case 2:
      *(char **)(param_1 + 0x9c) = s_missing_LZ_dictionary_02fb1338;
      return;
    case 0xfffffff9:
      *(char **)(param_1 + 0x9c) = s_unexpected_zlib_return_02fb12a8;
      return;
    case 0xfffffffa:
      *(char **)(param_1 + 0x9c) = s_unsupported_zlib_version_02fb12c0;
      return;
    case 0xfffffffb:
      *(char **)(param_1 + 0x9c) = s_truncated_02fb12dc;
      return;
    case 0xfffffffc:
      *(char **)(param_1 + 0x9c) = s_insufficient_memory_02fb12e8;
      return;
    case 0xfffffffd:
      *(char **)(param_1 + 0x9c) = s_damaged_LZ_stream_02fb12fc;
      return;
    case 0xfffffffe:
      *(char **)(param_1 + 0x9c) = s_bad_parameters_to_zlib_02fb1310;
      return;
    case 0xffffffff:
      *(char **)(param_1 + 0x9c) = s_zlib_IO_error_02fb1328;
      return;
    }
  }
  return;
}

