#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * BlueprintGeneratedClass MonsterBPLibrary.MonsterBPLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMonsterBPLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetEnemiesInRangeAndAngle(class ABP_DCMonsterBaseWithOptions_C* MonsterBase, bool ResultByTargetActor, double Range, double Direction, double Angle, class UObject* __WorldContext, bool* Result, TArray<class ADCCharacterBase*>* DCCharacterBase);
		void STATIC_GetDirectionVector(class AActor* Actor, E_Direction Direction, double Distance, class UObject* __WorldContext, struct FVector* ResultVector);
		void STATIC_RemoveTimer(class ADCMonsterBase* DCMonsterBase, int32_t TimerIndex, class UObject* __WorldContext);
		void STATIC_ChangeGEAttributeAndApply(class AActor* SourceActor, class AActor* TargetActor, const struct FPrimaryAssetId& GameplayEffect, const struct FGameplayTag& SetByCallerTag, double Value, class UObject* __WorldContext);
		void STATIC_SetBBHPRatio(class ABP_DCMonsterBaseWithOptions_C* MonsterBase, double HPRatio, class UObject* __WorldContext);
		void STATIC_GetBBHPRatio(class ABP_DCMonsterBaseWithOptions_C* MonsterBase, class UObject* __WorldContext, double* HPRatio);
		void STATIC_GetInstigatorFromAddedTag(const struct FGameplayTag& GameplayTag, const struct FGameplayEffectSpecHandle& SpecHandle, class UObject* __WorldContext, bool* Result, class AActor** Instigator);
		void STATIC_GetInterruptMontageImmuneTags(class UObject* __WorldContext, TArray<struct FGameplayTag>* InterruptActionImmuneTags);
		void STATIC_GetDebuffImmuneTags(class UObject* __WorldContext, TArray<struct FGameplayTag>* DebuffImmuneTags);
		void STATIC_RemoveInterrtuptMontageImmune(class AActor* Actor, class UObject* __WorldContext);
		void STATIC_SetInterruptMontageImmune(class AActor* Actor, class UObject* __WorldContext);
		void STATIC_RemoveDebuffImmune(class AActor* Actor, bool Fear, bool Impact, bool KnockBack, bool Trap, bool UnableMove, class UObject* __WorldContext);
		void STATIC_SetDebuffImmune(class AActor* Actor, bool Fear, bool Impact, bool KnockBack, bool Trap, bool UnableMove, class UObject* __WorldContext);
		void STATIC_LaunchEnemy(const struct FGameplayEventData& EventData, bool LaunchWeaponDirection, double XYValue, double ZValue, class UObject* __WorldContext);
		void STATIC_SetComboAttack(class UDCGameplayAbilityBase* GameplayAbility, class UObject* Caster, double SphereOverlapForwardPos, double SphereOverlapRadius, const struct FGameplayTag& EventTag, double TriggerRatio, class UObject* __WorldContext, class ADCCharacterBase** TargetEnemy, TArray<class ADCCharacterBase*>* TargetArray, bool* ComboTriggered);
		void STATIC_SetProjectileSpecandOptions(class UDCGameplayAbilityBase* DCGameplayAbilityBase, class AActor* SpawnedProjectile, const struct FGameplayTag& GameplayTagForSpec, double PierceCount, bool PierceObstacle, double DecreasePierceObstacleCount, bool Homing, class ADCCharacterBase* HomingTarget, EHitBoxType HomingHitBoxType, double HomingMagnitude, class UObject* __WorldContext, bool* Result, class AProjectileActor** ProjectileActor);
		void STATIC_GetBBTargetActor(class ABP_DCMonsterBaseWithOptions_C* MonsterBaseWithOptions, class UObject* __WorldContext, bool* Result, class ADCCharacterBase** DCCharacterBase);
		void STATIC_GetProjectileRelativeSpawnTransform(class ADCCharacterBase* StartActor, const struct FVector& StartLocation, EHitBoxType HitBoxType, TArray<struct FVector>* SpawnLocation, TArray<struct FRotator>* ShootingDirection, class UObject* __WorldContext, bool* Result, TArray<struct FVector>* SpawnTransformLocation, TArray<struct FRotator>* SpawnTransformRotation);
		void STATIC_RemoveImmuneToComeback(class ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, class UObject* __WorldContext);
		void STATIC_SetImmuneToComebackForLinkedMonsters(TArray<class ABP_DCMonsterBaseWithOptions_C*>* LinkedMonsterArray, class UObject* __WorldContext);
		void STATIC_SetImmuneToComeback(class ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, class UObject* __WorldContext);
		void STATIC_GetNumberOfActivePlayersInCombatArea(TArray<class ADCCharacterBase*>* EnemiesInCombatArea, TArray<class ADCCharacterBase*>* LostEnemiesInCombatArea, class UObject* __WorldContext, int32_t* NumberOfPlayers);
		void STATIC_GetNumberOfActivePlayersInRecognitionArea(TArray<class AActor*>* EnemiesInRecogArea, TArray<class AActor*>* LostEnemiesInRecogArea, class UObject* __WorldContext, int32_t* NumberOfPlayers);
		void STATIC_GetAndCompareToBlackBoardMode(class ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, E_ModeType ModeType, class UObject* __WorldContext, bool* Result);
		void STATIC_SetBlackBoardModeForLinkedMonsters(TArray<class ABP_DCMonsterBaseWithOptions_C*>* LinkedMonsterArray, E_ModeType ModeType, class UObject* __WorldContext);
		void STATIC_SetBlackBoardMode(class ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, E_ModeType ModeType, class UObject* __WorldContext);
		void STATIC_CheckTargetHasStateTagsToLoseFromArray(class UObject* Target, class UObject* __WorldContext, bool* Result);
		void STATIC_AddTimer(class AActor* Actor, int32_t TimerIndex, double Second, class UObject* __WorldContext);
		void STATIC_GetMaxDistanceFromPerception(class ABP_DCMonsterBaseWithOptions_C* MonsterBP, E_DistanceFromVariables GetDistanceFrom, double DefaultDistance, class UObject* __WorldContext, bool* Result, double* ReturnValue);
		void STATIC_FilterTargetFromCombatArea(const struct FVector& SpawnLocation, double FilterDistanceFromSpawnLocation, TArray<class ADCCharacterBase*>* TargetArray, class UObject* __WorldContext, bool* ReturnValue, TArray<class ADCCharacterBase*>* Result);
		void STATIC_FilterTargetFromSpawnLocation(const struct FVector& SpawnLocation, double FilterDistanceFromSpawnLocation, TArray<class ADCCharacterBase*>* TargetArray, class UObject* __WorldContext, bool* ReturnValue, TArray<class ADCCharacterBase*>* Result);
		void STATIC_FilterTargetHasAggro(class ABP_DCMonsterBase_C* MonsterBase, TArray<class ADCCharacterBase*>* InputTargetArray, class UObject* __WorldContext, bool* ReturnValue, TArray<class ADCCharacterBase*>* OutputTargetArray);
		void GetTargetArray(class ADCMonsterBase* DCMonsterBase, E_SensorType GetListFrom, bool GetFromCombatArea, bool GetTargetHasAggroOnly, class UObject* __WorldContext, bool* ReturnValue, TArray<class ADCCharacterBase*>* TargetArray);
		void STATIC_SetTargetProvider(class ABP_DCMonsterBaseWithOptions_C* SourceTarget, class UDCGameObjectLinkComponent* DCGameObjectLink, const struct FGameplayTagQuery& ProviderObjectTag, class UObject* __WorldContext, bool* Result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
