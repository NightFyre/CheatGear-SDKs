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
	 * 		Name   -> Function AnimAction_Drop_Right.AnimAction_Drop_Right_C.OnMontageEndedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimAction_Drop_Right_C::OnMontageEndedEvent(bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Drop_Right.AnimAction_Drop_Right_C.OnMontageEndedEvent");
		
		UAnimAction_Drop_Right_C_OnMontageEndedEvent_Params params {};
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_Drop_Right.AnimAction_Drop_Right_C.Drop
	 * 		Flags  -> ()
	 */
	void UAnimAction_Drop_Right_C::Drop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Drop_Right.AnimAction_Drop_Right_C.Drop");
		
		UAnimAction_Drop_Right_C_Drop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_Drop_Right.AnimAction_Drop_Right_C.TriggerAction
	 * 		Flags  -> ()
	 */
	void UAnimAction_Drop_Right_C::TriggerAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Drop_Right.AnimAction_Drop_Right_C.TriggerAction");
		
		UAnimAction_Drop_Right_C_TriggerAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_Drop_Right.AnimAction_Drop_Right_C.ExecuteUbergraph_AnimAction_Drop_Right
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimAction_Drop_Right_C::ExecuteUbergraph_AnimAction_Drop_Right(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Drop_Right.AnimAction_Drop_Right_C.ExecuteUbergraph_AnimAction_Drop_Right");
		
		UAnimAction_Drop_Right_C_ExecuteUbergraph_AnimAction_Drop_Right_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimAction_Drop_Right_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimAction_Drop_Right_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimAction_Drop_Right.AnimAction_Drop_Right_C");
		return ptr;
	}

}


