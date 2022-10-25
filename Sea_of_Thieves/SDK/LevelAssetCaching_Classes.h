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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class LevelAssetCaching.RegionalAssetCacheInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URegionalAssetCacheInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelAssetCaching.RegionLookupInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URegionLookupInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelAssetCaching.LevelAssetCachingService
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class ULevelAssetCachingService : public UObject
	{
	public:
		unsigned char                                              UnknownData_CKAA[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CurrentRegion;                                           // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              AssetCache[0x10];                                        // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty LevelAssetCaching.LevelAssetCachingService.AssetCache
		unsigned char                                              RegionLookup[0x10];                                      // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty LevelAssetCaching.LevelAssetCachingService.RegionLookup
		TWeakObjectPtr<class APawn>                                CachedPawn;                                              // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelAssetCaching.RegionalAssetListDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class URegionalAssetListDataAsset : public UDataAsset
	{
	public:
		TArray<struct FStringAssetReference>                       RegionAssets;                                            // 0x0028(0x0010) Edit, ZeroConstructor, EditConst

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelAssetCaching.RegionalAssetCache
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class URegionalAssetCache : public UObject
	{
	public:
		unsigned char                                              UnknownData_8LV0[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URegionalAssetListDataAsset*                         CurrentListAsset;                                        // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YI02[0x98];                                  // 0x0040(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelAssetCaching.RegionalAssetListSetupDataAsset
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class URegionalAssetListSetupDataAsset : public UDataAsset
	{
	public:
		TMap<class FName, struct FStringAssetReference>            ListMapping;                                             // 0x0028(0x0050) Edit, ZeroConstructor, EditConst

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelAssetCaching.RegionalAssetListWorldSetupDataAsset
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class URegionalAssetListWorldSetupDataAsset : public UDataAsset
	{
	public:
		TMap<class FString, struct FWorldRegionSetup>              WorldSetups;                                             // 0x0028(0x0050) Edit, ZeroConstructor, EditConst

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelAssetCaching.RegionLookupGeneratedGrid
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class URegionLookupGeneratedGrid : public UObject
	{
	public:
		unsigned char                                              UnknownData_VM5L[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWorldRegionSetup                                   WorldSetup;                                              // 0x0030(0x0028) Edit, EditConst
		unsigned char                                              UnknownData_O6X7[0x58];                                  // 0x0058(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelAssetCaching.RegionLookupSeaId
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class URegionLookupSeaId : public UObject
	{
	public:
		unsigned char                                              UnknownData_T0V1[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
