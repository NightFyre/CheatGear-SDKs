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
	 * 		Name   -> Function WBP_ColourPicker.WBP_ColourPicker_C.OnGetMenuContent
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_ColourPicker_C::OnGetMenuContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ColourPicker.WBP_ColourPicker_C.OnGetMenuContent");
		
		UWBP_ColourPicker_C_OnGetMenuContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ColourPicker.WBP_ColourPicker_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ColourPicker_C::BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ColourPicker.WBP_ColourPicker_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ColourPicker_C_BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ColourPicker.WBP_ColourPicker_C.SetupContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_ColourPicker_Content_C*                 MenuDropdownContent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ColourPicker_C::SetupContent(class UWBP_ColourPicker_Content_C* MenuDropdownContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ColourPicker.WBP_ColourPicker_C.SetupContent");
		
		UWBP_ColourPicker_C_SetupContent_Params params {};
		params.MenuDropdownContent = MenuDropdownContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ColourPicker.WBP_ColourPicker_C.OnColourPicked_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Colour                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ColourPicker_C::OnColourPicked_Event_1(const struct FLinearColor& Colour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ColourPicker.WBP_ColourPicker_C.OnColourPicked_Event_1");
		
		UWBP_ColourPicker_C_OnColourPicked_Event_1_Params params {};
		params.Colour = Colour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ColourPicker.WBP_ColourPicker_C.OnCancelled_Event_1
	 * 		Flags  -> ()
	 */
	void UWBP_ColourPicker_C::OnCancelled_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ColourPicker.WBP_ColourPicker_C.OnCancelled_Event_1");
		
		UWBP_ColourPicker_C_OnCancelled_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ColourPicker.WBP_ColourPicker_C.ExecuteUbergraph_WBP_ColourPicker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ColourPicker_C::ExecuteUbergraph_WBP_ColourPicker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ColourPicker.WBP_ColourPicker_C.ExecuteUbergraph_WBP_ColourPicker");
		
		UWBP_ColourPicker_C_ExecuteUbergraph_WBP_ColourPicker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ColourPicker.WBP_ColourPicker_C.OnColourPicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Colour                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ColourPicker_C::OnColourPicked__DelegateSignature(const struct FLinearColor& Colour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ColourPicker.WBP_ColourPicker_C.OnColourPicked__DelegateSignature");
		
		UWBP_ColourPicker_C_OnColourPicked__DelegateSignature_Params params {};
		params.Colour = Colour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ColourPicker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ColourPicker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ColourPicker.WBP_ColourPicker_C");
		return ptr;
	}

}


