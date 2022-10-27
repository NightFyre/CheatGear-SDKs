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
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.Get_Button_ReadyRoom_ToolTipText_1
	 * 		Flags  -> ()
	 */
	class FText UWBP_DeathOptions_C::Get_Button_ReadyRoom_ToolTipText_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.Get_Button_ReadyRoom_ToolTipText_1");
		
		UWBP_DeathOptions_C_Get_Button_ReadyRoom_ToolTipText_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.Get_Button_Spectate_ToolTipText_1
	 * 		Flags  -> ()
	 */
	class FText UWBP_DeathOptions_C::Get_Button_Spectate_ToolTipText_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.Get_Button_Spectate_ToolTipText_1");
		
		UWBP_DeathOptions_C_Get_Button_Spectate_ToolTipText_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.Get Button Respawn Tool Tip Text 0
	 * 		Flags  -> ()
	 */
	class FText UWBP_DeathOptions_C::Get_Button_Respawn_Tool_Tip_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.Get Button Respawn Tool Tip Text 0");
		
		UWBP_DeathOptions_C_Get_Button_Respawn_Tool_Tip_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.AnyLiving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AGBPlayerState*>                      Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bOutSomeoneIsAlive                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeathOptions_C::AnyLiving(TArray<class AGBPlayerState*>* Array, bool* bOutSomeoneIsAlive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.AnyLiving");
		
		UWBP_DeathOptions_C_AnyLiving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (bOutSomeoneIsAlive != nullptr)
			*bOutSomeoneIsAlive = params.bOutSomeoneIsAlive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.Get_TextBlock_Respawn_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FSlateColor UWBP_DeathOptions_C::Get_TextBlock_Respawn_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.Get_TextBlock_Respawn_ColorAndOpacity_1");
		
		UWBP_DeathOptions_C_Get_TextBlock_Respawn_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.GetRespawnIsEnabled
	 * 		Flags  -> ()
	 */
	bool UWBP_DeathOptions_C::GetRespawnIsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.GetRespawnIsEnabled");
		
		UWBP_DeathOptions_C_GetRespawnIsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.GetRespawnText
	 * 		Flags  -> ()
	 */
	class FText UWBP_DeathOptions_C::GetRespawnText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.GetRespawnText");
		
		UWBP_DeathOptions_C_GetRespawnText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.GetRespawnVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_DeathOptions_C::GetRespawnVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.GetRespawnVisibility");
		
		UWBP_DeathOptions_C_GetRespawnVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_DeathOptions_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.Construct");
		
		UWBP_DeathOptions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_1012_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_DeathOptions_C::BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_1012_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_1012_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_DeathOptions_C_BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_1012_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_690_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_DeathOptions_C::BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_690_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_690_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_DeathOptions_C_BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_690_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.BndEvt__Button_ReadyRoom_K2Node_ComponentBoundEvent_710_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_DeathOptions_C::BndEvt__Button_ReadyRoom_K2Node_ComponentBoundEvent_710_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.BndEvt__Button_ReadyRoom_K2Node_ComponentBoundEvent_710_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_DeathOptions_C_BndEvt__Button_ReadyRoom_K2Node_ComponentBoundEvent_710_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.Close
	 * 		Flags  -> ()
	 */
	void UWBP_DeathOptions_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.Close");
		
		UWBP_DeathOptions_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.ValidateRespawnButton
	 * 		Flags  -> ()
	 */
	void UWBP_DeathOptions_C::ValidateRespawnButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.ValidateRespawnButton");
		
		UWBP_DeathOptions_C_ValidateRespawnButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.ValidateReadyRoomButton
	 * 		Flags  -> ()
	 */
	void UWBP_DeathOptions_C::ValidateReadyRoomButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.ValidateReadyRoomButton");
		
		UWBP_DeathOptions_C_ValidateReadyRoomButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.ValidateSpectateButton
	 * 		Flags  -> ()
	 */
	void UWBP_DeathOptions_C::ValidateSpectateButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.ValidateSpectateButton");
		
		UWBP_DeathOptions_C_ValidateSpectateButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.BindToPlayerControllerState
	 * 		Flags  -> ()
	 */
	void UWBP_DeathOptions_C::BindToPlayerControllerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.BindToPlayerControllerState");
		
		UWBP_DeathOptions_C_BindToPlayerControllerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.OnPlayerControllerStateChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeathOptions_C::OnPlayerControllerStateChanged_Event_1(const class FName& OldState, const class FName& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.OnPlayerControllerStateChanged_Event_1");
		
		UWBP_DeathOptions_C_OnPlayerControllerStateChanged_Event_1_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.EnableTooltips
	 * 		Flags  -> ()
	 */
	void UWBP_DeathOptions_C::EnableTooltips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.EnableTooltips");
		
		UWBP_DeathOptions_C_EnableTooltips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DeathOptions.WBP_DeathOptions_C.ExecuteUbergraph_WBP_DeathOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeathOptions_C::ExecuteUbergraph_WBP_DeathOptions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeathOptions.WBP_DeathOptions_C.ExecuteUbergraph_WBP_DeathOptions");
		
		UWBP_DeathOptions_C_ExecuteUbergraph_WBP_DeathOptions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DeathOptions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DeathOptions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DeathOptions.WBP_DeathOptions_C");
		return ptr;
	}

}


