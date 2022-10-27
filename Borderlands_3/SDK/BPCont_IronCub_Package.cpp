/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction ABPCont_IronCub_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPCont_IronCub_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCont_IronCub.BPCont_IronCub_C");
		return ptr;
	}

}


