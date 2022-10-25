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
	 * BlueprintGeneratedClass BPChar_PetLoader_Base.BPChar_PetLoader_Base_C
	 * Size -> 0x01A9 (FullSize[0x2791] - InheritedSize[0x25E8])
	 */
	class ABPChar_PetLoader_Base_C : public ABPChar_Pet_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x25E8(0x0008) Transient, DuplicateTransient
		class UGbxSkeletalMeshComponent*                           GbxSkeletalMesh_ColorizationTarget;                      // 0x25F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFoleyMainComponent*                                 FoleyMain;                                               // 0x25F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Core_Activated_FX;                                       // 0x2600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Core_Idle_FX4;                                           // 0x2608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Core_Idle_FX3;                                           // 0x2610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Core_Idle_FX2;                                           // 0x2618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Core_Idle_FX1;                                           // 0x2620(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           Core_NotActive;                                          // 0x2628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Core_Overdrive;                                          // 0x2630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           Core_Activated;                                          // 0x2638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           Core_Idle;                                               // 0x2640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           ExplosiveCore;                                           // 0x2648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_PetLoader_EyeGlow;                                    // 0x2650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWwiseAudioComponent*                                Jet_AudioComponent;                                      // 0x2658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            BeamOn;                                                  // 0x2660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           DigistructPS;                                            // 0x2668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_LoaderShared_Death_Fire;                              // 0x2670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           Near_Death_Smoke;                                        // 0x2678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Death_Fire;                                              // 0x2680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           DeathReact;                                              // 0x2688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            FX_ProjectedGrenadeIcon;                                 // 0x2690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           ProjectedGrenadeIcon;                                    // 0x2698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Electricity_RightLeg_Dead;                               // 0x26A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Electricity_RightLeg;                                    // 0x26A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           CritSpotElectricity_RightLeg;                            // 0x26B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Electricity_LeftLeg_Dead;                                // 0x26B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Electricity_LeftLeg;                                     // 0x26C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           CritSpotElectricity_LeftLeg;                             // 0x26C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Electricity_RightArm_Dead;                               // 0x26D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Electricity_RightArm;                                    // 0x26D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           CritSpotElectricity_RightArm;                            // 0x26E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           CritSpotElectricity_LeftArm;                             // 0x26E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Electricity_LeftArm_Dead;                                // 0x26F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Electricity_LeftArm;                                     // 0x26F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           JetFoot_Right;                                           // 0x2700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_Right_JetFoot;                                        // 0x2708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_Left_JetFoot;                                         // 0x2710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           JetFoot_Left;                                            // 0x2718(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        EmissiveColor;                                           // 0x2720(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UStanceType*>                                 RedEyeStanceTypeArray;                                   // 0x2730(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		Enum_PetLoader_Variations                                  Type;                                                    // 0x2740(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1GYF[0x3];                                   // 0x2741(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AggroTime;                                               // 0x2744(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     LoaderEyeBeamCharge;                                     // 0x2748(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              LoaderEyeBeamData;                                       // 0x2750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               EyeBeamDamage;                                           // 0x2758(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FTimerHandle                                        LeftLegSparkTimer;                                       // 0x2770(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FTimerHandle                                        RightLegSparkTimer;                                      // 0x2778(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FTimerHandle                                        LeftArmSparkTimer;                                       // 0x2780(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FTimerHandle                                        RightArmSparkTimer;                                      // 0x2788(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bActivateEXPLoader;                                      // 0x2790(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void PetLoader_GetType(Enum_PetLoader_Variations* LoaderType);
		void PetLoaderRPG_isMissileBarrageDone(bool* isDone);
		void PetLoader_isSpawningSurveyor(bool* IsSpawningSurveyor);
		void OnRep_bActivateEXPLoader();
		void ChangeAlertState(bool NewAlertState);
		void CanLoseMember(bool IsArm, bool IsLeg, bool* CanLoseMember);
		void ShowWeaponIfValid();
		void CheckStartWithoutMembers();
		void SpawnDestroyedLeg(const class FName& SpawnToSocketName, class UClass* ActionToPlay, const struct FDamageReactionEventSummary& HitInfo);
		void SpawnDestroyedArm(const class FName& SpawnToSocketName, bool bHasWeapon, const struct FDamageReactionEventSummary& HitInfo);
		void UserConstructionScript();
		void BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_LoaderShared(const struct FStanceChangedEventArgs& Args);
		void ReceiveBeginPlay();
		void StartFeetThrusters();
		void StopFeetThrusters();
		void PetLoader_SetImmuneToPhaselock(bool bIsImmune);
		void TriggerSmoke(const struct FDamageReactionEventSummary& HitInfo);
		void PetLoader_StartLaserCharge();
		void PetLoaderRIOT_ShieldHit();
		void PetLoader_IsUnboxSpawning(bool IsUnboxing);
		void OnLeftLegJointDamaged(const struct FDamageReactionEventSummary& Damage_Event);
		void PetLoaderBadass_AnticipateLaserBall();
		void OnRightLegJointDamaged(const struct FDamageReactionEventSummary& Damage_Event);
		void OnLeftArmJointDamaged(const struct FDamageReactionEventSummary& Damage_Event);
		void OnRightArmJointDamaged(const struct FDamageReactionEventSummary& Damage_Event);
		void PetLoaderBadass_ThrowLaserBall();
		void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_LoaderShared(class AActor* DamageReceiver, class AActor* DamageCauser);
		void PetLoader_StopSpawningSurveyor(bool FinishedWithSuccess);
		void PetLoader_StartSpawningSurveyor();
		void PetLoaderBadass_LaserGround();
		void BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet();
		void BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet();
		void OnEnrageBegin();
		void OnEnrageEnd();
		void PetLoaderRIOT_ChargeEnd();
		void LeftLegRemoveSparks();
		void RightLegRemoveSparks();
		void LeftArmRemoveSparks();
		void RightArmRemoveSparks();
		void ActivateDLCSkill7();
		void StartDLCSkill7();
		void PetLoaderRIOT_ChargeStart();
		void PetLoader_SetEXPCore_Active();
		void PetLoader_SetEXPCore_Idle();
		void PetLoader_SetEXPCore_NotActive();
		void PetLoader_JumpStart();
		void PetLoader_JumpEnd();
		void PetLoader_EnterCrawlingState();
		void PetLoader_ToggleHandGrip(bool IsActive);
		void PetLoader_StartLaser();
		void PetLoader_SetProjectedIcon(Enum_PetLoader_ProjectedIcons Icon);
		void PetLoaderRPG_ShootMissile();
		void PetLoaderRIOT_ShieldDestroyed();
		void PetLoaderRIOT_ThrowShield();
		void PetLoaderEXP_SelfDestruct();
		void PetLoaderEXP_Explode();
		void ExecuteUbergraph_BPChar_PetLoader_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
