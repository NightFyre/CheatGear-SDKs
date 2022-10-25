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
	 * 		Name   -> Function BP_FindMatchButton.BP_FindMatchButton_C.Get_ActiveHighlightContainer_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_FindMatchButton_C::Get_ActiveHighlightContainer_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FindMatchButton.BP_FindMatchButton_C.Get_ActiveHighlightContainer_Visibility_1");
		
		UBP_FindMatchButton_C_Get_ActiveHighlightContainer_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FindMatchButton.BP_FindMatchButton_C.UpdateKeyAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class FName                                        Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FindMatchButton_C::UpdateKeyAction(const struct FKey& Key, const class FName& Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FindMatchButton.BP_FindMatchButton_C.UpdateKeyAction");
		
		UBP_FindMatchButton_C_UpdateKeyAction_Params params {};
		params.Key = Key;
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FindMatchButton.BP_FindMatchButton_C.UpdateText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        newText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_FindMatchButton_C::UpdateText(const class FText& newText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FindMatchButton.BP_FindMatchButton_C.UpdateText");
		
		UBP_FindMatchButton_C_UpdateText_Params params {};
		params.newText = newText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FindMatchButton.BP_FindMatchButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_FindMatchButton_C::BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FindMatchButton.BP_FindMatchButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBP_FindMatchButton_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FindMatchButton.BP_FindMatchButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_FindMatchButton_C::BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FindMatchButton.BP_FindMatchButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UBP_FindMatchButton_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FindMatchButton.BP_FindMatchButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_FindMatchButton_C::BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FindMatchButton.BP_FindMatchButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UBP_FindMatchButton_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FindMatchButton.BP_FindMatchButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FindMatchButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FindMatchButton.BP_FindMatchButton_C.PreConstruct");
		
		UBP_FindMatchButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FindMatchButton.BP_FindMatchButton_C.ExecuteUbergraph_BP_FindMatchButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FindMatchButton_C::ExecuteUbergraph_BP_FindMatchButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FindMatchButton.BP_FindMatchButton_C.ExecuteUbergraph_BP_FindMatchButton");
		
		UBP_FindMatchButton_C_ExecuteUbergraph_BP_FindMatchButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FindMatchButton.BP_FindMatchButton_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FindMatchButton_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FindMatchButton.BP_FindMatchButton_C.OnClicked__DelegateSignature");
		
		UBP_FindMatchButton_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_FindMatchButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FindMatchButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FindMatchButton.BP_FindMatchButton_C");
		return ptr;
	}

}


