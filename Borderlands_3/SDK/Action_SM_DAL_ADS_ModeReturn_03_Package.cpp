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
	 * 		Name   -> PredefinedFunction UAction_SM_DAL_ADS_ModeReturn_03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_SM_DAL_ADS_ModeReturn_03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_SM_DAL_ADS_ModeReturn_03.Action_SM_DAL_ADS_ModeReturn_03_C");
		return ptr;
	}

}


