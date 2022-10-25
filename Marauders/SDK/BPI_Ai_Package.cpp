/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> Function BPI_Ai.BPI_Ai_C.Ai_CheckSetMyInitialAmmoCount
	 * 		Flags  -> ()
	 */
	void UBPI_Ai_C::Ai_CheckSetMyInitialAmmoCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Ai.BPI_Ai_C.Ai_CheckSetMyInitialAmmoCount");
		
		UBPI_Ai_C_Ai_CheckSetMyInitialAmmoCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Ai.BPI_Ai_C.Ai_TurnOnOffDebugText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Ai_C::Ai_TurnOnOffDebugText(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Ai.BPI_Ai_C.Ai_TurnOnOffDebugText");
		
		UBPI_Ai_C_Ai_TurnOnOffDebugText_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Ai.BPI_Ai_C.Ai_StoreBaseMissRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseMissRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Ai_C::Ai_StoreBaseMissRate(float BaseMissRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Ai.BPI_Ai_C.Ai_StoreBaseMissRate");
		
		UBPI_Ai_C_Ai_StoreBaseMissRate_Params params {};
		params.BaseMissRate = BaseMissRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Ai.BPI_Ai_C.Ai_SetMyGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CurrentPlan                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPI_Ai_C::Ai_SetMyGoal(const class FString& CurrentPlan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Ai.BPI_Ai_C.Ai_SetMyGoal");
		
		UBPI_Ai_C_Ai_SetMyGoal_Params params {};
		params.CurrentPlan = CurrentPlan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Ai.BPI_Ai_C.PlayVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAShout                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDataTable*                                  VoiceSetDT                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        VoiceLine                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Ai_C::PlayVoice(bool IsAShout, class UDataTable* VoiceSetDT, const class FName& VoiceLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Ai.BPI_Ai_C.PlayVoice");
		
		UBPI_Ai_C_PlayVoice_Params params {};
		params.IsAShout = IsAShout;
		params.VoiceSetDT = VoiceSetDT;
		params.VoiceLine = VoiceLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Ai_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Ai_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Ai.BPI_Ai_C");
		return ptr;
	}

}


