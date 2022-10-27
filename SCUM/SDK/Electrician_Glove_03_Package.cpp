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
	 * 		Name   -> PredefinedFunction AElectrician_Glove_03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElectrician_Glove_03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Electrician_Glove_03.Electrician_Glove_03_C");
		return ptr;
	}

}


