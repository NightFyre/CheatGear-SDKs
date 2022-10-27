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
	 * 		Name   -> Function WBP_QuitDropDown.WBP_QuitDropDown_C.GetMenuContent
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_QuitDropDown_C::GetMenuContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuitDropDown.WBP_QuitDropDown_C.GetMenuContent");
		
		UWBP_QuitDropDown_C_GetMenuContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuitDropDown.WBP_QuitDropDown_C.BndEvt__Button_DropDown_K2Node_ComponentBoundEvent_884_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_QuitDropDown_C::BndEvt__Button_DropDown_K2Node_ComponentBoundEvent_884_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuitDropDown.WBP_QuitDropDown_C.BndEvt__Button_DropDown_K2Node_ComponentBoundEvent_884_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_QuitDropDown_C_BndEvt__Button_DropDown_K2Node_ComponentBoundEvent_884_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuitDropDown.WBP_QuitDropDown_C.BndEvt__Button_DropDown_K2Node_ComponentBoundEvent_981_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_QuitDropDown_C::BndEvt__Button_DropDown_K2Node_ComponentBoundEvent_981_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuitDropDown.WBP_QuitDropDown_C.BndEvt__Button_DropDown_K2Node_ComponentBoundEvent_981_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_QuitDropDown_C_BndEvt__Button_DropDown_K2Node_ComponentBoundEvent_981_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuitDropDown.WBP_QuitDropDown_C.BndEvt__WBP_QuitDropDown_Button_DropDown_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_QuitDropDown_C::BndEvt__WBP_QuitDropDown_Button_DropDown_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuitDropDown.WBP_QuitDropDown_C.BndEvt__WBP_QuitDropDown_Button_DropDown_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_QuitDropDown_C_BndEvt__WBP_QuitDropDown_Button_DropDown_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuitDropDown.WBP_QuitDropDown_C.ExecuteUbergraph_WBP_QuitDropDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_QuitDropDown_C::ExecuteUbergraph_WBP_QuitDropDown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuitDropDown.WBP_QuitDropDown_C.ExecuteUbergraph_WBP_QuitDropDown");
		
		UWBP_QuitDropDown_C_ExecuteUbergraph_WBP_QuitDropDown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuitDropDown.WBP_QuitDropDown_C.OnEntrySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_QuitDropDown_C::OnEntrySelected__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuitDropDown.WBP_QuitDropDown_C.OnEntrySelected__DelegateSignature");
		
		UWBP_QuitDropDown_C_OnEntrySelected__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_QuitDropDown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_QuitDropDown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_QuitDropDown.WBP_QuitDropDown_C");
		return ptr;
	}

}


