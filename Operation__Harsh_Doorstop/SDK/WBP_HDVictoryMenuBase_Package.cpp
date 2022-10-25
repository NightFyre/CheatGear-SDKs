/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.GetPlayerTeam
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            PlayerTeam                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDVictoryMenuBase_C::GetPlayerTeam(EHDTeam* PlayerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.GetPlayerTeam");
		
		UWBP_HDVictoryMenuBase_C_GetPlayerTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerTeam != nullptr)
			*PlayerTeam = params.PlayerTeam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.GetMusicTrackToUse
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            PlayerTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPlayerWon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USoundBase*                                  SoundToUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDVictoryMenuBase_C::GetMusicTrackToUse(EHDTeam PlayerTeam, bool bPlayerWon, class USoundBase** SoundToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.GetMusicTrackToUse");
		
		UWBP_HDVictoryMenuBase_C_GetMusicTrackToUse_Params params {};
		params.PlayerTeam = PlayerTeam;
		params.bPlayerWon = bPlayerWon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SoundToUse != nullptr)
			*SoundToUse = params.SoundToUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.PlayWinLossMenuMusic
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDVictoryMenuBase_C::PlayWinLossMenuMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.PlayWinLossMenuMusic");
		
		UWBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupTeamScoreText
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDVictoryMenuBase_C::SetupTeamScoreText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupTeamScoreText");
		
		UWBP_HDVictoryMenuBase_C_SetupTeamScoreText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupGameModeNameText
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDVictoryMenuBase_C::SetupGameModeNameText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupGameModeNameText");
		
		UWBP_HDVictoryMenuBase_C_SetupGameModeNameText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupElapsedTimeText
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDVictoryMenuBase_C::SetupElapsedTimeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupElapsedTimeText");
		
		UWBP_HDVictoryMenuBase_C_SetupElapsedTimeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupMapNameText
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDVictoryMenuBase_C::SetupMapNameText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupMapNameText");
		
		UWBP_HDVictoryMenuBase_C_SetupMapNameText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupForceNameText
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDVictoryMenuBase_C::SetupForceNameText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupForceNameText");
		
		UWBP_HDVictoryMenuBase_C_SetupForceNameText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupVictoryText
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDVictoryMenuBase_C::SetupVictoryText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupVictoryText");
		
		UWBP_HDVictoryMenuBase_C_SetupVictoryText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.OnMouseButtonDoubleClick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   InMyGeometry                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               InMouseEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_HDVictoryMenuBase_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.OnMouseButtonDoubleClick");
		
		UWBP_HDVictoryMenuBase_C_OnMouseButtonDoubleClick_Params params {};
		params.InMyGeometry = InMyGeometry;
		params.InMouseEvent = InMouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_HDVictoryMenuBase_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.OnMouseButtonDown");
		
		UWBP_HDVictoryMenuBase_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_HDVictoryMenuBase_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.Construct");
		
		UWBP_HDVictoryMenuBase_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.OnVictoryInit
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_HDVictoryMenuBase_C::OnVictoryInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.OnVictoryInit");
		
		UWBP_HDVictoryMenuBase_C_OnVictoryInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.ExecuteUbergraph_WBP_HDVictoryMenuBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDVictoryMenuBase_C::ExecuteUbergraph_WBP_HDVictoryMenuBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.ExecuteUbergraph_WBP_HDVictoryMenuBase");
		
		UWBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HDVictoryMenuBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HDVictoryMenuBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C");
		return ptr;
	}

}


