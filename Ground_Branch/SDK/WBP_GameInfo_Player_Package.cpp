/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.Get_Button_Mute_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_GameInfo_Player_C::Get_Button_Mute_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.Get_Button_Mute_ToolTipWidget_1");
		
		UWBP_GameInfo_Player_C_Get_Button_Mute_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetOnDutyVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_GameInfo_Player_C::GetOnDutyVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetOnDutyVis");
		
		UWBP_GameInfo_Player_C_GetOnDutyVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetUniqueId
	 * 		Flags  -> ()
	 */
	class FText UWBP_GameInfo_Player_C::GetUniqueId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetUniqueId");
		
		UWBP_GameInfo_Player_C_GetUniqueId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetMuteBrush
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UWBP_GameInfo_Player_C::GetMuteBrush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetMuteBrush");
		
		UWBP_GameInfo_Player_C_GetMuteBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetPlayerPing
	 * 		Flags  -> ()
	 */
	class FText UWBP_GameInfo_Player_C::GetPlayerPing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetPlayerPing");
		
		UWBP_GameInfo_Player_C_GetPlayerPing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetPlayerName
	 * 		Flags  -> ()
	 */
	class FText UWBP_GameInfo_Player_C::GetPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetPlayerName");
		
		UWBP_GameInfo_Player_C_GetPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetLineColour
	 * 		Flags  -> ()
	 */
	struct FLinearColor UWBP_GameInfo_Player_C::GetLineColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetLineColour");
		
		UWBP_GameInfo_Player_C_GetLineColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.UpdateVOIPPulse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Talking                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GameInfo_Player_C::UpdateVOIPPulse(bool Talking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.UpdateVOIPPulse");
		
		UWBP_GameInfo_Player_C_UpdateVOIPPulse_Params params {};
		params.Talking = Talking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.BndEvt__Button_Mute_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_GameInfo_Player_C::BndEvt__Button_Mute_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.BndEvt__Button_Mute_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_GameInfo_Player_C_BndEvt__Button_Mute_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GameInfo_Player_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.Tick");
		
		UWBP_GameInfo_Player_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.ExecuteUbergraph_WBP_GameInfo_Player
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GameInfo_Player_C::ExecuteUbergraph_WBP_GameInfo_Player(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.ExecuteUbergraph_WBP_GameInfo_Player");
		
		UWBP_GameInfo_Player_C_ExecuteUbergraph_WBP_GameInfo_Player_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_GameInfo_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_GameInfo_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GameInfo_Player.WBP_GameInfo_Player_C");
		return ptr;
	}

}


