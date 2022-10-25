/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction UMatchHistoryRowData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchHistoryRowData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass MatchHistoryRowData.MatchHistoryRowData_C");
		return ptr;
	}

}


