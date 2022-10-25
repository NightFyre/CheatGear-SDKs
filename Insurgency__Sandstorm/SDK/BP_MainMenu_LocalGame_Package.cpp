/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.DetermineScenarioOnMapChosen
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_LocalGame_ScenarioSelection_C*           ScenarioSelection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        PrevScenarioName                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UWidget*                                     ScenarioOutput                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_LocalGame_C::DetermineScenarioOnMapChosen(class UBP_LocalGame_ScenarioSelection_C* ScenarioSelection, const class FText& PrevScenarioName, class UWidget** ScenarioOutput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.DetermineScenarioOnMapChosen");
		
		UBP_MainMenu_LocalGame_C_DetermineScenarioOnMapChosen_Params params {};
		params.ScenarioSelection = ScenarioSelection;
		params.PrevScenarioName = PrevScenarioName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScenarioOutput != nullptr)
			*ScenarioOutput = params.ScenarioOutput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnClosedRestrictionDialog
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_LocalGame_C::OnClosedRestrictionDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnClosedRestrictionDialog");
		
		UBP_MainMenu_LocalGame_C_OnClosedRestrictionDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.Display Map Download Waiting Dialog
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_LocalGame_C::Display_Map_Download_Waiting_Dialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.Display Map Download Waiting Dialog");
		
		UBP_MainMenu_LocalGame_C_Display_Map_Download_Waiting_Dialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_MainMenu_LocalGame_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnKeyUp");
		
		UBP_MainMenu_LocalGame_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_MainMenu_LocalGame_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnKeyDown");
		
		UBP_MainMenu_LocalGame_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnLightingChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      LightingSting                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        LightingText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_LocalGame_C::OnLightingChanged(const class FString& LightingSting, const class FText& LightingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnLightingChanged");
		
		UBP_MainMenu_LocalGame_C_OnLightingChanged_Params params {};
		params.LightingSting = LightingSting;
		params.LightingText = LightingText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.CheckForInitialSelectedMap
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFoundMap                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      MapName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_LocalGame_C::CheckForInitialSelectedMap(bool* bFoundMap, class FString* MapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.CheckForInitialSelectedMap");
		
		UBP_MainMenu_LocalGame_C_CheckForInitialSelectedMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFoundMap != nullptr)
			*bFoundMap = params.bFoundMap;
		if (MapName != nullptr)
			*MapName = params.MapName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.SetGamemodeImage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ScenarioText                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_LocalGame_C::SetGamemodeImage(const class FString& ScenarioText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.SetGamemodeImage");
		
		UBP_MainMenu_LocalGame_C_SetGamemodeImage_Params params {};
		params.ScenarioText = ScenarioText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.SetMapImage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Lighting                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_LocalGame_C::SetMapImage(const class FString& MapName, const class FString& Lighting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.SetMapImage");
		
		UBP_MainMenu_LocalGame_C_SetMapImage_Params params {};
		params.MapName = MapName;
		params.Lighting = Lighting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.On New Scenario Chosen
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedScenarioFileName                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SelectedGamemodeName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        SelectedScenarioText                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_LocalGame_C::On_New_Scenario_Chosen(const class FString& SelectedScenarioFileName, const class FString& SelectedGamemodeName, const class FText& SelectedScenarioText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.On New Scenario Chosen");
		
		UBP_MainMenu_LocalGame_C_On_New_Scenario_Chosen_Params params {};
		params.SelectedScenarioFileName = SelectedScenarioFileName;
		params.SelectedGamemodeName = SelectedGamemodeName;
		params.SelectedScenarioText = SelectedScenarioText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnNewMapChosen
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_LocalGame_C::OnNewMapChosen(const class FString& MapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnNewMapChosen");
		
		UBP_MainMenu_LocalGame_C_OnNewMapChosen_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.Get_StartGame_bIsEnabled_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_MainMenu_LocalGame_C::Get_StartGame_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.Get_StartGame_bIsEnabled_1");
		
		UBP_MainMenu_LocalGame_C_Get_StartGame_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_MainMenu_LocalGame_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnFocusReceived");
		
		UBP_MainMenu_LocalGame_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_MainMenu_LocalGame_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnCustomNavigation");
		
		UBP_MainMenu_LocalGame_C_OnCustomNavigation_Params params {};
		params.Widget = Widget;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.GetBreadcrumbData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Top                                                        (Parm, OutParm)
	 * 		class FText                                        Bottom                                                     (Parm, OutParm)
	 */
	void UBP_MainMenu_LocalGame_C::GetBreadcrumbData(class FText* Top, class FText* Bottom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.GetBreadcrumbData");
		
		UBP_MainMenu_LocalGame_C_GetBreadcrumbData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Top != nullptr)
			*Top = params.Top;
		if (Bottom != nullptr)
			*Bottom = params.Bottom;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnPageSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EnumMainMenuPage                                   NewPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_LocalGame_C::OnPageSelected(EnumMainMenuPage NewPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnPageSelected");
		
		UBP_MainMenu_LocalGame_C_OnPageSelected_Params params {};
		params.NewPage = NewPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnMapChosen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_LocalGame_C::OnMapChosen(const class FString& MapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnMapChosen");
		
		UBP_MainMenu_LocalGame_C_OnMapChosen_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnScenarioChosen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ScenarioName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      GameModeName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        ScenarioPrintText                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_LocalGame_C::OnScenarioChosen(const class FString& ScenarioName, const class FString& GameModeName, const class FText& ScenarioPrintText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnScenarioChosen");
		
		UBP_MainMenu_LocalGame_C_OnScenarioChosen_Params params {};
		params.ScenarioName = ScenarioName;
		params.GameModeName = GameModeName;
		params.ScenarioPrintText = ScenarioPrintText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_LocalGame_C::BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MainMenu_LocalGame_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.BndEvt__StartGame_K2Node_ComponentBoundEvent_113_OnButtonPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_LocalGame_C::BndEvt__StartGame_K2Node_ComponentBoundEvent_113_OnButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.BndEvt__StartGame_K2Node_ComponentBoundEvent_113_OnButtonPressed__DelegateSignature");
		
		UBP_MainMenu_LocalGame_C_BndEvt__StartGame_K2Node_ComponentBoundEvent_113_OnButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_LocalGame_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UBP_MainMenu_LocalGame_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.BndEvt__LightingSelection_K2Node_ComponentBoundEvent_1_OnLightingChosen__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      LightingNameString                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        LightingNameText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_LocalGame_C::BndEvt__LightingSelection_K2Node_ComponentBoundEvent_1_OnLightingChosen__DelegateSignature(const class FString& LightingNameString, const class FText& LightingNameText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.BndEvt__LightingSelection_K2Node_ComponentBoundEvent_1_OnLightingChosen__DelegateSignature");
		
		UBP_MainMenu_LocalGame_C_BndEvt__LightingSelection_K2Node_ComponentBoundEvent_1_OnLightingChosen__DelegateSignature_Params params {};
		params.LightingNameString = LightingNameString;
		params.LightingNameText = LightingNameText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnPanelOpened
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_LocalGame_C::OnPanelOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnPanelOpened");
		
		UBP_MainMenu_LocalGame_C_OnPanelOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MainMenu_LocalGame_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.Construct");
		
		UBP_MainMenu_LocalGame_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.ExecuteUbergraph_BP_MainMenu_LocalGame
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_LocalGame_C::ExecuteUbergraph_BP_MainMenu_LocalGame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.ExecuteUbergraph_BP_MainMenu_LocalGame");
		
		UBP_MainMenu_LocalGame_C_ExecuteUbergraph_BP_MainMenu_LocalGame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnNavigateBack__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_LocalGame_C::OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_LocalGame_C_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_LocalGame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_LocalGame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C");
		return ptr;
	}

}


