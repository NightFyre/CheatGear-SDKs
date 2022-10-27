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
	 * 		Name   -> PredefinedFunction UAsyncLoadingMonitoringServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAsyncLoadingMonitoringServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AsyncLoadingMonitoring.AsyncLoadingMonitoringServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAsyncLoadingMonitoringService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAsyncLoadingMonitoringService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AsyncLoadingMonitoring.AsyncLoadingMonitoringService");
		return ptr;
	}

}


