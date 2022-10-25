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
	 * 		Name   -> Function BP_PauseDialogue.BP_PauseDialogue_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_PauseDialogue_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PauseDialogue.BP_PauseDialogue_C.OnFocusReceived");
		
		UBP_PauseDialogue_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PauseDialogue.BP_PauseDialogue_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_PauseDialogue_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PauseDialogue.BP_PauseDialogue_C.Construct");
		
		UBP_PauseDialogue_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PauseDialogue.BP_PauseDialogue_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PauseDialogue_C::BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PauseDialogue.BP_PauseDialogue_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBP_PauseDialogue_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PauseDialogue.BP_PauseDialogue_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PauseDialogue_C::BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PauseDialogue.BP_PauseDialogue_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UBP_PauseDialogue_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PauseDialogue.BP_PauseDialogue_C.ExecuteUbergraph_BP_PauseDialogue
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PauseDialogue_C::ExecuteUbergraph_BP_PauseDialogue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PauseDialogue.BP_PauseDialogue_C.ExecuteUbergraph_BP_PauseDialogue");
		
		UBP_PauseDialogue_C_ExecuteUbergraph_BP_PauseDialogue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PauseDialogue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PauseDialogue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PauseDialogue.BP_PauseDialogue_C");
		return ptr;
	}

}


