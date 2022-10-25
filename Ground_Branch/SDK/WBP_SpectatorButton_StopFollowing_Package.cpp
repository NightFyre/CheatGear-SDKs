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
	 * 		Name   -> Function WBP_SpectatorButton_StopFollowing.WBP_SpectatorButton_StopFollowing_C.Get_Button_StopFollowing_bIsEnabled_1
	 * 		Flags  -> ()
	 */
	bool UWBP_SpectatorButton_StopFollowing_C::Get_Button_StopFollowing_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorButton_StopFollowing.WBP_SpectatorButton_StopFollowing_C.Get_Button_StopFollowing_bIsEnabled_1");
		
		UWBP_SpectatorButton_StopFollowing_C_Get_Button_StopFollowing_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorButton_StopFollowing.WBP_SpectatorButton_StopFollowing_C.BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SpectatorButton_StopFollowing_C::BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorButton_StopFollowing.WBP_SpectatorButton_StopFollowing_C.BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_SpectatorButton_StopFollowing_C_BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorButton_StopFollowing.WBP_SpectatorButton_StopFollowing_C.ExecuteUbergraph_WBP_SpectatorButton_StopFollowing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpectatorButton_StopFollowing_C::ExecuteUbergraph_WBP_SpectatorButton_StopFollowing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorButton_StopFollowing.WBP_SpectatorButton_StopFollowing_C.ExecuteUbergraph_WBP_SpectatorButton_StopFollowing");
		
		UWBP_SpectatorButton_StopFollowing_C_ExecuteUbergraph_WBP_SpectatorButton_StopFollowing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SpectatorButton_StopFollowing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SpectatorButton_StopFollowing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SpectatorButton_StopFollowing.WBP_SpectatorButton_StopFollowing_C");
		return ptr;
	}

}


