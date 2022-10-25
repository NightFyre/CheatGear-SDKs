/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.CompletedAllPlotMissions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Challenge_CharacterSpecific_FinishGame_C::CompletedAllPlotMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.CompletedAllPlotMissions");
		
		UBP_Challenge_CharacterSpecific_FinishGame_C_CompletedAllPlotMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.SetBinds
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BindSet                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Challenge_CharacterSpecific_FinishGame_C::SetBinds(class AOakCharacter* Character, bool* BindSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.SetBinds");
		
		UBP_Challenge_CharacterSpecific_FinishGame_C_SetBinds_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BindSet != nullptr)
			*BindSet = params.BindSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.CompletedChallenge
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxPlayerController*                        CompletedPlayer                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Challenge_CharacterSpecific_FinishGame_C::CompletedChallenge(class AGbxPlayerController* CompletedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.CompletedChallenge");
		
		UBP_Challenge_CharacterSpecific_FinishGame_C_CompletedChallenge_Params params {};
		params.CompletedPlayer = CompletedPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.ExecuteUbergraph_BP_Challenge_CharacterSpecific_FinishGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Challenge_CharacterSpecific_FinishGame_C::ExecuteUbergraph_BP_Challenge_CharacterSpecific_FinishGame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.ExecuteUbergraph_BP_Challenge_CharacterSpecific_FinishGame");
		
		UBP_Challenge_CharacterSpecific_FinishGame_C_ExecuteUbergraph_BP_Challenge_CharacterSpecific_FinishGame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Challenge_CharacterSpecific_FinishGame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Challenge_CharacterSpecific_FinishGame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C");
		return ptr;
	}

}


