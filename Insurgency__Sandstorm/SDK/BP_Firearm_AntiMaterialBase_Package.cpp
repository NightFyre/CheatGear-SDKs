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
	 * 		RVA    -> 0x04DB46A0
	 * 		Name   -> Function BP_Firearm_AntiMaterialBase.BP_Firearm_AntiMaterialBase_C.TriggerHearingLoss
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_Firearm_AntiMaterialBase_C::TriggerHearingLoss()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_AntiMaterialBase.BP_Firearm_AntiMaterialBase_C.TriggerHearingLoss");
		
		ABP_Firearm_AntiMaterialBase_C_TriggerHearingLoss_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3A20
	 * 		Name   -> Function BP_Firearm_AntiMaterialBase.BP_Firearm_AntiMaterialBase_C.ClearFiredShotsEvent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_Firearm_AntiMaterialBase_C::ClearFiredShotsEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_AntiMaterialBase.BP_Firearm_AntiMaterialBase_C.ClearFiredShotsEvent");
		
		ABP_Firearm_AntiMaterialBase_C_ClearFiredShotsEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3620
	 * 		Name   -> Function BP_Firearm_AntiMaterialBase.BP_Firearm_AntiMaterialBase_C.ClearFiredShots
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_Firearm_AntiMaterialBase_C::ClearFiredShots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_AntiMaterialBase.BP_Firearm_AntiMaterialBase_C.ClearFiredShots");
		
		ABP_Firearm_AntiMaterialBase_C_ClearFiredShots_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB37A0
	 * 		Name   -> Function BP_Firearm_AntiMaterialBase.BP_Firearm_AntiMaterialBase_C.BlueprintOnFireStart
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Firearm_AntiMaterialBase_C::BlueprintOnFireStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_AntiMaterialBase.BP_Firearm_AntiMaterialBase_C.BlueprintOnFireStart");
		
		ABP_Firearm_AntiMaterialBase_C_BlueprintOnFireStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Firearm_AntiMaterialBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Firearm_AntiMaterialBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Firearm_AntiMaterialBase.BP_Firearm_AntiMaterialBase_C");
		return ptr;
	}

}


