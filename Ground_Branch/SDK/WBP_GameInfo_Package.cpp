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
	 * 		Name   -> Function WBP_GameInfo.WBP_GameInfo_C.Get_Button_MuteTalking_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_GameInfo_C::Get_Button_MuteTalking_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo.WBP_GameInfo_C.Get_Button_MuteTalking_ToolTipWidget_1");
		
		UWBP_GameInfo_C_Get_Button_MuteTalking_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo.WBP_GameInfo_C.GetAdminVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_GameInfo_C::GetAdminVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo.WBP_GameInfo_C.GetAdminVis");
		
		UWBP_GameInfo_C_GetAdminVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo.WBP_GameInfo_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GameInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo.WBP_GameInfo_C.Tick");
		
		UWBP_GameInfo_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo.WBP_GameInfo_C.Back
	 * 		Flags  -> ()
	 */
	void UWBP_GameInfo_C::Back()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo.WBP_GameInfo_C.Back");
		
		UWBP_GameInfo_C_Back_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo.WBP_GameInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_GameInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo.WBP_GameInfo_C.Construct");
		
		UWBP_GameInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo.WBP_GameInfo_C.OnVOIPEvent_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTalking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bWasRadio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GameInfo_C::OnVOIPEvent_Event_1(class AGBPlayerState* PlayerState, bool bIsTalking, bool bWasRadio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo.WBP_GameInfo_C.OnVOIPEvent_Event_1");
		
		UWBP_GameInfo_C_OnVOIPEvent_Event_1_Params params {};
		params.PlayerState = PlayerState;
		params.bIsTalking = bIsTalking;
		params.bWasRadio = bWasRadio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo.WBP_GameInfo_C.BndEvt__Button_MuteAll_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_GameInfo_C::BndEvt__Button_MuteAll_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo.WBP_GameInfo_C.BndEvt__Button_MuteAll_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_GameInfo_C_BndEvt__Button_MuteAll_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo.WBP_GameInfo_C.BndEvt__Button_MuteTalking_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_GameInfo_C::BndEvt__Button_MuteTalking_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo.WBP_GameInfo_C.BndEvt__Button_MuteTalking_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_GameInfo_C_BndEvt__Button_MuteTalking_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo.WBP_GameInfo_C.BndEvt__Button_UnmuteAll_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_GameInfo_C::BndEvt__Button_UnmuteAll_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo.WBP_GameInfo_C.BndEvt__Button_UnmuteAll_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_GameInfo_C_BndEvt__Button_UnmuteAll_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo.WBP_GameInfo_C.BndEvt__Button_NEWBack_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_GameInfo_C::BndEvt__Button_NEWBack_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo.WBP_GameInfo_C.BndEvt__Button_NEWBack_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_GameInfo_C_BndEvt__Button_NEWBack_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo.WBP_GameInfo_C.AddPlayerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TeamId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GameInfo_C::AddPlayerList(int32_t TeamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo.WBP_GameInfo_C.AddPlayerList");
		
		UWBP_GameInfo_C_AddPlayerList_Params params {};
		params.TeamId = TeamId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo.WBP_GameInfo_C.DeterminePlayerLists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewTeamCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GameInfo_C::DeterminePlayerLists(int32_t NewTeamCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo.WBP_GameInfo_C.DeterminePlayerLists");
		
		UWBP_GameInfo_C_DeterminePlayerLists_Params params {};
		params.NewTeamCount = NewTeamCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo.WBP_GameInfo_C.ExecuteUbergraph_WBP_GameInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GameInfo_C::ExecuteUbergraph_WBP_GameInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo.WBP_GameInfo_C.ExecuteUbergraph_WBP_GameInfo");
		
		UWBP_GameInfo_C_ExecuteUbergraph_WBP_GameInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_GameInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_GameInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GameInfo.WBP_GameInfo_C");
		return ptr;
	}

}


