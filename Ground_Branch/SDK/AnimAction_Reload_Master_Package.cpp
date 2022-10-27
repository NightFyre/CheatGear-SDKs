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
	 * 		Name   -> Function AnimAction_Reload_Master.AnimAction_Reload_Master_C.OnMontageEndedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimAction_Reload_Master_C::OnMontageEndedEvent(bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Reload_Master.AnimAction_Reload_Master_C.OnMontageEndedEvent");
		
		UAnimAction_Reload_Master_C_OnMontageEndedEvent_Params params {};
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_Reload_Master.AnimAction_Reload_Master_C.TriggerAction
	 * 		Flags  -> ()
	 */
	void UAnimAction_Reload_Master_C::TriggerAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Reload_Master.AnimAction_Reload_Master_C.TriggerAction");
		
		UAnimAction_Reload_Master_C_TriggerAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_Reload_Master.AnimAction_Reload_Master_C.TriggerActionInternal
	 * 		Flags  -> ()
	 */
	void UAnimAction_Reload_Master_C::TriggerActionInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Reload_Master.AnimAction_Reload_Master_C.TriggerActionInternal");
		
		UAnimAction_Reload_Master_C_TriggerActionInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_Reload_Master.AnimAction_Reload_Master_C.ExecuteUbergraph_AnimAction_Reload_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimAction_Reload_Master_C::ExecuteUbergraph_AnimAction_Reload_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Reload_Master.AnimAction_Reload_Master_C.ExecuteUbergraph_AnimAction_Reload_Master");
		
		UAnimAction_Reload_Master_C_ExecuteUbergraph_AnimAction_Reload_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimAction_Reload_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimAction_Reload_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimAction_Reload_Master.AnimAction_Reload_Master_C");
		return ptr;
	}

}


