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
	 * 		RVA    -> 0x009DAA00
	 * 		Name   -> Function BP_Prop_SnowMan_02.BP_Prop_SnowMan_02_C.BlueprintOnBreak
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Prop_SnowMan_02_C::BlueprintOnBreak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_SnowMan_02.BP_Prop_SnowMan_02_C.BlueprintOnBreak");
		
		ABP_Prop_SnowMan_02_C_BlueprintOnBreak_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Prop_SnowMan_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Prop_SnowMan_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Prop_SnowMan_02.BP_Prop_SnowMan_02_C");
		return ptr;
	}

}


