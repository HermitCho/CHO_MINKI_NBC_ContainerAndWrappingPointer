// SecondAssignmentInv.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SecondAssignmentInv.generated.h"

USTRUCT(BlueprintType)
struct FItemData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    FString ItemName = TEXT("None");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    int32 ItemCount = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    FString ItemInfo = TEXT("");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    FString NeedTitle = TEXT("");

    FItemData() {}
};

UCLASS()
class ADVANCEDCLASS_API ASecondAssignmentInv : public AActor
{
    GENERATED_BODY()

public:
    ASecondAssignmentInv();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, Category = "Inventory")
    TArray<FString> Bag;

    UPROPERTY(EditAnywhere, Category = "Inventory")
    TMap<FString, FItemData> ItemMap;

    UPROPERTY(EditAnywhere, Category = "Inventory")
    TSet<FString> Titles;
};