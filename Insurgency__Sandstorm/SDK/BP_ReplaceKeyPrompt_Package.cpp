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
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplaceKeyPrompt.BP_ReplaceKeyPrompt_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ReplaceKeyPrompt_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplaceKeyPrompt.BP_ReplaceKeyPrompt_C.Construct");
		
		UBP_ReplaceKeyPrompt_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplaceKeyPrompt.BP_ReplaceKeyPrompt_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_10_OnConfirmed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ReplaceKeyPrompt_C::BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_10_OnConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplaceKeyPrompt.BP_ReplaceKeyPrompt_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_10_OnConfirmed__DelegateSignature");
		
		UBP_ReplaceKeyPrompt_C_BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_10_OnConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplaceKeyPrompt.BP_ReplaceKeyPrompt_C.ExecuteUbergraph_BP_ReplaceKeyPrompt
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ReplaceKeyPrompt_C::ExecuteUbergraph_BP_ReplaceKeyPrompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplaceKeyPrompt.BP_ReplaceKeyPrompt_C.ExecuteUbergraph_BP_ReplaceKeyPrompt");
		
		UBP_ReplaceKeyPrompt_C_ExecuteUbergraph_BP_ReplaceKeyPrompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplaceKeyPrompt.BP_ReplaceKeyPrompt_C.OnReplaceBinding__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKeyBindingOption                           KeyBindingOption                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FKey                                        ConflictKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class FName                                        ConflictAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ReplaceKeyPrompt_C::OnReplaceBinding__DelegateSignature(const struct FKeyBindingOption& KeyBindingOption, const struct FKey& ConflictKey, const class FName& ConflictAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplaceKeyPrompt.BP_ReplaceKeyPrompt_C.OnReplaceBinding__DelegateSignature");
		
		UBP_ReplaceKeyPrompt_C_OnReplaceBinding__DelegateSignature_Params params {};
		params.KeyBindingOption = KeyBindingOption;
		params.ConflictKey = ConflictKey;
		params.ConflictAction = ConflictAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ReplaceKeyPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ReplaceKeyPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ReplaceKeyPrompt.BP_ReplaceKeyPrompt_C");
		return ptr;
	}

}


