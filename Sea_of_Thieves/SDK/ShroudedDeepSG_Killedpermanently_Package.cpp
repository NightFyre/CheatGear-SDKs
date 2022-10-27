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
	 * 		Name   -> PredefinedFunction UShroudedDeepSG_Killedpermanently_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShroudedDeepSG_Killedpermanently_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShroudedDeepSG_Killedpermanently.ShroudedDeepSG_Killedpermanently_C");
		return ptr;
	}

}


