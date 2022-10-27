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
	 * 		Name   -> Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_LocalGame_ScenarioSelection_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.OnFocusReceived");
		
		UBP_LocalGame_ScenarioSelection_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.GetScenarioPrintText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        GameModeNameText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ScenarioText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ScenarioPrintText                                          (Parm, OutParm)
	 */
	void UBP_LocalGame_ScenarioSelection_C::GetScenarioPrintText(const class FText& GameModeNameText, const class FText& ScenarioText, class FText* ScenarioPrintText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.GetScenarioPrintText");
		
		UBP_LocalGame_ScenarioSelection_C_GetScenarioPrintText_Params params {};
		params.GameModeNameText = GameModeNameText;
		params.ScenarioText = ScenarioText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScenarioPrintText != nullptr)
			*ScenarioPrintText = params.ScenarioPrintText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.ChooseScenario
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_LocalGame_ScenarioButton_C*              ScenarioButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LocalGame_ScenarioSelection_C::ChooseScenario(class UBP_LocalGame_ScenarioButton_C* ScenarioButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.ChooseScenario");
		
		UBP_LocalGame_ScenarioSelection_C_ChooseScenario_Params params {};
		params.ScenarioButton = ScenarioButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.Should Display Scenario
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      ScenarioName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Display                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_LocalGame_ScenarioSelection_C::Should_Display_Scenario(const class FString& ScenarioName, bool* Display)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.Should Display Scenario");
		
		UBP_LocalGame_ScenarioSelection_C_Should_Display_Scenario_Params params {};
		params.ScenarioName = ScenarioName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Display != nullptr)
			*Display = params.Display;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_LocalGame_ScenarioSelection_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.Construct");
		
		UBP_LocalGame_ScenarioSelection_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.ScenarioChosen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_LocalGame_ScenarioButton_C*              ScenarioButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LocalGame_ScenarioSelection_C::ScenarioChosen(class UBP_LocalGame_ScenarioButton_C* ScenarioButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.ScenarioChosen");
		
		UBP_LocalGame_ScenarioSelection_C_ScenarioChosen_Params params {};
		params.ScenarioButton = ScenarioButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.OnRefreshScenarios
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_LocalGame_ScenarioSelection_C::OnRefreshScenarios()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.OnRefreshScenarios");
		
		UBP_LocalGame_ScenarioSelection_C_OnRefreshScenarios_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.ExecuteUbergraph_BP_LocalGame_ScenarioSelection
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LocalGame_ScenarioSelection_C::ExecuteUbergraph_BP_LocalGame_ScenarioSelection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.ExecuteUbergraph_BP_LocalGame_ScenarioSelection");
		
		UBP_LocalGame_ScenarioSelection_C_ExecuteUbergraph_BP_LocalGame_ScenarioSelection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.OnScenarioChosen__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ScenarioName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      GameModeName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        ScenarioPrintText                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_LocalGame_ScenarioSelection_C::OnScenarioChosen__DelegateSignature(const class FString& ScenarioName, const class FString& GameModeName, const class FText& ScenarioPrintText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C.OnScenarioChosen__DelegateSignature");
		
		UBP_LocalGame_ScenarioSelection_C_OnScenarioChosen__DelegateSignature_Params params {};
		params.ScenarioName = ScenarioName;
		params.GameModeName = GameModeName;
		params.ScenarioPrintText = ScenarioPrintText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_LocalGame_ScenarioSelection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_LocalGame_ScenarioSelection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C");
		return ptr;
	}

}


