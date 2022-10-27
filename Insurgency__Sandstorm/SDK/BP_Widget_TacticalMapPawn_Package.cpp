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
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.UpdateObjectiveStatus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_TacticalMapPawn_C::UpdateObjectiveStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.UpdateObjectiveStatus");
		
		UBP_Widget_TacticalMapPawn_C_UpdateObjectiveStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.OnObjectiveStateChange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_TacticalMapPawn_C::OnObjectiveStateChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.OnObjectiveStateChange");
		
		UBP_Widget_TacticalMapPawn_C_OnObjectiveStateChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.UpdatePlayerClassIconVisibility
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_TacticalMapPawn_C::UpdatePlayerClassIconVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.UpdatePlayerClassIconVisibility");
		
		UBP_Widget_TacticalMapPawn_C_UpdatePlayerClassIconVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.SetPlayerClassIcon
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_TacticalMapPawn_C::SetPlayerClassIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.SetPlayerClassIcon");
		
		UBP_Widget_TacticalMapPawn_C_SetPlayerClassIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.UpdatePlayerColor
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_TacticalMapPawn_C::UpdatePlayerColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.UpdatePlayerColor");
		
		UBP_Widget_TacticalMapPawn_C_UpdatePlayerColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.CheckLocalPlayerAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_TacticalMapPawn_C::CheckLocalPlayerAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.CheckLocalPlayerAnimation");
		
		UBP_Widget_TacticalMapPawn_C_CheckLocalPlayerAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.GetNameVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Widget_TacticalMapPawn_C::GetNameVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.GetNameVisibility");
		
		UBP_Widget_TacticalMapPawn_C_GetNameVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.GetArrowColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_Widget_TacticalMapPawn_C::GetArrowColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.GetArrowColor");
		
		UBP_Widget_TacticalMapPawn_C_GetArrowColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_TacticalMapPawn_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.Construct");
		
		UBP_Widget_TacticalMapPawn_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_TacticalMapPawn_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.Tick");
		
		UBP_Widget_TacticalMapPawn_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_TacticalMapPawn_C::BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Widget_TacticalMapPawn_C_BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_TacticalMapPawn_C::BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UBP_Widget_TacticalMapPawn_C_BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_TacticalMapPawn_C::BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UBP_Widget_TacticalMapPawn_C_BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BlueprintOnUpdateLocalViewTarget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_TacticalMapPawn_C::BlueprintOnUpdateLocalViewTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BlueprintOnUpdateLocalViewTarget");
		
		UBP_Widget_TacticalMapPawn_C_BlueprintOnUpdateLocalViewTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.WidgetAnimationEvt_AnimPulse_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_TacticalMapPawn_C::WidgetAnimationEvt_AnimPulse_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.WidgetAnimationEvt_AnimPulse_K2Node_WidgetAnimationEvent_1");
		
		UBP_Widget_TacticalMapPawn_C_WidgetAnimationEvt_AnimPulse_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.WidgetAnimationEvt_AnimPulse_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_TacticalMapPawn_C::WidgetAnimationEvt_AnimPulse_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.WidgetAnimationEvt_AnimPulse_K2Node_WidgetAnimationEvent_2");
		
		UBP_Widget_TacticalMapPawn_C_WidgetAnimationEvt_AnimPulse_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BlueprintOnTeamChange
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      TeamId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATeamInfo*                                   TeamInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_TacticalMapPawn_C::BlueprintOnTeamChange(unsigned char TeamId, class ATeamInfo* TeamInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BlueprintOnTeamChange");
		
		UBP_Widget_TacticalMapPawn_C_BlueprintOnTeamChange_Params params {};
		params.TeamId = TeamId;
		params.TeamInfo = TeamInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.OnPlayerClassChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AINSSoldier*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_TacticalMapPawn_C::OnPlayerClassChanged(class AINSSoldier* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.OnPlayerClassChanged");
		
		UBP_Widget_TacticalMapPawn_C_OnPlayerClassChanged_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BlueprintOnUpdateObjective
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AINSPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AObjectiveBase*                              NewActiveObjective                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_TacticalMapPawn_C::BlueprintOnUpdateObjective(class AINSPlayerState* PlayerState, class AObjectiveBase* NewActiveObjective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BlueprintOnUpdateObjective");
		
		UBP_Widget_TacticalMapPawn_C_BlueprintOnUpdateObjective_Params params {};
		params.PlayerState = PlayerState;
		params.NewActiveObjective = NewActiveObjective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BlueprintOnObjectiveStateChange
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_TacticalMapPawn_C::BlueprintOnObjectiveStateChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BlueprintOnObjectiveStateChange");
		
		UBP_Widget_TacticalMapPawn_C_BlueprintOnObjectiveStateChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.ExecuteUbergraph_BP_Widget_TacticalMapPawn
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_TacticalMapPawn_C::ExecuteUbergraph_BP_Widget_TacticalMapPawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.ExecuteUbergraph_BP_Widget_TacticalMapPawn");
		
		UBP_Widget_TacticalMapPawn_C_ExecuteUbergraph_BP_Widget_TacticalMapPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.OnHoverStatusChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AINSPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Hovered                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_TacticalMapPawn_C::OnHoverStatusChanged__DelegateSignature(class AINSPlayerState* Player, bool Hovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.OnHoverStatusChanged__DelegateSignature");
		
		UBP_Widget_TacticalMapPawn_C_OnHoverStatusChanged__DelegateSignature_Params params {};
		params.Player = Player;
		params.Hovered = Hovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_TacticalMapPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_TacticalMapPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C");
		return ptr;
	}

}


