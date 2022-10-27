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
	 * 		Name   -> Function AnimAction_Drop_Left.AnimAction_Drop_Left_C.OnMontageEndedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimAction_Drop_Left_C::OnMontageEndedEvent(bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Drop_Left.AnimAction_Drop_Left_C.OnMontageEndedEvent");
		
		UAnimAction_Drop_Left_C_OnMontageEndedEvent_Params params {};
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_Drop_Left.AnimAction_Drop_Left_C.Drop
	 * 		Flags  -> ()
	 */
	void UAnimAction_Drop_Left_C::Drop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Drop_Left.AnimAction_Drop_Left_C.Drop");
		
		UAnimAction_Drop_Left_C_Drop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_Drop_Left.AnimAction_Drop_Left_C.TriggerAction
	 * 		Flags  -> ()
	 */
	void UAnimAction_Drop_Left_C::TriggerAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Drop_Left.AnimAction_Drop_Left_C.TriggerAction");
		
		UAnimAction_Drop_Left_C_TriggerAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_Drop_Left.AnimAction_Drop_Left_C.ExecuteUbergraph_AnimAction_Drop_Left
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimAction_Drop_Left_C::ExecuteUbergraph_AnimAction_Drop_Left(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Drop_Left.AnimAction_Drop_Left_C.ExecuteUbergraph_AnimAction_Drop_Left");
		
		UAnimAction_Drop_Left_C_ExecuteUbergraph_AnimAction_Drop_Left_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimAction_Drop_Left_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimAction_Drop_Left_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimAction_Drop_Left.AnimAction_Drop_Left_C");
		return ptr;
	}

}


