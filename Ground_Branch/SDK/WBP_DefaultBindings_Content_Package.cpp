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
	 * 		Name   -> Function WBP_DefaultBindings_Content.WBP_DefaultBindings_Content_C.BndEvt__Button_Controller_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_DefaultBindings_Content_C::BndEvt__Button_Controller_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DefaultBindings_Content.WBP_DefaultBindings_Content_C.BndEvt__Button_Controller_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_DefaultBindings_Content_C_BndEvt__Button_Controller_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DefaultBindings_Content.WBP_DefaultBindings_Content_C.BndEvt__Button_MouseKeyboard_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_DefaultBindings_Content_C::BndEvt__Button_MouseKeyboard_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DefaultBindings_Content.WBP_DefaultBindings_Content_C.BndEvt__Button_MouseKeyboard_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_DefaultBindings_Content_C_BndEvt__Button_MouseKeyboard_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DefaultBindings_Content.WBP_DefaultBindings_Content_C.ExecuteUbergraph_WBP_DefaultBindings_Content
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DefaultBindings_Content_C::ExecuteUbergraph_WBP_DefaultBindings_Content(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DefaultBindings_Content.WBP_DefaultBindings_Content_C.ExecuteUbergraph_WBP_DefaultBindings_Content");
		
		UWBP_DefaultBindings_Content_C_ExecuteUbergraph_WBP_DefaultBindings_Content_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DefaultBindings_Content.WBP_DefaultBindings_Content_C.OnSetDefaults__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bControllerDefaults                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DefaultBindings_Content_C::OnSetDefaults__DelegateSignature(bool bControllerDefaults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DefaultBindings_Content.WBP_DefaultBindings_Content_C.OnSetDefaults__DelegateSignature");
		
		UWBP_DefaultBindings_Content_C_OnSetDefaults__DelegateSignature_Params params {};
		params.bControllerDefaults = bControllerDefaults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DefaultBindings_Content_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DefaultBindings_Content_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DefaultBindings_Content.WBP_DefaultBindings_Content_C");
		return ptr;
	}

}


