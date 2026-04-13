<img width="2594" height="9744" alt="3UworldArray" src="https://github.com/user-attachments/assets/c401e91d-2def-44df-8dac-535098de328f" />


```cpp
โอเค อันนี้เป็นจุด “ทอง” เลย 🔥
โค้ดชุดนี้คือ **UWorld resolver + pointer decode pipeline** ครบในฟังก์ชันเดียว
เดี๋ยวผมสรุปให้ว่า “ควรเก็บอะไรบ้าง” และ “อะไรคือ newbase ที่แท้จริง”

---

# 🎯 จุดสำคัญของคุณตอนนี้

คุณมี:

```
Uworlddef     = 0x2A11F2E20
Uworldencore  = 0x16000002A11F2E36
XorKey        = 0x36
```

และ flow:

```
mov rsi,[156A1D5B8]   // def
mov rcx,[156A1F5B8]   // encore
xor decode
→ rsi = UWorld จริง
```

---

# 🔥 1. จุดที่ต้องเก็บ (สำคัญมาก)

## ✅ (A) Static pointer address

```asm
1452CCFBF - mov rsi,[156A1D5B8]   // UWorldDef
1452CCFC8 - mov rcx,[156A1F5B8]   // UWorldEncore
```

👉 เก็บ:

```cpp
uintptr_t UWorldDefPtr     = base + 0x156A1D5B8;
uintptr_t UWorldEncorePtr  = base + 0x156A1F5B8;
```

---

## ✅ (B) XOR key

```asm
xor al,36
xor cl,36
```

👉 เก็บ:

```cpp
uint8_t xorKey = 0x36;
```

---

## ✅ (C) byte key (สำคัญ)

```asm
movzx eax, byte ptr [156A1F5BF]  // = 0x22
```

👉 เก็บ:

```cpp
uint8_t extraKey = read<uint8_t>(base + 0x156A1F5BF);
```

🔥 ตัวนี้บางเกมใช้ combine XOR อีกชั้น

---

## ✅ (D) offset struct (core สำคัญ)

```asm
mov rax,[rsi+F8]   // 🔥
```

👉 นี่คือ:

```
UWorld + 0xF8 → pointer encoded
```

👉 เก็บ:

```cpp
constexpr uintptr_t OFFSET_UWORLD_PTR = 0xF8;
```

---

## ✅ (E) pointer decode pattern (สำคัญสุด)

```asm
and rbx, 0000FFFFFFFFFFFF
shr rcx, 30
and ecx, 3FFF
shr rax, 3F
```

👉 นี่คือ:

```
pointer = [ base | index | flag ]
```

👉 เก็บ:

```cpp
constexpr uintptr_t MASK_LOW48 = 0x0000FFFFFFFFFFFF;
constexpr int SHIFT_INDEX = 30;
constexpr int MASK_INDEX = 0x3FFF;
constexpr int SHIFT_FLAG = 63;
```

---

## ✅ (F) type system (สำคัญมาก)

```asm
mov eax,[156849D94]  // type
cmp eax,1
cmp eax,2
cmp eax,3
```

👉 เก็บ:

```cpp
int PointerType = read<int>(base + 0x156849D94);
```

🔥 อันนี้คือ:

```
Type 1 = call decode func
Type 2 = array table
Type 3 = direct index
```

---

## ✅ (G) function pointer table

```asm
call qword ptr [rax+40]
```

👉 เก็บ:

```cpp
uintptr_t FuncTable = read<uintptr_t>(rax);
uintptr_t FuncCall  = read<uintptr_t>(FuncTable + 0x40);
```

---

# 🚀 2. โครงสร้างที่คุณควรใช้ (ครบ)

```cpp
struct UWorldDecryptContext
{
    uintptr_t UWorldDefPtr;
    uintptr_t UWorldEncorePtr;

    uint8_t xorKey;
    uint8_t extraKey;

    uintptr_t offset_UWorld_ptr;

    uintptr_t mask_low48;
    int shift_index;
    int mask_index;
    int shift_flag;

    int pointerType;

    uintptr_t funcTable;
};
```

---

# 🔥 3. Pipeline จริง (สำคัญ)

## STEP 1: เลือก pointer

```cpp
uintptr_t uworld = 0;

if (!check_condition)
    uworld = read<uintptr_t>(UWorldDefPtr);
