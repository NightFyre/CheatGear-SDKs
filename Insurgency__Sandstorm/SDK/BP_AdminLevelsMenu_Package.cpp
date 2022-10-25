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
	 * 		Name   -> Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.ClearLevelList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AdminLevelsMenu_C::ClearLevelList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.ClearLevelList");
		
		UBP_AdminLevelsMenu_C_ClearLevelList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.OnScenarioButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Scenario                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            IntValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AdminLevelsMenu_C::OnScenarioButtonClicked(const class FString& Scenario, int32_t IntValue, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.OnScenarioButtonClicked");
		
		UBP_AdminLevelsMenu_C_OnScenarioButtonClicked_Params params {};
		params.Scenario = Scenario;
		params.IntValue = IntValue;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.OnLevelButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            IntValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AdminLevelsMenu_C::OnLevelButtonClicked(const class FString& Level, int32_t IntValue, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.OnLevelButtonClicked");
		
		UBP_AdminLevelsMenu_C_OnLevelButtonClicked_Params params {};
		params.Level = Level;
		params.IntValue = IntValue;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.OnSelectLevel
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_AdminLevelsMenu_C::OnSelectLevel(class FString* Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.OnSelectLevel");
		
		UBP_AdminLevelsMenu_C_OnSelectLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Level != nullptr)
			*Level = params.Level;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.PopulateScenarioList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              Scenarios                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_AdminLevelsMenu_C::PopulateScenarioList(TArray<class FString>* Scenarios)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.PopulateScenarioList");
		
		UBP_AdminLevelsMenu_C_PopulateScenarioList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Scenarios != nullptr)
			*Scenarios = params.Scenarios;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.PopulateLevelList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              Levels                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_AdminLevelsMenu_C::PopulateLevelList(TArray<class FString>* Levels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.PopulateLevelList");
		
		UBP_AdminLevelsMenu_C_PopulateLevelList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Levels != nullptr)
			*Levels = params.Levels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_AdminLevelsMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.Construct");
		
		UBP_AdminLevelsMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.OnReceivedLevelList
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              LevelNames                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_AdminLevelsMenu_C::OnReceivedLevelList(TArray<class FString> LevelNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.OnReceivedLevelList");
		
		UBP_AdminLevelsMenu_C_OnReceivedLevelList_Params params {};
		params.LevelNames = LevelNames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.OnReceivedScenarioList
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              Scenarios                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_AdminLevelsMenu_C::OnReceivedScenarioList(TArray<class FString> Scenarios)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.OnReceivedScenarioList");
		
		UBP_AdminLevelsMenu_C_OnReceivedScenarioList_Params params {};
		params.Scenarios = Scenarios;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.BndEvt__DayButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_AdminLevelsMenu_C::BndEvt__DayButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.BndEvt__DayButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
		
		UBP_AdminLevelsMenu_C_BndEvt__DayButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.BndEvt__NightButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_AdminLevelsMenu_C::BndEvt__NightButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.BndEvt__NightButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
		
		UBP_AdminLevelsMenu_C_BndEvt__NightButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.ExecuteUbergraph_BP_AdminLevelsMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AdminLevelsMenu_C::ExecuteUbergraph_BP_AdminLevelsMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminLevelsMenu.BP_AdminLevelsMenu_C.ExecuteUbergraph_BP_AdminLevelsMenu");
		
		UBP_AdminLevelsMenu_C_ExecuteUbergraph_BP_AdminLevelsMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AdminLevelsMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AdminLevelsMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_AdminLevelsMenu.BP_AdminLevelsMenu_C");
		return ptr;
	}

}


