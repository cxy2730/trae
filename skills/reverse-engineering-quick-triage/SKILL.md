---
name: reverse-engineering-quick-triage
description: Fast binary analysis with string reconnaissance and static disassembly (RE Levels 1-2). Use when triaging suspicious binaries, extracting IOCs quickly, or performing initial malware analysis. Completes in hours with automated decision gates.
---

# Reverse Engineering Quick Triage

Fast binary analysis workflow for initial reconnaissance and IOC extraction. Designed for rapid assessment before committing to deeper analysis.

## Overview

This skill provides automated tools for:
- String extraction with IOC categorization
- Ghidra headless decompilation
- radare2 binary triage
- IOC extraction automation

## Quick Start

### 1. String Analysis (Level 1)

```bash
python3 resources/scripts/strings-analyzer.py \
  --binary suspicious.exe \
  --output strings.json \
  --min-length 10 \
  --encoding ascii unicode
```

Output: JSON with categorized IOCs (URLs, IPs, emails, file paths, crypto indicators)

### 2. Ghidra Headless Analysis (Level 2)

```bash
bash resources/scripts/ghidra-headless.sh \
  --binary malware.exe \
  --project-dir ghidra-project/ \
  --decompile true \
  --callgraph true
```

Output: Ghidra project, decompiled C code, callgraphs

### 3. radare2 Quick Triage (Level 2)

```bash
python3 resources/scripts/radare2-triage.py \
  --binary crackme.bin \
  --output r2-analysis/ \
  --functions main check_password validate_key
```

Output: Function disassembly, CFG, basic blocks

### 4. IOC Extraction (Level 1)

```bash
node resources/scripts/ioc-extractor.js \
  --binary firmware.bin \
  --output iocs.json \
  --patterns resources/references/ioc-patterns.txt
```

## Script Details

### strings-analyzer.py
Advanced string extraction with adaptive min-length, encoding detection, and IOC categorization.
- Adaptive min-length based on binary size (4-20 chars)
- Multi-encoding support (ASCII, Unicode LE/BE, UTF-8)
- Automatic IOC categorization (15+ categories)
- Entropy analysis for obfuscation detection
- JSON output compatible with threat intel tools

### ghidra-headless.sh
Automated Ghidra headless analysis with project creation, decompilation, and callgraph generation.
- Automatic architecture detection (x86/x64/ARM/MIPS)
- Headless analyzeHeadless integration
- Selective function decompilation (all or specific functions)
- Callgraph generation via GraphViz
- Import/export table extraction

### radare2-triage.py
Quick binary triage with radare2.
- Multi-architecture support
- Function boundary detection
- Control flow graph export
- String cross-reference analysis
- Import/export enumeration

### ioc-extractor.js
Standalone IOC extractor with no strings needed.
- Pattern-based extraction
- Custom regex support
- JSON output format
- Multi-format binary support

## Decision Gates

After triage, decide whether to:
1. **Level 1 Complete**: Strings and IOCs extracted, no deeper analysis needed
2. **Level 2 Recommended**: Ghidra/r2 analysis needed for deeper understanding
3. **Level 3+**: Full reverse engineering with dynamic analysis

## Resources

- `resources/references/ioc-patterns.txt` - Common IOC regex patterns
- `resources/references/crypto-indicators.txt` - Cryptographic constants/signatures
- `resources/references/packer-signatures.txt` - Known packer signatures
- `resources/templates/ghidra-analysis.yaml` - Ghidra automation config
- `resources/templates/radare2-script.r2` - r2 analysis commands
- `resources/templates/triage-report.json` - Quick analysis findings template