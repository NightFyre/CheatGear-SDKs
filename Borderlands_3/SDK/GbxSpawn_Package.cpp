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
	 * 		RVA    -> 0x007E46F0
	 * 		Name   -> Function GbxSpawn.Spawner.SuspendAllActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ASpawner::SuspendAllActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.SuspendAllActors");
		
		ASpawner_SuspendAllActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E4110
	 * 		Name   -> Function GbxSpawn.Spawner.SetTeamOverride
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTeam*                                       OverrideTeam                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASpawner::SetTeamOverride(class UTeam* OverrideTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.SetTeamOverride");
		
		ASpawner_SetTeamOverride_Params params {};
		params.OverrideTeam = OverrideTeam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E4010
	 * 		Name   -> Function GbxSpawn.Spawner.SetTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTeam*                                       NewTeam                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASpawner::SetTeam(class UTeam* NewTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.SetTeam");
		
		ASpawner_SetTeam_Params params {};
		params.NewTeam = NewTeam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3E50
	 * 		Name   -> Function GbxSpawn.Spawner.SetAlwaysActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInAlwaysActive                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASpawner::SetAlwaysActive(bool bInAlwaysActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.SetAlwaysActive");
		
		ASpawner_SetAlwaysActive_Params params {};
		params.bInAlwaysActive = bInAlwaysActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3DA0
	 * 		Name   -> Function GbxSpawn.Spawner.ResetSpawning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ASpawner::ResetSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.ResetSpawning");
		
		ASpawner_ResetSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3C30
	 * 		Name   -> Function GbxSpawn.Spawner.OverrideSpawnerStyle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USpawnerStyle*                               NewSpawnerStyle                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASpawner::OverrideSpawnerStyle(class USpawnerStyle* NewSpawnerStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.OverrideSpawnerStyle");
		
		ASpawner_OverrideSpawnerStyle_Params params {};
		params.NewSpawnerStyle = NewSpawnerStyle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3BB0
	 * 		Name   -> Function GbxSpawn.Spawner.OnSpawningComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASpawner*                                    Spawner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASpawner::OnSpawningComplete(class ASpawner* Spawner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.OnSpawningComplete");
		
		ASpawner_OnSpawningComplete_Params params {};
		params.Spawner = Spawner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3AC0
	 * 		Name   -> Function GbxSpawn.Spawner.IsSpawnerEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ASpawner::IsSpawnerEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.IsSpawnerEnabled");
		
		ASpawner_IsSpawnerEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3A60
	 * 		Name   -> Function GbxSpawn.Spawner.IsFinishedSpawning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ASpawner::IsFinishedSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.IsFinishedSpawning");
		
		ASpawner_IsFinishedSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3980
	 * 		Name   -> Function GbxSpawn.Spawner.GetSpawnPointComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USpawnPointComponent* ASpawner::GetSpawnPointComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.GetSpawnPointComponent");
		
		ASpawner_GetSpawnPointComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3A10
	 * 		Name   -> Function GbxSpawn.Spawner.GetSpawnerTeamComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USpawnerTeamComponent* ASpawner::GetSpawnerTeamComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.GetSpawnerTeamComponent");
		
		ASpawner_GetSpawnerTeamComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E39E0
	 * 		Name   -> Function GbxSpawn.Spawner.GetSpawnerLinkComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USpawnerLinkComponent* ASpawner::GetSpawnerLinkComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.GetSpawnerLinkComponent");
		
		ASpawner_GetSpawnerLinkComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E39B0
	 * 		Name   -> Function GbxSpawn.Spawner.GetSpawnerComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USpawnerComponent* ASpawner::GetSpawnerComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.GetSpawnerComponent");
		
		ASpawner_GetSpawnerComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E35C0
	 * 		Name   -> Function GbxSpawn.Spawner.GetNumAliveActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIncludeExternal                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ASpawner::GetNumAliveActors(bool bIncludeExternal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.GetNumAliveActors");
		
		ASpawner_GetNumAliveActors_Params params {};
		params.bIncludeExternal = bIncludeExternal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3500
	 * 		Name   -> Function GbxSpawn.Spawner.EnableSpawner
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ASpawner::EnableSpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.EnableSpawner");
		
		ASpawner_EnableSpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E34C0
	 * 		Name   -> Function GbxSpawn.Spawner.DisableSpawner
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ASpawner::DisableSpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.DisableSpawner");
		
		ASpawner_DisableSpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3480
	 * 		Name   -> Function GbxSpawn.Spawner.DestroyAllActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ASpawner::DestroyAllActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.DestroyAllActors");
		
		ASpawner_DestroyAllActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3440
	 * 		Name   -> Function GbxSpawn.Spawner.CompleteScriptedWarmup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ASpawner::CompleteScriptedWarmup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.CompleteScriptedWarmup");
		
		ASpawner_CompleteScriptedWarmup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3220
	 * 		Name   -> Function GbxSpawn.Spawner.AreAllDead
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIncludeExternal                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASpawner::AreAllDead(bool bIncludeExternal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.AreAllDead");
		
		ASpawner_AreAllDead_Params params {};
		params.bIncludeExternal = bIncludeExternal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.Spawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E4710
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.SuspendAllActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USpawnerComponent::SuspendAllActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.SuspendAllActors");
		
		USpawnerComponent_SuspendAllActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E4090
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.SetTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTeam*                                       NewTeam                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnerComponent::SetTeam(class UTeam* NewTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.SetTeam");
		
		USpawnerComponent_SetTeam_Params params {};
		params.NewTeam = NewTeam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3F90
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.SetSpawnOptions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USpawnOptionData*                            NewSpawnOptions                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnerComponent::SetSpawnOptions(class USpawnOptionData* NewSpawnOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.SetSpawnOptions");
		
		USpawnerComponent_SetSpawnOptions_Params params {};
		params.NewSpawnOptions = NewSpawnOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3DC0
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.ResetSpawning
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void USpawnerComponent::ResetSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.ResetSpawning");
		
		USpawnerComponent_ResetSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3CB0
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.OverrideSpawnerStyle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USpawnerStyle*                               NewSpawnerStyle                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnerComponent::OverrideSpawnerStyle(class USpawnerStyle* NewSpawnerStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.OverrideSpawnerStyle");
		
		USpawnerComponent_OverrideSpawnerStyle_Params params {};
		params.NewSpawnerStyle = NewSpawnerStyle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3AF0
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.IsSpawnerStyleClassAllowed
	 * 		Flags  -> (Final, Native, Private, Const)
	 * Parameters:
	 * 		class UClass*                                      SpawnerStyleClass                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnerComponent::IsSpawnerStyleClassAllowed(class UClass* SpawnerStyleClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.IsSpawnerStyleClassAllowed");
		
		USpawnerComponent_IsSpawnerStyleClassAllowed_Params params {};
		params.SpawnerStyleClass = SpawnerStyleClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3A90
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.IsFinishedSpawning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USpawnerComponent::IsFinishedSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.IsFinishedSpawning");
		
		USpawnerComponent_IsFinishedSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3A40
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.IncludeExternalActorsForAllDiedEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USpawnerComponent::IncludeExternalActorsForAllDiedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.IncludeExternalActorsForAllDiedEvent");
		
		USpawnerComponent_IncludeExternalActorsForAllDiedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3950
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.GetSpawnOptions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USpawnOptionData* USpawnerComponent::GetSpawnOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.GetSpawnOptions");
		
		USpawnerComponent_GetSpawnOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3920
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.GetParentSpawner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USpawnerComponent* USpawnerComponent::GetParentSpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.GetParentSpawner");
		
		USpawnerComponent_GetParentSpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E38F0
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.GetNumSuspendedActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t USpawnerComponent::GetNumSuspendedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.GetNumSuspendedActors");
		
		USpawnerComponent_GetNumSuspendedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3810
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.GetNumSpawnedActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIncludeExternal                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInGroup                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USpawnerComponent::GetNumSpawnedActors(bool bIncludeExternal, bool bInGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.GetNumSpawnedActors");
		
		USpawnerComponent_GetNumSpawnedActors_Params params {};
		params.bIncludeExternal = bIncludeExternal;
		params.bInGroup = bInGroup;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3730
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.GetNumDeadActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIncludeExternal                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInGroup                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USpawnerComponent::GetNumDeadActors(bool bIncludeExternal, bool bInGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.GetNumDeadActors");
		
		USpawnerComponent_GetNumDeadActors_Params params {};
		params.bIncludeExternal = bIncludeExternal;
		params.bInGroup = bInGroup;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3650
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.GetNumAliveActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIncludeExternal                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInGroup                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USpawnerComponent::GetNumAliveActors(bool bIncludeExternal, bool bInGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.GetNumAliveActors");
		
		USpawnerComponent_GetNumAliveActors_Params params {};
		params.bIncludeExternal = bIncludeExternal;
		params.bInGroup = bInGroup;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3540
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.GetAliveActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<class AActor*> USpawnerComponent::GetAliveActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.GetAliveActors");
		
		USpawnerComponent_GetAliveActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3520
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.EnableSpawner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USpawnerComponent::EnableSpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.EnableSpawner");
		
		USpawnerComponent_EnableSpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E34E0
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.DisableSpawner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USpawnerComponent::DisableSpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.DisableSpawner");
		
		USpawnerComponent_DisableSpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E34A0
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.DestroyAllActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USpawnerComponent::DestroyAllActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.DestroyAllActors");
		
		USpawnerComponent_DestroyAllActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3460
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.CompleteScriptedWarmup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USpawnerComponent::CompleteScriptedWarmup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.CompleteScriptedWarmup");
		
		USpawnerComponent_CompleteScriptedWarmup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E32B0
	 * 		Name   -> Function GbxSpawn.SpawnerComponent.AreAllDead
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIncludeExternal                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInGroup                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnerComponent::AreAllDead(bool bIncludeExternal, bool bInGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.AreAllDead");
		
		USpawnerComponent_AreAllDead_Params params {};
		params.bIncludeExternal = bIncludeExternal;
		params.bInGroup = bInGroup;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E8960
	 * 		Name   -> Function GbxSpawn.SpawnPoint.SetSpawnStyleTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                NewTag                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASpawnPoint::SetSpawnStyleTag(const struct FGameplayTag& NewTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPoint.SetSpawnStyleTag");
		
		ASpawnPoint_SetSpawnStyleTag_Params params {};
		params.NewTag = NewTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxSpawn.SpawnPoint.ResetStretchPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ASpawnPoint::ResetStretchPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPoint.ResetStretchPoint");
		
		ASpawnPoint_ResetStretchPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E87C0
	 * 		Name   -> Function GbxSpawn.SpawnPoint.GetSpawnStyleTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FGameplayTag ASpawnPoint::GetSpawnStyleTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPoint.GetSpawnStyleTag");
		
		ASpawnPoint_GetSpawnStyleTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E8760
	 * 		Name   -> Function GbxSpawn.SpawnPoint.EnableSpawnPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ASpawnPoint::EnableSpawnPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPoint.EnableSpawnPoint");
		
		ASpawnPoint_EnableSpawnPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E8720
	 * 		Name   -> Function GbxSpawn.SpawnPoint.DisableSpawnPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ASpawnPoint::DisableSpawnPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPoint.DisableSpawnPoint");
		
		ASpawnPoint_DisableSpawnPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpawnPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpawnPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_SpawnAnim.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_SpawnAnim::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.AnimNotify_SpawnAnim");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3B80
	 * 		Name   -> Function GbxSpawn.GbxAction_SpawnAnim.K2_GetSpawnPoint
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* UGbxAction_SpawnAnim::K2_GetSpawnPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.GbxAction_SpawnAnim.K2_GetSpawnPoint");
		
		UGbxAction_SpawnAnim_K2_GetSpawnPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAction_SpawnAnim.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAction_SpawnAnim::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.GbxAction_SpawnAnim");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_SpawnCostAvailable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_SpawnCostAvailable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.GbxCondition_SpawnCostAvailable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMultiSpawnPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMultiSpawnPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.MultiSpawnPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxSpawn.SpawnDLCScript.OnAllSpawned
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USpawnerComponent*                           SpawnerComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnDLCScript::OnAllSpawned(class USpawnerComponent* SpawnerComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnDLCScript.OnAllSpawned");
		
		USpawnDLCScript_OnAllSpawned_Params params {};
		params.SpawnerComponent = SpawnerComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxSpawn.SpawnDLCScript.OnAllDied
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USpawnerComponent*                           SpawnerComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnDLCScript::OnAllDied(class USpawnerComponent* SpawnerComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnDLCScript.OnAllDied");
		
		USpawnDLCScript_OnAllDied_Params params {};
		params.SpawnerComponent = SpawnerComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxSpawn.SpawnDLCScript.OnActorSpawned
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USpawnerComponent*                           SpawnerComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnDLCScript::OnActorSpawned(class USpawnerComponent* SpawnerComponent, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnDLCScript.OnActorSpawned");
		
		USpawnDLCScript_OnActorSpawned_Params params {};
		params.SpawnerComponent = SpawnerComponent;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxSpawn.SpawnDLCScript.OnActorDied
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USpawnerComponent*                           SpawnerComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnDLCScript::OnActorDied(class USpawnerComponent* SpawnerComponent, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnDLCScript.OnActorDied");
		
		USpawnDLCScript_OnActorDied_Params params {};
		params.SpawnerComponent = SpawnerComponent;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnDLCScript.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnDLCScript::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnDLCScript");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnDLCData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnDLCData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnDLCData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalSpawnDLCData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalSpawnDLCData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.GlobalSpawnDLCData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDLCScriptedSpawerExpansionList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDLCScriptedSpawerExpansionList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.DLCScriptedSpawerExpansionList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnedActorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnedActorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnedActorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E4730
	 * 		Name   -> Function GbxSpawn.SpawnerBlueprintLibrary.SuspendSpawnedActors
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnerBlueprintLibrary::STATIC_SuspendSpawnedActors(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.SuspendSpawnedActors");
		
		USpawnerBlueprintLibrary_SuspendSpawnedActors_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E43F0
	 * 		Name   -> Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptionsTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USpawnOptionData*                            SpawnOptions                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SpawnTransform                                             (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class AActor* USpawnerBlueprintLibrary::STATIC_SpawnActorWithSpawnOptionsTransform(class AActor* Context, class USpawnOptionData* SpawnOptions, const struct FTransform& SpawnTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptionsTransform");
		
		USpawnerBlueprintLibrary_SpawnActorWithSpawnOptionsTransform_Params params {};
		params.Context = Context;
		params.SpawnOptions = SpawnOptions;
		params.SpawnTransform = SpawnTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E4280
	 * 		Name   -> Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptionsAsync
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSpawnManagerAsyncRequest                   Request                                                    (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	int32_t USpawnerBlueprintLibrary::STATIC_SpawnActorWithSpawnOptionsAsync(class UObject* WorldContext, const struct FSpawnManagerAsyncRequest& Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptionsAsync");
		
		USpawnerBlueprintLibrary_SpawnActorWithSpawnOptionsAsync_Params params {};
		params.WorldContext = WorldContext;
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E4190
	 * 		Name   -> Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USpawnOptionData*                            SpawnOptions                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USpawnPointComponent*                        SpawnPointComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* USpawnerBlueprintLibrary::STATIC_SpawnActorWithSpawnOptions(class AActor* Context, class USpawnOptionData* SpawnOptions, class USpawnPointComponent* SpawnPointComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptions");
		
		USpawnerBlueprintLibrary_SpawnActorWithSpawnOptions_Params params {};
		params.Context = Context;
		params.SpawnOptions = SpawnOptions;
		params.SpawnPointComponent = SpawnPointComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E4570
	 * 		Name   -> Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawner
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USpawnFactory*                               Factory                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USpawnPointComponent*                        SpawnPointComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USpawnerComponent*                           SpawnerComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* USpawnerBlueprintLibrary::STATIC_SpawnActorWithSpawner(class AActor* Context, class USpawnFactory* Factory, class USpawnPointComponent* SpawnPointComponent, class USpawnerComponent* SpawnerComponent, class AActor* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawner");
		
		USpawnerBlueprintLibrary_SpawnActorWithSpawner_Params params {};
		params.Context = Context;
		params.Factory = Factory;
		params.SpawnPointComponent = SpawnPointComponent;
		params.SpawnerComponent = SpawnerComponent;
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3EE0
	 * 		Name   -> Function GbxSpawn.SpawnerBlueprintLibrary.SetMaxSpawnCost
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewMaxSpawnCost                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnerBlueprintLibrary::STATIC_SetMaxSpawnCost(class UObject* WorldContextObject, int32_t NewMaxSpawnCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.SetMaxSpawnCost");
		
		USpawnerBlueprintLibrary_SetMaxSpawnCost_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NewMaxSpawnCost = NewMaxSpawnCost;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3DE0
	 * 		Name   -> Function GbxSpawn.SpawnerBlueprintLibrary.RestoreSuspendedActors
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnerBlueprintLibrary::STATIC_RestoreSuspendedActors(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.RestoreSuspendedActors");
		
		USpawnerBlueprintLibrary_RestoreSuspendedActors_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3D30
	 * 		Name   -> Function GbxSpawn.SpawnerBlueprintLibrary.RemoveActorFromSpawnSystem
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnerBlueprintLibrary::STATIC_RemoveActorFromSpawnSystem(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.RemoveActorFromSpawnSystem");
		
		USpawnerBlueprintLibrary_RemoveActorFromSpawnSystem_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3390
	 * 		Name   -> Function GbxSpawn.SpawnerBlueprintLibrary.CancelSpawnActorWithOptionsAsyncRequest
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RequestID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnerBlueprintLibrary::STATIC_CancelSpawnActorWithOptionsAsyncRequest(class UObject* WorldContext, int32_t RequestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.CancelSpawnActorWithOptionsAsyncRequest");
		
		USpawnerBlueprintLibrary_CancelSpawnActorWithOptionsAsyncRequest_Params params {};
		params.WorldContext = WorldContext;
		params.RequestID = RequestID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnerBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnerBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnerBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnerLinkComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnerLinkComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnerLinkComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnerStateInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnerStateInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnerStateInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnerStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnerStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnerStyle_Bunch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnerStyle_Bunch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyle_Bunch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnerStyle_BunchList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnerStyle_BunchList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyle_BunchList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnerStyle_Den.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnerStyle_Den::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyle_Den");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnerStyle_Encounter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnerStyle_Encounter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyle_Encounter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnerStyle_Single.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnerStyle_Single::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyle_Single");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E88B0
	 * 		Name   -> Function GbxSpawn.SpawnerStyleFactory_Bunch.IsFactoryClassAllowed
	 * 		Flags  -> (Final, Native, Public, Const)
	 * Parameters:
	 * 		class UClass*                                      FactoryClass                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnerStyleFactory_Bunch::IsFactoryClassAllowed(class UClass* FactoryClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerStyleFactory_Bunch.IsFactoryClassAllowed");
		
		USpawnerStyleFactory_Bunch_IsFactoryClassAllowed_Params params {};
		params.FactoryClass = FactoryClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnerStyleFactory_Bunch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnerStyleFactory_Bunch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyleFactory_Bunch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3AF0
	 * 		Name   -> Function GbxSpawn.SpawnerStyleFactory_Den.IsFactoryClassAllowed
	 * 		Flags  -> (Final, Native, Public, Const)
	 * Parameters:
	 * 		class UClass*                                      FactoryClass                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnerStyleFactory_Den::IsFactoryClassAllowed(class UClass* FactoryClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerStyleFactory_Den.IsFactoryClassAllowed");
		
		USpawnerStyleFactory_Den_IsFactoryClassAllowed_Params params {};
		params.FactoryClass = FactoryClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnerStyleFactory_Den.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnerStyleFactory_Den::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyleFactory_Den");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E88B0
	 * 		Name   -> Function GbxSpawn.SpawnerStyleFactory_Single.IsFactoryClassAllowed
	 * 		Flags  -> (Final, Native, Public, Const)
	 * Parameters:
	 * 		class UClass*                                      FactoryClass                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnerStyleFactory_Single::IsFactoryClassAllowed(class UClass* FactoryClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerStyleFactory_Single.IsFactoryClassAllowed");
		
		USpawnerStyleFactory_Single_IsFactoryClassAllowed_Params params {};
		params.FactoryClass = FactoryClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnerStyleFactory_Single.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnerStyleFactory_Single::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnerStyleFactory_Single");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnerTeamComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnerTeamComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnerTeamComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnFactory_Container.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnFactory_Container::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnFactory_Container");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnFactory_ContainerSoftRef.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnFactory_ContainerSoftRef::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnFactory_ContainerSoftRef");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E8A60
	 * 		Name   -> Function GbxSpawn.SpawnFactory_Generic.ShouldSkipActorProperty
	 * 		Flags  -> (Final, Native, Static, Private)
	 * Parameters:
	 * 		class UProperty*                                   ActorProperty                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnFactory_Generic::STATIC_ShouldSkipActorProperty(class UProperty* ActorProperty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnFactory_Generic.ShouldSkipActorProperty");
		
		USpawnFactory_Generic_ShouldSkipActorProperty_Params params {};
		params.ActorProperty = ActorProperty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnFactory_Generic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnFactory_Generic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnFactory_Generic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E86A0
	 * 		Name   -> Function GbxSpawn.SpawnManager.ActorDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnManager::ActorDestroyed(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnManager.ActorDestroyed");
		
		USpawnManager_ActorDestroyed_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnSystemEditorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnSystemEditorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnSystemEditorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnOptionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnOptionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnOptionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E89E0
	 * 		Name   -> Function GbxSpawn.SpawnPointComponent.SetSpawnStyleTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                NewTag                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnPointComponent::SetSpawnStyleTag(const struct FGameplayTag& NewTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPointComponent.SetSpawnStyleTag");
		
		USpawnPointComponent_SetSpawnStyleTag_Params params {};
		params.NewTag = NewTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxSpawn.SpawnPointComponent.ResetStretchPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USpawnPointComponent::ResetStretchPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPointComponent.ResetStretchPoint");
		
		USpawnPointComponent_ResetStretchPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E8880
	 * 		Name   -> Function GbxSpawn.SpawnPointComponent.HasSpawnAITreeTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USpawnPointComponent::HasSpawnAITreeTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPointComponent.HasSpawnAITreeTag");
		
		USpawnPointComponent_HasSpawnAITreeTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E8820
	 * 		Name   -> Function GbxSpawn.SpawnPointComponent.GetStretchyPoint
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform USpawnPointComponent::GetStretchyPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPointComponent.GetStretchyPoint");
		
		USpawnPointComponent_GetStretchyPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E8800
	 * 		Name   -> Function GbxSpawn.SpawnPointComponent.GetSpawnStyleTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FGameplayTag USpawnPointComponent::GetSpawnStyleTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPointComponent.GetSpawnStyleTag");
		
		USpawnPointComponent_GetSpawnStyleTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E87A0
	 * 		Name   -> Function GbxSpawn.SpawnPointComponent.GetSpawnAITreeTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FGameplayTag USpawnPointComponent::GetSpawnAITreeTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPointComponent.GetSpawnAITreeTag");
		
		USpawnPointComponent_GetSpawnAITreeTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E8780
	 * 		Name   -> Function GbxSpawn.SpawnPointComponent.EnableSpawnPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USpawnPointComponent::EnableSpawnPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPointComponent.EnableSpawnPoint");
		
		USpawnPointComponent_EnableSpawnPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E8740
	 * 		Name   -> Function GbxSpawn.SpawnPointComponent.DisableSpawnPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USpawnPointComponent::DisableSpawnPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPointComponent.DisableSpawnPoint");
		
		USpawnPointComponent_DisableSpawnPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnPointComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnPointComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnPointComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnPointProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnPointProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnPointProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E8940
	 * 		Name   -> Function GbxSpawn.SpawnPreviewComponent.OnReplayAction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USpawnPreviewComponent::OnReplayAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPreviewComponent.OnReplayAction");
		
		USpawnPreviewComponent_OnReplayAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B84D0
	 * 		Name   -> Function GbxSpawn.SpawnPreviewComponent.OnCycleActor
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECycleDirection                                    Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnPreviewComponent::OnCycleActor(ECycleDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPreviewComponent.OnCycleActor");
		
		USpawnPreviewComponent_OnCycleActor_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnPreviewComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnPreviewComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxSpawn.SpawnPreviewComponent");
		return ptr;
	}

}


