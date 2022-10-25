/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * 		Name   -> PredefinedFunction UNetAnalyticsAggregatorConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetAnalyticsAggregatorConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetCore.NetAnalyticsAggregatorConfig");
		return ptr;
	}

}


