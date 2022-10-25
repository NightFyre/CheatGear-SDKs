/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x042969B0
	 * 		Name   -> Function CustomDeath.CustomDeathInterface.SetShouldUseRevivalFlow
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FSetShouldUseRevivalFlowData                SetShouldUseRevivalFlowData                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UCustomDeathInterface::SetShouldUseRevivalFlow(const struct FSetShouldUseRevivalFlowData& SetShouldUseRevivalFlowData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.SetShouldUseRevivalFlow");
		
		UCustomDeathInterface_SetShouldUseRevivalFlow_Params params {};
		params.SetShouldUseRevivalFlowData = SetShouldUseRevivalFlowData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04296920
	 * 		Name   -> Function CustomDeath.CustomDeathInterface.SetShouldSkipFerryOfTheDamned
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FSetShouldSkipFerryOfTheDamnedData          SetShouldSkipFerryOfTheDamnedData                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UCustomDeathInterface::SetShouldSkipFerryOfTheDamned(const struct FSetShouldSkipFerryOfTheDamnedData& SetShouldSkipFerryOfTheDamnedData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.SetShouldSkipFerryOfTheDamned");
		
		UCustomDeathInterface_SetShouldSkipFerryOfTheDamned_Params params {};
		params.SetShouldSkipFerryOfTheDamnedData = SetShouldSkipFerryOfTheDamnedData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04296890
	 * 		Name   -> Function CustomDeath.CustomDeathInterface.SetGameModeDeathPenaltyRespawnTimer
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameModeDeathPenaltyRespawnTimerData       GameModeDeathPenaltyRespawnTimerData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UCustomDeathInterface::SetGameModeDeathPenaltyRespawnTimer(const struct FGameModeDeathPenaltyRespawnTimerData& GameModeDeathPenaltyRespawnTimerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.SetGameModeDeathPenaltyRespawnTimer");
		
		UCustomDeathInterface_SetGameModeDeathPenaltyRespawnTimer_Params params {};
		params.GameModeDeathPenaltyRespawnTimerData = GameModeDeathPenaltyRespawnTimerData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042967F0
	 * 		Name   -> Function CustomDeath.CustomDeathInterface.SetCustomPlayerStart
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FSetCustomPlayerStartData                   SetCustomPlayerStartData                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	bool UCustomDeathInterface::SetCustomPlayerStart(const struct FSetCustomPlayerStartData& SetCustomPlayerStartData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.SetCustomPlayerStart");
		
		UCustomDeathInterface_SetCustomPlayerStart_Params params {};
		params.SetCustomPlayerStartData = SetCustomPlayerStartData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042966F0
	 * 		Name   -> Function CustomDeath.CustomDeathInterface.SetCustomConfigForPlayer
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		int32_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCustomDeathConfiguration                   CustomDeathConfiguration                                   (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UCustomDeathInterface::SetCustomConfigForPlayer(int32_t PlayerId, const struct FCustomDeathConfiguration& CustomDeathConfiguration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.SetCustomConfigForPlayer");
		
		UCustomDeathInterface_SetCustomConfigForPlayer_Params params {};
		params.PlayerId = PlayerId;
		params.CustomDeathConfiguration = CustomDeathConfiguration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04296650
	 * 		Name   -> Function CustomDeath.CustomDeathInterface.SetCrewBasedDeathPenaltyRespawnTimes
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FCrewBasedRespawnTimes                      CrewBasedRespawnTimes                                      (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UCustomDeathInterface::SetCrewBasedDeathPenaltyRespawnTimes(const struct FCrewBasedRespawnTimes& CrewBasedRespawnTimes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.SetCrewBasedDeathPenaltyRespawnTimes");
		
		UCustomDeathInterface_SetCrewBasedDeathPenaltyRespawnTimes_Params params {};
		params.CrewBasedRespawnTimes = CrewBasedRespawnTimes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042965C0
	 * 		Name   -> Function CustomDeath.CustomDeathInterface.ResetCustomConfigForPlayer
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FResetCustomConfigForPlayerData             ResetCustomConfigForPlayerData                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UCustomDeathInterface::ResetCustomConfigForPlayer(const struct FResetCustomConfigForPlayerData& ResetCustomConfigForPlayerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.ResetCustomConfigForPlayer");
		
		UCustomDeathInterface_ResetCustomConfigForPlayer_Params params {};
		params.ResetCustomConfigForPlayerData = ResetCustomConfigForPlayerData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04296530
	 * 		Name   -> Function CustomDeath.CustomDeathInterface.KillPlayer
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FKillPlayerData                             KillPlayerData                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UCustomDeathInterface::KillPlayer(const struct FKillPlayerData& KillPlayerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.KillPlayer");
		
		UCustomDeathInterface_KillPlayer_Params params {};
		params.KillPlayerData = KillPlayerData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04296490
	 * 		Name   -> Function CustomDeath.CustomDeathInterface.KillCrew
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FKillCrewData                               KillCrewData                                               (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UCustomDeathInterface::KillCrew(const struct FKillCrewData& KillCrewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.KillCrew");
		
		UCustomDeathInterface_KillCrew_Params params {};
		params.KillCrewData = KillCrewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042963C0
	 * 		Name   -> Function CustomDeath.CustomDeathInterface.GetShouldUseRevivalFlow
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		int32_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDefaultValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UCustomDeathInterface::GetShouldUseRevivalFlow(int32_t PlayerId, bool bDefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.GetShouldUseRevivalFlow");
		
		UCustomDeathInterface_GetShouldUseRevivalFlow_Params params {};
		params.PlayerId = PlayerId;
		params.bDefaultValue = bDefaultValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04296320
	 * 		Name   -> Function CustomDeath.CustomDeathInterface.GetShouldSkipFerryOfTheDamned
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		int32_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UCustomDeathInterface::GetShouldSkipFerryOfTheDamned(int32_t PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.GetShouldSkipFerryOfTheDamned");
		
		UCustomDeathInterface_GetShouldSkipFerryOfTheDamned_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04296280
	 * 		Name   -> Function CustomDeath.CustomDeathInterface.GetCustomPlayerStart
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		int32_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class APlayerStart* UCustomDeathInterface::GetCustomPlayerStart(int32_t PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.GetCustomPlayerStart");
		
		UCustomDeathInterface_GetCustomPlayerStart_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042961F0
	 * 		Name   -> Function CustomDeath.CustomDeathInterface.ForcePlayerRespawn
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FForcePlayerRespawnData                     ForcePlayerRespawnData                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UCustomDeathInterface::ForcePlayerRespawn(const struct FForcePlayerRespawnData& ForcePlayerRespawnData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.ForcePlayerRespawn");
		
		UCustomDeathInterface_ForcePlayerRespawn_Params params {};
		params.ForcePlayerRespawnData = ForcePlayerRespawnData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04296130
	 * 		Name   -> Function CustomDeath.CustomDeathInterface.DestroyCustomPlayerStart
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FDestroyCustomPlayerStartData               DestroyCustomPlayerStartData                               (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	int32_t UCustomDeathInterface::DestroyCustomPlayerStart(const struct FDestroyCustomPlayerStartData& DestroyCustomPlayerStartData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.DestroyCustomPlayerStart");
		
		UCustomDeathInterface_DestroyCustomPlayerStart_Params params {};
		params.DestroyCustomPlayerStartData = DestroyCustomPlayerStartData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04296070
	 * 		Name   -> Function CustomDeath.CustomDeathInterface.CreateNewCustomPlayerStart
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FCustomPlayerStartConfigData                CustomPlayerStartConfigData                                (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	int32_t UCustomDeathInterface::CreateNewCustomPlayerStart(const struct FCustomPlayerStartConfigData& CustomPlayerStartConfigData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.CreateNewCustomPlayerStart");
		
		UCustomDeathInterface_CreateNewCustomPlayerStart_Params params {};
		params.CustomPlayerStartConfigData = CustomPlayerStartConfigData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomDeathInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomDeathInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomDeath.CustomDeathInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACustomDeathService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACustomDeathService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomDeath.CustomDeathService");
		return ptr;
	}

}


