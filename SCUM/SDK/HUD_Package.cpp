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
	 * 		Name   -> Function HUD.HUD_C.UpdateElementsVisibility
	 * 		Flags  -> ()
	 */
	void UHUD_C::UpdateElementsVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.UpdateElementsVisibility");
		
		UHUD_C_UpdateElementsVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.GetVisibility_VicinityBackgroundImage
	 * 		Flags  -> ()
	 */
	ESlateVisibility UHUD_C::GetVisibility_VicinityBackgroundImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetVisibility_VicinityBackgroundImage");
		
		UHUD_C_GetVisibility_VicinityBackgroundImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.GetCompassWidget
	 * 		Flags  -> ()
	 */
	class UCompassWidget* UHUD_C::GetCompassWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetCompassWidget");
		
		UHUD_C_GetCompassWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.GetBreathingBarLungsWidget
	 * 		Flags  -> ()
	 */
	class UBreathingBarLungsWidget* UHUD_C::GetBreathingBarLungsWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetBreathingBarLungsWidget");
		
		UHUD_C_GetBreathingBarLungsWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.GetPrisonerLifeIndicatorsSprite
	 * 		Flags  -> ()
	 */
	class UPrisonerLifeIndicatorsSprite* UHUD_C::GetPrisonerLifeIndicatorsSprite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetPrisonerLifeIndicatorsSprite");
		
		UHUD_C_GetPrisonerLifeIndicatorsSprite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.GetVisibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UHUD_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetVisibility_1");
		
		UHUD_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.GetCraftingPanel
	 * 		Flags  -> ()
	 */
	class UCraftingPanelWidget* UHUD_C::GetCraftingPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetCraftingPanel");
		
		UHUD_C_GetCraftingPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.GetMainCanvasVisibility
	 * 		Flags  -> ()
	 */
	bool UHUD_C::GetMainCanvasVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetMainCanvasVisibility");
		
		UHUD_C_GetMainCanvasVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.GetTempDropZoneTimeText
	 * 		Flags  -> ()
	 */
	class FText UHUD_C::GetTempDropZoneTimeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetTempDropZoneTimeText");
		
		UHUD_C_GetTempDropZoneTimeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.GetWatermarkText
	 * 		Flags  -> ()
	 */
	class FText UHUD_C::GetWatermarkText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetWatermarkText");
		
		UHUD_C_GetWatermarkText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.GetDebugInfoText
	 * 		Flags  -> ()
	 */
	class FText UHUD_C::GetDebugInfoText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetDebugInfoText");
		
		UHUD_C_GetDebugInfoText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.GetBCURightPanel
	 * 		Flags  -> ()
	 */
	class UUserWidget* UHUD_C::GetBCURightPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetBCURightPanel");
		
		UHUD_C_GetBCURightPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.GetBCULeftPanel
	 * 		Flags  -> ()
	 */
	class UUserWidget* UHUD_C::GetBCULeftPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetBCULeftPanel");
		
		UHUD_C_GetBCULeftPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.GetInventoryPanel
	 * 		Flags  -> ()
	 */
	class UInventoryPanelThirdIteration* UHUD_C::GetInventoryPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetInventoryPanel");
		
		UHUD_C_GetInventoryPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.CompleteInitialization
	 * 		Flags  -> ()
	 */
	void UHUD_C::CompleteInitialization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CompleteInitialization");
		
		UHUD_C_CompleteInitialization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.StartInitialization
	 * 		Flags  -> ()
	 */
	void UHUD_C::StartInitialization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.StartInitialization");
		
		UHUD_C_StartInitialization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.CompleteMonitorsInitialization
	 * 		Flags  -> ()
	 */
	void UHUD_C::CompleteMonitorsInitialization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CompleteMonitorsInitialization");
		
		UHUD_C_CompleteMonitorsInitialization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.ShouldCompleteInitialization
	 * 		Flags  -> ()
	 */
	bool UHUD_C::ShouldCompleteInitialization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShouldCompleteInitialization");
		
		UHUD_C_ShouldCompleteInitialization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.IsEverythingReadyForInitialization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isEverythingReady                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_C::IsEverythingReadyForInitialization(bool* isEverythingReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsEverythingReadyForInitialization");
		
		UHUD_C_IsEverythingReadyForInitialization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isEverythingReady != nullptr)
			*isEverythingReady = params.isEverythingReady;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.IsOwningPrisonerWithComponentsValid
	 * 		Flags  -> ()
	 */
	bool UHUD_C::IsOwningPrisonerWithComponentsValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsOwningPrisonerWithComponentsValid");
		
		UHUD_C_IsOwningPrisonerWithComponentsValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.GetOwningPrisoner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrisoner*                                   Prisoner                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_C::GetOwningPrisoner(bool* Success, class APrisoner** Prisoner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetOwningPrisoner");
		
		UHUD_C_GetOwningPrisoner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (Prisoner != nullptr)
			*Prisoner = params.Prisoner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.IsOwningPlayerPawnValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isPlayerPawnValid                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_C::IsOwningPlayerPawnValid(bool* isPlayerPawnValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsOwningPlayerPawnValid");
		
		UHUD_C_IsOwningPlayerPawnValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isPlayerPawnValid != nullptr)
			*isPlayerPawnValid = params.isPlayerPawnValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.IsOwningPlayerControllerValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isPlayerControllerValid                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_C::IsOwningPlayerControllerValid(bool* isPlayerControllerValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsOwningPlayerControllerValid");
		
		UHUD_C_IsOwningPlayerControllerValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isPlayerControllerValid != nullptr)
			*isPlayerControllerValid = params.isPlayerControllerValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.CheckIfReadyForInitialization
	 * 		Flags  -> ()
	 */
	void UHUD_C::CheckIfReadyForInitialization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CheckIfReadyForInitialization");
		
		UHUD_C_CheckIfReadyForInitialization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.AttachHUDMonitors
	 * 		Flags  -> ()
	 */
	void UHUD_C::AttachHUDMonitors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AttachHUDMonitors");
		
		UHUD_C_AttachHUDMonitors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.StartMonitorsInitialization
	 * 		Flags  -> ()
	 */
	void UHUD_C::StartMonitorsInitialization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.StartMonitorsInitialization");
		
		UHUD_C_StartMonitorsInitialization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.PrisonerValidation
	 * 		Flags  -> ()
	 */
	void UHUD_C::PrisonerValidation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.PrisonerValidation");
		
		UHUD_C_PrisonerValidation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.ShouldSerializeWidgetLayout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UHUD_C::ShouldSerializeWidgetLayout(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShouldSerializeWidgetLayout");
		
		UHUD_C_ShouldSerializeWidgetLayout_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.GetTopLevelPanelWidget
	 * 		Flags  -> ()
	 */
	class UPanelWidget* UHUD_C::GetTopLevelPanelWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetTopLevelPanelWidget");
		
		UHUD_C_GetTopLevelPanelWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.ShowWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWarningType                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               playSounds                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_C::ShowWarning(EWarningType Type, bool playSounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowWarning");
		
		UHUD_C_ShowWarning_Params params {};
		params.Type = Type;
		params.playSounds = playSounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.RefreshMonitorSizes
	 * 		Flags  -> ()
	 */
	void UHUD_C::RefreshMonitorSizes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.RefreshMonitorSizes");
		
		UHUD_C_RefreshMonitorSizes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.SetPrisonerToMonitorOnChildren
	 * 		Flags  -> ()
	 */
	void UHUD_C::SetPrisonerToMonitorOnChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetPrisonerToMonitorOnChildren");
		
		UHUD_C_SetPrisonerToMonitorOnChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.ToggleAllMonitorsVisibility
	 * 		Flags  -> ()
	 */
	void UHUD_C::ToggleAllMonitorsVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ToggleAllMonitorsVisibility");
		
		UHUD_C_ToggleAllMonitorsVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.HideLifeIndicators
	 * 		Flags  -> ()
	 */
	void UHUD_C::HideLifeIndicators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HideLifeIndicators");
		
		UHUD_C_HideLifeIndicators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.ShowLifeIndicators
	 * 		Flags  -> ()
	 */
	void UHUD_C::ShowLifeIndicators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowLifeIndicators");
		
		UHUD_C_ShowLifeIndicators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.HideMonitors
	 * 		Flags  -> ()
	 */
	void UHUD_C::HideMonitors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HideMonitors");
		
		UHUD_C_HideMonitors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.ShowMonitors
	 * 		Flags  -> ()
	 */
	void UHUD_C::ShowMonitors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowMonitors");
		
		UHUD_C_ShowMonitors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.SetupHUDMonitors
	 * 		Flags  -> ()
	 */
	void UHUD_C::SetupHUDMonitors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetupHUDMonitors");
		
		UHUD_C_SetupHUDMonitors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.SetPrisonerToMonitor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APrisoner*                                   Prisoner                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_C::SetPrisonerToMonitor(class APrisoner* Prisoner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetPrisonerToMonitor");
		
		UHUD_C_SetPrisonerToMonitor_Params params {};
		params.Prisoner = Prisoner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.SetDefaultPrisonerToMonitor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_C::SetDefaultPrisonerToMonitor(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetDefaultPrisonerToMonitor");
		
		UHUD_C_SetDefaultPrisonerToMonitor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.GetDefaultPrisoner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APrisoner*                                   Prisoner                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_C::GetDefaultPrisoner(class APrisoner** Prisoner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetDefaultPrisoner");
		
		UHUD_C_GetDefaultPrisoner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Prisoner != nullptr)
			*Prisoner = params.Prisoner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UHUD_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnKeyUp");
		
		UHUD_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function HUD.HUD_C.UpdateCircularProgressBarsPercentages
	 * 		Flags  -> ()
	 */
	void UHUD_C::UpdateCircularProgressBarsPercentages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.UpdateCircularProgressBarsPercentages");
		
		UHUD_C_UpdateCircularProgressBarsPercentages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.AddChatLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      string                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EChatType                                          ChatType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_C::AddChatLine(const class FString& string, EChatType ChatType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddChatLine");
		
		UHUD_C_AddChatLine_Params params {};
		params.string = string;
		params.ChatType = ChatType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.ToggleMonitorsVisibility
	 * 		Flags  -> ()
	 */
	void UHUD_C::ToggleMonitorsVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ToggleMonitorsVisibility");
		
		UHUD_C_ToggleMonitorsVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.AddObjective
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_MissionObjective_C*                      Objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlaySound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowNotification                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_C::AddObjective(class ABP_MissionObjective_C* Objective, bool PlaySound, bool ShowNotification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddObjective");
		
		UHUD_C_AddObjective_Params params {};
		params.Objective = Objective;
		params.PlaySound = PlaySound;
		params.ShowNotification = ShowNotification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.OnPerformanceMonitorMaximized
	 * 		Flags  -> ()
	 */
	void UHUD_C::OnPerformanceMonitorMaximized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnPerformanceMonitorMaximized");
		
		UHUD_C_OnPerformanceMonitorMaximized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.OnRDAMonitorMaximized
	 * 		Flags  -> ()
	 */
	void UHUD_C::OnRDAMonitorMaximized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnRDAMonitorMaximized");
		
		UHUD_C_OnRDAMonitorMaximized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.OnBCUBodyMonitorMaximized
	 * 		Flags  -> ()
	 */
	void UHUD_C::OnBCUBodyMonitorMaximized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnBCUBodyMonitorMaximized");
		
		UHUD_C_OnBCUBodyMonitorMaximized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.AddMessageToScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               beep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_C::AddMessageToScreen(const class FText& Text, bool beep, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddMessageToScreen");
		
		UHUD_C_AddMessageToScreen_Params params {};
		params.Text = Text;
		params.beep = beep;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.AddTeammateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_C::AddTeammateName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddTeammateName");
		
		UHUD_C_AddTeammateName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.RemoveTeammateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_C::RemoveTeammateName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.RemoveTeammateName");
		
		UHUD_C_RemoveTeammateName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.AddWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWarningType                                       warningType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               playSounds                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_C::AddWarning(EWarningType warningType, bool playSounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddWarning");
		
		UHUD_C_AddWarning_Params params {};
		params.warningType = warningType;
		params.playSounds = playSounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.OnPrisonerSet
	 * 		Flags  -> ()
	 */
	void UHUD_C::OnPrisonerSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnPrisonerSet");
		
		UHUD_C_OnPrisonerSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.Construct");
		
		UHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.Shake
	 * 		Flags  -> ()
	 */
	void UHUD_C::Shake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.Shake");
		
		UHUD_C_Shake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.Tick");
		
		UHUD_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.ClearTeammateNames
	 * 		Flags  -> ()
	 */
	void UHUD_C::ClearTeammateNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ClearTeammateNames");
		
		UHUD_C_ClearTeammateNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.ObjectiveChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_MissionObjective_C*                      sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_C::ObjectiveChanged(class ABP_MissionObjective_C* sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ObjectiveChanged");
		
		UHUD_C_ObjectiveChanged_Params params {};
		params.sender = sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.UpdateAttributesHistory
	 * 		Flags  -> ()
	 */
	void UHUD_C::UpdateAttributesHistory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.UpdateAttributesHistory");
		
		UHUD_C_UpdateAttributesHistory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.SetMainCanvasVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_C::SetMainCanvasVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetMainCanvasVisibility");
		
		UHUD_C_SetMainCanvasVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.SwitchTabMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_C::SwitchTabMode(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SwitchTabMode");
		
		UHUD_C_SwitchTabMode_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.ShowNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasicNotificationDescription*               Description                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_C::ShowNotification(class UBasicNotificationDescription* Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowNotification");
		
		UHUD_C_ShowNotification_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.ClearNotifications
	 * 		Flags  -> ()
	 */
	void UHUD_C::ClearNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ClearNotifications");
		
		UHUD_C_ClearNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.SetTabEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETabMode                                           Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_C::SetTabEnabled(ETabMode Tab, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetTabEnabled");
		
		UHUD_C_SetTabEnabled_Params params {};
		params.Tab = Tab;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.ShowKillFeedNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        prefix                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        characterName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        suffix                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ping                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_C::ShowKillFeedNotification(const class FText& prefix, const class FText& characterName, const class FText& suffix, bool ping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowKillFeedNotification");
		
		UHUD_C_ShowKillFeedNotification_Params params {};
		params.prefix = prefix;
		params.characterName = characterName;
		params.suffix = suffix;
		params.ping = ping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.OnPrisonerChanged
	 * 		Flags  -> ()
	 */
	void UHUD_C::OnPrisonerChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnPrisonerChanged");
		
		UHUD_C_OnPrisonerChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.ShowLevelUpNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkill*                                      Skill                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESkillLevel                                        skillLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_C::ShowLevelUpNotification(class USkill* Skill, ESkillLevel skillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowLevelUpNotification");
		
		UHUD_C_ShowLevelUpNotification_Params params {};
		params.Skill = Skill;
		params.skillLevel = skillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.ShowTrapsDetectedNotification
	 * 		Flags  -> ()
	 */
	void UHUD_C::ShowTrapsDetectedNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowTrapsDetectedNotification");
		
		UHUD_C_ShowTrapsDetectedNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.StartUpdateableNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUpdateableNotificationDescription*          Description                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_C::StartUpdateableNotification(class UUpdateableNotificationDescription* Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.StartUpdateableNotification");
		
		UHUD_C_StartUpdateableNotification_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.UpdateUpdateableNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      notificationName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_C::UpdateUpdateableNotification(const class FString& notificationName, const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.UpdateUpdateableNotification");
		
		UHUD_C_UpdateUpdateableNotification_Params params {};
		params.notificationName = notificationName;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.AddMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMessageType                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_C::AddMessage(EMessageType Type, const class FText& Text, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddMessage");
		
		UHUD_C_AddMessage_Params params {};
		params.Type = Type;
		params.Text = Text;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.SetTabModeTabIsAlerted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_C::SetTabModeTabIsAlerted(int32_t Index, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetTabModeTabIsAlerted");
		
		UHUD_C_SetTabModeTabIsAlerted_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.AddMessageWithColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHUDMessageType                                    Type                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              Duration                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_C::AddMessageWithColor(EHUDMessageType Type, const class FText& Text, float Duration, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddMessageWithColor");
		
		UHUD_C_AddMessageWithColor_Params params {};
		params.Type = Type;
		params.Text = Text;
		params.Duration = Duration;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.UpdateHUDElementVisibility
	 * 		Flags  -> ()
	 */
	void UHUD_C::UpdateHUDElementVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.UpdateHUDElementVisibility");
		
		UHUD_C_UpdateHUDElementVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD.HUD_C.ExecuteUbergraph_HUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_C::ExecuteUbergraph_HUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ExecuteUbergraph_HUD");
		
		UHUD_C_ExecuteUbergraph_HUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD.HUD_C");
		return ptr;
	}

}


