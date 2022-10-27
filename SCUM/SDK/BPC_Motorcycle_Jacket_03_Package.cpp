/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction ABPC_Motorcycle_Jacket_03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPC_Motorcycle_Jacket_03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Motorcycle_Jacket_03.BPC_Motorcycle_Jacket_03_C");
		return ptr;
	}

}


