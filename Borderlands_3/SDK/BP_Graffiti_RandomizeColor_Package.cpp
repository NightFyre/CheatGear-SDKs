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
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Graffiti_RandomizeColor.BP_Graffiti_RandomizeColor_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Graffiti_RandomizeColor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Graffiti_RandomizeColor.BP_Graffiti_RandomizeColor_C.UserConstructionScript");
		
		ABP_Graffiti_RandomizeColor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Graffiti_RandomizeColor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Graffiti_RandomizeColor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Graffiti_RandomizeColor.BP_Graffiti_RandomizeColor_C");
		return ptr;
	}

}


