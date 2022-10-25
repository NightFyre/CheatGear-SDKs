#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * BlueprintGeneratedClass BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C
	 * Size -> 0x00A0 (FullSize[0x0420] - InheritedSize[0x0380])
	 */
	class ABP_HDProj_SPDeployableBase_C : public AHDProj_SpawnPointDeployable
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    HitDetectionSphere;                                      // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    SpawnSphere;                                             // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ProjectileCollision;                                     // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDFPOIComponent*                                     POI;                                                     // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bOnlySquadMembersCanSpawn;                               // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J52P[0x3];                                   // 0x03A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PostTriggerLifeSpan;                                     // 0x03AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlacementRestrictionDistance;                            // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSpawnable;                                              // 0x03B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EYSU[0x3];                                   // 0x03B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSpawnPointActivationChanged;                           // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FVector>                                     SpawnPointLocOffsets;                                    // 0x03C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FSpawnPointDef>                              GeneratedSpawnPoints;                                    // 0x03D8(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIgnoreFriendlyFire;                                     // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5BQC[0x3];                                   // 0x03E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Health;                                                  // 0x03EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDisableWhenOverrun;                                     // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EKOR[0x3];                                   // 0x03F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumberOfEnemiesToDisable;                                // 0x03F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDestroyWhenOverrun;                                     // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CRLE[0x3];                                   // 0x03F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumberOfEnemiesToDestroy;                                // 0x03FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentNumberOfEnemies;                                  // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K9AW[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDSquadState*                                       OwnerSquadState;                                         // 0x0408(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDestroyWhenSquadDisbands;                               // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bOnlyOnePerSquad;                                        // 0x0411(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_69BU[0x2];                                   // 0x0412(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxNumberOfInstances;                                    // 0x0414(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EnemyTolerance_Radius;                                   // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EnemyTolerance_MaxNumberOfChars;                         // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool GetSpawnPointCollisionHandlingOverrideBP(const struct FSpawnPointDef& SpawnPoint, ESpawnActorCollisionHandlingMethod* OutSpawnCollisionMethod);
		bool CanRestartPlayerFromSpawnPointBP(const struct FSpawnPointDef& SpawnPoint, class AController* Player, class UClass* PlayerPawnClass);
		bool CanSpawnActorFromSpawnPointBP(const struct FSpawnPointDef& SpawnPoint, class UClass* SpawnActorClass);
		bool FindSpawnPointBP(int32_t SpawnPointID, struct FSpawnPointDef* FoundSpawnPoint);
		int32_t GetAllSpawnPointsBP(TArray<struct FSpawnPointDef>* SpawnPoints);
		void CanPlayerSpawnHere(class AController* InPlayer, bool* bPlayerCanSpawn);
		void InitDeployable();
		void CheckEnemyOverrun();
		void HandleTakeDamageFromProjectile(class ADFBaseProjectile* InProjectile, float InDamage);
		void GenerateSpawnPointList();
		void GetTransformOffsetBySpawnIndex(int32_t* SpawnIdx, const struct FTransform& Transform, struct FTransform* NewTransform);
		void GetActorTransformOffsetByMeshZBounds(struct FTransform* OffsetActorWorldXForm);
		void CheckForEnemyChars();
		void SetIsSpawnable(bool bNewEnabled);
		void IsSpawnable(bool* bSpawnPointEnabled);
		void AreSpawnPointsEqual(struct FSpawnPointDef* SpawnPointOne, struct FSpawnPointDef* SpawnPointTwo, bool* bEqual);
		void GetSpawnPoint(bool bMeshZOffset, int32_t SpawnPointIdx, struct FSpawnPointDef* SpawnPoint);
		void IsEnemyChar(class ADFBaseCharacter* Char, bool* bEnemyChar);
		void HasServerAuthority(bool* bAuthority);
		void ReceivePayloadActivated(const struct FHitResult& ImpactHitResult);
		void BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OverlappingPawnTeamNumUpdated(unsigned char LastTeamNum, unsigned char NewTeamNum);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void MemberPreUnregisteredFromOwnerSquad(class AHDSquadState* Squad, class AHDPlayerState* MemberPS);
		void ExecuteUbergraph_BP_HDProj_SPDeployableBase(int32_t EntryPoint);
		void OnSpawnPointActivationChanged__DelegateSignature(class ABP_HDProj_SPDeployableBase_C* Deployable, bool bSpawnPointEnabled);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
