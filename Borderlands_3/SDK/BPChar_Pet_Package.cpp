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
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.GetPetJabberIngenuityBarrel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Barrel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::GetPetJabberIngenuityBarrel(class AActor** Barrel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.GetPetJabberIngenuityBarrel");
		
		ABPChar_Pet_C_GetPetJabberIngenuityBarrel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Barrel != nullptr)
			*Barrel = params.Barrel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.GetPetEvolutionType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakActionAbilityPetEvolutionType                  EvolutionType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::GetPetEvolutionType(EOakActionAbilityPetEvolutionType* EvolutionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.GetPetEvolutionType");
		
		ABPChar_Pet_C_GetPetEvolutionType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EvolutionType != nullptr)
			*EvolutionType = params.EvolutionType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.GetPetType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakActionAbilityPetType                           PetType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::GetPetType(EOakActionAbilityPetType* PetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.GetPetType");
		
		ABPChar_Pet_C_GetPetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PetType != nullptr)
			*PetType = params.PetType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.MatchesPetProfile
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakPlayerCharacterAugmentData_Pet*          InAugment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Pet_C::MatchesPetProfile(class UOakPlayerCharacterAugmentData_Pet* InAugment, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.MatchesPetProfile");
		
		ABPChar_Pet_C_MatchesPetProfile_Params params {};
		params.InAugment = InAugment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.GetBeastmasterOwner
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_Player*                        Beastmaster                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::GetBeastmasterOwner(class AOakCharacter_Player** Beastmaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.GetBeastmasterOwner");
		
		ABPChar_Pet_C_GetBeastmasterOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Beastmaster != nullptr)
			*Beastmaster = params.Beastmaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.UpdateHealingFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::UpdateHealingFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.UpdateHealingFX");
		
		ABPChar_Pet_C_UpdateHealingFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.RefreshIconDuration
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::RefreshIconDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.RefreshIconDuration");
		
		ABPChar_Pet_C_RefreshIconDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.TogglePetTaunt_CLASSMODONLY
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnraged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Pet_C::TogglePetTaunt_CLASSMODONLY(bool IsEnraged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.TogglePetTaunt_CLASSMODONLY");
		
		ABPChar_Pet_C_TogglePetTaunt_CLASSMODONLY_Params params {};
		params.IsEnraged = IsEnraged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.IncrementKillStat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::IncrementKillStat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.IncrementKillStat");
		
		ABPChar_Pet_C_IncrementKillStat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.DoShrinkAudio
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::DoShrinkAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.DoShrinkAudio");
		
		ABPChar_Pet_C_DoShrinkAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.OnEnrageEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::OnEnrageEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.OnEnrageEnd");
		
		ABPChar_Pet_C_OnEnrageEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.OnEnrageBegin
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::OnEnrageBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.OnEnrageBegin");
		
		ABPChar_Pet_C_OnEnrageBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.OnRep_bIsEnraged
	 * 		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::OnRep_bIsEnraged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.OnRep_bIsEnraged");
		
		ABPChar_Pet_C_OnRep_bIsEnraged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.ToggleAttackCommand_BB
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Pet_C::ToggleAttackCommand_BB(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.ToggleAttackCommand_BB");
		
		ABPChar_Pet_C_ToggleAttackCommand_BB_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.RemoveAttackCommandIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::RemoveAttackCommandIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.RemoveAttackCommandIcon");
		
		ABPChar_Pet_C_RemoveAttackCommandIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.AddAttackCommandIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::AddAttackCommandIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.AddAttackCommandIcon");
		
		ABPChar_Pet_C_AddAttackCommandIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.ToggleAttackCommand_ScriptedTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Toggle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Pet_C::ToggleAttackCommand_ScriptedTarget(bool Toggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.ToggleAttackCommand_ScriptedTarget");
		
		ABPChar_Pet_C_ToggleAttackCommand_ScriptedTarget_Params params {};
		params.Toggle = Toggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.OnRep_ScriptedPetTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::OnRep_ScriptedPetTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.OnRep_ScriptedPetTarget");
		
		ABPChar_Pet_C_OnRep_ScriptedPetTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.DoPetAttackCommand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::DoPetAttackCommand(class UObject* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.DoPetAttackCommand");
		
		ABPChar_Pet_C_DoPetAttackCommand_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.TryRemovePlayerStatusEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::TryRemovePlayerStatusEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.TryRemovePlayerStatusEffect");
		
		ABPChar_Pet_C_TryRemovePlayerStatusEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.TryAddPlayerStatusEffect
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::TryAddPlayerStatusEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.TryAddPlayerStatusEffect");
		
		ABPChar_Pet_C_TryAddPlayerStatusEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.SetBlackboard_Aggro
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Toggle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Pet_C::SetBlackboard_Aggro(bool Toggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.SetBlackboard_Aggro");
		
		ABPChar_Pet_C_SetBlackboard_Aggro_Params params {};
		params.Toggle = Toggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.NotifyPetSpawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::NotifyPetSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.NotifyPetSpawn");
		
		ABPChar_Pet_C_NotifyPetSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.SecondWindInjuredAllies
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AOakCharacter_Player*>                Allies                                                     (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABPChar_Pet_C::SecondWindInjuredAllies(TArray<class AOakCharacter_Player*>* Allies)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.SecondWindInjuredAllies");
		
		ABPChar_Pet_C_SecondWindInjuredAllies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allies != nullptr)
			*Allies = params.Allies;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.SetUltimateBlackboard
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Pet_C::SetUltimateBlackboard(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.SetUltimateBlackboard");
		
		ABPChar_Pet_C_SetUltimateBlackboard_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.ComparePetKillerToAllies
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AssignPetToKiller                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Pet_C::ComparePetKillerToAllies(class AActor* Killer, bool* AssignPetToKiller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.ComparePetKillerToAllies");
		
		ABPChar_Pet_C_ComparePetKillerToAllies_Params params {};
		params.Killer = Killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssignPetToKiller != nullptr)
			*AssignPetToKiller = params.AssignPetToKiller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.PlaySpawnActions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::PlaySpawnActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.PlaySpawnActions");
		
		ABPChar_Pet_C_PlaySpawnActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.IsOwnerInFFYL
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InFFYL                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Pet_C::IsOwnerInFFYL(bool* InFFYL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.IsOwnerInFFYL");
		
		ABPChar_Pet_C_IsOwnerInFFYL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InFFYL != nullptr)
			*InFFYL = params.InFFYL;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.UserConstructionScript");
		
		ABPChar_Pet_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_Pet_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.Timeline_0__FinishedFunc");
		
		ABPChar_Pet_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_Pet_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.Timeline_0__UpdateFunc");
		
		ABPChar_Pet_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.OnAnimEnd_448EE01D4E3F143531F722AF23144929
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::OnAnimEnd_448EE01D4E3F143531F722AF23144929()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.OnAnimEnd_448EE01D4E3F143531F722AF23144929");
		
		ABPChar_Pet_C_OnAnimEnd_448EE01D4E3F143531F722AF23144929_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.OnEnd_448EE01D4E3F143531F722AF23144929
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 EndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::OnEnd_448EE01D4E3F143531F722AF23144929(EGbxActionEndState EndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.OnEnd_448EE01D4E3F143531F722AF23144929");
		
		ABPChar_Pet_C_OnEnd_448EE01D4E3F143531F722AF23144929_Params params {};
		params.EndState = EndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_Poop_Hide
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::PetJabbermon_Poop_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_Poop_Hide");
		
		ABPChar_Pet_C_PetJabbermon_Poop_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.DoAttackCommandEQS
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::DoAttackCommandEQS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.DoAttackCommandEQS");
		
		ABPChar_Pet_C_DoAttackCommandEQS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.DoAttackCommandFail
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::DoAttackCommandFail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.DoAttackCommandFail");
		
		ABPChar_Pet_C_DoAttackCommandFail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.DoAttackCommand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     EnemyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::DoAttackCommand(class UObject* EnemyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.DoAttackCommand");
		
		ABPChar_Pet_C_DoAttackCommand_Params params {};
		params.EnemyObject = EnemyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.OnPetTargetDied
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::OnPetTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.OnPetTargetDied");
		
		ABPChar_Pet_C_OnPetTargetDied_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.OnBeastmasterCausedAnyDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void ABPChar_Pet_C::OnBeastmasterCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.OnBeastmasterCausedAnyDamage");
		
		ABPChar_Pet_C_OnBeastmasterCausedAnyDamage_Params params {};
		params.DamageInstigator = DamageInstigator;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.DamagedActor = DamagedActor;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_Poop_Show
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::PetJabbermon_Poop_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_Poop_Show");
		
		ABPChar_Pet_C_PetJabbermon_Poop_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.BndEvt__UsableComponentPet_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Pet
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 UserController                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         UsedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::BndEvt__UsableComponentPet_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Pet(class AController* UserController, class UPrimitiveComponent* UsedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.BndEvt__UsableComponentPet_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Pet");
		
		ABPChar_Pet_C_BndEvt__UsableComponentPet_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Pet_Params params {};
		params.UserController = UserController;
		params.UsedComponent = UsedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.BeginAttackCommand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::BeginAttackCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.BeginAttackCommand");
		
		ABPChar_Pet_C_BeginAttackCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPChar_Pet
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABPChar_Pet_C::BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPChar_Pet(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPChar_Pet");
		
		ABPChar_Pet_C_BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPChar_Pet_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Pet
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void ABPChar_Pet_C::BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Pet(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Pet");
		
		ABPChar_Pet_C_BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Pet_Params params {};
		params.DamageInstigator = DamageInstigator;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.DamagedActor = DamagedActor;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_Pet_C::BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet");
		
		ABPChar_Pet_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_ChangeMeleeVis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewWeapVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Pet_C::PetJabbermon_ChangeMeleeVis(bool NewWeapVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_ChangeMeleeVis");
		
		ABPChar_Pet_C_PetJabbermon_ChangeMeleeVis_Params params {};
		params.NewWeapVisibility = NewWeapVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.OnPetReleased
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForced                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EPetReleaseReason                                  Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::OnPetReleased(bool bForced, EPetReleaseReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.OnPetReleased");
		
		ABPChar_Pet_C_OnPetReleased_Params params {};
		params.bForced = bForced;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.PetSpawnTrapProjectile
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::PetSpawnTrapProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.PetSpawnTrapProjectile");
		
		ABPChar_Pet_C_PetSpawnTrapProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.OnAggro_PlayerPets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::OnAggro_PlayerPets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.OnAggro_PlayerPets");
		
		ABPChar_Pet_C_OnAggro_PlayerPets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.OnDeAggro_PlayerPets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AggroDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::OnDeAggro_PlayerPets(float AggroDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.OnDeAggro_PlayerPets");
		
		ABPChar_Pet_C_OnDeAggro_PlayerPets_Params params {};
		params.AggroDuration = AggroDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_2_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_Pet_C::BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_2_FightForYourLifeEvent__DelegateSignature_BPChar_Pet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_2_FightForYourLifeEvent__DelegateSignature_BPChar_Pet");
		
		ABPChar_Pet_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_2_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_Pet_C::BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet");
		
		ABPChar_Pet_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_5_CauseDeathDelegate__DelegateSignature_BPChar_Pet
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABPChar_Pet_C::BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_5_CauseDeathDelegate__DelegateSignature_BPChar_Pet(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_5_CauseDeathDelegate__DelegateSignature_BPChar_Pet");
		
		ABPChar_Pet_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_5_CauseDeathDelegate__DelegateSignature_BPChar_Pet_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABPChar_Pet_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.ReceiveDestroyed");
		
		ABPChar_Pet_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.SetEnraged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsEnraged                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Pet_C::SetEnraged(bool bIsEnraged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.SetEnraged");
		
		ABPChar_Pet_C_SetEnraged_Params params {};
		params.bIsEnraged = bIsEnraged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.ReversePetEnrageScale
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::ReversePetEnrageScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.ReversePetEnrageScale");
		
		ABPChar_Pet_C_ReversePetEnrageScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.CancelPetEnrageScale
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::CancelPetEnrageScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.CancelPetEnrageScale");
		
		ABPChar_Pet_C_CancelPetEnrageScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.Pet_DownStateStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::Pet_DownStateStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.Pet_DownStateStart");
		
		ABPChar_Pet_C_Pet_DownStateStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_Pet_C::BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Pet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Pet");
		
		ABPChar_Pet_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.OnHealingFXChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              OldValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::OnHealingFXChanged(float OldValue, float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.OnHealingFXChanged");
		
		ABPChar_Pet_C_OnHealingFXChanged_Params params {};
		params.OldValue = OldValue;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.InitializePetSpawned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_Player*                        Beastmaster                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EOakActionAbilityPetEvolutionType                  EvolutionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::InitializePetSpawned(class AOakCharacter_Player* Beastmaster, EOakActionAbilityPetEvolutionType EvolutionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.InitializePetSpawned");
		
		ABPChar_Pet_C_InitializePetSpawned_Params params {};
		params.Beastmaster = Beastmaster;
		params.EvolutionType = EvolutionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_Pet_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.ReceiveBeginPlay");
		
		ABPChar_Pet_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.PetAttackIconFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameResourcePoolReference                  ResourcePool                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPChar_Pet_C::PetAttackIconFinished(const struct FGameResourcePoolReference& ResourcePool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.PetAttackIconFinished");
		
		ABPChar_Pet_C_PetAttackIconFinished_Params params {};
		params.ResourcePool = ResourcePool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_BarrelDrop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::PetJabbermon_BarrelDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_BarrelDrop");
		
		ABPChar_Pet_C_PetJabbermon_BarrelDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.PetSucceededRevive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::PetSucceededRevive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.PetSucceededRevive");
		
		ABPChar_Pet_C_PetSucceededRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_7_FightForYourLifeWithBoolEvent__DelegateSignature_BPChar_Pet
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSuccessful                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Pet_C::BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_7_FightForYourLifeWithBoolEvent__DelegateSignature_BPChar_Pet(bool IsSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_7_FightForYourLifeWithBoolEvent__DelegateSignature_BPChar_Pet");
		
		ABPChar_Pet_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_7_FightForYourLifeWithBoolEvent__DelegateSignature_BPChar_Pet_Params params {};
		params.IsSuccessful = IsSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_BarrelThrow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::PetJabbermon_BarrelThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_BarrelThrow");
		
		ABPChar_Pet_C_PetJabbermon_BarrelThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.OnInventoryEquipped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InventoryActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventorySlotData*                          SlotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::OnInventoryEquipped(class AActor* InventoryActor, class UInventorySlotData* SlotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.OnInventoryEquipped");
		
		ABPChar_Pet_C_OnInventoryEquipped_Params params {};
		params.InventoryActor = InventoryActor;
		params.SlotData = SlotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.OnInventoryUnequipped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InventoryActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventorySlotData*                          SlotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::OnInventoryUnequipped(class AActor* InventoryActor, class UInventorySlotData* SlotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.OnInventoryUnequipped");
		
		ABPChar_Pet_C_OnInventoryUnequipped_Params params {};
		params.InventoryActor = InventoryActor;
		params.SlotData = SlotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.OnInventoryPickedUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      PickedUpActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::OnInventoryPickedUp(class AActor* PickedUpActor, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.OnInventoryPickedUp");
		
		ABPChar_Pet_C_OnInventoryPickedUp_Params params {};
		params.PickedUpActor = PickedUpActor;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_BarrelSet
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewBarrel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::PetJabbermon_BarrelSet(class AActor* NewBarrel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_BarrelSet");
		
		ABPChar_Pet_C_PetJabbermon_BarrelSet_Params params {};
		params.NewBarrel = NewBarrel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_BarrelAlign
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewBarrel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::PetJabbermon_BarrelAlign(class AActor* NewBarrel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_BarrelAlign");
		
		ABPChar_Pet_C_PetJabbermon_BarrelAlign_Params params {};
		params.NewBarrel = NewBarrel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_FireRocket
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::PetJabbermon_FireRocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_FireRocket");
		
		ABPChar_Pet_C_PetJabbermon_FireRocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.Player_OnLevelUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OldExperienceLevel                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewExperienceLevel                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::Player_OnLevelUp(int32_t OldExperienceLevel, int32_t NewExperienceLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.Player_OnLevelUp");
		
		ABPChar_Pet_C_Player_OnLevelUp_Params params {};
		params.OldExperienceLevel = OldExperienceLevel;
		params.NewExperienceLevel = NewExperienceLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.OnDeath_FFYLScriptedTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::OnDeath_FFYLScriptedTarget(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.OnDeath_FFYLScriptedTarget");
		
		ABPChar_Pet_C_OnDeath_FFYLScriptedTarget_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_ChangeLauncherVis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Pet_C::PetJabbermon_ChangeLauncherVis(bool NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_ChangeLauncherVis");
		
		ABPChar_Pet_C_PetJabbermon_ChangeLauncherVis_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.Beastmaster_FFYLStop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::Beastmaster_FFYLStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.Beastmaster_FFYLStop");
		
		ABPChar_Pet_C_Beastmaster_FFYLStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.Beastmaster_FFYLStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Pet_C::Beastmaster_FFYLStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.Beastmaster_FFYLStart");
		
		ABPChar_Pet_C_Beastmaster_FFYLStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_ChangeGunVis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Pet_C::PetJabbermon_ChangeGunVis(bool NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_ChangeGunVis");
		
		ABPChar_Pet_C_PetJabbermon_ChangeGunVis_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Pet.BPChar_Pet_C.ExecuteUbergraph_BPChar_Pet
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Pet_C::ExecuteUbergraph_BPChar_Pet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Pet.BPChar_Pet_C.ExecuteUbergraph_BPChar_Pet");
		
		ABPChar_Pet_C_ExecuteUbergraph_BPChar_Pet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_Pet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_Pet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Pet.BPChar_Pet_C");
		return ptr;
	}

}


