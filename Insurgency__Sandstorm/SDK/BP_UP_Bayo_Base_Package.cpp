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
	 * 		Name   -> PredefinedFunction UBP_UP_Bayo_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_UP_Bayo_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_UP_Bayo_Base.BP_UP_Bayo_Base_C");
		return ptr;
	}

}


