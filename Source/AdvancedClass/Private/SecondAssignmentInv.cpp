// SecondAssignmentInv.cpp
#include "SecondAssignmentInv.h"

ASecondAssignmentInv::ASecondAssignmentInv()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ASecondAssignmentInv::BeginPlay()
{
    Super::BeginPlay();

    // 1. 아이템 데이터 등록
    FItemData SwordData;
    SwordData.ItemName = TEXT("Sword");
    SwordData.ItemInfo = TEXT("날카로운 검");
    SwordData.NeedTitle = TEXT("검사");
    ItemMap.Add(TEXT("Sword"), SwordData);

    FItemData StaffData;
    StaffData.ItemName = TEXT("Staff");
    StaffData.ItemInfo = TEXT("마법이 깃든 지팡이");
    StaffData.NeedTitle = TEXT("마법사");
    ItemMap.Add(TEXT("Staff"), StaffData);

    FItemData PotionData;
    PotionData.ItemName = TEXT("Potion");
    PotionData.ItemInfo = TEXT("체력을 회복시키는 물약");
    PotionData.NeedTitle = TEXT("");
    ItemMap.Add(TEXT("Potion"), PotionData);

    // 2. 가방 및 칭호 설정
    Bag.Add(TEXT("Sword"));
    Bag.Add(TEXT("Staff"));
    Bag.Add(TEXT("Potion"));
    Titles.Add(TEXT("검사"));

    // 3. 사용 가능 여부 체크 루프
    for (const FString& ItemKey : Bag)
    {
        if (FItemData* FoundData = ItemMap.Find(ItemKey))
        {

            UE_LOG(LogTemp, Warning, TEXT("[%s] : %s"), *FoundData->ItemName, *FoundData->ItemInfo);

            // 칭호 조건 체크: 요구 칭호가 없거나, 플레이어가 소유한 경우
            bool bCanUse = FoundData->NeedTitle.IsEmpty() || Titles.Contains(FoundData->NeedTitle);

            if (bCanUse)
            {
                UE_LOG(LogTemp, Warning, TEXT("[%s] 사용 가능"), *FoundData->ItemName);
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("[%s] 사용 불가: %s 칭호가 필요합니다."), *FoundData->ItemName, *FoundData->NeedTitle);
            }
        }
    }
}