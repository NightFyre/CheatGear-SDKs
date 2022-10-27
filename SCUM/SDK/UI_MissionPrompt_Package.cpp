/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function UI_MissionPrompt.UI_MissionPrompt_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MissionPrompt_C::BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionPrompt.UI_MissionPrompt_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UUI_MissionPrompt_C_BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionPrompt.UI_MissionPrompt_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MissionPrompt_C::BndEvt__NoButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionPrompt.UI_MissionPrompt_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UUI_MissionPrompt_C_BndEvt__NoButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionPrompt.UI_MissionPrompt_C.ExecuteUbergraph_UI_MissionPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionPrompt_C::ExecuteUbergraph_UI_MissionPrompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionPrompt.UI_MissionPrompt_C.ExecuteUbergraph_UI_MissionPrompt");
		
		UUI_MissionPrompt_C_ExecuteUbergraph_UI_MissionPrompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MissionPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MissionPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MissionPrompt.UI_MissionPrompt_C");
		return ptr;
	}

}


