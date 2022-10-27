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
	 * 		Name   -> Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_QuickPlayerTeamElement_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.GetToolTipWidget_1");
		
		UWBP_QuickPlayerTeamElement_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.OnGetMenuContent_1
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_QuickPlayerTeamElement_C::OnGetMenuContent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.OnGetMenuContent_1");
		
		UWBP_QuickPlayerTeamElement_C_OnGetMenuContent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_QuickPlayerTeamElement_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.Construct");
		
		UWBP_QuickPlayerTeamElement_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_QuickPlayerTeamElement_C::BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_QuickPlayerTeamElement_C_BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.SetupContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_ComboBox_Content_C*                     MenuDropdownContent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_QuickPlayerTeamElement_C::SetupContent(class UWBP_ComboBox_Content_C* MenuDropdownContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.SetupContent");
		
		UWBP_QuickPlayerTeamElement_C_SetupContent_Params params {};
		params.MenuDropdownContent = MenuDropdownContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.OnIndexChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_QuickPlayerTeamElement_C::OnIndexChanged_Event(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.OnIndexChanged_Event");
		
		UWBP_QuickPlayerTeamElement_C_OnIndexChanged_Event_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_QuickPlayerTeamElement_C::BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
		
		UWBP_QuickPlayerTeamElement_C_BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.OnTeamElementChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_QuickPlayerTeamElement_C::OnTeamElementChanged_Event_1(class AGBPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.OnTeamElementChanged_Event_1");
		
		UWBP_QuickPlayerTeamElement_C_OnTeamElementChanged_Event_1_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.ExecuteUbergraph_WBP_QuickPlayerTeamElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_QuickPlayerTeamElement_C::ExecuteUbergraph_WBP_QuickPlayerTeamElement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.ExecuteUbergraph_WBP_QuickPlayerTeamElement");
		
		UWBP_QuickPlayerTeamElement_C_ExecuteUbergraph_WBP_QuickPlayerTeamElement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_QuickPlayerTeamElement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_QuickPlayerTeamElement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C");
		return ptr;
	}

}