else
{
    uintptr_t enc = read<uintptr_t>(UWorldEncorePtr);

    uint8_t low  = ((uint8_t*)&enc)[0] ^ xorKey;
    uint8_t high = ((uint8_t*)&enc)[1] ^ xorKey;

    ((uint8_t*)&enc)[0] = low;
    ((uint8_t*)&enc)[1] = high;

    uworld = enc;
}
```

---

## STEP 2: decode pointer ที่ [UWorld+F8]

```cpp
uintptr_t val = read<uintptr_t>(uworld + 0xF8);

uintptr_t base = val & 0x0000FFFFFFFFFFFF;

uint64_t index = (val >> 30) & 0x3FFF;
uint64_t flag  = (val >> 63);
```

---

## STEP 3: resolve ตาม type

```cpp
if (flag)
{
    switch (PointerType)
    {
    case 1:
        // call function
        break;

    case 2:
        // table lookup
        break;

    case 3:
        base = read<uintptr_t>(table + index * 8);
        break;
    }
}
```

---

# 💥 4. สรุป “ต้องเก็บอะไรบ้าง”

## 🔑 MUST HAVE

* ✔ UWorldDefPtr
* ✔ UWorldEncorePtr
* ✔ xorKey (0x36)
* ✔ offset 0xF8
* ✔ mask 0x0000FFFFFFFFFFFF

## 🔥 IMPORTANT

* ✔ pointerType
* ✔ index shift (30)
* ✔ index mask (0x3FFF)
* ✔ flag bit (63)

## 💎 ADVANCED

* ✔ extraKey (0x22)
* ✔ function table
* ✔ call resolver

---

# 🚀 5. Insight สำคัญ (ที่หลายคนพลาด)

👉 `0x16000002A11F2E36`
ไม่ใช่ pointer ธรรมดา

มันคือ:

```
[ encrypted pointer | key embed | flag ]
```

👉 และ:

```
0x2D1CB3021
```

ที่คุณได้ก่อนหน้า = “core pointer จริง”

---

# 🔥 ถ้าจะไปต่อ (แนะนำมาก)

คุณสามารถทำ:

### ✅ auto-detect system

* detect type 1/2/3
* detect xor key
* detect offset

### ✅ universal UWorld resolver

* ใช้ได้ทุก patch
* ไม่ต้อง fix offset manual

---

# ⚡ ถ้าคุณอยากให้ผมต่อให้สุด

ผมทำให้ได้:

* 🔥 UWorld auto decrypt (no offset update)
* 🔥 Actor array decode
* 🔥 Bone pipeline full (UE4/UE5)

แค่บอกว่า:
👉 “เอา full auto UWorld pipeline”

ผมจัดให้ระดับ kernel-grade 🔥



```



```

---
CE asm vive 
---
```asm

