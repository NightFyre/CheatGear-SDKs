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
	 * 		Name   -> PredefinedFunction UBP_Emote_SkeletonCurse_Point_Desc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Emote_SkeletonCurse_Point_Desc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Emote_SkeletonCurse_Point_Desc.BP_Emote_SkeletonCurse_Point_Desc_C");
		return ptr;
	}

}


