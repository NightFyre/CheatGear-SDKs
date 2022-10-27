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
	 * 		Name   -> PredefinedFunction UBP_MountTypePrisonerHandLeft_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MountTypePrisonerHandLeft_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MountTypePrisonerHandLeft.BP_MountTypePrisonerHandLeft_C");
		return ptr;
	}

}


