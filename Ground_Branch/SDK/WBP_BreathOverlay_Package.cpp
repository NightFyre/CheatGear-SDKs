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
	 * 		Name   -> Function WBP_BreathOverlay.WBP_BreathOverlay_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_BreathOverlay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BreathOverlay.WBP_BreathOverlay_C.Construct");
		
		UWBP_BreathOverlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BreathOverlay.WBP_BreathOverlay_C.OnControlBreathExhale_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_BreathOverlay_C::OnControlBreathExhale_Event_1(class AGBCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BreathOverlay.WBP_BreathOverlay_C.OnControlBreathExhale_Event_1");
		
		UWBP_BreathOverlay_C_OnControlBreathExhale_Event_1_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BreathOverlay.WBP_BreathOverlay_C.OnControlBreathInhale_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_BreathOverlay_C::OnControlBreathInhale_Event_1(class AGBCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BreathOverlay.WBP_BreathOverlay_C.OnControlBreathInhale_Event_1");
		
		UWBP_BreathOverlay_C_OnControlBreathInhale_Event_1_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BreathOverlay.WBP_BreathOverlay_C.OnCameraStyleChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        OldCameraStyle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewCameraStyle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_BreathOverlay_C::OnCameraStyleChanged_Event_1(const class FName& OldCameraStyle, const class FName& NewCameraStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BreathOverlay.WBP_BreathOverlay_C.OnCameraStyleChanged_Event_1");
		
		UWBP_BreathOverlay_C_OnCameraStyleChanged_Event_1_Params params {};
		params.OldCameraStyle = OldCameraStyle;
		params.NewCameraStyle = NewCameraStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BreathOverlay.WBP_BreathOverlay_C.OnPlayerControllerStateChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_BreathOverlay_C::OnPlayerControllerStateChanged_Event_1(const class FName& OldState, const class FName& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BreathOverlay.WBP_BreathOverlay_C.OnPlayerControllerStateChanged_Event_1");
		
		UWBP_BreathOverlay_C_OnPlayerControllerStateChanged_Event_1_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BreathOverlay.WBP_BreathOverlay_C.ExecuteUbergraph_WBP_BreathOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_BreathOverlay_C::ExecuteUbergraph_WBP_BreathOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BreathOverlay.WBP_BreathOverlay_C.ExecuteUbergraph_WBP_BreathOverlay");
		
		UWBP_BreathOverlay_C_ExecuteUbergraph_WBP_BreathOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_BreathOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_BreathOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_BreathOverlay.WBP_BreathOverlay_C");
		return ptr;
	}

}


