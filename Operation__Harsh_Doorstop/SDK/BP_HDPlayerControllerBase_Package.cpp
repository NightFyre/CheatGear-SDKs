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
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.GetJoystickDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EJoystickTypes                                     Stick                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   StickInput                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::GetJoystickDirection(EJoystickTypes Stick, struct FVector2D* StickInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.GetJoystickDirection");
		
		ABP_HDPlayerControllerBase_C_GetJoystickDirection_Params params {};
		params.Stick = Stick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StickInput != nullptr)
			*StickInput = params.StickInput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.SetSquadLockedState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerControllerBase_C::SetSquadLockedState(class AHDSquadState* Squad, bool bLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.SetSquadLockedState");
		
		ABP_HDPlayerControllerBase_C_SetSquadLockedState_Params params {};
		params.Squad = Squad;
		params.bLocked = bLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.KickSquadMember
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDPlayerState*                              MemberToRemove                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bRemoveSuccess                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerControllerBase_C::KickSquadMember(class AHDSquadState* Squad, class AHDPlayerState* MemberToRemove, bool* bRemoveSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.KickSquadMember");
		
		ABP_HDPlayerControllerBase_C_KickSquadMember_Params params {};
		params.Squad = Squad;
		params.MemberToRemove = MemberToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRemoveSuccess != nullptr)
			*bRemoveSuccess = params.bRemoveSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.LeaveCurrentSquad
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLeaveSuccess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerControllerBase_C::LeaveCurrentSquad(bool* bLeaveSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.LeaveCurrentSquad");
		
		ABP_HDPlayerControllerBase_C_LeaveCurrentSquad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLeaveSuccess != nullptr)
			*bLeaveSuccess = params.bLeaveSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.IsSquadLeader
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSquadLeader                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerControllerBase_C::IsSquadLeader(class AHDSquadState* Squad, bool* bSquadLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.IsSquadLeader");
		
		ABP_HDPlayerControllerBase_C_IsSquadLeader_Params params {};
		params.Squad = Squad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSquadLeader != nullptr)
			*bSquadLeader = params.bSquadLeader;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.CanJoinSquad
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AHDSquadState*                               SquadToJoin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bJoinableSquad                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerControllerBase_C::CanJoinSquad(class AHDSquadState* SquadToJoin, bool* bJoinableSquad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.CanJoinSquad");
		
		ABP_HDPlayerControllerBase_C_CanJoinSquad_Params params {};
		params.SquadToJoin = SquadToJoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bJoinableSquad != nullptr)
			*bJoinableSquad = params.bJoinableSquad;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.JoinSquad
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               SquadToJoin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bJoinSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerControllerBase_C::JoinSquad(class AHDSquadState* SquadToJoin, bool* bJoinSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.JoinSquad");
		
		ABP_HDPlayerControllerBase_C_JoinSquad_Params params {};
		params.SquadToJoin = SquadToJoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bJoinSuccess != nullptr)
			*bJoinSuccess = params.bJoinSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InternalCreateUnnamedSquad
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDPlatoonState*                             ForPlatoon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bJoinSquadAfterCreation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bStartLocked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AHDSquadState*                               NewSquad                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::InternalCreateUnnamedSquad(class AHDPlatoonState* ForPlatoon, bool bJoinSquadAfterCreation, bool bStartLocked, bool* bSuccess, class AHDSquadState** NewSquad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InternalCreateUnnamedSquad");
		
		ABP_HDPlayerControllerBase_C_InternalCreateUnnamedSquad_Params params {};
		params.ForPlatoon = ForPlatoon;
		params.bJoinSquadAfterCreation = bJoinSquadAfterCreation;
		params.bStartLocked = bStartLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		if (NewSquad != nullptr)
			*NewSquad = params.NewSquad;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.GetHDTeamState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AHDTeamState*                                TeamState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::GetHDTeamState(class AHDTeamState** TeamState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.GetHDTeamState");
		
		ABP_HDPlayerControllerBase_C_GetHDTeamState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeamState != nullptr)
			*TeamState = params.TeamState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.GetHDPlayerState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AHDPlayerState*                              PlayerState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::GetHDPlayerState(class AHDPlayerState** PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.GetHDPlayerState");
		
		ABP_HDPlayerControllerBase_C_GetHDPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerState != nullptr)
			*PlayerState = params.PlayerState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.SpawnVehicleAtPlayer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      VehicleClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::SpawnVehicleAtPlayer(class UClass* VehicleClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.SpawnVehicleAtPlayer");
		
		ABP_HDPlayerControllerBase_C_SpawnVehicleAtPlayer_Params params {};
		params.VehicleClass = VehicleClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.HideHUD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerControllerBase_C::HideHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.HideHUD");
		
		ABP_HDPlayerControllerBase_C_HideHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ShowHUD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerControllerBase_C::ShowHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ShowHUD");
		
		ABP_HDPlayerControllerBase_C_ShowHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.GetTeamKits
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	void ABP_HDPlayerControllerBase_C::GetTeamKits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.GetTeamKits");
		
		ABP_HDPlayerControllerBase_C_GetTeamKits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.GetMinimapWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UDFMinimap*                                  MinimapWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::GetMinimapWidget(class UDFMinimap** MinimapWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.GetMinimapWidget");
		
		ABP_HDPlayerControllerBase_C_GetMinimapWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinimapWidget != nullptr)
			*MinimapWidget = params.MinimapWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.DeathScreenToggle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerControllerBase_C::DeathScreenToggle(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.DeathScreenToggle");
		
		ABP_HDPlayerControllerBase_C_DeathScreenToggle_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.UnloadDeathScreen
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerControllerBase_C::UnloadDeathScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.UnloadDeathScreen");
		
		ABP_HDPlayerControllerBase_C_UnloadDeathScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.LoadDeathScreen
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerControllerBase_C::LoadDeathScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.LoadDeathScreen");
		
		ABP_HDPlayerControllerBase_C_LoadDeathScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.DeployMenuToggle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShowMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerControllerBase_C::DeployMenuToggle(bool bShowMenu, bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.DeployMenuToggle");
		
		ABP_HDPlayerControllerBase_C_DeployMenuToggle_Params params {};
		params.bShowMenu = bShowMenu;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.UnloadDeployMenu
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerControllerBase_C::UnloadDeployMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.UnloadDeployMenu");
		
		ABP_HDPlayerControllerBase_C_UnloadDeployMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.LoadDeployMenu
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerControllerBase_C::LoadDeployMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.LoadDeployMenu");
		
		ABP_HDPlayerControllerBase_C_LoadDeployMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.LoadAndActivateDeployMenu
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerControllerBase_C::LoadAndActivateDeployMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.LoadAndActivateDeployMenu");
		
		ABP_HDPlayerControllerBase_C_LoadAndActivateDeployMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_F8_K2Node_InputKeyEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::InpActEvt_F8_K2Node_InputKeyEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_F8_K2Node_InputKeyEvent_5");
		
		ABP_HDPlayerControllerBase_C_InpActEvt_F8_K2Node_InputKeyEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_Fire_K2Node_InputActionEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::InpActEvt_Fire_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_Fire_K2Node_InputActionEvent_5");
		
		ABP_HDPlayerControllerBase_C_InpActEvt_Fire_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_Fire_K2Node_InputActionEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::InpActEvt_Fire_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_Fire_K2Node_InputActionEvent_4");
		
		ABP_HDPlayerControllerBase_C_InpActEvt_Fire_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_DeployMenu_K2Node_InputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::InpActEvt_DeployMenu_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_DeployMenu_K2Node_InputActionEvent_3");
		
		ABP_HDPlayerControllerBase_C_InpActEvt_DeployMenu_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_F1_K2Node_InputKeyEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::InpActEvt_F1_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_F1_K2Node_InputKeyEvent_4");
		
		ABP_HDPlayerControllerBase_C_InpActEvt_F1_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_F2_K2Node_InputKeyEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::InpActEvt_F2_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_F2_K2Node_InputKeyEvent_3");
		
		ABP_HDPlayerControllerBase_C_InpActEvt_F2_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_F3_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::InpActEvt_F3_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_F3_K2Node_InputKeyEvent_2");
		
		ABP_HDPlayerControllerBase_C_InpActEvt_F3_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_Use_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::InpActEvt_Use_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_Use_K2Node_InputActionEvent_2");
		
		ABP_HDPlayerControllerBase_C_InpActEvt_Use_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_F4_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::InpActEvt_F4_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_F4_K2Node_InputKeyEvent_1");
		
		ABP_HDPlayerControllerBase_C_InpActEvt_F4_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.OnLoaded_97A2A56D4425648AEE60ECA073085E53
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::OnLoaded_97A2A56D4425648AEE60ECA073085E53(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.OnLoaded_97A2A56D4425648AEE60ECA073085E53");
		
		ABP_HDPlayerControllerBase_C_OnLoaded_97A2A56D4425648AEE60ECA073085E53_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_ChatHistoryToggle_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::InpActEvt_ChatHistoryToggle_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_ChatHistoryToggle_K2Node_InputActionEvent_1");
		
		ABP_HDPlayerControllerBase_C_InpActEvt_ChatHistoryToggle_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ServerCreateAndJoinUserSquadUnnamed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDPlatoonState*                             ForPlatoon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::ServerCreateAndJoinUserSquadUnnamed(class AHDPlatoonState* ForPlatoon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ServerCreateAndJoinUserSquadUnnamed");
		
		ABP_HDPlayerControllerBase_C_ServerCreateAndJoinUserSquadUnnamed_Params params {};
		params.ForPlatoon = ForPlatoon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ServerLeaveCurrentSquad
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerControllerBase_C::ServerLeaveCurrentSquad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ServerLeaveCurrentSquad");
		
		ABP_HDPlayerControllerBase_C_ServerLeaveCurrentSquad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ServerJoinSquad
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               SquadToJoin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::ServerJoinSquad(class AHDSquadState* SquadToJoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ServerJoinSquad");
		
		ABP_HDPlayerControllerBase_C_ServerJoinSquad_Params params {};
		params.SquadToJoin = SquadToJoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ServerSetSquadLockedState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerControllerBase_C::ServerSetSquadLockedState(class AHDSquadState* Squad, bool bLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ServerSetSquadLockedState");
		
		ABP_HDPlayerControllerBase_C_ServerSetSquadLockedState_Params params {};
		params.Squad = Squad;
		params.bLocked = bLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ServerKickSquadMember
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDPlayerState*                              MemberToRemove                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::ServerKickSquadMember(class AHDSquadState* Squad, class AHDPlayerState* MemberToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ServerKickSquadMember");
		
		ABP_HDPlayerControllerBase_C_ServerKickSquadMember_Params params {};
		params.Squad = Squad;
		params.MemberToRemove = MemberToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HDPlayerControllerBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ReceiveBeginPlay");
		
		ABP_HDPlayerControllerBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.OnDeployMenuPreloadFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerControllerBase_C::OnDeployMenuPreloadFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.OnDeployMenuPreloadFinished");
		
		ABP_HDPlayerControllerBase_C_OnDeployMenuPreloadFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ReceiveOnRepPlayerState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HDPlayerControllerBase_C::ReceiveOnRepPlayerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ReceiveOnRepPlayerState");
		
		ABP_HDPlayerControllerBase_C_ReceiveOnRepPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.OnPlayerSpawnTimerElapsed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HDPlayerControllerBase_C::OnPlayerSpawnTimerElapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.OnPlayerSpawnTimerElapsed");
		
		ABP_HDPlayerControllerBase_C_OnPlayerSpawnTimerElapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ReceivePlayerTeamNumUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      LastTeamNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewTeamNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::ReceivePlayerTeamNumUpdated(unsigned char LastTeamNum, unsigned char NewTeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ReceivePlayerTeamNumUpdated");
		
		ABP_HDPlayerControllerBase_C_ReceivePlayerTeamNumUpdated_Params params {};
		params.LastTeamNum = LastTeamNum;
		params.NewTeamNum = NewTeamNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.TryGetInVehicle
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AArcBaseVehicle*                             Vehicle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::TryGetInVehicle(class AArcBaseVehicle* Vehicle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.TryGetInVehicle");
		
		ABP_HDPlayerControllerBase_C_TryGetInVehicle_Params params {};
		params.Vehicle = Vehicle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.RequestExitVehicle
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AArcBaseVehicle*                             Vehicle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::RequestExitVehicle(class AArcBaseVehicle* Vehicle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.RequestExitVehicle");
		
		ABP_HDPlayerControllerBase_C_RequestExitVehicle_Params params {};
		params.Vehicle = Vehicle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.Server_RequestSeatChange
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Seat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::Server_RequestSeatChange(int32_t Seat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.Server_RequestSeatChange");
		
		ABP_HDPlayerControllerBase_C_Server_RequestSeatChange_Params params {};
		params.Seat = Seat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ReceivePossessPawn
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::ReceivePossessPawn(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ReceivePossessPawn");
		
		ABP_HDPlayerControllerBase_C_ReceivePossessPawn_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.CharacterDeath
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       VictimPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 VictimController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              KillingDamage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::CharacterDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.CharacterDeath");
		
		ABP_HDPlayerControllerBase_C_CharacterDeath_Params params {};
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
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.Auth_SpawnVehicle
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_HDPlayerControllerBase_C::Auth_SpawnVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.Auth_SpawnVehicle");
		
		ABP_HDPlayerControllerBase_C_Auth_SpawnVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ReceiveGameHasEnded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      EndGameFocus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsWinner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerControllerBase_C::ReceiveGameHasEnded(class AActor* EndGameFocus, bool bIsWinner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ReceiveGameHasEnded");
		
		ABP_HDPlayerControllerBase_C_ReceiveGameHasEnded_Params params {};
		params.EndGameFocus = EndGameFocus;
		params.bIsWinner = bIsWinner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ExecuteUbergraph_BP_HDPlayerControllerBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerControllerBase_C::ExecuteUbergraph_BP_HDPlayerControllerBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ExecuteUbergraph_BP_HDPlayerControllerBase");
		
		ABP_HDPlayerControllerBase_C_ExecuteUbergraph_BP_HDPlayerControllerBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.OnRepPlayerState__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerControllerBase_C::OnRepPlayerState__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.OnRepPlayerState__DelegateSignature");
		
		ABP_HDPlayerControllerBase_C_OnRepPlayerState__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HDPlayerControllerBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HDPlayerControllerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C");
		return ptr;
	}

}


