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
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.IsSquadValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bValidSQ                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SquadList_C::IsSquadValid(bool* bValidSQ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.IsSquadValid");
		
		UWBP_DeployMenu_SquadList_C_IsSquadValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValidSQ != nullptr)
			*bValidSQ = params.bValidSQ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnPaint
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_DeployMenu_SquadList_C::OnPaint(struct FPaintContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnPaint");
		
		UWBP_DeployMenu_SquadList_C_OnPaint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SetSquadLockedState
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewLocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SquadList_C::SetSquadLockedState(bool bNewLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SetSquadLockedState");
		
		UWBP_DeployMenu_SquadList_C_SetSquadLockedState_Params params {};
		params.bNewLocked = bNewLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.UnlockSquad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadList_C::UnlockSquad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.UnlockSquad");
		
		UWBP_DeployMenu_SquadList_C_UnlockSquad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.LockSquad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadList_C::LockSquad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.LockSquad");
		
		UWBP_DeployMenu_SquadList_C_LockSquad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.KickSquadMember
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDPlayerState*                              MemberPSToKick                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SquadList_C::KickSquadMember(class AHDPlayerState* MemberPSToKick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.KickSquadMember");
		
		UWBP_DeployMenu_SquadList_C_KickSquadMember_Params params {};
		params.MemberPSToKick = MemberPSToKick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.WasListCollapsedByUser
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bCollapsedByUser                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SquadList_C::WasListCollapsedByUser(bool* bCollapsedByUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.WasListCollapsedByUser");
		
		UWBP_DeployMenu_SquadList_C_WasListCollapsedByUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCollapsedByUser != nullptr)
			*bCollapsedByUser = params.bCollapsedByUser;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.UpdateLockUnlockBtnState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadList_C::UpdateLockUnlockBtnState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.UpdateLockUnlockBtnState");
		
		UWBP_DeployMenu_SquadList_C_UpdateLockUnlockBtnState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.HasAnySquadMembers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bValidMembersPresent                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SquadList_C::HasAnySquadMembers(bool* bValidMembersPresent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.HasAnySquadMembers");
		
		UWBP_DeployMenu_SquadList_C_HasAnySquadMembers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValidMembersPresent != nullptr)
			*bValidMembersPresent = params.bValidMembersPresent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SetupSQOptions
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadList_C::SetupSQOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SetupSQOptions");
		
		UWBP_DeployMenu_SquadList_C_SetupSQOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.IsOwningPlayerInMemberWidgetList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bOwnsMemberWidget                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SquadList_C::IsOwningPlayerInMemberWidgetList(bool* bOwnsMemberWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.IsOwningPlayerInMemberWidgetList");
		
		UWBP_DeployMenu_SquadList_C_IsOwningPlayerInMemberWidgetList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOwnsMemberWidget != nullptr)
			*bOwnsMemberWidget = params.bOwnsMemberWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.TestPrereqsForAllMembers
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadList_C::TestPrereqsForAllMembers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.TestPrereqsForAllMembers");
		
		UWBP_DeployMenu_SquadList_C_TestPrereqsForAllMembers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.TestSquadAndMemberPrereqs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadList_C::TestSquadAndMemberPrereqs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.TestSquadAndMemberPrereqs");
		
		UWBP_DeployMenu_SquadList_C_TestSquadAndMemberPrereqs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.TestSQPrereqs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadList_C::TestSQPrereqs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.TestSQPrereqs");
		
		UWBP_DeployMenu_SquadList_C_TestSQPrereqs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.IsOwningPlayerRegisteredSquadLeader
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bSquadLeader                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SquadList_C::IsOwningPlayerRegisteredSquadLeader(bool* bSquadLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.IsOwningPlayerRegisteredSquadLeader");
		
		UWBP_DeployMenu_SquadList_C_IsOwningPlayerRegisteredSquadLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSquadLeader != nullptr)
			*bSquadLeader = params.bSquadLeader;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.IsOwningPlayerRegisteredSquadMember
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIgnorePendingRemoval                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRegisteredMember                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SquadList_C::IsOwningPlayerRegisteredSquadMember(bool bIgnorePendingRemoval, bool* bRegisteredMember)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.IsOwningPlayerRegisteredSquadMember");
		
		UWBP_DeployMenu_SquadList_C_IsOwningPlayerRegisteredSquadMember_Params params {};
		params.bIgnorePendingRemoval = bIgnorePendingRemoval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRegisteredMember != nullptr)
			*bRegisteredMember = params.bRegisteredMember;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.UpdateJoinLeaveBtnState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadList_C::UpdateJoinLeaveBtnState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.UpdateJoinLeaveBtnState");
		
		UWBP_DeployMenu_SquadList_C_UpdateJoinLeaveBtnState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.UpdateSquadMemberCountText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadList_C::UpdateSquadMemberCountText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.UpdateSquadMemberCountText");
		
		UWBP_DeployMenu_SquadList_C_UpdateSquadMemberCountText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.CollapseListIfEmpty
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCollapseParentIfEmpty                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SquadList_C::CollapseListIfEmpty(bool bCollapseParentIfEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.CollapseListIfEmpty");
		
		UWBP_DeployMenu_SquadList_C_CollapseListIfEmpty_Params params {};
		params.bCollapseParentIfEmpty = bCollapseParentIfEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SetSquadNameText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewSquadName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_DeployMenu_SquadList_C::SetSquadNameText(const class FText& NewSquadName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SetSquadNameText");
		
		UWBP_DeployMenu_SquadList_C_SetSquadNameText_Params params {};
		params.NewSquadName = NewSquadName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.RemoveSquadMemberItemWidgetFromList
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USquadMemberInfo*                            RemovedMemberData                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SquadList_C::RemoveSquadMemberItemWidgetFromList(class USquadMemberInfo* RemovedMemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.RemoveSquadMemberItemWidgetFromList");
		
		UWBP_DeployMenu_SquadList_C_RemoveSquadMemberItemWidgetFromList_Params params {};
		params.RemovedMemberData = RemovedMemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.AddNewSquadMemberItemWidget
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USquadMemberInfo*                            MemberData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SquadList_C::AddNewSquadMemberItemWidget(class USquadMemberInfo* MemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.AddNewSquadMemberItemWidget");
		
		UWBP_DeployMenu_SquadList_C_AddNewSquadMemberItemWidget_Params params {};
		params.MemberData = MemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.CollapseList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCollapseParent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SquadList_C::CollapseList(bool bCollapseParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.CollapseList");
		
		UWBP_DeployMenu_SquadList_C_CollapseList_Params params {};
		params.bCollapseParent = bCollapseParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.ExpandList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bExpandParent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SquadList_C::ExpandList(bool bExpandParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.ExpandList");
		
		UWBP_DeployMenu_SquadList_C_ExpandList_Params params {};
		params.bExpandParent = bExpandParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.BndEvt__LockUnlockSQOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadList_C::BndEvt__LockUnlockSQOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.BndEvt__LockUnlockSQOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_DeployMenu_SquadList_C_BndEvt__LockUnlockSQOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.GenerateSquadMember
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class USquadMemberInfo*                            MemberData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SquadList_C::GenerateSquadMember(class USquadMemberInfo* MemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.GenerateSquadMember");
		
		UWBP_DeployMenu_SquadList_C_GenerateSquadMember_Params params {};
		params.MemberData = MemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.DeconstructSquadMember
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class USquadMemberInfo*                            RemovedMemberData                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SquadList_C::DeconstructSquadMember(class USquadMemberInfo* RemovedMemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.DeconstructSquadMember");
		
		UWBP_DeployMenu_SquadList_C_DeconstructSquadMember_Params params {};
		params.RemovedMemberData = RemovedMemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.BndEvt__LeaveSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadList_C::BndEvt__LeaveSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.BndEvt__LeaveSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_DeployMenu_SquadList_C_BndEvt__LeaveSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.BndEvt__ExpandBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadList_C::BndEvt__ExpandBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.BndEvt__ExpandBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_DeployMenu_SquadList_C_BndEvt__ExpandBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SquadList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.PreConstruct");
		
		UWBP_DeployMenu_SquadList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SquadMembersListExpanded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadList_C::SquadMembersListExpanded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SquadMembersListExpanded");
		
		UWBP_DeployMenu_SquadList_C_SquadMembersListExpanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SquadMembersListCollapsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadList_C::SquadMembersListCollapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SquadMembersListCollapsed");
		
		UWBP_DeployMenu_SquadList_C_SquadMembersListCollapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnSquadSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadList_C::OnSquadSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnSquadSet");
		
		UWBP_DeployMenu_SquadList_C_OnSquadSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnSquadNameUpdated
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewSquadName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        PreviousSquadName                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_DeployMenu_SquadList_C::OnSquadNameUpdated(const class FText& NewSquadName, const class FText& PreviousSquadName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnSquadNameUpdated");
		
		UWBP_DeployMenu_SquadList_C_OnSquadNameUpdated_Params params {};
		params.NewSquadName = NewSquadName;
		params.PreviousSquadName = PreviousSquadName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnSquadLeaderUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDPlayerState*                              NewLeaderPS                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDPlayerState*                              PrevLeaderPS                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SquadList_C::OnSquadLeaderUpdated(class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnSquadLeaderUpdated");
		
		UWBP_DeployMenu_SquadList_C_OnSquadLeaderUpdated_Params params {};
		params.NewLeaderPS = NewLeaderPS;
		params.PrevLeaderPS = PrevLeaderPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnSquadLockStateUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewLockedState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SquadList_C::OnSquadLockStateUpdated(bool bNewLockedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnSquadLockStateUpdated");
		
		UWBP_DeployMenu_SquadList_C_OnSquadLockStateUpdated_Params params {};
		params.bNewLockedState = bNewLockedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.ExecuteUbergraph_WBP_DeployMenu_SquadList
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SquadList_C::ExecuteUbergraph_WBP_DeployMenu_SquadList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.ExecuteUbergraph_WBP_DeployMenu_SquadList");
		
		UWBP_DeployMenu_SquadList_C_ExecuteUbergraph_WBP_DeployMenu_SquadList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DeployMenu_SquadList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DeployMenu_SquadList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C");
		return ptr;
	}

}


