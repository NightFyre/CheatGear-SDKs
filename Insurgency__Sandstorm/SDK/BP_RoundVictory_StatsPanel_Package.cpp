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
	 * 		Name   -> Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.OnBackendReceivedXP
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            EarnedXP                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RoundVictory_StatsPanel_C::OnBackendReceivedXP(int32_t EarnedXP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.OnBackendReceivedXP");
		
		UBP_RoundVictory_StatsPanel_C_OnBackendReceivedXP_Params params {};
		params.EarnedXP = EarnedXP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.UpdateObjectivesCasptureTime
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameStatsSummary                           Summary                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_RoundVictory_StatsPanel_C::UpdateObjectivesCasptureTime(struct FGameStatsSummary* Summary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.UpdateObjectivesCasptureTime");
		
		UBP_RoundVictory_StatsPanel_C_UpdateObjectivesCasptureTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Summary != nullptr)
			*Summary = params.Summary;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.UpdateObjectivesSecured
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameStatsSummary                           Summary                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_RoundVictory_StatsPanel_C::UpdateObjectivesSecured(struct FGameStatsSummary* Summary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.UpdateObjectivesSecured");
		
		UBP_RoundVictory_StatsPanel_C_UpdateObjectivesSecured_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Summary != nullptr)
			*Summary = params.Summary;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.UpdateKDR
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameStatsSummary                           Summary                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_RoundVictory_StatsPanel_C::UpdateKDR(struct FGameStatsSummary* Summary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.UpdateKDR");
		
		UBP_RoundVictory_StatsPanel_C_UpdateKDR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Summary != nullptr)
			*Summary = params.Summary;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.ClearStatPanels
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RoundVictory_StatsPanel_C::ClearStatPanels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.ClearStatPanels");
		
		UBP_RoundVictory_StatsPanel_C_ClearStatPanels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.GetNextStatPanelColumn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            NewID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RoundVictory_StatsPanel_C::GetNextStatPanelColumn(int32_t* NewID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.GetNextStatPanelColumn");
		
		UBP_RoundVictory_StatsPanel_C_GetNextStatPanelColumn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewID != nullptr)
			*NewID = params.NewID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.AppendNewStatPanelText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        StatHeader                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        CenterText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        StatFooter                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_RoundVictory_StatsPanel_C::AppendNewStatPanelText(const class FText& StatHeader, const class FText& CenterText, const class FText& StatFooter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.AppendNewStatPanelText");
		
		UBP_RoundVictory_StatsPanel_C_AppendNewStatPanelText_Params params {};
		params.StatHeader = StatHeader;
		params.CenterText = CenterText;
		params.StatFooter = StatFooter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.AppendNewStatPanelIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        StatHeader                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StatFooter                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_RoundVictory_StatsPanel_C::AppendNewStatPanelIcon(const class FText& StatHeader, class UTexture2D* Icon, const class FText& StatFooter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.AppendNewStatPanelIcon");
		
		UBP_RoundVictory_StatsPanel_C_AppendNewStatPanelIcon_Params params {};
		params.StatHeader = StatHeader;
		params.Icon = Icon;
		params.StatFooter = StatFooter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.UpdateMostUsedWeapon
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameStatsSummary                           Summary                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_RoundVictory_StatsPanel_C::UpdateMostUsedWeapon(struct FGameStatsSummary* Summary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.UpdateMostUsedWeapon");
		
		UBP_RoundVictory_StatsPanel_C_UpdateMostUsedWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Summary != nullptr)
			*Summary = params.Summary;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.UpdateMostUsedClass
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameStatsSummary                           Summary                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_RoundVictory_StatsPanel_C::UpdateMostUsedClass(struct FGameStatsSummary* Summary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.UpdateMostUsedClass");
		
		UBP_RoundVictory_StatsPanel_C_UpdateMostUsedClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Summary != nullptr)
			*Summary = params.Summary;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.Update Top Labels
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LengthSeconds                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        GameModeName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_RoundVictory_StatsPanel_C::Update_Top_Labels(int32_t LengthSeconds, const class FText& CategoryName, const class FText& GameModeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.Update Top Labels");
		
		UBP_RoundVictory_StatsPanel_C_Update_Top_Labels_Params params {};
		params.LengthSeconds = LengthSeconds;
		params.CategoryName = CategoryName;
		params.GameModeName = GameModeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.BuildPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameStatsSummary                           Summary                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            LengthSeconds                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        GameModeName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_RoundVictory_StatsPanel_C::BuildPanel(const struct FGameStatsSummary& Summary, int32_t LengthSeconds, const class FText& CategoryName, const class FText& GameModeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.BuildPanel");
		
		UBP_RoundVictory_StatsPanel_C_BuildPanel_Params params {};
		params.Summary = Summary;
		params.LengthSeconds = LengthSeconds;
		params.CategoryName = CategoryName;
		params.GameModeName = GameModeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_RoundVictory_StatsPanel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.Construct");
		
		UBP_RoundVictory_StatsPanel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RoundVictory_StatsPanel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.PreConstruct");
		
		UBP_RoundVictory_StatsPanel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.ExecuteUbergraph_BP_RoundVictory_StatsPanel
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RoundVictory_StatsPanel_C::ExecuteUbergraph_BP_RoundVictory_StatsPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.ExecuteUbergraph_BP_RoundVictory_StatsPanel");
		
		UBP_RoundVictory_StatsPanel_C_ExecuteUbergraph_BP_RoundVictory_StatsPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RoundVictory_StatsPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RoundVictory_StatsPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C");
		return ptr;
	}

}


