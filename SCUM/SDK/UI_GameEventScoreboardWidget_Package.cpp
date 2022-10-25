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
	 * 		Name   -> Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.GetTogglePromptVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_GameEventScoreboardWidget_C::GetTogglePromptVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.GetTogglePromptVisibility");
		
		UUI_GameEventScoreboardWidget_C_GetTogglePromptVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ArrangeTeams
	 * 		Flags  -> ()
	 */
	void UUI_GameEventScoreboardWidget_C::ArrangeTeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ArrangeTeams");
		
		UUI_GameEventScoreboardWidget_C_ArrangeTeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateWinCounters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_GameEventTeamInfoWidget_C*               TeamInfoWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TeamIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventScoreboardWidget_C::UpdateWinCounters(class UUI_GameEventTeamInfoWidget_C* TeamInfoWidget, int32_t TeamIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateWinCounters");
		
		UUI_GameEventScoreboardWidget_C_UpdateWinCounters_Params params {};
		params.TeamInfoWidget = TeamInfoWidget;
		params.TeamIndex = TeamIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateTeamScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_GameEventTeamInfoWidget_C*               TeamInfoWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TeamIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventScoreboardWidget_C::UpdateTeamScore(class UUI_GameEventTeamInfoWidget_C* TeamInfoWidget, int32_t TeamIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateTeamScore");
		
		UUI_GameEventScoreboardWidget_C_UpdateTeamScore_Params params {};
		params.TeamInfoWidget = TeamInfoWidget;
		params.TeamIndex = TeamIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitTeamInfoWidgets
	 * 		Flags  -> ()
	 */
	void UUI_GameEventScoreboardWidget_C::InitTeamInfoWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitTeamInfoWidgets");
		
		UUI_GameEventScoreboardWidget_C_InitTeamInfoWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateInfoCard
	 * 		Flags  -> ()
	 */
	void UUI_GameEventScoreboardWidget_C::UpdateInfoCard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateInfoCard");
		
		UUI_GameEventScoreboardWidget_C_UpdateInfoCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_GameEventScoreboardWidget_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnMouseMove");
		
		UUI_GameEventScoreboardWidget_C_OnMouseMove_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_GameEventScoreboardWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.Construct");
		
		UUI_GameEventScoreboardWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnUpdate
	 * 		Flags  -> ()
	 */
	void UUI_GameEventScoreboardWidget_C::OnUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnUpdate");
		
		UUI_GameEventScoreboardWidget_C_OnUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitializeScoreboard
	 * 		Flags  -> ()
	 */
	void UUI_GameEventScoreboardWidget_C::InitializeScoreboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitializeScoreboard");
		
		UUI_GameEventScoreboardWidget_C_InitializeScoreboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ExecuteUbergraph_UI_GameEventScoreboardWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventScoreboardWidget_C::ExecuteUbergraph_UI_GameEventScoreboardWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ExecuteUbergraph_UI_GameEventScoreboardWidget");
		
		UUI_GameEventScoreboardWidget_C_ExecuteUbergraph_UI_GameEventScoreboardWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GameEventScoreboardWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GameEventScoreboardWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C");
		return ptr;
	}

}


