#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum CustomServerAssetCatalog.GameAssetType
	 */
	enum class EGameAssetType : uint8_t
	{
		GameAssetType_ITEM              = 0,
		GameAssetType_SKELETON          = 1,
		GameAssetType_GameAssetType_MAX = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CustomServerAssetCatalog.GameAssetModel
	 * Size -> 0x0028
	 */
	struct FGameAssetModel
	{
	public:
		class FString                                              fullPath;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              FriendlyName;                                            // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    performanceWeight;                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4RBE[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerAssetCatalog.GameAssetCatalogModel
	 * Size -> 0x00A0
	 */
	struct FGameAssetCatalogModel
	{
	public:
		TMap<class FString, struct FGameAssetModel>                gameAssetItems;                                          // 0x0000(0x0050) ZeroConstructor
		TMap<class FString, struct FGameAssetModel>                gameAssetSkeletons;                                      // 0x0050(0x0050) ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
