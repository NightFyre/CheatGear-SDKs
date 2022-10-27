/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.OnPaint
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_DeployMenu_C::OnPaint(struct FPaintContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.OnPaint");
		
		UWBP_DeployMenu_C_OnPaint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateMatchTime
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::UpdateMatchTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateMatchTime");
		
		UWBP_DeployMenu_C_UpdateMatchTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTeamLayoutElements
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUseVerticalLayout                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUpdateTeam0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_C::UpdateTeamLayoutElements(bool bUseVerticalLayout, bool bUpdateTeam0)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTeamLayoutElements");
		
		UWBP_DeployMenu_C_UpdateTeamLayoutElements_Params params {};
		params.bUseVerticalLayout = bUseVerticalLayout;
		params.bUpdateTeam0 = bUpdateTeam0;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.SetTeamSwitchLayout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUseVerticalLayout                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_C::SetTeamSwitchLayout(bool bUseVerticalLayout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.SetTeamSwitchLayout");
		
		UWBP_DeployMenu_C_SetTeamSwitchLayout_Params params {};
		params.bUseVerticalLayout = bUseVerticalLayout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.InitTeamLayout
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::InitTeamLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.InitTeamLayout");
		
		UWBP_DeployMenu_C_InitTeamLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.InitSquadSelectionUI
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::InitSquadSelectionUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.InitSquadSelectionUI");
		
		UWBP_DeployMenu_C_InitSquadSelectionUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTicketCounts
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::UpdateTicketCounts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTicketCounts");
		
		UWBP_DeployMenu_C_UpdateTicketCounts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTeamSwitchUISettings
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHDTeam                                            TeamToUpdate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_C::UpdateTeamSwitchUISettings(EHDTeam TeamToUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTeamSwitchUISettings");
		
		UWBP_DeployMenu_C_UpdateTeamSwitchUISettings_Params params {};
		params.TeamToUpdate = TeamToUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTeamSwitchVisuals
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHDTeam                                            TeamToUpdate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_C::UpdateTeamSwitchVisuals(EHDTeam TeamToUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTeamSwitchVisuals");
		
		UWBP_DeployMenu_C_UpdateTeamSwitchVisuals_Params params {};
		params.TeamToUpdate = TeamToUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.InitClassSelectionUI
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::InitClassSelectionUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.InitClassSelectionUI");
		
		UWBP_DeployMenu_C_InitClassSelectionUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.DeselectCurrentPOI
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::DeselectCurrentPOI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.DeselectCurrentPOI");
		
		UWBP_DeployMenu_C_DeselectCurrentPOI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.DeployAtSelectedSpawnPoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::DeployAtSelectedSpawnPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.DeployAtSelectedSpawnPoint");
		
		UWBP_DeployMenu_C_DeployAtSelectedSpawnPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateDeployBtnState
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::UpdateDeployBtnState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateDeployBtnState");
		
		UWBP_DeployMenu_C_UpdateDeployBtnState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.CloseDeployMenu
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_C::CloseDeployMenu(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.CloseDeployMenu");
		
		UWBP_DeployMenu_C_CloseDeployMenu_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.PreloadContent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::PreloadContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.PreloadContent");
		
		UWBP_DeployMenu_C_PreloadContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateSuicideBtnState
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::UpdateSuicideBtnState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateSuicideBtnState");
		
		UWBP_DeployMenu_C_UpdateSuicideBtnState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.CleanupOwningPlayerDelegates
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::CleanupOwningPlayerDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.CleanupOwningPlayerDelegates");
		
		UWBP_DeployMenu_C_CleanupOwningPlayerDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.InitOwningPlayerDelegates
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::InitOwningPlayerDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.InitOwningPlayerDelegates");
		
		UWBP_DeployMenu_C_InitOwningPlayerDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.InitTeamUI
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::InitTeamUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.InitTeamUI");
		
		UWBP_DeployMenu_C_InitTeamUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.InitMapUI
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::InitMapUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.InitMapUI");
		
		UWBP_DeployMenu_C_InitMapUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.RequestSuicide
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::RequestSuicide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.RequestSuicide");
		
		UWBP_DeployMenu_C_RequestSuicide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTeamSwitchBtnState
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHDTeam                                            NewTeam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_C::UpdateTeamSwitchBtnState(EHDTeam NewTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTeamSwitchBtnState");
		
		UWBP_DeployMenu_C_UpdateTeamSwitchBtnState_Params params {};
		params.NewTeam = NewTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.TeamSwitch
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHDTeam                                            NewTeam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_C::TeamSwitch(EHDTeam NewTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.TeamSwitch");
		
		UWBP_DeployMenu_C_TeamSwitch_Params params {};
		params.NewTeam = NewTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.OnMouseWheel
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_DeployMenu_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.OnMouseWheel");
		
		UWBP_DeployMenu_C_OnMouseWheel_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_DeployMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.OnMouseButtonDown");
		
		UWBP_DeployMenu_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.Construct");
		
		UWBP_DeployMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.OnDeployMenuInputToggle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::OnDeployMenuInputToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.OnDeployMenuInputToggle");
		
		UWBP_DeployMenu_C_OnDeployMenuInputToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.BndEvt__SuicideBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::BndEvt__SuicideBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.BndEvt__SuicideBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_DeployMenu_C_BndEvt__SuicideBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.Destruct");
		
		UWBP_DeployMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.OnOwningCharDeath
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       VictimPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 VictimController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              KillingDamage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_C::OnOwningCharDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.OnOwningCharDeath");
		
		UWBP_DeployMenu_C_OnOwningCharDeath_Params params {};
		params.VictimPawn = VictimPawn;
		params.VictimController = VictimController;
		params.KillingDamage = KillingDamage;
		params.DamageEvent = DamageEvent;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.OnUnpossessedPawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       UnpossessedPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_C::OnUnpossessedPawn(class APawn* UnpossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.OnUnpossessedPawn");
		
		UWBP_DeployMenu_C_OnUnpossessedPawn_Params params {};
		params.UnpossessedPawn = UnpossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.OnPossessedPawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_C::OnPossessedPawn(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.OnPossessedPawn");
		
		UWBP_DeployMenu_C_OnPossessedPawn_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.OnPlayerTeamUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      PrevTeam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewTeam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_C::OnPlayerTeamUpdated(unsigned char PrevTeam, unsigned char NewTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.OnPlayerTeamUpdated");
		
		UWBP_DeployMenu_C_OnPlayerTeamUpdated_Params params {};
		params.PrevTeam = PrevTeam;
		params.NewTeam = NewTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_4_OnPreloadFinished__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_4_OnPreloadFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_4_OnPreloadFinished__DelegateSignature");
		
		UWBP_DeployMenu_C_BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_4_OnPreloadFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_5_OnSpawnPointSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      POISpawnPointActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_C::BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_5_OnSpawnPointSelected__DelegateSignature(class AActor* POISpawnPointActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_5_OnSpawnPointSelected__DelegateSignature");
		
		UWBP_DeployMenu_C_BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_5_OnSpawnPointSelected__DelegateSignature_Params params {};
		params.POISpawnPointActor = POISpawnPointActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_6_OnSpawnPointDeselected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_6_OnSpawnPointDeselected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_6_OnSpawnPointDeselected__DelegateSignature");
		
		UWBP_DeployMenu_C_BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_6_OnSpawnPointDeselected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCloseBtn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_C::BndEvt__DeployBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(bool bCloseBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UWBP_DeployMenu_C_BndEvt__DeployBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		params.bCloseBtn = bCloseBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.OnPlayerSpawnTimerElapsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::OnPlayerSpawnTimerElapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.OnPlayerSpawnTimerElapsed");
		
		UWBP_DeployMenu_C_OnPlayerSpawnTimerElapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.OnRepPlayerStatePC
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::OnRepPlayerStatePC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.OnRepPlayerStatePC");
		
		UWBP_DeployMenu_C_OnRepPlayerStatePC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.Tick");
		
		UWBP_DeployMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.PreConstruct");
		
		UWBP_DeployMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.On Team 1 Switch Btn Clicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::On_Team_Switch_Btn_Clicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.On Team 1 Switch Btn Clicked");
		
		UWBP_DeployMenu_C_On_Team_Switch_Btn_Clicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.On Team 0 Switch Btn Clicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::On_Team_Switch_Btn_Clicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.On Team 0 Switch Btn Clicked");
		
		UWBP_DeployMenu_C_On_Team_Switch_Btn_Clicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTeamStateRefs
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::UpdateTeamStateRefs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTeamStateRefs");
		
		UWBP_DeployMenu_C_UpdateTeamStateRefs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.OnBluforPostInitTeam
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFTeamState*                                TeamState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_C::OnBluforPostInitTeam(class ADFTeamState* TeamState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.OnBluforPostInitTeam");
		
		UWBP_DeployMenu_C_OnBluforPostInitTeam_Params params {};
		params.TeamState = TeamState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.OnOpforPostInitTeam
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFTeamState*                                TeamState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_C::OnOpforPostInitTeam(class ADFTeamState* TeamState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.OnOpforPostInitTeam");
		
		UWBP_DeployMenu_C_OnOpforPostInitTeam_Params params {};
		params.TeamState = TeamState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.OnPlayerTeamStateUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFTeamState*                                LastTeamState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFTeamState*                                NewTeamState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bNewTeamStateInit                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_C::OnPlayerTeamStateUpdated(class ADFTeamState* LastTeamState, class ADFTeamState* NewTeamState, bool bNewTeamStateInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.OnPlayerTeamStateUpdated");
		
		UWBP_DeployMenu_C_OnPlayerTeamStateUpdated_Params params {};
		params.LastTeamState = LastTeamState;
		params.NewTeamState = NewTeamState;
		params.bNewTeamStateInit = bNewTeamStateInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.ExecuteUbergraph_WBP_DeployMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_C::ExecuteUbergraph_WBP_DeployMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.ExecuteUbergraph_WBP_DeployMenu");
		
		UWBP_DeployMenu_C_ExecuteUbergraph_WBP_DeployMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu.WBP_DeployMenu_C.OnPreloadFinished__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_C::OnPreloadFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu.WBP_DeployMenu_C.OnPreloadFinished__DelegateSignature");
		
		UWBP_DeployMenu_C_OnPreloadFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DeployMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DeployMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DeployMenu.WBP_DeployMenu_C");
		return ptr;
	}

}


