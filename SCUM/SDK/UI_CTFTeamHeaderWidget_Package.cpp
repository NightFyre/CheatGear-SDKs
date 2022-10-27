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
	 * 		Name   -> Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.GetPlayerText
	 * 		Flags  -> ()
	 */
	class FText UUI_CTFTeamHeaderWidget_C::GetPlayerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.GetPlayerText");
		
		UUI_CTFTeamHeaderWidget_C_GetPlayerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_CTFTeamHeaderWidget_C::SetTeamName(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamName");
		
		UUI_CTFTeamHeaderWidget_C_SetTeamName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetLeftSide
	 * 		Flags  -> ()
	 */
	void UUI_CTFTeamHeaderWidget_C::SetLeftSide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetLeftSide");
		
		UUI_CTFTeamHeaderWidget_C_SetLeftSide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetRightSide
	 * 		Flags  -> ()
	 */
	void UUI_CTFTeamHeaderWidget_C::SetRightSide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetRightSide");
		
		UUI_CTFTeamHeaderWidget_C_SetRightSide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetGameEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGameEventBase*                              gameEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CTFTeamHeaderWidget_C::SetGameEvent(class AGameEventBase* gameEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetGameEvent");
		
		UUI_CTFTeamHeaderWidget_C_SetGameEvent_Params params {};
		params.gameEvent = gameEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.ClearWinCounters
	 * 		Flags  -> ()
	 */
	void UUI_CTFTeamHeaderWidget_C::ClearWinCounters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.ClearWinCounters");
		
		UUI_CTFTeamHeaderWidget_C_ClearWinCounters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.AddWinCounter
	 * 		Flags  -> ()
	 */
	void UUI_CTFTeamHeaderWidget_C::AddWinCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.AddWinCounter");
		
		UUI_CTFTeamHeaderWidget_C_AddWinCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CTFTeamHeaderWidget_C::SetTeamScore(float Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamScore");
		
		UUI_CTFTeamHeaderWidget_C_SetTeamScore_Params params {};
		params.Score = Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamColours
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameEventTeamColours                       colours                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_CTFTeamHeaderWidget_C::SetTeamColours(const struct FGameEventTeamColours& colours)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamColours");
		
		UUI_CTFTeamHeaderWidget_C_SetTeamColours_Params params {};
		params.colours = colours;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.ExecuteUbergraph_UI_CTFTeamHeaderWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CTFTeamHeaderWidget_C::ExecuteUbergraph_UI_CTFTeamHeaderWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.ExecuteUbergraph_UI_CTFTeamHeaderWidget");
		
		UUI_CTFTeamHeaderWidget_C_ExecuteUbergraph_UI_CTFTeamHeaderWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CTFTeamHeaderWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CTFTeamHeaderWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C");
		return ptr;
	}

}


