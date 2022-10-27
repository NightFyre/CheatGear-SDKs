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
	 * 		RVA    -> 0x04DB3FA0
	 * 		Name   -> Function BP_Gear_BASE_Armour.BP_Gear_BASE_Armour_C.UpdateCarrierArmourLevel
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_Gear_BASE_Armour_C::UpdateCarrierArmourLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Armour.BP_Gear_BASE_Armour_C.UpdateCarrierArmourLevel");
		
		ABP_Gear_BASE_Armour_C_UpdateCarrierArmourLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB41A0
	 * 		Name   -> Function BP_Gear_BASE_Armour.BP_Gear_BASE_Armour_C.BlueprintOnPickedUp
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Gear_BASE_Armour_C::BlueprintOnPickedUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Armour.BP_Gear_BASE_Armour_C.BlueprintOnPickedUp");
		
		ABP_Gear_BASE_Armour_C_BlueprintOnPickedUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Gear_BASE_Armour_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Gear_BASE_Armour_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Gear_BASE_Armour.BP_Gear_BASE_Armour_C");
		return ptr;
	}

}


