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
	 * 		Name   -> Function WB_CommonBtn_Text.WB_CommonBtn_Text_C.SetButtonText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InButtonText                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_CommonBtn_Text_C::SetButtonText(const class FText& InButtonText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CommonBtn_Text.WB_CommonBtn_Text_C.SetButtonText");
		
		UWB_CommonBtn_Text_C_SetButtonText_Params params {};
		params.InButtonText = InButtonText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CommonBtn_Text.WB_CommonBtn_Text_C.BndEvt__WB_CommonBtn_Text_Btn_Common_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_CommonBtn_Text_C::BndEvt__WB_CommonBtn_Text_Btn_Common_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CommonBtn_Text.WB_CommonBtn_Text_C.BndEvt__WB_CommonBtn_Text_Btn_Common_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UWB_CommonBtn_Text_C_BndEvt__WB_CommonBtn_Text_Btn_Common_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CommonBtn_Text.WB_CommonBtn_Text_C.BndEvt__WB_CommonBtn_Text_Btn_Common_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_CommonBtn_Text_C::BndEvt__WB_CommonBtn_Text_Btn_Common_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CommonBtn_Text.WB_CommonBtn_Text_C.BndEvt__WB_CommonBtn_Text_Btn_Common_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWB_CommonBtn_Text_C_BndEvt__WB_CommonBtn_Text_Btn_Common_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CommonBtn_Text.WB_CommonBtn_Text_C.BndEvt__WB_CommonBtn_Text_Btn_Common_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_CommonBtn_Text_C::BndEvt__WB_CommonBtn_Text_Btn_Common_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CommonBtn_Text.WB_CommonBtn_Text_C.BndEvt__WB_CommonBtn_Text_Btn_Common_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UWB_CommonBtn_Text_C_BndEvt__WB_CommonBtn_Text_Btn_Common_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CommonBtn_Text.WB_CommonBtn_Text_C.ExecuteUbergraph_WB_CommonBtn_Text
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_CommonBtn_Text_C::ExecuteUbergraph_WB_CommonBtn_Text(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CommonBtn_Text.WB_CommonBtn_Text_C.ExecuteUbergraph_WB_CommonBtn_Text");
		
		UWB_CommonBtn_Text_C_ExecuteUbergraph_WB_CommonBtn_Text_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_CommonBtn_Text_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_CommonBtn_Text_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_CommonBtn_Text.WB_CommonBtn_Text_C");
		return ptr;
	}

}


