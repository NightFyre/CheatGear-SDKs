﻿/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function BP_DroppedItemImpact_M9Mag_Wood.BP_DroppedItemImpact_M9Mag_Wood_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DroppedItemImpact_M9Mag_Wood_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedItemImpact_M9Mag_Wood.BP_DroppedItemImpact_M9Mag_Wood_C.ReceiveBeginPlay");
		
		ABP_DroppedItemImpact_M9Mag_Wood_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DroppedItemImpact_M9Mag_Wood.BP_DroppedItemImpact_M9Mag_Wood_C.ExecuteUbergraph_BP_DroppedItemImpact_M9Mag_Wood
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroppedItemImpact_M9Mag_Wood_C::ExecuteUbergraph_BP_DroppedItemImpact_M9Mag_Wood(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedItemImpact_M9Mag_Wood.BP_DroppedItemImpact_M9Mag_Wood_C.ExecuteUbergraph_BP_DroppedItemImpact_M9Mag_Wood");
		
		ABP_DroppedItemImpact_M9Mag_Wood_C_ExecuteUbergraph_BP_DroppedItemImpact_M9Mag_Wood_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DroppedItemImpact_M9Mag_Wood_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DroppedItemImpact_M9Mag_Wood_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DroppedItemImpact_M9Mag_Wood.BP_DroppedItemImpact_M9Mag_Wood_C");
		return ptr;
	}

}


