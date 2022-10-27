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
	 * 		Name   -> Function WBP_SpectatorButton_ReadyRoom.WBP_SpectatorButton_ReadyRoom_C.BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SpectatorButton_ReadyRoom_C::BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorButton_ReadyRoom.WBP_SpectatorButton_ReadyRoom_C.BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_SpectatorButton_ReadyRoom_C_BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorButton_ReadyRoom.WBP_SpectatorButton_ReadyRoom_C.ExecuteUbergraph_WBP_SpectatorButton_ReadyRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpectatorButton_ReadyRoom_C::ExecuteUbergraph_WBP_SpectatorButton_ReadyRoom(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorButton_ReadyRoom.WBP_SpectatorButton_ReadyRoom_C.ExecuteUbergraph_WBP_SpectatorButton_ReadyRoom");
		
		UWBP_SpectatorButton_ReadyRoom_C_ExecuteUbergraph_WBP_SpectatorButton_ReadyRoom_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SpectatorButton_ReadyRoom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SpectatorButton_ReadyRoom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SpectatorButton_ReadyRoom.WBP_SpectatorButton_ReadyRoom_C");
		return ptr;
	}

}


