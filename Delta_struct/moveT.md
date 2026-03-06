```cpp
ผมดู ชุดตัวเลข ArrayOffset ที่คุณ dump มา แล้ว สามารถ “เดาระยะ struct” และ “กลุ่ม array” ได้ค่อนข้างชัดครับ เพราะ pattern มันเหมือน struct ของ UE ที่มี TArray เรียงกันหลายตัว

ผมจะวิเคราะห์จากตัวเลขที่คุณให้จริง ๆ


---

1️⃣ จุดเริ่มที่คุณมี

Anchor

PersistentLevel + 0xF8

แล้วเจอ arrays

0x30
0x58
0x98
0x1F0
0x2BE
0x2E0
0x300
0x33E
0x360
0x380
0x3C4
...
0x62C
0x630
0x638
0x63C
...
0x708


---

2️⃣ กลุ่มแรก (array จริงของ level)

ช่วงนี้

0x30
0x58
0x98
0x1F0

ระยะ

0x58 - 0x30 = 0x28
0x98 - 0x58 = 0x40
0x1F0 - 0x98 = 0x158

ตัวที่สำคัญคือ

0x98
0x1F0

จากค่า count

0x98  -> 1643
0x1F0 -> 1316

อันนี้ตรง pattern

PersistentLevel + 0x98 = ActorArray
PersistentLevel + 0x1F0 = ActorCluster


---

3️⃣ กลุ่มที่สอง (array metadata)

ช่วง

0x2E0
0x300
0x33E
0x360
0x380
0x3C4

ระยะ

0x300 - 0x2E0 = 0x20
0x33E - 0x300 = 0x3E
0x360 - 0x33E = 0x22
0x380 - 0x360 = 0x20

จะเห็น pattern

0x20

ซึ่งบอกว่า struct element น่าจะประมาณ

sizeof(element) ≈ 0x20


---

4️⃣ กลุ่มที่สาม (ชุดตัวเลขที่คุณถาม)

ช่วง

0x62C
0x630
0x638
0x63C
0x644
0x648
0x650
0x654
0x65C
0x660
0x668
0x66C

ดู step

+4
+8
+4
+8

pattern นี้คือ

int
int
pair
pair

ซึ่งมักเป็น

count
max
count
max

หรือ

index table


---

5️⃣ กลุ่มสุดท้าย

ช่วง

0x68C
0x690
0x6B4
0x6C0
0x6E4
0x6F0
0x6FC
0x708

ระยะ

0x690 - 0x68C = 4
0x6B4 - 0x690 = 0x24
0x6C0 - 0x6B4 = 0xC

บอกว่า struct ตอนท้ายเป็น

dynamic table


---

6️⃣ สรุประยะ struct

จาก pattern ทั้งหมด

ผมเดาได้ว่า struct size ประมาณ

~0x720

เพราะ offset สุดท้าย

0x708


---

7️⃣ layout ที่เป็นไปได้

ผม reconstruct struct ให้คร่าว ๆ

0x30   TArray
0x58   TArray
0x98   ActorArray
0x1F0  ActorCluster
0x2E0  TArray
0x300  TArray
0x33E  flag
0x360  TArray
0x380  TArray
0x3C4  metadata
...
0x62C  count
0x630  max
0x638  count
0x63C  max
...
0x708  last field


---

8️⃣ base ที่ควรใช้

จากข้อมูล

base ที่ควร anchor คือ

arrayOffset 0x98

ดังนั้น

PersistentLevel = LevelArray - 0x98


---

9️⃣ logic ที่คุณกำลังทำ

จริง ๆ คือ

array -> offset
offset -> base
base -> scan struct

เหมือน

IDA struct reconstruction


---

🔟 สูตรที่คุณถาม (หา offset จาก array)

สูตรจริงคือ

offset = arrayAddress - base

หรือ

base = arrayAddress - offset


---

🔥 ผมสังเกตอีกอย่างที่สำคัญ

ค่าที่คุณ dump

Count = 1643
Max = 2046

นี่คือ

ActorArray

ดังนั้น

0x98 = actor list

ซึ่งเป็น pattern UE จริง


---

✅ ถ้าคุณอยากให้ผม วิเคราะห์ struct ทั้งก้อนจาก dump นี้

ผมสามารถ reconstruct ให้เลยว่า

PersistentLevel struct

มี field อะไรบ้าง และ offset ไหนคือ

ActorArray

NetDriver

LevelScript

Components


จาก pattern ตัวเลขที่คุณให้มา.

```
