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
	 * 		Name   -> Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TeamIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventTeamHeaderWidget_C::SetTeamIndex(int32_t TeamIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamIndex");
		
		UUI_GameEventTeamHeaderWidget_C_SetTeamIndex_Params params {};
		params.TeamIndex = TeamIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventTeamHeaderWidget_C::SetTeamScore(float Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamScore");
		
		UUI_GameEventTeamHeaderWidget_C_SetTeamScore_Params params {};
		params.Score = Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetRightSide
	 * 		Flags  -> ()
	 */
	void UUI_GameEventTeamHeaderWidget_C::SetRightSide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetRightSide");
		
		UUI_GameEventTeamHeaderWidget_C_SetRightSide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetLeftSide
	 * 		Flags  -> ()
	 */
	void UUI_GameEventTeamHeaderWidget_C::SetLeftSide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetLeftSide");
		
		UUI_GameEventTeamHeaderWidget_C_SetLeftSide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamColours
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameEventTeamColours                       colours                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_GameEventTeamHeaderWidget_C::SetTeamColours(const struct FGameEventTeamColours& colours)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamColours");
		
		UUI_GameEventTeamHeaderWidget_C_SetTeamColours_Params params {};
		params.colours = colours;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_GameEventTeamHeaderWidget_C::SetTeamName(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamName");
		
		UUI_GameEventTeamHeaderWidget_C_SetTeamName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GameEventTeamHeaderWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GameEventTeamHeaderWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C");
		return ptr;
	}

}


