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
	 * 		Name   -> Function WBP_SpectatorButton_EnemyBlips.WBP_SpectatorButton_EnemyBlips_C.GetEnemyBlipText
	 * 		Flags  -> ()
	 */
	class FText UWBP_SpectatorButton_EnemyBlips_C::GetEnemyBlipText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorButton_EnemyBlips.WBP_SpectatorButton_EnemyBlips_C.GetEnemyBlipText");
		
		UWBP_SpectatorButton_EnemyBlips_C_GetEnemyBlipText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorButton_EnemyBlips.WBP_SpectatorButton_EnemyBlips_C.BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SpectatorButton_EnemyBlips_C::BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorButton_EnemyBlips.WBP_SpectatorButton_EnemyBlips_C.BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_SpectatorButton_EnemyBlips_C_BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorButton_EnemyBlips.WBP_SpectatorButton_EnemyBlips_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_SpectatorButton_EnemyBlips_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorButton_EnemyBlips.WBP_SpectatorButton_EnemyBlips_C.Construct");
		
		UWBP_SpectatorButton_EnemyBlips_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorButton_EnemyBlips.WBP_SpectatorButton_EnemyBlips_C.OnUpdate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Spectator_Overlay_C*                    SpectatorOverlay                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpectatorButton_EnemyBlips_C::OnUpdate_Event_1(class UWBP_Spectator_Overlay_C* SpectatorOverlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorButton_EnemyBlips.WBP_SpectatorButton_EnemyBlips_C.OnUpdate_Event_1");
		
		UWBP_SpectatorButton_EnemyBlips_C_OnUpdate_Event_1_Params params {};
		params.SpectatorOverlay = SpectatorOverlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorButton_EnemyBlips.WBP_SpectatorButton_EnemyBlips_C.ExecuteUbergraph_WBP_SpectatorButton_EnemyBlips
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpectatorButton_EnemyBlips_C::ExecuteUbergraph_WBP_SpectatorButton_EnemyBlips(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorButton_EnemyBlips.WBP_SpectatorButton_EnemyBlips_C.ExecuteUbergraph_WBP_SpectatorButton_EnemyBlips");
		
		UWBP_SpectatorButton_EnemyBlips_C_ExecuteUbergraph_WBP_SpectatorButton_EnemyBlips_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SpectatorButton_EnemyBlips_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SpectatorButton_EnemyBlips_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SpectatorButton_EnemyBlips.WBP_SpectatorButton_EnemyBlips_C");
		return ptr;
	}

}


