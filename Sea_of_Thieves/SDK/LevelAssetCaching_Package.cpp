/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URegionalAssetCacheInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URegionalAssetCacheInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelAssetCaching.RegionalAssetCacheInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URegionLookupInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URegionLookupInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelAssetCaching.RegionLookupInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelAssetCachingService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelAssetCachingService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelAssetCaching.LevelAssetCachingService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URegionalAssetListDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URegionalAssetListDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelAssetCaching.RegionalAssetListDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URegionalAssetCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URegionalAssetCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelAssetCaching.RegionalAssetCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URegionalAssetListSetupDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URegionalAssetListSetupDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelAssetCaching.RegionalAssetListSetupDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URegionalAssetListWorldSetupDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URegionalAssetListWorldSetupDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelAssetCaching.RegionalAssetListWorldSetupDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URegionLookupGeneratedGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URegionLookupGeneratedGrid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelAssetCaching.RegionLookupGeneratedGrid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URegionLookupSeaId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URegionLookupSeaId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelAssetCaching.RegionLookupSeaId");
		return ptr;
	}

}


