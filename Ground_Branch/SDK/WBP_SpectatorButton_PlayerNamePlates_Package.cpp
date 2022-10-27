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
	 * 		Name   -> Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.Get_TextBlock_1_Text_1
	 * 		Flags  -> ()
	 */
	class FText UWBP_SpectatorButton_PlayerNamePlates_C::Get_TextBlock_1_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.Get_TextBlock_1_Text_1");
		
		UWBP_SpectatorButton_PlayerNamePlates_C_Get_TextBlock_1_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SpectatorButton_PlayerNamePlates_C::BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_SpectatorButton_PlayerNamePlates_C_BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_SpectatorButton_PlayerNamePlates_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.Construct");
		
		UWBP_SpectatorButton_PlayerNamePlates_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.OnUpdate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Spectator_Overlay_C*                    SpectatorOverlay                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpectatorButton_PlayerNamePlates_C::OnUpdate_Event_1(class UWBP_Spectator_Overlay_C* SpectatorOverlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.OnUpdate_Event_1");
		
		UWBP_SpectatorButton_PlayerNamePlates_C_OnUpdate_Event_1_Params params {};
		params.SpectatorOverlay = SpectatorOverlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpectatorButton_PlayerNamePlates_C::ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates");
		
		UWBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SpectatorButton_PlayerNamePlates_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SpectatorButton_PlayerNamePlates_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C");
		return ptr;
	}

}


