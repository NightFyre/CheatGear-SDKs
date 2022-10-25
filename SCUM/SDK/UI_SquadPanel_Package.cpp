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
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.UpdateRanking
	 * 		Flags  -> ()
	 */
	void UUI_SquadPanel_C::UpdateRanking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateRanking");
		
		UUI_SquadPanel_C_UpdateRanking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadLimit
	 * 		Flags  -> ()
	 */
	void UUI_SquadPanel_C::UpdateSquadLimit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadLimit");
		
		UUI_SquadPanel_C_UpdateSquadLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.AskForConfirmation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        DialogText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FScriptDelegate                              OnConfirmEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnCancelEvent                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UUI_SquadPanel_C::AskForConfirmation(const class FText& DialogText, const class FScriptDelegate& OnConfirmEvent, const class FScriptDelegate& OnCancelEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.AskForConfirmation");
		
		UUI_SquadPanel_C_AskForConfirmation_Params params {};
		params.DialogText = DialogText;
		params.OnConfirmEvent = OnConfirmEvent;
		params.OnCancelEvent = OnCancelEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.UpdateMemberList
	 * 		Flags  -> ()
	 */
	void UUI_SquadPanel_C::UpdateMemberList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateMemberList");
		
		UUI_SquadPanel_C_UpdateMemberList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.UpdateElementVisibility
	 * 		Flags  -> ()
	 */
	void UUI_SquadPanel_C::UpdateElementVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateElementVisibility");
		
		UUI_SquadPanel_C_UpdateElementVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.UpdateCurrentSquadData
	 * 		Flags  -> ()
	 */
	void UUI_SquadPanel_C::UpdateCurrentSquadData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateCurrentSquadData");
		
		UUI_SquadPanel_C_UpdateCurrentSquadData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.Update
	 * 		Flags  -> ()
	 */
	void UUI_SquadPanel_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.Update");
		
		UUI_SquadPanel_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadPanel_C::BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_SquadPanel_C_BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadMemberInfo
	 * 		Flags  -> ()
	 */
	void UUI_SquadPanel_C::UpdateSquadMemberInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadMemberInfo");
		
		UUI_SquadPanel_C_UpdateSquadMemberInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadPanel_C::BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_SquadPanel_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadPanel_C::BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_SquadPanel_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveConfirm
	 * 		Flags  -> ()
	 */
	void UUI_SquadPanel_C::OnLeaveConfirm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveConfirm");
		
		UUI_SquadPanel_C_OnLeaveConfirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveCanceled
	 * 		Flags  -> ()
	 */
	void UUI_SquadPanel_C::OnLeaveCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveCanceled");
		
		UUI_SquadPanel_C_OnLeaveCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadRankingData
	 * 		Flags  -> ()
	 */
	void UUI_SquadPanel_C::UpdateSquadRankingData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadRankingData");
		
		UUI_SquadPanel_C_UpdateSquadRankingData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadTopData
	 * 		Flags  -> ()
	 */
	void UUI_SquadPanel_C::UpdateSquadTopData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadTopData");
		
		UUI_SquadPanel_C_UpdateSquadTopData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_SquadPanel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.Construct");
		
		UUI_SquadPanel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadPanel.UI_SquadPanel_C.ExecuteUbergraph_UI_SquadPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SquadPanel_C::ExecuteUbergraph_UI_SquadPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.ExecuteUbergraph_UI_SquadPanel");
		
		UUI_SquadPanel_C_ExecuteUbergraph_UI_SquadPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SquadPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SquadPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SquadPanel.UI_SquadPanel_C");
		return ptr;
	}

}