1452CCF50 - 48 89 4C 24 08        - mov [rsp+08],rcx
1452CCF55 - 53                    - push rbx
1452CCF56 - 55                    - push rbp
1452CCF57 - 56                    - push rsi
1452CCF58 - 57                    - push rdi
1452CCF59 - 41 55                 - push r13
1452CCF5B - 41 56                 - push r14
1452CCF5D - 41 57                 - push r15
1452CCF5F - 48 83 EC 50           - sub rsp,50 { 80 }
1452CCF63 - 4C 8B 6A 20           - mov r13,[rdx+20]
1452CCF67 - 4D 8B F0              - mov r14,r8
1452CCF6A - 4C 8B FA              - mov r15,rdx
1452CCF6D - 4D 85 ED              - test r13,r13
1452CCF70 - 0F84 67020000         - je 1452CD1DD
1452CCF76 - 49 8B B0 F0000000     - mov rsi,[r8+000000F0]
1452CCF7D - 48 85 F6              - test rsi,rsi
1452CCF80 - 75 10                 - jne 1452CCF92
1452CCF82 - 49 8B C8              - mov rcx,r8
1452CCF85 - E8 66D1F308           - call 14E20A0F0
1452CCF8A - 48 8B F0              - mov rsi,rax
1452CCF8D - 48 85 C0              - test rax,rax
1452CCF90 - 74 23                 - je 1452CCFB5
1452CCF92 - E8 A9B6B909           - call 14EE68640
1452CCF97 - 48 8B 56 08           - mov rdx,[rsi+08]
1452CCF9B - 4C 8D 40 30           - lea r8,[rax+30]
1452CCF9F - 48 63 40 38           - movsxd  rax,dword ptr [rax+38]
1452CCFA3 - 3B 42 38              - cmp eax,[rdx+38]
1452CCFA6 - 7F 0D                 - jg 1452CCFB5
1452CCFA8 - 48 8B C8              - mov rcx,rax
1452CCFAB - 48 8B 42 30           - mov rax,[rdx+30]
1452CCFAF - 4C 39 04 C8           - cmp [rax+rcx*8],r8
1452CCFB3 - 74 44                 - je 1452CCFF9
1452CCFB5 - FF 15 F5F57411        - call qword ptr [156A1C5B0] { ->140A82020 }
1452CCFBB - 84 C0                 - test al,al
1452CCFBD - 75 09                 - jne 1452CCFC8
1452CCFBF - 48 8B 35 F2057511     - mov rsi,[156A1D5B8] { (2A11F2E20) }
1452CCFC6 - EB 31                 - jmp 1452CCFF9
1452CCFC8 - 48 8B 0D E9257511     - mov rcx,[156A1F5B8] { (16000002A11F2E36) }
1452CCFCF - 0FB6 05 E9257511      - movzx eax,byte ptr [156A1F5BF] { (22) }
1452CCFD6 - 48 89 8C 24 98000000  - mov [rsp+00000098],rcx
1452CCFDE - 34 36                 - xor al,36 { 54 }
1452CCFE0 - 80 F1 36              - xor cl,36 { 54 }
1452CCFE3 - 88 84 24 98000000     - mov [rsp+00000098],al
1452CCFEA - 88 8C 24 9F000000     - mov [rsp+0000009F],cl
1452CCFF1 - 48 8B B4 24 98000000  - mov rsi,[rsp+00000098]
1452CCFF9 - 49 8B AE A0020000     - mov rbp,[r14+000002A0]
1452CD000 - 48 85 ED              - test rbp,rbp
1452CD003 - 0F84 D4010000         - je 1452CD1DD
1452CD009 - 41 83 7F 18 00        - cmp dword ptr [r15+18],00 { 0 }
1452CD00E - 49 8D 4F 10           - lea rcx,[r15+10]
1452CD012 - 4C 89 A4 24 A0000000  - mov [rsp+000000A0],r12
1452CD01A - 74 0B                 - je 1452CD027
1452CD01C - FF 15 4ECD5711        - call qword ptr [156849D70] { ->140A86E30 }
1452CD022 - 4C 8B E0              - mov r12,rax
1452CD025 - EB 07                 - jmp 1452CD02E
1452CD027 - 4C 8D 25 2AA73F0B     - lea r12,[1506C7758] { (0) }
1452CD02E - 49 8B 45 08           - mov rax,[r13+08]
1452CD032 - 48 8D 15 57A61012     - lea rdx,[1573D7690] { (1887778896) }
1452CD039 - 48 89 84 24 A8000000  - mov [rsp+000000A8],rax
1452CD041 - 33 FF                 - xor edi,edi
1452CD043 - 48 8B 86 F8000000     - mov rax,[rsi+000000F8]
1452CD04A - 48 B9 FFFFFFFFFFFF0000 - mov rcx,0000FFFFFFFFFFFF { -1 }
1452CD054 - 90                    - nop 
1452CD055 - 48 85 C0              - test rax,rax
1452CD058 - 75 07                 - jne 1452CD061
1452CD05A - 8B DF                 - mov ebx,edi
1452CD05C - E9 BE000000           - jmp 1452CD11F
1452CD061 - 48 8B D8              - mov rbx,rax
1452CD064 - 48 23 D9              - and rbx,rcx
1452CD067 - 48 8B C8              - mov rcx,rax
1452CD06A - 48 C1 E9 30           - shr rcx,30 { 48 }
1452CD06E - 81 E1 FF3F0000        - and ecx,00003FFF { 16383 }
1452CD074 - 48 C1 E8 3F           - shr rax,3F { 63 }
1452CD078 - 48 89 9C 24 98000000  - mov [rsp+00000098],rbx
1452CD080 - 84 C0                 - test al,al
1452CD082 - 0F84 97000000         - je 1452CD11F
1452CD088 - 8B 05 06CD5711        - mov eax,[156849D94] { (2) }
1452CD08E - 83 F8 01              - cmp eax,01 { 1 }
1452CD091 - 75 1F                 - jne 1452CD0B2
1452CD093 - 44 8B C9              - mov r9d,ecx
1452CD096 - 48 8D 94 24 98000000  - lea rdx,[rsp+00000098]
1452CD09E - 48 8B 0D DBA51012     - mov rcx,[1573D7680] { (883388640) }
1452CD0A5 - 41 B8 04000000        - mov r8d,00000004 { 4 }
1452CD0AB - E8 60FE7BFB           - call 140A8CF10
1452CD0B0 - EB 31                 - jmp 1452CD0E3
1452CD0B2 - 83 F8 02              - cmp eax,02 { 2 }
1452CD0B5 - 75 0C                 - jne 1452CD0C3
1452CD0B7 - 48 8B 05 CAA51012     - mov rax,[1573D7688] { (1887800656) }
1452CD0BE - 44 8B C1              - mov r8d,ecx
1452CD0C1 - EB 0C                 - jmp 1452CD0CF
1452CD0C3 - 83 F8 03              - cmp eax,03 { 3 }
1452CD0C6 - 75 1B                 - jne 1452CD0E3
1452CD0C8 - 48 8B 04 CA           - mov rax,[rdx+rcx*8]
1452CD0CC - 44 8B C1              - mov r8d,ecx
1452CD0CF - 4C 8B 48 08           - mov r9,[rax+08]
1452CD0D3 - 48 8D 8C 24 98000000  - lea rcx,[rsp+00000098]
1452CD0DB - BA 04000000           - mov edx,00000004 { 4 }
1452CD0E0 - FF 50 40              - call qword ptr [rax+40]
1452CD0E3 - 48 8B 9C 24 98000000  - mov rbx,[rsp+00000098]
1452CD0EB - 48 B8 FFFFFFFFFFFF0000 - mov rax,0000FFFFFFFFFFFF { -1 }
1452CD0F5 - 48 23 D8              - and rbx,rax
1452CD0F8 - 48 BA 000000000000FFFF - mov rdx,FFFF000000000000 { 0 }
1452CD102 - 48 8B CB              - mov rcx,rbx
1452CD105 - 48 B8 000000000080FFFF - mov rax,FFFF800000000000 { 0 }
1452CD10F - 48 23 C8              - and rcx,rax
1452CD112 - 48 8B C3              - mov rax,rbx
1452CD115 - 48 0B C2              - or rax,rdx
1452CD118 - 48 85 C9              - test rcx,rcx
1452CD11B - 48 0F45 D8            - cmovne rbx,rax
1452CD11F - 41 B8 01000000        - mov r8d,00000001 { 1 }
1452CD125 - 48 8D 4C 24 48        - lea rcx,[rsp+48]
1452CD12A - 49 8B D4              - mov rdx,r12
1452CD12D - E8 FE786007           - call 14C8D4A30
1452CD132 - 4C 8B 84 24 A8000000  - mov r8,[rsp+000000A8]
1452CD13A - 48 8D 4C 24 40        - lea rcx,[rsp+40]
1452CD13F - 48 8B D3              - mov rdx,rbx
1452CD142 - 4C 8B 08              - mov r9,[rax]
1452CD145 - E8 D6579707           - call 14CC42920
1452CD14A - 48 8B 84 24 90000000  - mov rax,[rsp+00000090]
1452CD152 - 4C 8B A4 24 A0000000  - mov r12,[rsp+000000A0]
1452CD15A - 40 38 78 08           - cmp [rax+08],dil
1452CD15E - 0F84 8A000000         - je 1452CD1EE
1452CD164 - 48 8B CE              - mov rcx,rsi
1452CD167 - E8 C45B0000           - call 1452D2D30
1452CD16C - 48 85 C0              - test rax,rax
1452CD16F - 74 39                 - je 1452CD1AA
1452CD171 - 49 8B 96 90020000     - mov rdx,[r14+00000290]
1452CD178 - 48 8D 88 88000000     - lea rcx,[rax+00000088]
1452CD17F - 4C 8B C6              - mov r8,rsi
1452CD182 - E8 095C0000           - call 1452D2D90
1452CD187 - 49 8B D7              - mov rdx,r15
1452CD18A - 48 8B C8              - mov rcx,rax
1452CD18D - E8 8E6E0000           - call 1452D4020
1452CD192 - 48 8B D8              - mov rbx,rax
1452CD195 - 48 85 C0              - test rax,rax
1452CD198 - 74 43                 - je 1452CD1DD
1452CD19A - 48 8B D0              - mov rdx,rax
1452CD19D - 48 8B CD              - mov rcx,rbp
1452CD1A0 - E8 1B33D908           - call 14E0604C0
1452CD1A5 - E9 8F000000           - jmp 1452CD239
1452CD1AA - 80 3D 6F4AD911 02     - cmp byte ptr [157061C20],02 { (134610946),2 }
1452CD1B1 - 72 2A                 - jb 1452CD1DD
1452CD1B3 - 48 8D 05 C605CA0C     - lea rax,[151F6D780] { ("failed to destroy component bec") }
1452CD1BA - 41 B9 02000000        - mov r9d,00000002 { 2 }
1452CD1C0 - 4C 8D 05 5D4AD911     - lea r8,[157061C24] { (362243) }
1452CD1C7 - 48 89 44 24 20        - mov [rsp+20],rax
1452CD1CC - BA CD010000           - mov edx,000001CD { 461 }
1452CD1D1 - 48 8D 0D 88AB3F0B     - lea rcx,[1506C7D60] { ("Unknown") }
1452CD1D8 - E8 53B55507           - call 14C828730
1452CD1DD - 33 C0                 - xor eax,eax
1452CD1DF - 48 83 C4 50           - add rsp,50 { 80 }
1452CD1E3 - 41 5F                 - pop r15
1452CD1E5 - 41 5E                 - pop r14
1452CD1E7 - 41 5D                 - pop r13
1452CD1E9 - 5F                    - pop rdi
1452CD1EA - 5E                    - pop rsi
1452CD1EB - 5D                    - pop rbp
1452CD1EC - 5B                    - pop rbx
1452CD1ED - C3                    - ret 




