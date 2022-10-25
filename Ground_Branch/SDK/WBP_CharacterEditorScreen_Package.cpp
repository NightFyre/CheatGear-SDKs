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
	 * 		Name   -> Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWBP_CharacterEditorScreen_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.OnPreviewKeyDown");
		
		UWBP_CharacterEditorScreen_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.Setup
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditorScreen_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.Setup");
		
		UWBP_CharacterEditorScreen_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.BndEvt__WBP_CharacterEditor_NEW_K2Node_ComponentBoundEvent_1_OkClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           JsonObj                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterEditorScreen_C::BndEvt__WBP_CharacterEditor_NEW_K2Node_ComponentBoundEvent_1_OkClicked__DelegateSignature(class UVaRestJsonObject* JsonObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.BndEvt__WBP_CharacterEditor_NEW_K2Node_ComponentBoundEvent_1_OkClicked__DelegateSignature");
		
		UWBP_CharacterEditorScreen_C_BndEvt__WBP_CharacterEditor_NEW_K2Node_ComponentBoundEvent_1_OkClicked__DelegateSignature_Params params {};
		params.JsonObj = JsonObj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.BndEvt__WBP_CharacterEditor_NEW_K2Node_ComponentBoundEvent_2_CancelClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditorScreen_C::BndEvt__WBP_CharacterEditor_NEW_K2Node_ComponentBoundEvent_2_CancelClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.BndEvt__WBP_CharacterEditor_NEW_K2Node_ComponentBoundEvent_2_CancelClicked__DelegateSignature");
		
		UWBP_CharacterEditorScreen_C_BndEvt__WBP_CharacterEditor_NEW_K2Node_ComponentBoundEvent_2_CancelClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.Close
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditorScreen_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.Close");
		
		UWBP_CharacterEditorScreen_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.ExecuteUbergraph_WBP_CharacterEditorScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterEditorScreen_C::ExecuteUbergraph_WBP_CharacterEditorScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.ExecuteUbergraph_WBP_CharacterEditorScreen");
		
		UWBP_CharacterEditorScreen_C_ExecuteUbergraph_WBP_CharacterEditorScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CharacterEditorScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CharacterEditorScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C");
		return ptr;
	}

}


