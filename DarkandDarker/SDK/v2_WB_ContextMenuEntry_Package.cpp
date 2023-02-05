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
	 * 		Name   -> Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.Get Text
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText Uv2_WB_ContextMenuEntry_C::GetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.Get Text");
		
		Uv2_WB_ContextMenuEntry_C_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.BndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Uv2_WB_ContextMenuEntry_C::BndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.BndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		Uv2_WB_ContextMenuEntry_C_BndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.BndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Uv2_WB_ContextMenuEntry_C::BndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.BndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		Uv2_WB_ContextMenuEntry_C_BndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.BndEvt__v2_WB_ContextMenuEntry_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Uv2_WB_ContextMenuEntry_C::BndEvt__v2_WB_ContextMenuEntry_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.BndEvt__v2_WB_ContextMenuEntry_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		Uv2_WB_ContextMenuEntry_C_BndEvt__v2_WB_ContextMenuEntry_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.ExecuteUbergraph_v2_WB_ContextMenuEntry
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Uv2_WB_ContextMenuEntry_C::ExecuteUbergraph_v2_WB_ContextMenuEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.ExecuteUbergraph_v2_WB_ContextMenuEntry");
		
		Uv2_WB_ContextMenuEntry_C_ExecuteUbergraph_v2_WB_ContextMenuEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uv2_WB_ContextMenuEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uv2_WB_ContextMenuEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C");
		return ptr;
	}

}


