// Featherlight 2022 - Dawn Of Civilization

#pragma once

#include "CoreMinimal.h"
#include "FGameResources.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class E_ResourceType : uint8 {
	NONE = 0 UMETA(DisplayName = "NONE"),
	Berries = 1 UMETA(DisplayName = "Berries"),
	WOOD = 2 UMETA(DisplayName = "Wood"),
	STONE = 3 UMETA(Displayname = "Stone"),
	WHEAT = 4 UMETA(Displayname = "Wheat"),
	BREAD = 5 UMETA(Displayname = "Bread"),
	MEAD = 6 UMETA(Displayname = "Mead"),
	TIMBER = 7 UMETA(Displayname = "Timber"),
	WOOL = 8 UMETA(Displayname = "Wool"),
	CLOTHING = 9 UMETA(Displayname = "Clothing"),
	BRICK = 10 UMETA(Displayname = "Brick"),
};

UENUM(BlueprintType)
enum class E_BuildingTypes : uint8 {
	UNDEFINED = 0 UMETA(DisplayName = "UNDEFINED"),
	CAMPFIRE = 1 UMETA(DisplayName = "Campfire"),
	TENT = 2 UMETA(DisplayName = "Tent"),
	STORAGE = 3 UMETA(DisplayName = "Storage_DEPRECATED"),
	GATHERER_HUT = 4 UMETA(DisplayName = "Gatherer_Hut"),
	WOODCUTTER = 5 UMETA(DisplayName = "Woodcuttter"),
	STONECUTTER = 6 UMETA(DisplayName = "Stonecutter"),
	FARM = 7 UMETA(DisplayName = "Farm"),
	BAKERY = 8 UMETA(DisplayName = "Bakery"),
	ROAD= 9 UMETA(DisplayName = "Road"),
	DECORATIVE_ITEM = 10 UMETA(DisplayName = "Decorative_Item"),
	TRIBE_HOUSE = 11 UMETA(DisplayName = "Tribe_House"),
	BUILDERS_HUT = 12 UMETA(DisplayName = "Builders_Hut"),
	STONE_HOUSE = 13 UMETA(DisplayName = "Stone_House"),
	GUARDPOST = 14 UMETA(DisplayName = "Guardpost"),
	PLACE_OF_WORSHIP = 15 UMETA(DisplayName = "Place_Of_Worship"),
	PLACE_OF_ENTERTAINMENT = 16 UMETA(DisplayName = "Place_Of_Entertainment"),
	WOODWORKING_HUT = 17 UMETA(DisplayName = "Woodworking_Hut"),
	PAINTERS_HUT = 18 UMETA(DisplayName = "Painters_Hut"),
	CEMETERY = 19 UMETA(DisplayName = "Cemetery"),
	BARRACKS = 20 UMETA(DisplayName = "Barracks"),
	HOUSE_OF_WORSHIP = 21 UMETA(DisplayName = "House_Of_Worship"),
	HOUSE_OF_ENTERTAINMENT = 22 UMETA(DisplayName = "House_Of_Entertainment"),
	SHEEP_FARM = 23 UMETA(DisplayName = "Sheep_Farm"),
	WEAVER = 24 UMETA(DisplayName = "Weaver"),
	BRICKMAKER_HUT = 25 UMETA(DisplayName = "Brickmaker_Hut"),
	FORT = 26 UMETA(DisplayName = "Fort"),
	TEMPLE_OF_WORSHIP = 27 UMETA(DisplayName = "Temple_Of_Worship"),
	THEATER = 28 UMETA(DisplayName = "Theater"),
	MARKET_PLACE = 29 UMETA(DisplayName = "Market_Place"),
	STORAGE_FOOD = 30 UMETA(DisplayName = "Storage_Food"),
	STORAGE_WOOD = 31 UMETA(DisplayName = "Storage_Wood"),
	STORAGE_STONE = 32 UMETA(DisplayName = "Storage_Stone"),
};


UENUM(BlueprintType)
enum class E_JobType : uint8 {
	NONE = 0 UMETA(DisplayName = "NONE"),
	JOBLESS = 1 UMETA(DisplayName = "Jobless"),
	TRANSPORTER = 2 UMETA(DisplayName = "Transporter"),
	FORAGER = 3 UMETA(DisplayName = "Forager"),
	LUMBERJACK = 4 UMETA(DisplayName = "Lumberjack"),
	STONECUTTER = 5 UMETA(DisplayName = "StoneCutter"),
	FARMER = 6 UMETA(DisplayName = "Farmer"),
	BAKER = 7 UMETA(DisplayName = "Baker"),
	BUILDER = 8 UMETA(DisplayName = "Builder"),
	GUARD = 9 UMETA(DisplayName = "Guard"),
	PRIEST = 10 UMETA(DisplayName = "Priest"),
	WOODWORKER = 11 UMETA(DisplayName = "WoodWorker"),
	BREWER = 12 UMETA(DisplayName = "Brewer"),
	HERDER = 13 UMETA(DisplayName = "Herder"),
	WEAVER = 14 UMETA(DisplayName = "Weaver"),
	BRICK_MAKER = 15 UMETA(DisplayName = "Brick Maker"),
};

UENUM(BlueprintType)
enum class E_CitizenNeeds : uint8 {
	HOUSING = 0 UMETA(DisplayName = "Housing"),
	NOURISHMENT = 1 UMETA(DisplayName = "Nourishment"),
	SAFETY = 2 UMETA(DisplayName = "Safety"),
	MEANINGFULEXISTENCE = 3 UMETA(DisplayName = "MeaningfulExistence"),
	CONNECTION = 4 UMETA(DisplayName = "Connection"),
	VISUALCOHERENCE = 5 UMETA(DisplayName = "VisualCoherence"),
	MILITARY = 6 UMETA(DisplayName = "Military"),
	RELIGION = 7 UMETA(DisplayName = "Religion"),
	ENTERTAINMENT = 8 UMETA(DisplayName = "Entertainment"),
	CLOTHING = 9 UMETA(DisplayName = "Clothing"),
};

USTRUCT(BlueprintType)
struct FCitizenNeeds {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		E_CitizenNeeds SpecificNeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxWeight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CurrentWeight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Fulfilment;
};

USTRUCT(BlueprintType) 
struct FBuildingResources {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Wood;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Stone;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Timber;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Brick;
};

