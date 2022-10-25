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
	 * Enum NetworkRegions.ENetworkRegion
	 */
	enum class ENetworkRegion : uint8_t
	{
		MainWorld = 0,
		DeepSea   = 1,
		Max       = 2,
		MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NetworkRegions.RegionAssetsList
	 * Size -> 0x0018
	 */
	struct FRegionAssetsList
	{
	public:
		ENetworkRegion                                             Region;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UUIS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStringAssetReference>                       CachedAssetsForRegion;                                   // 0x0008(0x0010) ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