---Loacldebug
0x1452CCF50: 48 89 4C 24 08             mov      qword ptr [rsp + 8], rcx
0x1452CCF55: 53                         push     rbx
0x1452CCF56: 55                         push     rbp
0x1452CCF57: 56                         push     rsi
0x1452CCF58: 57                         push     rdi
0x1452CCF59: 41 55                      push     r13
0x1452CCF5B: 41 56                      push     r14
0x1452CCF5D: 41 57                      push     r15
0x1452CCF5F: 48 83 EC 50                sub      rsp, 0x50
0x1452CCF63: 4C 8B 6A 20                mov      r13, qword ptr [rdx + 0x20]  // ptr@0x20: <no ascii>
0x1452CCF67: 4D 8B F0                   mov      r14, r8
0x1452CCF6A: 4C 8B FA                   mov      r15, rdx
0x1452CCF6D: 4D 85 ED                   test     r13, r13
0x1452CCF70: 0F 84 67 02 00 00          je       0x1452cd1dd
0x1452CCF76: 49 8B B0 F0 00 00 00       mov      rsi, qword ptr [r8 + 0xf0]  // ptr@0xF0: <no ascii>
0x1452CCF7D: 48 85 F6                   test     rsi, rsi
0x1452CCF80: 75 10                      jne      0x1452ccf92
0x1452CCF82: 49 8B C8                   mov      rcx, r8
0x1452CCF85: E8 66 D1 F3 08             call     0x14e20a0f0
0x1452CCF8A: 48 8B F0                   mov      rsi, rax
0x1452CCF8D: 48 85 C0                   test     rax, rax
0x1452CCF90: 74 23                      je       0x1452ccfb5
0x1452CCF92: E8 A9 B6 B9 09             call     0x14ee68640
0x1452CCF97: 48 8B 56 08                mov      rdx, qword ptr [rsi + 8]
0x1452CCF9B: 4C 8D 40 30                lea      r8, [rax + 0x30]  // ptr@0x30: <no ascii>
0x1452CCF9F: 48 63 40 38                movsxd   rax, dword ptr [rax + 0x38]  // ptr@0x38: <no ascii>
0x1452CCFA3: 3B 42 38                   cmp      eax, dword ptr [rdx + 0x38]  // ptr@0x38: <no ascii>
0x1452CCFA6: 7F 0D                      jg       0x1452ccfb5
0x1452CCFA8: 48 8B C8                   mov      rcx, rax
0x1452CCFAB: 48 8B 42 30                mov      rax, qword ptr [rdx + 0x30]  // ptr@0x30: <no ascii>
0x1452CCFAF: 4C 39 04 C8                cmp      qword ptr [rax + rcx*8], r8
0x1452CCFB3: 74 44                      je       0x1452ccff9
0x1452CCFB5: FF 15 F5 F5 74 11          call     qword ptr [0x156A1C5B0]  // [rip] 0x156A1C5B0 |0x16A1C5B0
0x1452CCFBB: 84 C0                      test     al, al
0x1452CCFBD: 75 09                      jne      0x1452ccfc8
0x1452CCFBF: 48 8B 35 F2 05 75 11       mov      rsi, qword ptr [0x156A1D5B8]  // [rip] 0x156A1D5B8 |0x16A1D5B8
0x1452CCFC6: EB 31                      jmp      0x1452ccff9
0x1452CCFC8: 48 8B 0D E9 25 75 11       mov      rcx, qword ptr [0x156A1F5B8]  // [rip] 0x156A1F5B8 |0x16A1F5B8
0x1452CCFCF: 0F B6 05 E9 25 75 11       movzx    eax, byte ptr [0x156A1F5BF]  // [rip] 0x156A1F5BF |0x16A1F5BF
0x1452CCFD6: 48 89 8C 24 98 00 00 00    mov      qword ptr [rsp + 0x98], rcx  // ptr@0x98: <no ascii>
0x1452CCFDE: 34 36                      xor      al, 0x36
0x1452CCFE0: 80 F1 36                   xor      cl, 0x36
0x1452CCFE3: 88 84 24 98 00 00 00       mov      byte ptr [rsp + 0x98], al  // ptr@0x98: <no ascii>
0x1452CCFEA: 88 8C 24 9F 00 00 00       mov      byte ptr [rsp + 0x9f], cl  // ptr@0x9F: <no ascii>
0x1452CCFF1: 48 8B B4 24 98 00 00 00    mov      rsi, qword ptr [rsp + 0x98]  // ptr@0x98: <no ascii>
0x1452CCFF9: 49 8B AE A0 02 00 00       mov      rbp, qword ptr [r14 + 0x2a0]  // ptr@0x2A0: <no ascii>
0x1452CD000: 48 85 ED                   test     rbp, rbp
0x1452CD003: 0F 84 D4 01 00 00          je       0x1452cd1dd
0x1452CD009: 41 83 7F 18 00             cmp      dword ptr [r15 + 0x18], 0  // ptr@0x18: <no ascii>
0x1452CD00E: 49 8D 4F 10                lea      rcx, [r15 + 0x10]  // ptr@0x10: <no ascii>
0x1452CD012: 4C 89 A4 24 A0 00 00 00    mov      qword ptr [rsp + 0xa0], r12  // ptr@0xA0: <no ascii>
0x1452CD01A: 74 0B                      je       0x1452cd027
0x1452CD01C: FF 15 4E CD 57 11          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x1452CD022: 4C 8B E0                   mov      r12, rax
0x1452CD025: EB 07                      jmp      0x1452cd02e
0x1452CD027: 4C 8D 25 2A A7 3F 0B       lea      r12, [0x1506C7758]  // [rip] 0x1506C7758 |0x106C7758
0x1452CD02E: 49 8B 45 08                mov      rax, qword ptr [r13 + 8]
0x1452CD032: 48 8D 15 57 A6 10 12       lea      rdx, [0x1573D7690]  // [rip] 0x1573D7690 |0x173D7690
0x1452CD039: 48 89 84 24 A8 00 00 00    mov      qword ptr [rsp + 0xa8], rax  // ptr@0xA8: <no ascii>
0x1452CD041: 33 FF                      xor      edi, edi
0x1452CD043: 48 8B 86 F8 00 00 00       mov      rax, qword ptr [rsi + 0xf8]  // ptr@0xF8: <no ascii>
0x1452CD04A: 48 B9 FF FF FF FF FF FF 00 00  movabs   rcx, 0xffffffffffff
0x1452CD054: 90                         nop      
0x1452CD055: 48 85 C0                   test     rax, rax
0x1452CD058: 75 07                      jne      0x1452cd061
0x1452CD05A: 8B DF                      mov      ebx, edi
0x1452CD05C: E9 BE 00 00 00             jmp      0x1452cd11f
0x1452CD061: 48 8B D8                   mov      rbx, rax
0x1452CD064: 48 23 D9                   and      rbx, rcx
0x1452CD067: 48 8B C8                   mov      rcx, rax
0x1452CD06A: 48 C1 E9 30                shr      rcx, 0x30
0x1452CD06E: 81 E1 FF 3F 00 00          and      ecx, 0x3fff
0x1452CD074: 48 C1 E8 3F                shr      rax, 0x3f
0x1452CD078: 48 89 9C 24 98 00 00 00    mov      qword ptr [rsp + 0x98], rbx  // ptr@0x98: <no ascii>
0x1452CD080: 84 C0                      test     al, al
0x1452CD082: 0F 84 97 00 00 00          je       0x1452cd11f
0x1452CD088: 8B 05 06 CD 57 11          mov      eax, dword ptr [0x156849D94]  // [rip] 0x156849D94 |0x16849D94
0x1452CD08E: 83 F8 01                   cmp      eax, 1
0x1452CD091: 75 1F                      jne      0x1452cd0b2
0x1452CD093: 44 8B C9                   mov      r9d, ecx
0x1452CD096: 48 8D 94 24 98 00 00 00    lea      rdx, [rsp + 0x98]  // ptr@0x98: <no ascii>
0x1452CD09E: 48 8B 0D DB A5 10 12       mov      rcx, qword ptr [0x1573D7680]  // [rip] 0x1573D7680 |0x173D7680
0x1452CD0A5: 41 B8 04 00 00 00          mov      r8d, 4
0x1452CD0AB: E8 60 FE 7B FB             call     0x140a8cf10
0x1452CD0B0: EB 31                      jmp      0x1452cd0e3
0x1452CD0B2: 83 F8 02                   cmp      eax, 2
0x1452CD0B5: 75 0C                      jne      0x1452cd0c3
0x1452CD0B7: 48 8B 05 CA A5 10 12       mov      rax, qword ptr [0x1573D7688]  // [rip] 0x1573D7688 |0x173D7688
0x1452CD0BE: 44 8B C1                   mov      r8d, ecx
0x1452CD0C1: EB 0C                      jmp      0x1452cd0cf
0x1452CD0C3: 83 F8 03                   cmp      eax, 3
0x1452CD0C6: 75 1B                      jne      0x1452cd0e3
0x1452CD0C8: 48 8B 04 CA                mov      rax, qword ptr [rdx + rcx*8]
0x1452CD0CC: 44 8B C1                   mov      r8d, ecx
0x1452CD0CF: 4C 8B 48 08                mov      r9, qword ptr [rax + 8]
0x1452CD0D3: 48 8D 8C 24 98 00 00 00    lea      rcx, [rsp + 0x98]  // ptr@0x98: <no ascii>
0x1452CD0DB: BA 04 00 00 00             mov      edx, 4
0x1452CD0E0: FF 50 40                   call     qword ptr [rax + 0x40]  // ptr@0x40: <no ascii>
0x1452CD0E3: 48 8B 9C 24 98 00 00 00    mov      rbx, qword ptr [rsp + 0x98]  // ptr@0x98: <no ascii>
0x1452CD0EB: 48 B8 FF FF FF FF FF FF 00 00  movabs   rax, 0xffffffffffff
0x1452CD0F5: 48 23 D8                   and      rbx, rax
0x1452CD0F8: 48 BA 00 00 00 00 00 00 FF FF  movabs   rdx, 0xffff000000000000
0x1452CD102: 48 8B CB                   mov      rcx, rbx
0x1452CD105: 48 B8 00 00 00 00 00 80 FF FF  movabs   rax, 0xffff800000000000
0x1452CD10F: 48 23 C8                   and      rcx, rax
0x1452CD112: 48 8B C3                   mov      rax, rbx
0x1452CD115: 48 0B C2                   or       rax, rdx
0x1452CD118: 48 85 C9                   test     rcx, rcx
0x1452CD11B: 48 0F 45 D8                cmovne   rbx, rax
0x1452CD11F: 41 B8 01 00 00 00          mov      r8d, 1
0x1452CD125: 48 8D 4C 24 48             lea      rcx, [rsp + 0x48]  // ptr@0x48: <no ascii>
0x1452CD12A: 49 8B D4                   mov      rdx, r12
0x1452CD12D: E8 FE 78 60 07             call     0x14c8d4a30
0x1452CD132: 4C 8B 84 24 A8 00 00 00    mov      r8, qword ptr [rsp + 0xa8]  // ptr@0xA8: <no ascii>
0x1452CD13A: 48 8D 4C 24 40             lea      rcx, [rsp + 0x40]  // ptr@0x40: <no ascii>
0x1452CD13F: 48 8B D3                   mov      rdx, rbx
0x1452CD142: 4C 8B 08                   mov      r9, qword ptr [rax]
0x1452CD145: E8 D6 57 97 07             call     0x14cc42920
0x1452CD14A: 48 8B 84 24 90 00 00 00    mov      rax, qword ptr [rsp + 0x90]  // ptr@0x90: <no ascii>
0x1452CD152: 4C 8B A4 24 A0 00 00 00    mov      r12, qword ptr [rsp + 0xa0]  // ptr@0xA0: <no ascii>
0x1452CD15A: 40 38 78 08                cmp      byte ptr [rax + 8], dil
0x1452CD15E: 0F 84 8A 00 00 00          je       0x1452cd1ee
0x1452CD164: 48 8B CE                   mov      rcx, rsi
0x1452CD167: E8 C4 5B 00 00             call     0x1452d2d30
0x1452CD16C: 48 85 C0                   test     rax, rax
0x1452CD16F: 74 39                      je       0x1452cd1aa
0x1452CD171: 49 8B 96 90 02 00 00       mov      rdx, qword ptr [r14 + 0x290]  // ptr@0x290: <no ascii>
0x1452CD178: 48 8D 88 88 00 00 00       lea      rcx, [rax + 0x88]  // ptr@0x88: <no ascii>
0x1452CD17F: 4C 8B C6                   mov      r8, rsi
0x1452CD182: E8 09 5C 00 00             call     0x1452d2d90
0x1452CD187: 49 8B D7                   mov      rdx, r15
0x1452CD18A: 48 8B C8                   mov      rcx, rax
0x1452CD18D: E8 8E 6E 00 00             call     0x1452d4020
0x1452CD192: 48 8B D8                   mov      rbx, rax
0x1452CD195: 48 85 C0                   test     rax, rax
0x1452CD198: 74 43                      je       0x1452cd1dd
0x1452CD19A: 48 8B D0                   mov      rdx, rax
0x1452CD19D: 48 8B CD                   mov      rcx, rbp
0x1452CD1A0: E8 1B 33 D9 08             call     0x14e0604c0
0x1452CD1A5: E9 8F 00 00 00             jmp      0x1452cd239
0x1452CD1AA: 80 3D 6F 4A D9 11 02       cmp      byte ptr [0x157061C20], 2  // [rip] 0x157061C20 |0x17061C20
0x1452CD1B1: 72 2A                      jb       0x1452cd1dd
0x1452CD1B3: 48 8D 05 C6 05 CA 0C       lea      rax, [0x151F6D780]  // [rip] 0x151F6D780 |0x11F6D780
0x1452CD1BA: 41 B9 02 00 00 00          mov      r9d, 2
0x1452CD1C0: 4C 8D 05 5D 4A D9 11       lea      r8, [0x157061C24]  // [rip] 0x157061C24 |0x17061C24
0x1452CD1C7: 48 89 44 24 20             mov      qword ptr [rsp + 0x20], rax  // ptr@0x20: <no ascii>
0x1452CD1CC: BA CD 01 00 00             mov      edx, 0x1cd
0x1452CD1D1: 48 8D 0D 88 AB 3F 0B       lea      rcx, [0x1506C7D60]  // [rip] 0x1506C7D60 |0x106C7D60
0x1452CD1D8: E8 53 B5 55 07             call     0x14c828730
0x1452CD1DD: 33 C0                      xor      eax, eax
0x1452CD1DF: 48 83 C4 50                add      rsp, 0x50
0x1452CD1E3: 41 5F                      pop      r15
0x1452CD1E5: 41 5E                      pop      r14
0x1452CD1E7: 41 5D                      pop      r13
0x1452CD1E9: 5F                         pop      rdi
0x1452CD1EA: 5E                         pop      rsi
0x1452CD1EB: 5D                         pop      rbp
0x1452CD1EC: 5B                         pop      rbx
0x1452CD1ED: C3                         ret      

```

---
CE byte
---
```asm

