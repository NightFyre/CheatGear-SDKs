/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_Footprint.BP_Footprint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Footprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Footprint.BP_Footprint_C.ReceiveBeginPlay");
		
		ABP_Footprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_Footprint.BP_Footprint_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Footprint_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Footprint.BP_Footprint_C.ReceiveTick");
		
		ABP_Footprint_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_Footprint.BP_Footprint_C.BndEvt__BP_Footprint_DCTagCollisionDetector_K2Node_ComponentBoundEvent_0_GameplayTagCollisionDetectedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDetected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAccountDataReplication                     AccountDataReplication                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_Footprint_C::BndEvt__BP_Footprint_DCTagCollisionDetector_K2Node_ComponentBoundEvent_0_GameplayTagCollisionDetectedSignature__DelegateSignature(bool bDetected, const struct FAccountDataReplication& AccountDataReplication)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Footprint.BP_Footprint_C.BndEvt__BP_Footprint_DCTagCollisionDetector_K2Node_ComponentBoundEvent_0_GameplayTagCollisionDetectedSignature__DelegateSignature");
		
		ABP_Footprint_C_BndEvt__BP_Footprint_DCTagCollisionDetector_K2Node_ComponentBoundEvent_0_GameplayTagCollisionDetectedSignature__DelegateSignature_Params params {};
		params.bDetected = bDetected;
		params.AccountDataReplication = AccountDataReplication;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_Footprint.BP_Footprint_C.ExecuteUbergraph_BP_Footprint
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Footprint_C::ExecuteUbergraph_BP_Footprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Footprint.BP_Footprint_C.ExecuteUbergraph_BP_Footprint");
		
		ABP_Footprint_C_ExecuteUbergraph_BP_Footprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Footprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Footprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Footprint.BP_Footprint_C");
		return ptr;
	}

}


