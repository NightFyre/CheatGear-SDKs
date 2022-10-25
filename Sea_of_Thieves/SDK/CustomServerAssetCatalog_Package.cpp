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
	 * 		Name   -> PredefinedFunction UCustomServerAssetCatalogServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomServerAssetCatalogServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomServerAssetCatalog.CustomServerAssetCatalogServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomServerAssetCatalogService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomServerAssetCatalogService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomServerAssetCatalog.CustomServerAssetCatalogService");
		return ptr;
	}

}


