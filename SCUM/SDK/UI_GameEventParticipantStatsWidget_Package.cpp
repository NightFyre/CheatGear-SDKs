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
	 * 		Name   -> Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateTeamColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TeamIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventParticipantStatsWidget_C::UpdateTeamColor(int32_t TeamIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateTeamColor");
		
		UUI_GameEventParticipantStatsWidget_C_UpdateTeamColor_Params params {};
		params.TeamIndex = TeamIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateNumber
	 * 		Flags  -> ()
	 */
	class FText UUI_GameEventParticipantStatsWidget_C::UpdateNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateNumber");
		
		UUI_GameEventParticipantStatsWidget_C_UpdateNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.IsOwning
	 * 		Flags  -> ()
	 */
	bool UUI_GameEventParticipantStatsWidget_C::IsOwning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.IsOwning");
		
		UUI_GameEventParticipantStatsWidget_C_IsOwning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetSelectedOverlayVisiblity
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_GameEventParticipantStatsWidget_C::GetSelectedOverlayVisiblity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetSelectedOverlayVisiblity");
		
		UUI_GameEventParticipantStatsWidget_C_GetSelectedOverlayVisiblity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetInactiveOverlayVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_GameEventParticipantStatsWidget_C::GetInactiveOverlayVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetInactiveOverlayVisibility");
		
		UUI_GameEventParticipantStatsWidget_C_GetInactiveOverlayVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_GameEventParticipantStatsWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseEnter");
		
		UUI_GameEventParticipantStatsWidget_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_GameEventParticipantStatsWidget_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseLeave");
		
		UUI_GameEventParticipantStatsWidget_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateColours
	 * 		Flags  -> ()
	 */
	void UUI_GameEventParticipantStatsWidget_C::UpdateColours()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateColours");
		
		UUI_GameEventParticipantStatsWidget_C_UpdateColours_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.SetColours
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameEventTeamColours                       colours                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_GameEventParticipantStatsWidget_C::SetColours(const struct FGameEventTeamColours& colours)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.SetColours");
		
		UUI_GameEventParticipantStatsWidget_C_SetColours_Params params {};
		params.colours = colours;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateStats
	 * 		Flags  -> ()
	 */
	void UUI_GameEventParticipantStatsWidget_C::UpdateStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateStats");
		
		UUI_GameEventParticipantStatsWidget_C_UpdateStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.ExecuteUbergraph_UI_GameEventParticipantStatsWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventParticipantStatsWidget_C::ExecuteUbergraph_UI_GameEventParticipantStatsWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.ExecuteUbergraph_UI_GameEventParticipantStatsWidget");
		
		UUI_GameEventParticipantStatsWidget_C_ExecuteUbergraph_UI_GameEventParticipantStatsWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GameEventParticipantStatsWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GameEventParticipantStatsWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C");
		return ptr;
	}

}


