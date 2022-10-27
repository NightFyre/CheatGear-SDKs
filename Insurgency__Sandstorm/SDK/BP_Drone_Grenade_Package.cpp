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
	 * 		Name   -> Function BP_Drone_Grenade.BP_Drone_Grenade_C.BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 */
	void ABP_Drone_Grenade_C::BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Drone_Grenade.BP_Drone_Grenade_C.BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature");
		
		ABP_Drone_Grenade_C_BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Drone_Grenade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Drone_Grenade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Drone_Grenade.BP_Drone_Grenade_C");
		return ptr;
	}

}


