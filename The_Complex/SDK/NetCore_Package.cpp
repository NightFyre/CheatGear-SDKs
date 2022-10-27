/**
 * Name: The_Complex
 * Version: 9349459
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
	 * 		Name   -> PredefinedFunction UStatePerObjectConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatePerObjectConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetCore.StatePerObjectConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEscalationManagerConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEscalationManagerConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetCore.EscalationManagerConfig");
		return ptr;
	}

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


