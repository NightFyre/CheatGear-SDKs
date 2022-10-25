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
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.CanStartCustomGame
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanStart                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FText>                                Errors                                                     (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBP_CustomGameCreation_C::CanStartCustomGame(bool* CanStart, TArray<class FText>* Errors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.CanStartCustomGame");
		
		UBP_CustomGameCreation_C_CanStartCustomGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanStart != nullptr)
			*CanStart = params.CanStart;
		if (Errors != nullptr)
			*Errors = params.Errors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.UpdateStartState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CustomGameCreation_C::UpdateStartState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.UpdateStartState");
		
		UBP_CustomGameCreation_C_UpdateStartState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.SetHighlightedListRow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPanelWidget*                                Container                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_CustomGameCreation_C::SetHighlightedListRow(class UPanelWidget* Container, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.SetHighlightedListRow");
		
		UBP_CustomGameCreation_C_SetHighlightedListRow_Params params {};
		params.Container = Container;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnScenarioSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Scenario                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_CustomGameCreation_C::OnScenarioSelected(const class FString& Scenario)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnScenarioSelected");
		
		UBP_CustomGameCreation_C_OnScenarioSelected_Params params {};
		params.Scenario = Scenario;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.HasMapScenarioSelected
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               HasMapAndScenario                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_CustomGameCreation_C::HasMapScenarioSelected(bool* HasMapAndScenario)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.HasMapScenarioSelected");
		
		UBP_CustomGameCreation_C_HasMapScenarioSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasMapAndScenario != nullptr)
			*HasMapAndScenario = params.HasMapAndScenario;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.PopulateScenarioList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_CustomGameCreation_C::PopulateScenarioList(const class FString& MapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.PopulateScenarioList");
		
		UBP_CustomGameCreation_C_PopulateScenarioList_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnMapSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_CustomGameCreation_C::OnMapSelected(const class FString& MapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnMapSelected");
		
		UBP_CustomGameCreation_C_OnMapSelected_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.PopulateMapList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CustomGameCreation_C::PopulateMapList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.PopulateMapList");
		
		UBP_CustomGameCreation_C_PopulateMapList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_CustomGameCreation_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnKeyDown");
		
		UBP_CustomGameCreation_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_CustomGameCreation_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnFocusReceived");
		
		UBP_CustomGameCreation_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_CustomGameCreation_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.Construct");
		
		UBP_CustomGameCreation_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.BndEvt__MapList_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CustomGameCreation_C::BndEvt__MapList_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.BndEvt__MapList_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature");
		
		UBP_CustomGameCreation_C_BndEvt__MapList_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_CustomGameCreation_C::BndEvt__StartButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UBP_CustomGameCreation_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.BndEvt__BP_DefaultKeyHints_K2Node_ComponentBoundEvent_2_OnBackButtonPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_CustomGameCreation_C::BndEvt__BP_DefaultKeyHints_K2Node_ComponentBoundEvent_2_OnBackButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.BndEvt__BP_DefaultKeyHints_K2Node_ComponentBoundEvent_2_OnBackButtonPressed__DelegateSignature");
		
		UBP_CustomGameCreation_C_BndEvt__BP_DefaultKeyHints_K2Node_ComponentBoundEvent_2_OnBackButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.ExecuteUbergraph_BP_CustomGameCreation
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CustomGameCreation_C::ExecuteUbergraph_BP_CustomGameCreation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.ExecuteUbergraph_BP_CustomGameCreation");
		
		UBP_CustomGameCreation_C_ExecuteUbergraph_BP_CustomGameCreation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnBack__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CustomGameCreation_C::OnBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnBack__DelegateSignature");
		
		UBP_CustomGameCreation_C_OnBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnContinue__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CustomGameCreation_C::OnContinue__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomGameCreation.BP_CustomGameCreation_C.OnContinue__DelegateSignature");
		
		UBP_CustomGameCreation_C_OnContinue__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CustomGameCreation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CustomGameCreation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_CustomGameCreation.BP_CustomGameCreation_C");
		return ptr;
	}

}


