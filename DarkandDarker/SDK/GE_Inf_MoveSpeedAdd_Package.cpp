/**
 * Name: Dark_and_Darker
 * Version: Playtest_3_Hotfix_1
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
	 * 		Name   -> PredefinedFunction UGE_Inf_MoveSpeedAdd_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Inf_MoveSpeedAdd_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Inf_MoveSpeedAdd.GE_Inf_MoveSpeedAdd_C");
		return ptr;
	}

}


