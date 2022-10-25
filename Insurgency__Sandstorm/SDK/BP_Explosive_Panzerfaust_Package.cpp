/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04DB37A0
	 * 		Name   -> Function BP_Explosive_Panzerfaust.BP_Explosive_Panzerfaust_C.BlueprintOnDropped
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Explosive_Panzerfaust_C::BlueprintOnDropped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosive_Panzerfaust.BP_Explosive_Panzerfaust_C.BlueprintOnDropped");
		
		ABP_Explosive_Panzerfaust_C_BlueprintOnDropped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Explosive_Panzerfaust_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Explosive_Panzerfaust_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Explosive_Panzerfaust.BP_Explosive_Panzerfaust_C");
		return ptr;
	}

}


