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
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.SetSpawnedEnemyProvoke
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_CartelSpawner_C::SetSpawnedEnemyProvoke(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.SetSpawnedEnemyProvoke");
		
		AIO_CartelSpawner_C_SetSpawnedEnemyProvoke_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.HandleTestmapEnemySpawns
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECartelSpawnerType                                 SpawnType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_CartelSpawner_C::HandleTestmapEnemySpawns(ECartelSpawnerType SpawnType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.HandleTestmapEnemySpawns");
		
		AIO_CartelSpawner_C_HandleTestmapEnemySpawns_Params params {};
		params.SpawnType = SpawnType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.CheckForSpawnCollisions
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     CapsulePos                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanSpawn                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_CartelSpawner_C::CheckForSpawnCollisions(const struct FVector& CapsulePos, bool* CanSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.CheckForSpawnCollisions");
		
		AIO_CartelSpawner_C_CheckForSpawnCollisions_Params params {};
		params.CapsulePos = CapsulePos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanSpawn != nullptr)
			*CanSpawn = params.CanSpawn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnCartelFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     BackupFX_Location                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_CartelSpawner_C::SpawnCartelFX(const struct FVector& BackupFX_Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnCartelFX");
		
		AIO_CartelSpawner_C_SpawnCartelFX_Params params {};
		params.BackupFX_Location = BackupFX_Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.InitCartelIO
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_CartelSpawner_C::InitCartelIO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.InitCartelIO");
		
		AIO_CartelSpawner_C_InitCartelIO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnNewKillSquadMember
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USpawnOptionData*                            SpawnOptions                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECartelSpawnerType                                 SpawnType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_CartelSpawner_C::SpawnNewKillSquadMember(class USpawnOptionData* SpawnOptions, ECartelSpawnerType SpawnType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnNewKillSquadMember");
		
		AIO_CartelSpawner_C_SpawnNewKillSquadMember_Params params {};
		params.SpawnOptions = SpawnOptions;
		params.SpawnType = SpawnType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.BeginCleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_CartelSpawner_C::BeginCleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.BeginCleanup");
		
		AIO_CartelSpawner_C_BeginCleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.UpdateCartelMission
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_CartelSpawner_C::UpdateCartelMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.UpdateCartelMission");
		
		AIO_CartelSpawner_C_UpdateCartelMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_CartelSpawner_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.UserConstructionScript");
		
		AIO_CartelSpawner_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.GbxAsyncRequest_Miss_71E9269F48E315C85EAA629E6FCD3C50
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AIO_CartelSpawner_C::GbxAsyncRequest_Miss_71E9269F48E315C85EAA629E6FCD3C50(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.GbxAsyncRequest_Miss_71E9269F48E315C85EAA629E6FCD3C50");
		
		AIO_CartelSpawner_C_GbxAsyncRequest_Miss_71E9269F48E315C85EAA629E6FCD3C50_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.GbxAsyncRequest_Hit_71E9269F48E315C85EAA629E6FCD3C50
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AIO_CartelSpawner_C::GbxAsyncRequest_Hit_71E9269F48E315C85EAA629E6FCD3C50(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.GbxAsyncRequest_Hit_71E9269F48E315C85EAA629E6FCD3C50");
		
		AIO_CartelSpawner_C_GbxAsyncRequest_Hit_71E9269F48E315C85EAA629E6FCD3C50_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AIO_CartelSpawner_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.ReceiveBeginPlay");
		
		AIO_CartelSpawner_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnCartelKillSquad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_CartelSpawner_C::SpawnCartelKillSquad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnCartelKillSquad");
		
		AIO_CartelSpawner_C_SpawnCartelKillSquad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnUnderbossWithAllies
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_CartelSpawner_C::SpawnUnderbossWithAllies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnUnderbossWithAllies");
		
		AIO_CartelSpawner_C_SpawnUnderbossWithAllies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.StartAsyncSpawnTrace
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_CartelSpawner_C::StartAsyncSpawnTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.StartAsyncSpawnTrace");
		
		AIO_CartelSpawner_C_StartAsyncSpawnTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.DoStartupPresentation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_CartelSpawner_C::DoStartupPresentation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.DoStartupPresentation");
		
		AIO_CartelSpawner_C_DoStartupPresentation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.OnAllDied_Underboss
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawner*                                    Spawner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_CartelSpawner_C::OnAllDied_Underboss(class ASpawner* Spawner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.OnAllDied_Underboss");
		
		AIO_CartelSpawner_C_OnAllDied_Underboss_Params params {};
		params.Spawner = Spawner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.OnAllDied_ThugSpawner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawner*                                    Spawner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_CartelSpawner_C::OnAllDied_ThugSpawner(class ASpawner* Spawner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.OnAllDied_ThugSpawner");
		
		AIO_CartelSpawner_C_OnAllDied_ThugSpawner_Params params {};
		params.Spawner = Spawner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.OnSuspend_Underboss
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawner*                                    Spawner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_CartelSpawner_C::OnSuspend_Underboss(class ASpawner* Spawner, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.OnSuspend_Underboss");
		
		AIO_CartelSpawner_C_OnSuspend_Underboss_Params params {};
		params.Spawner = Spawner;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.OnSuspend_Thug
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawner*                                    Spawner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_CartelSpawner_C::OnSuspend_Thug(class ASpawner* Spawner, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.OnSuspend_Thug");
		
		AIO_CartelSpawner_C_OnSuspend_Thug_Params params {};
		params.Spawner = Spawner;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.BeginFailsafeTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_CartelSpawner_C::BeginFailsafeTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.BeginFailsafeTimer");
		
		AIO_CartelSpawner_C_BeginFailsafeTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.OnSpawned_ThugSpawner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawner*                                    Spawner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_CartelSpawner_C::OnSpawned_ThugSpawner(class ASpawner* Spawner, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.OnSpawned_ThugSpawner");
		
		AIO_CartelSpawner_C_OnSpawned_ThugSpawner_Params params {};
		params.Spawner = Spawner;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.OnSpawned_Underboss
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawner*                                    Spawner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_CartelSpawner_C::OnSpawned_Underboss(class ASpawner* Spawner, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.OnSpawned_Underboss");
		
		AIO_CartelSpawner_C_OnSpawned_Underboss_Params params {};
		params.Spawner = Spawner;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_CartelSpawner.IO_CartelSpawner_C.ExecuteUbergraph_IO_CartelSpawner
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_CartelSpawner_C::ExecuteUbergraph_IO_CartelSpawner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.ExecuteUbergraph_IO_CartelSpawner");
		
		AIO_CartelSpawner_C_ExecuteUbergraph_IO_CartelSpawner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIO_CartelSpawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIO_CartelSpawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IO_CartelSpawner.IO_CartelSpawner_C");
		return ptr;
	}

}


