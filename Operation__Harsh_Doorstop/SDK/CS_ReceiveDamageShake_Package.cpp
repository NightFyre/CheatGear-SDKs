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
	 * 		Name   -> PredefinedFunction UCS_ReceiveDamageShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_ReceiveDamageShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CS_ReceiveDamageShake.CS_ReceiveDamageShake_C");
		return ptr;
	}

}


