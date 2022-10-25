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
	 * 		Name   -> Function BP_Highlights_Delete_Dialogue.BP_Highlights_Delete_Dialogue_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_12_OnCanceled__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Highlights_Delete_Dialogue_C::BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_12_OnCanceled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Highlights_Delete_Dialogue.BP_Highlights_Delete_Dialogue_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_12_OnCanceled__DelegateSignature");
		
		UBP_Highlights_Delete_Dialogue_C_BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_12_OnCanceled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Highlights_Delete_Dialogue.BP_Highlights_Delete_Dialogue_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_19_OnConfirmed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Highlights_Delete_Dialogue_C::BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_19_OnConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Highlights_Delete_Dialogue.BP_Highlights_Delete_Dialogue_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_19_OnConfirmed__DelegateSignature");
		
		UBP_Highlights_Delete_Dialogue_C_BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_19_OnConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Highlights_Delete_Dialogue.BP_Highlights_Delete_Dialogue_C.ExecuteUbergraph_BP_Highlights_Delete_Dialogue
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Highlights_Delete_Dialogue_C::ExecuteUbergraph_BP_Highlights_Delete_Dialogue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Highlights_Delete_Dialogue.BP_Highlights_Delete_Dialogue_C.ExecuteUbergraph_BP_Highlights_Delete_Dialogue");
		
		UBP_Highlights_Delete_Dialogue_C_ExecuteUbergraph_BP_Highlights_Delete_Dialogue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Highlights_Delete_Dialogue.BP_Highlights_Delete_Dialogue_C.OnCancelPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Highlights_Delete_Dialogue_C::OnCancelPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Highlights_Delete_Dialogue.BP_Highlights_Delete_Dialogue_C.OnCancelPressed__DelegateSignature");
		
		UBP_Highlights_Delete_Dialogue_C_OnCancelPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Highlights_Delete_Dialogue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Highlights_Delete_Dialogue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Highlights_Delete_Dialogue.BP_Highlights_Delete_Dialogue_C");
		return ptr;
	}

}


