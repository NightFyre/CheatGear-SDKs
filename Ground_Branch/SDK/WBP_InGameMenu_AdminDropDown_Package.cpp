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
	 * 		Name   -> Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.OnGetUserMenuContent_1
	 * 		Flags  -> ()
	 */
	class UUserWidget* UWBP_InGameMenu_AdminDropDown_C::OnGetUserMenuContent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.OnGetUserMenuContent_1");
		
		UWBP_InGameMenu_AdminDropDown_C_OnGetUserMenuContent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_InGameMenu_AdminDropDown_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.GetToolTipWidget_1");
		
		UWBP_InGameMenu_AdminDropDown_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_InGameMenu_AdminDropDown_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.Construct");
		
		UWBP_InGameMenu_AdminDropDown_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InGameMenu_AdminDropDown_C::BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_InGameMenu_AdminDropDown_C_BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.SetupContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_ComboBox_Content_C*                     MenuDropdownContent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InGameMenu_AdminDropDown_C::SetupContent(class UWBP_ComboBox_Content_C* MenuDropdownContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.SetupContent");
		
		UWBP_InGameMenu_AdminDropDown_C_SetupContent_Params params {};
		params.MenuDropdownContent = MenuDropdownContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.OnIndexChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InGameMenu_AdminDropDown_C::OnIndexChanged_Event(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.OnIndexChanged_Event");
		
		UWBP_InGameMenu_AdminDropDown_C_OnIndexChanged_Event_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.OnAdminRequestFilled_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZKReplicatedContent                        Content                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_InGameMenu_AdminDropDown_C::OnAdminRequestFilled_Event(const struct FZKReplicatedContent& Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.OnAdminRequestFilled_Event");
		
		UWBP_InGameMenu_AdminDropDown_C_OnAdminRequestFilled_Event_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.ExecuteUbergraph_WBP_InGameMenu_AdminDropDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InGameMenu_AdminDropDown_C::ExecuteUbergraph_WBP_InGameMenu_AdminDropDown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.ExecuteUbergraph_WBP_InGameMenu_AdminDropDown");
		
		UWBP_InGameMenu_AdminDropDown_C_ExecuteUbergraph_WBP_InGameMenu_AdminDropDown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InGameMenu_AdminDropDown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InGameMenu_AdminDropDown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C");
		return ptr;
	}

}


