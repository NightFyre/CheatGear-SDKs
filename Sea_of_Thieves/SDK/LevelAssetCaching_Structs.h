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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LevelAssetCaching.WorldRegionSetup
	 * Size -> 0x0028
	 */
	struct FWorldRegionSetup
	{
	public:
		struct FVector2D                                           WorldBoundsOrigin;                                       // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           RegionSize;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FIntPoint                                           GridSize;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class FName>                                        RegionNames;                                             // 0x0018(0x0010) ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
