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
	 * 		Name   -> Function BP_ProfileStats.BP_ProfileStats_C.GetRatioSafe
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Amount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileStats_C::GetRatioSafe(int32_t A, int32_t B, float* Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileStats.BP_ProfileStats_C.GetRatioSafe");
		
		UBP_ProfileStats_C_GetRatioSafe_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Amount != nullptr)
			*Amount = params.Amount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileStats.BP_ProfileStats_C.PopulateFromPage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSandstormPlayerProfilePage                 Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProfileStats_C::PopulateFromPage(const struct FSandstormPlayerProfilePage& Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileStats.BP_ProfileStats_C.PopulateFromPage");
		
		UBP_ProfileStats_C_PopulateFromPage_Params params {};
		params.Stats = Stats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileStats.BP_ProfileStats_C.GetMapSourceName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      MapTextName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      MapSourceName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileStats_C::GetMapSourceName(const class FString& MapTextName, class FString* MapSourceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileStats.BP_ProfileStats_C.GetMapSourceName");
		
		UBP_ProfileStats_C_GetMapSourceName_Params params {};
		params.MapTextName = MapTextName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapSourceName != nullptr)
			*MapSourceName = params.MapSourceName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileStats.BP_ProfileStats_C.GetMapNameFromString
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      MapNameReturn                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileStats_C::GetMapNameFromString(const class FString& MapName, class FString* MapNameReturn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileStats.BP_ProfileStats_C.GetMapNameFromString");
		
		UBP_ProfileStats_C_GetMapNameFromString_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapNameReturn != nullptr)
			*MapNameReturn = params.MapNameReturn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileStats.BP_ProfileStats_C.DistanceToText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DistanceInCM                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        DistanceText                                               (Parm, OutParm)
	 */
	void UBP_ProfileStats_C::DistanceToText(float DistanceInCM, class FText* DistanceText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileStats.BP_ProfileStats_C.DistanceToText");
		
		UBP_ProfileStats_C_DistanceToText_Params params {};
		params.DistanceInCM = DistanceInCM;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DistanceText != nullptr)
			*DistanceText = params.DistanceText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileStats.BP_ProfileStats_C.TimeToText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeInSeconds                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TimeText                                                   (Parm, OutParm)
	 */
	void UBP_ProfileStats_C::TimeToText(float TimeInSeconds, class FText* TimeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileStats.BP_ProfileStats_C.TimeToText");
		
		UBP_ProfileStats_C_TimeToText_Params params {};
		params.TimeInSeconds = TimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeText != nullptr)
			*TimeText = params.TimeText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileStats.BP_ProfileStats_C.UpdateFilterBoxes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bMap                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bMode                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileStats_C::UpdateFilterBoxes(bool bMap, bool bMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileStats.BP_ProfileStats_C.UpdateFilterBoxes");
		
		UBP_ProfileStats_C_UpdateFilterBoxes_Params params {};
		params.bMap = bMap;
		params.bMode = bMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileStats.BP_ProfileStats_C.OnProfileUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileStats_C::OnProfileUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileStats.BP_ProfileStats_C.OnProfileUpdated");
		
		UBP_ProfileStats_C_OnProfileUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileStats.BP_ProfileStats_C.UpdateFromStatsRecord
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatisticsPlayerProfileScenarioStats       StatRecord                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_ProfileStats_C::UpdateFromStatsRecord(struct FStatisticsPlayerProfileScenarioStats* StatRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileStats.BP_ProfileStats_C.UpdateFromStatsRecord");
		
		UBP_ProfileStats_C_UpdateFromStatsRecord_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatRecord != nullptr)
			*StatRecord = params.StatRecord;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileStats.BP_ProfileStats_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_ProfileStats_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileStats.BP_ProfileStats_C.OnFocusReceived");
		
		UBP_ProfileStats_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_ProfileStats.BP_ProfileStats_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ProfileStats_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileStats.BP_ProfileStats_C.Construct");
		
		UBP_ProfileStats_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileStats.BP_ProfileStats_C.BndEvt__ComboBoxGameType_K2Node_ComponentBoundEvent_30_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileStats_C::BndEvt__ComboBoxGameType_K2Node_ComponentBoundEvent_30_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileStats.BP_ProfileStats_C.BndEvt__ComboBoxGameType_K2Node_ComponentBoundEvent_30_OnSelectionChangedEvent__DelegateSignature");
		
		UBP_ProfileStats_C_BndEvt__ComboBoxGameType_K2Node_ComponentBoundEvent_30_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileStats.BP_ProfileStats_C.BndEvt__ComboBoxMapName_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileStats_C::BndEvt__ComboBoxMapName_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileStats.BP_ProfileStats_C.BndEvt__ComboBoxMapName_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature");
		
		UBP_ProfileStats_C_BndEvt__ComboBoxMapName_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileStats.BP_ProfileStats_C.BndEvt__ComboBoxModeName_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileStats_C::BndEvt__ComboBoxModeName_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileStats.BP_ProfileStats_C.BndEvt__ComboBoxModeName_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature");
		
		UBP_ProfileStats_C_BndEvt__ComboBoxModeName_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileStats.BP_ProfileStats_C.BndEvt__ComboBoxTeamType_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileStats_C::BndEvt__ComboBoxTeamType_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileStats.BP_ProfileStats_C.BndEvt__ComboBoxTeamType_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature");
		
		UBP_ProfileStats_C_BndEvt__ComboBoxTeamType_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileStats.BP_ProfileStats_C.ExecuteUbergraph_BP_ProfileStats
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileStats_C::ExecuteUbergraph_BP_ProfileStats(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileStats.BP_ProfileStats_C.ExecuteUbergraph_BP_ProfileStats");
		
		UBP_ProfileStats_C_ExecuteUbergraph_BP_ProfileStats_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ProfileStats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ProfileStats_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ProfileStats.BP_ProfileStats_C");
		return ptr;
	}

}


