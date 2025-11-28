 
---
มาโครจั้มโครงสร้าง File
 
 base.hpp .cpo ส่วนdumper-7
 
listโครงสร้างหลัก
Engine_class เก็บ อ่านตาม offset
โครงสร้าง float x y z หลัก CoreUObject ใช้ชื่อนี้ เก็บโครงสร้าง


รายการชื้อจากgname แยกดูแค่คน
```md
 if (validName.find(_("Character_")) != std::string::npos
				 || validName.find(_("DFMCharacter_C")) != std::string::npos 
				 || validName.find(_("PlayerStart")) != std::string::npos
				 || validName.find(_("DFMAICharacter")) != std::string::npos) 
			);
```
ไปตรวจลิ้งไฟล์แปป
---
 
---

 https://github.com/xkp95175333/SDKFULLname_ForFindTypeBone/blob/e43fbd7e11f8f97b8fc29df774fd898e486a7ba8/SDK/GPGameplay_structs.hpp


---
```py

files = glob.glob("SDK/**/*.hpp", recursive=True)
names = set()

for f in files:
    text = open(f, encoding="utf8", errors="ignore").read()

    # match struct/class/enum
    for m in re.findall(r"(?:struct|class|enum)\s+([A-Za-z_][A-Za-z0-9_]*)", text):
        names.add(m)

print("\n".join(sorted(names)))
python scripts/extract_names.py > README_StructNames.txt
if (validName.find(_("Character_")) != std::string::npos
Character_
DFMCharacter_C
PlayerStart
DFMAICharacter
# รายชื่อ class/struct ที่ค้นเจอจาก GName

- Character_
- DFMCharacter_C
- PlayerStart
- DFMAICharacter

# รายชื่อโครงสร้างใน SDK

## CoreUObject
- UObject
- UClass
- UFunction
- FName
- FNameEntry
- FText
- FString
- FArray
- FRotator
- FVector
- FQuat
- FTransform

## Engine
- AActor
- APawn
- ACharacter
- USceneComponent
- USkeletalMeshComponent
- UPrimitiveComponent
- FHitResult
- FTimerHandle
- FMinimalViewInfo
- FCameraCacheEntry

## Gameplay
- APlayerController
- AAIController
- APlayerState
- AGameState
- APlayerStart
- UAnimInstance
- USkeletalBodySetup
```
