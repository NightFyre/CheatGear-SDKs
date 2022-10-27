/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.Get Pirate Selector Component
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UPirateSelector*                             PirateSelectorComponent                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_C::Get_Pirate_Selector_Component(class UPirateSelector** PirateSelectorComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.Get Pirate Selector Component");
		
		Asot_frontend_01_a_C_Get_Pirate_Selector_Component_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PirateSelectorComponent != nullptr)
			*PirateSelectorComponent = params.PirateSelectorComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.GetFrontendCameraComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UFrontendCameraComponent*                    Camera_Component                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_C::GetFrontendCameraComponent(class UFrontendCameraComponent** Camera_Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.GetFrontendCameraComponent");
		
		Asot_frontend_01_a_C_GetFrontendCameraComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Camera_Component != nullptr)
			*Camera_Component = params.Camera_Component;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.ResetLineUpPirates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::ResetLineUpPirates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.ResetLineUpPirates");
		
		Asot_frontend_01_a_C_ResetLineUpPirates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.RefreshCharSlotStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::RefreshCharSlotStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.RefreshCharSlotStatus");
		
		Asot_frontend_01_a_C_RefreshCharSlotStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.SetCharSlotId
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewCharSlotID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_C::SetCharSlotId(int32_t NewCharSlotID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.SetCharSlotId");
		
		Asot_frontend_01_a_C_SetCharSlotId_Params params {};
		params.NewCharSlotID = NewCharSlotID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.PirateHighlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_C::PirateHighlight(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.PirateHighlight");
		
		Asot_frontend_01_a_C_PirateHighlight_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.GetSelectedPirate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABP_PirateGenerator_LineUp_C*                Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_C::GetSelectedPirate(class ABP_PirateGenerator_LineUp_C** Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.GetSelectedPirate");
		
		Asot_frontend_01_a_C_GetSelectedPirate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.GetPirateLineup
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_PirateGenerator_LineUpUI_C*              Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_C::GetPirateLineup(class ABP_PirateGenerator_LineUpUI_C** Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.GetPirateLineup");
		
		Asot_frontend_01_a_C_GetPirateLineup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void Asot_frontend_01_a_C::InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687");
		
		Asot_frontend_01_a_C_InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void Asot_frontend_01_a_C::InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686");
		
		Asot_frontend_01_a_C_InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Stop
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::K2Node_MatineeController_5_Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Stop");
		
		Asot_frontend_01_a_C_K2Node_MatineeController_5_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Pause
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::K2Node_MatineeController_5_Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Pause");
		
		Asot_frontend_01_a_C_K2Node_MatineeController_5_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Start
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::K2Node_MatineeController_5_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Start");
		
		Asot_frontend_01_a_C_K2Node_MatineeController_5_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Finished
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::K2Node_MatineeController_5_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Finished");
		
		Asot_frontend_01_a_C_K2Node_MatineeController_5_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void Asot_frontend_01_a_C::InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685");
		
		Asot_frontend_01_a_C_InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void Asot_frontend_01_a_C::InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684");
		
		Asot_frontend_01_a_C_InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void Asot_frontend_01_a_C::InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683");
		
		Asot_frontend_01_a_C_InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_C::InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22");
		
		Asot_frontend_01_a_C_InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.ReceiveBeginPlay");
		
		Asot_frontend_01_a_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.BeginCelebration
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::BeginCelebration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.BeginCelebration");
		
		Asot_frontend_01_a_C_BeginCelebration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.pirateSelectCam
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::pirateSelectCam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.pirateSelectCam");
		
		Asot_frontend_01_a_C_pirateSelectCam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.showShipSelectPirate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::showShipSelectPirate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.showShipSelectPirate");
		
		Asot_frontend_01_a_C_showShipSelectPirate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.reinstateSelectedPirateLoc
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::reinstateSelectedPirateLoc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.reinstateSelectedPirateLoc");
		
		Asot_frontend_01_a_C_reinstateSelectedPirateLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.StartGeneratingPirates
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::StartGeneratingPirates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.StartGeneratingPirates");
		
		Asot_frontend_01_a_C_StartGeneratingPirates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.SelectionCancelled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::SelectionCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.SelectionCancelled");
		
		Asot_frontend_01_a_C_SelectionCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.SelectPirateButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::SelectPirateButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.SelectPirateButtonPressed");
		
		Asot_frontend_01_a_C_SelectPirateButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.RefreshPiratesButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::RefreshPiratesButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.RefreshPiratesButtonPressed");
		
		Asot_frontend_01_a_C_RefreshPiratesButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.FavoritePirateButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::FavoritePirateButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.FavoritePirateButtonPressed");
		
		Asot_frontend_01_a_C_FavoritePirateButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.ReceiveTick");
		
		Asot_frontend_01_a_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.PiratesInitializedEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::PiratesInitializedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.PiratesInitializedEvent");
		
		Asot_frontend_01_a_C_PiratesInitializedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.StartPirateCreationAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::StartPirateCreationAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.StartPirateCreationAnimation");
		
		Asot_frontend_01_a_C_StartPirateCreationAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.OnLeavingSelectionState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_C::OnLeavingSelectionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.OnLeavingSelectionState");
		
		Asot_frontend_01_a_C_OnLeavingSelectionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a.sot_frontend_01_a_C.ExecuteUbergraph_sot_frontend_01_a
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_C::ExecuteUbergraph_sot_frontend_01_a(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a.sot_frontend_01_a_C.ExecuteUbergraph_sot_frontend_01_a");
		
		Asot_frontend_01_a_C_ExecuteUbergraph_sot_frontend_01_a_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Asot_frontend_01_a_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Asot_frontend_01_a_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sot_frontend_01_a.sot_frontend_01_a_C");
		return ptr;
	}

}


