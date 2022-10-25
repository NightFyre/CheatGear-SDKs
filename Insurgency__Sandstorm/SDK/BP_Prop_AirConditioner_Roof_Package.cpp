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
	 * 		RVA    -> 0x00CBA790
	 * 		Name   -> Function BP_Prop_AirConditioner_Roof.BP_Prop_AirConditioner_Roof_C.UserConstructionScript
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Prop_AirConditioner_Roof_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_AirConditioner_Roof.BP_Prop_AirConditioner_Roof_C.UserConstructionScript");
		
		ABP_Prop_AirConditioner_Roof_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4AC0
	 * 		Name   -> Function BP_Prop_AirConditioner_Roof.BP_Prop_AirConditioner_Roof_C.OnReset
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Prop_AirConditioner_Roof_C::OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_AirConditioner_Roof.BP_Prop_AirConditioner_Roof_C.OnReset");
		
		ABP_Prop_AirConditioner_Roof_C_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009DAA00
	 * 		Name   -> Function BP_Prop_AirConditioner_Roof.BP_Prop_AirConditioner_Roof_C.BlueprintOnBreak
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Prop_AirConditioner_Roof_C::BlueprintOnBreak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_AirConditioner_Roof.BP_Prop_AirConditioner_Roof_C.BlueprintOnBreak");
		
		ABP_Prop_AirConditioner_Roof_C_BlueprintOnBreak_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Prop_AirConditioner_Roof_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Prop_AirConditioner_Roof_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Prop_AirConditioner_Roof.BP_Prop_AirConditioner_Roof_C");
		return ptr;
	}

}


