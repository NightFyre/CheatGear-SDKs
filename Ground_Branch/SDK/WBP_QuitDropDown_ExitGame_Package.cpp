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
	 * 		Name   -> Function WBP_QuitDropDown_ExitGame.WBP_QuitDropDown_ExitGame_C.GetTextColorAndOpacity
	 * 		Flags  -> ()
	 */
	struct FSlateColor UWBP_QuitDropDown_ExitGame_C::GetTextColorAndOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuitDropDown_ExitGame.WBP_QuitDropDown_ExitGame_C.GetTextColorAndOpacity");
		
		UWBP_QuitDropDown_ExitGame_C_GetTextColorAndOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuitDropDown_ExitGame.WBP_QuitDropDown_ExitGame_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_1029_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_QuitDropDown_ExitGame_C::BndEvt__Button_Combo_K2Node_ComponentBoundEvent_1029_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuitDropDown_ExitGame.WBP_QuitDropDown_ExitGame_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_1029_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_QuitDropDown_ExitGame_C_BndEvt__Button_Combo_K2Node_ComponentBoundEvent_1029_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuitDropDown_ExitGame.WBP_QuitDropDown_ExitGame_C.OnClickedQuit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_DialogueBox_C*                          Dialogue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_QuitDropDown_ExitGame_C::OnClickedQuit(class UWBP_DialogueBox_C* Dialogue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuitDropDown_ExitGame.WBP_QuitDropDown_ExitGame_C.OnClickedQuit");
		
		UWBP_QuitDropDown_ExitGame_C_OnClickedQuit_Params params {};
		params.Dialogue = Dialogue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuitDropDown_ExitGame.WBP_QuitDropDown_ExitGame_C.ExecuteUbergraph_WBP_QuitDropDown_ExitGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_QuitDropDown_ExitGame_C::ExecuteUbergraph_WBP_QuitDropDown_ExitGame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuitDropDown_ExitGame.WBP_QuitDropDown_ExitGame_C.ExecuteUbergraph_WBP_QuitDropDown_ExitGame");
		
		UWBP_QuitDropDown_ExitGame_C_ExecuteUbergraph_WBP_QuitDropDown_ExitGame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuitDropDown_ExitGame.WBP_QuitDropDown_ExitGame_C.OnEntrySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_QuitDropDown_ExitGame_C::OnEntrySelected__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuitDropDown_ExitGame.WBP_QuitDropDown_ExitGame_C.OnEntrySelected__DelegateSignature");
		
		UWBP_QuitDropDown_ExitGame_C_OnEntrySelected__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_QuitDropDown_ExitGame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_QuitDropDown_ExitGame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_QuitDropDown_ExitGame.WBP_QuitDropDown_ExitGame_C");
		return ptr;
	}

}


