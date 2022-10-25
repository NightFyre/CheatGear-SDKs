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
	 * 		Name   -> Function WBP_ColourPicker_Content.WBP_ColourPicker_Content_C.BndEvt__Button_Done_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ColourPicker_Content_C::BndEvt__Button_Done_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ColourPicker_Content.WBP_ColourPicker_Content_C.BndEvt__Button_Done_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ColourPicker_Content_C_BndEvt__Button_Done_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ColourPicker_Content.WBP_ColourPicker_Content_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ColourPicker_Content_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ColourPicker_Content.WBP_ColourPicker_Content_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ColourPicker_Content_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ColourPicker_Content.WBP_ColourPicker_Content_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_ColourPicker_Content_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ColourPicker_Content.WBP_ColourPicker_Content_C.Construct");
		
		UWBP_ColourPicker_Content_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ColourPicker_Content.WBP_ColourPicker_Content_C.ExecuteUbergraph_WBP_ColourPicker_Content
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ColourPicker_Content_C::ExecuteUbergraph_WBP_ColourPicker_Content(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ColourPicker_Content.WBP_ColourPicker_Content_C.ExecuteUbergraph_WBP_ColourPicker_Content");
		
		UWBP_ColourPicker_Content_C_ExecuteUbergraph_WBP_ColourPicker_Content_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ColourPicker_Content.WBP_ColourPicker_Content_C.OnCancelled__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ColourPicker_Content_C::OnCancelled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ColourPicker_Content.WBP_ColourPicker_Content_C.OnCancelled__DelegateSignature");
		
		UWBP_ColourPicker_Content_C_OnCancelled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ColourPicker_Content.WBP_ColourPicker_Content_C.OnColourPicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Colour                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ColourPicker_Content_C::OnColourPicked__DelegateSignature(const struct FLinearColor& Colour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ColourPicker_Content.WBP_ColourPicker_Content_C.OnColourPicked__DelegateSignature");
		
		UWBP_ColourPicker_Content_C_OnColourPicked__DelegateSignature_Params params {};
		params.Colour = Colour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ColourPicker_Content_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ColourPicker_Content_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ColourPicker_Content.WBP_ColourPicker_Content_C");
		return ptr;
	}

}


