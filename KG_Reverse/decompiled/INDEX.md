# KG.exe 反编译索引 (angr + capstone)

## 概览

- 总函数数: 2211
- 已反编译: 30 个
- 工具: angr 9.3.2 + capstone 5.0.9

## 反调试特征

- rdtsc: 时间戳检测 (反调试)
- cpuid: CPU 指令检测
- sidt/sgdt/sldt: 系统描述符表检测 (反调试)
- ud2/hlt: 非法指令 (反调试)

## 反编译函数列表

1. [sub_4644d0](sub_4644d0.c) - 0x004644D0 (945 blocks)
2. [sub_42aa70](sub_42aa70.c) - 0x0042AA70 (317 blocks)
3. [sub_419ca0](sub_419ca0.c) - 0x00419CA0 (310 blocks)
4. [sub_48d469](sub_48d469.c) - 0x0048D469 (310 blocks)
5. [sub_402ea3](sub_402ea3.c) - 0x00402EA3 (306 blocks)
6. [sub_410350](sub_410350.c) - 0x00410350 (301 blocks)
7. [sub_414e20](sub_414e20.c) - 0x00414E20 (267 blocks)
8. [sub_4115c0](sub_4115c0.c) - 0x004115C0 (256 blocks)
9. [sub_43fc00](sub_43fc00.c) - 0x0043FC00 (247 blocks)
10. [sub_48bf7b](sub_48bf7b.c) - 0x0048BF7B (223 blocks)
11. [sub_44e0c0](sub_44e0c0.c) - 0x0044E0C0 (216 blocks)
12. [sub_472280](sub_472280.c) - 0x00472280 (204 blocks)
13. [sub_46eda0](sub_46eda0.c) - 0x0046EDA0 (203 blocks)
14. [sub_438440](sub_438440.c) - 0x00438440 (188 blocks)
15. [sub_44bf60](sub_44bf60.c) - 0x0044BF60 (178 blocks)
16. [sub_41e020](sub_41e020.c) - 0x0041E020 (177 blocks)
17. [sub_42d420](sub_42d420.c) - 0x0042D420 (175 blocks)
18. [sub_4548c0](sub_4548c0.c) - 0x004548C0 (163 blocks)
19. [sub_46a6d0](sub_46a6d0.c) - 0x0046A6D0 (148 blocks)
20. [sub_495a63](sub_495a63.c) - 0x00495A63 (147 blocks)
21. [sub_48f56f](sub_48f56f.c) - 0x0048F56F (146 blocks)
22. [sub_416a60](sub_416a60.c) - 0x00416A60 (144 blocks)
23. [sub_431360](sub_431360.c) - 0x00431360 (144 blocks)
24. [sub_433ca0](sub_433ca0.c) - 0x00433CA0 (143 blocks)
25. [sub_43b080](sub_43b080.c) - 0x0043B080 (130 blocks)
26. [sub_460eb0](sub_460eb0.c) - 0x00460EB0 (128 blocks)
27. [sub_461930](sub_461930.c) - 0x00461930 (128 blocks)
28. [sub_441a00](sub_441a00.c) - 0x00441A00 (127 blocks)
29. [sub_44a770](sub_44a770.c) - 0x0044A770 (124 blocks)
30. [sub_4210b0](sub_4210b0.c) - 0x004210B0 (120 blocks)
