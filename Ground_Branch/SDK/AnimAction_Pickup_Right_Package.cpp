/**
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
	 * 		Name   -> Function AnimAction_Pickup_Right.AnimAction_Pickup_Right_C.OnMontageEndedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimAction_Pickup_Right_C::OnMontageEndedEvent(bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Pickup_Right.AnimAction_Pickup_Right_C.OnMontageEndedEvent");
		
		UAnimAction_Pickup_Right_C_OnMontageEndedEvent_Params params {};
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_Pickup_Right.AnimAction_Pickup_Right_C.TriggerAction
	 * 		Flags  -> ()
	 */
	void UAnimAction_Pickup_Right_C::TriggerAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Pickup_Right.AnimAction_Pickup_Right_C.TriggerAction");
		
		UAnimAction_Pickup_Right_C_TriggerAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_Pickup_Right.AnimAction_Pickup_Right_C.Pickup
	 * 		Flags  -> ()
	 */
	void UAnimAction_Pickup_Right_C::Pickup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Pickup_Right.AnimAction_Pickup_Right_C.Pickup");
		
		UAnimAction_Pickup_Right_C_Pickup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_Pickup_Right.AnimAction_Pickup_Right_C.UnequipCheck
	 * 		Flags  -> ()
	 */
	void UAnimAction_Pickup_Right_C::UnequipCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Pickup_Right.AnimAction_Pickup_Right_C.UnequipCheck");
		
		UAnimAction_Pickup_Right_C_UnequipCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_Pickup_Right.AnimAction_Pickup_Right_C.ExecuteUbergraph_AnimAction_Pickup_Right
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimAction_Pickup_Right_C::ExecuteUbergraph_AnimAction_Pickup_Right(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Pickup_Right.AnimAction_Pickup_Right_C.ExecuteUbergraph_AnimAction_Pickup_Right");
		
		UAnimAction_Pickup_Right_C_ExecuteUbergraph_AnimAction_Pickup_Right_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimAction_Pickup_Right_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimAction_Pickup_Right_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimAction_Pickup_Right.AnimAction_Pickup_Right_C");
		return ptr;
	}

}


