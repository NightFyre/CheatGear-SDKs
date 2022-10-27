#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class AthenaAIAbilities.AreaOfEffectHealAIAbilityType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAreaOfEffectHealAIAbilityType : public UAthenaAIAbilityType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.MeleeAIAbilityType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeleeAIAbilityType : public UAthenaAIAbilityType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.AreaOfEffectHealAIAbility
	 * Size -> 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
	 */
	class UAreaOfEffectHealAIAbility : public UAthenaAIAbility
	{
	public:
		unsigned char                                              UnknownData_0XPD[0x10];                                  // 0x0078(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              HealAreaOfEffectActor;                                   // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3T5M[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.AreaOfEffectHealAIAbilityParams
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	class UAreaOfEffectHealAIAbilityParams : public UAthenaAIAbilityParams
	{
	public:
		float                                                      ChanceToGoOnCooldownInsteadOfExecuting;                  // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealthPercentageThresholdToHeal;                         // 0x00CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              StatusEffectZone;                                        // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      MinimumTimeSpentHealing;                                 // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaximumTimeSpentHealing;                                 // 0x00DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.AshenFireStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAshenFireStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.BullRushAIAbilityType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBullRushAIAbilityType : public UAthenaAIAbilityType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.BurrowEruptDamagerType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBurrowEruptDamagerType : public UDamagerType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.BurrowHealVFXComponent
	 * Size -> 0x0050 (FullSize[0x0118] - InheritedSize[0x00C8])
	 */
	class UBurrowHealVFXComponent : public UActorComponent
	{
	public:
		class UParticleSystem*                                     VFXAsset;                                                // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                VfxSocketName;                                           // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VFXDuration;                                             // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PECX[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            SpawnedVFXSystem;                                        // 0x00E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsVFXActive;                                             // 0x00E8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_JHKA[0x2F];                                  // 0x00E9(0x002F) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsVFXActive();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.CoralShieldStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoralShieldStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.EelSlapAIAbilityType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEelSlapAIAbilityType : public UAthenaAIAbilityType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.EelSlapStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEelSlapStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.EelThrowAIAbility
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UEelThrowAIAbility : public UAthenaAIAbility
	{
	public:
		class UBlackboardComponent*                                CachedBlackboardComponent;                               // 0x0078(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.EelThrowAIAbilityParams
	 * Size -> 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
	 */
	class UEelThrowAIAbilityParams : public UAthenaAIAbilityParams
	{
	public:
		struct FWeightedProbabilityRange                           MinMaxNumberOfAttacksBeforeEnd;                          // 0x00C8(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.EelThrowAIAbilityType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEelThrowAIAbilityType : public UAthenaAIAbilityType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.ElectricShieldBuffInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UElectricShieldBuffInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.ElectricShieldBuffComponent
	 * Size -> 0x00F0 (FullSize[0x01B8] - InheritedSize[0x00C8])
	 */
	class UElectricShieldBuffComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_3MHH[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ShieldVFXAsset;                                          // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                VfxSocketName;                                           // 0x00D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         StartAudioLoopEvent;                                     // 0x00E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         StopAudioLoopEvent;                                      // 0x00E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsShieldActive;                                          // 0x00F0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_E9DC[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            ShieldEffectComponent;                                   // 0x00F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AM34[0xB8];                                  // 0x0100(0x00B8) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsShieldActive();
		void DeactivateShield();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.ElectricShieldStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UElectricShieldStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.ImpactMeleeAttackEelSlapId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UImpactMeleeAttackEelSlapId : public UImpactProjectileId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.MeleeAIAbility
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UMeleeAIAbility : public UAthenaAIAbility
	{
	public:
		unsigned char                                              UnknownData_T9AY[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.MeleeAttackId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeleeAttackId : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.MeleeAIAbilityParams
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UMeleeAIAbilityParams : public UAthenaAIAbilityParams
	{
	public:
		TArray<struct FMeleeAttackIdWeights>                       MeleeAttacks;                                            // 0x00C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.EelSlapAIAbilityParams
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UEelSlapAIAbilityParams : public UMeleeAIAbilityParams
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.EelSlapAIAbility
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UEelSlapAIAbility : public UMeleeAIAbility
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.ComboMeleeAttackId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UComboMeleeAttackId : public UMeleeAttackId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.HeavyMeleeAttackId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHeavyMeleeAttackId : public UMeleeAttackId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.LightMeleeAttackId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULightMeleeAttackId : public UMeleeAttackId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.BullRushAIAbilityParams
	 * Size -> 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
	 */
	class UBullRushAIAbilityParams : public UMeleeChargeAIAbilityParams
	{
	public:
		float                                                      StaticCollisionWarmup;                                   // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W4Y3[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UEnvQuery*>                                   ValidatorEQSystems;                                      // 0x00E8(0x0010) Edit, ZeroConstructor
		float                                                      TimeBetweenCanExecuteChecks;                             // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VRSJ[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.BullRushAIAbility
	 * Size -> 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
	 */
	class UBullRushAIAbility : public UMeleeChargeAIAbility
	{
	public:
		class UWorld*                                              CachedWorld;                                             // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_97HX[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.MeleeCollisionAwarenessInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeleeCollisionAwarenessInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.SporeCloudStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USporeCloudStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.SporeExposureInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USporeExposureInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.SporeExposureComponent
	 * Size -> 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
	 */
	class USporeExposureComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_YIV0[0x38];                                  // 0x00C8(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.SporeExposureStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USporeExposureStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.StatusResponseActivateElectricShield
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UStatusResponseActivateElectricShield : public UStatusResponse
	{
	public:
		float                                                      Duration;                                                // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BS6O[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.StatusResponseShowBurrowHealVFX
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStatusResponseShowBurrowHealVFX : public UStatusResponse
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.StatusResponseShowCoralShieldVFX
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStatusResponseShowCoralShieldVFX : public UStatusResponse
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAIAbilities.StatusResponseSporeCloud
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStatusResponseSporeCloud : public UStatusResponse
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
