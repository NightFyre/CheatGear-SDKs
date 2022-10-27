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
	 * 		Name   -> Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidgetCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventTeamInfoWidget_C::GetStatWidgetCount(int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidgetCount");
		
		UUI_GameEventTeamInfoWidget_C_GetStatWidgetCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGameEventParticipantStatsWidget*            Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventTeamInfoWidget_C::GetStatWidget(int32_t Index, class UGameEventParticipantStatsWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidget");
		
		UUI_GameEventTeamInfoWidget_C_GetStatWidget_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.SetTeamScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventTeamInfoWidget_C::SetTeamScore(float Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.SetTeamScore");
		
		UUI_GameEventTeamInfoWidget_C_SetTeamScore_Params params {};
		params.Score = Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ClearWinCounters
	 * 		Flags  -> ()
	 */
	void UUI_GameEventTeamInfoWidget_C::ClearWinCounters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ClearWinCounters");
		
		UUI_GameEventTeamInfoWidget_C_ClearWinCounters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddWinCounter
	 * 		Flags  -> ()
	 */
	void UUI_GameEventTeamInfoWidget_C::AddWinCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddWinCounter");
		
		UUI_GameEventTeamInfoWidget_C_AddWinCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.RemoveStatWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameEventParticipantStatsWidget*            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventTeamInfoWidget_C::RemoveStatWidget(class UGameEventParticipantStatsWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.RemoveStatWidget");
		
		UUI_GameEventTeamInfoWidget_C_RemoveStatWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddStatWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameEventParticipantStatsWidget*            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventTeamInfoWidget_C::AddStatWidget(class UGameEventParticipantStatsWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddStatWidget");
		
		UUI_GameEventTeamInfoWidget_C_AddStatWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_GameEventTeamHeaderWidget_C*             Header                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventTeamInfoWidget_C::AddHeader(class UUI_GameEventTeamHeaderWidget_C* Header)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddHeader");
		
		UUI_GameEventTeamInfoWidget_C_AddHeader_Params params {};
		params.Header = Header;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_GameEventTeamInfoWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.Construct");
		
		UUI_GameEventTeamInfoWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ExecuteUbergraph_UI_GameEventTeamInfoWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventTeamInfoWidget_C::ExecuteUbergraph_UI_GameEventTeamInfoWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ExecuteUbergraph_UI_GameEventTeamInfoWidget");
		
		UUI_GameEventTeamInfoWidget_C_ExecuteUbergraph_UI_GameEventTeamInfoWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GameEventTeamInfoWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GameEventTeamInfoWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C");
		return ptr;
	}

}


