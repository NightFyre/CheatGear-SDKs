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
	 * 		Name   -> PredefinedFunction UBP_WebImageDecorator_MOTD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_WebImageDecorator_MOTD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_WebImageDecorator_MOTD.BP_WebImageDecorator_MOTD_C");
		return ptr;
	}

}


