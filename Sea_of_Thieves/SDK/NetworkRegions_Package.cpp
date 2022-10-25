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
	 * 		Name   -> PredefinedFunction UNetworkRegionServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetworkRegionServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkRegions.NetworkRegionServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetworkRegionService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetworkRegionService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkRegions.NetworkRegionService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARegionAssetCacheActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARegionAssetCacheActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkRegions.RegionAssetCacheActor");
		return ptr;
	}

}


