#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass IO_CartelSpawner.IO_CartelSpawner_C
	 * Size -> 0x01BC (FullSize[0x070C] - InheritedSize[0x0550])
	 */
	class AIO_CartelSpawner_C : public AInteractiveObject
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0550(0x0008) Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpawnOptionData*                                    CartelSpawnOption;                                       // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTimeTillSpawn;                                        // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B9C8[0x4];                                   // 0x056C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpawnerComponent*                                   OwnerSpawnerComponent;                                   // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bNextKillSquadCanSpawnLt;                                // 0x0578(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_NTNY[0x7];                                   // 0x0579(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEnvQueryParams                                     EQS_CartelSpawnLocs;                                     // 0x0580(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FVector>                                     PotentialCartelSpawnLocs;                                // 0x0638(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FVector                                             BackupSpawnFXLocation;                                   // 0x0648(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B9JG[0x4];                                   // 0x0654(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EMapNames, class USpawnOptionData*>                   MapNameToOptions_Thugs;                                  // 0x0658(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<EMapNames, class USpawnOptionData*>                   MapNameToOptions_Underbosses;                            // 0x06A8(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class AOakSpawner*>                                 CreatedOakSpawners;                                      // 0x06F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    OutstandingSpawnersBeforeCleanup;                        // 0x0708(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetSpawnedEnemyProvoke(class AActor* Actor);
		void HandleTestmapEnemySpawns(ECartelSpawnerType SpawnType);
		void CheckForSpawnCollisions(const struct FVector& CapsulePos, bool* CanSpawn);
		void SpawnCartelFX(const struct FVector& BackupFX_Location);
		void InitCartelIO();
		void SpawnNewKillSquadMember(class USpawnOptionData* SpawnOptions, ECartelSpawnerType SpawnType);
		void BeginCleanup();
		void UpdateCartelMission();
		void UserConstructionScript();
		void GbxAsyncRequest_Miss_71E9269F48E315C85EAA629E6FCD3C50(const struct FHitResult& Result);
		void GbxAsyncRequest_Hit_71E9269F48E315C85EAA629E6FCD3C50(const struct FHitResult& Result);
		void ReceiveBeginPlay();
		void SpawnCartelKillSquad();
		void SpawnUnderbossWithAllies();
		void StartAsyncSpawnTrace();
		void DoStartupPresentation();
		void OnAllDied_Underboss(class ASpawner* Spawner);
		void OnAllDied_ThugSpawner(class ASpawner* Spawner);
		void OnSuspend_Underboss(class ASpawner* Spawner, class AActor* Actor);
		void OnSuspend_Thug(class ASpawner* Spawner, class AActor* Actor);
		void BeginFailsafeTimer();
		void OnSpawned_ThugSpawner(class ASpawner* Spawner, class AActor* Actor);
		void OnSpawned_Underboss(class ASpawner* Spawner, class AActor* Actor);
		void ExecuteUbergraph_IO_CartelSpawner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
