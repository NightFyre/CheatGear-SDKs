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
	 * BlueprintGeneratedClass BPChar_IronBear.BPChar_IronBear_C
	 * Size -> 0x0270 (FullSize[0x26E8] - InheritedSize[0x2478])
	 */
	class ABPChar_IronBear_C : public AOakCharacter_IronBear
	{
	public:
		unsigned char                                              UnknownData_TW3F[0x8];                                   // 0x2478(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2480(0x0008) Transient, DuplicateTransient
		class UPlayerMeleeStateComponent*                          PlayerMeleeState;                                        // 0x2488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakAIWeaponUserComponent*                           OakAIWeaponUser_R;                                       // 0x2490(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakAIWeaponUserComponent*                           OakAIWeaponUser_L;                                       // 0x2498(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DestructibleCollision;                                   // 0x24A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            BubbleShield_OffFX;                                      // 0x24A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            BubbleShield_OnFX;                                       // 0x24B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            BubbleShield_Nova1P;                                     // 0x24B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            BubbleShield_Nova3P;                                     // 0x24C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                BubbleShield_Mesh;                                       // 0x24C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakCharacterAbilityManagerComponent*                OakCharacterAbilityManager;                              // 0x24D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakHitRegionComponent*                              HitRegion;                                               // 0x24D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_OakAttributeComponent_C*                         BP_OakAttributeComponent;                                // 0x24E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDynamicPhysicalAnimationComponent*                  DynamicPhysicalAnimation;                                // 0x24E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBodyWeaponHoldManagerComponent*                     BodyWeaponHoldManager;                                   // 0x24F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakFirstPersonComponent*                            FirstPerson;                                             // 0x24F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFoleyMainComponent*                                 FoleyMain;                                               // 0x2500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGameplayTasksComponent*                             GameplayTasks;                                           // 0x2508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInventoryListComponent*                             InventoryList;                                           // 0x2510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakPawnAttachSlotComponent*                         IronBearAttachSlot;                                      // 0x2518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_2_Mat_Damage_7BD821F548B36871A8927DAC03D68310;  // 0x2520(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_2__Direction_7BD821F548B36871A8927DAC03D68310;  // 0x2524(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T5WK[0x3];                                   // 0x2525(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_3;                                              // 0x2528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_Mat_Damage_E32CAB84432248479D2A589486A37B6E;  // 0x2530(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_E32CAB84432248479D2A589486A37B6E;  // 0x2534(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E9W9[0x3];                                   // 0x2535(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x2538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_CameraFade_910024964AD0D6FC2B03BB8F82C4AE9D;  // 0x2540(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_ScreenRight_910024964AD0D6FC2B03BB8F82C4AE9D; // 0x2544(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_ScreenTop_910024964AD0D6FC2B03BB8F82C4AE9D;   // 0x2548(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_ScreenLeft_910024964AD0D6FC2B03BB8F82C4AE9D;  // 0x254C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_ScreenFront_910024964AD0D6FC2B03BB8F82C4AE9D; // 0x2550(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_910024964AD0D6FC2B03BB8F82C4AE9D;  // 0x2554(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GHC2[0x3];                                   // 0x2555(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x2558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseAudioComponent*                                Audio_IronBear_Loop;                                     // 0x2560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DynamicScreenMaterialInstance;                           // 0x2568(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseModdedBubbleShieldFX;                                 // 0x2570(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_8S4N[0x7];                                   // 0x2571(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatusEffectSpec                                   StatusEffect_HighVoltage;                                // 0x2578(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UBPEventHub_Gunner_C*                                GunnerEventHub;                                          // 0x25B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            GunnersNestCockpitFX;                                    // 0x25B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GunnersNestOccupied;                                     // 0x25C0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_00AU[0x3];                                   // 0x25C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IronBearDigistructExitTime;                              // 0x25C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStatusEffectInstanceReference                      BubbleShield_DamageTaken_Effect;                         // 0x25C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		struct FWwisePlaybackInstance                              Bubble_Shield_Audio_Loop;                                // 0x25E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGbxAttributeFloat                                  Att_ExplosiveDamageScale;                                // 0x25F8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIronBearLoopEnabled;                                    // 0x2604(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPlayExplosionOnDestroy;                                 // 0x2605(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_90BK[0x2];                                   // 0x2606(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                Cockpit_Screen_Shield_Active;                            // 0x2608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Caution;                                                 // 0x2610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Screen_Side_L;                                           // 0x2618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Screen_Top;                                              // 0x2620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Screen_Side_R;                                           // 0x2628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_Crack_01;                                             // 0x2630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_Crack_02;                                             // 0x2638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_Crack_03;                                             // 0x2640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Hammerdown_Armed_L;                                      // 0x2648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Hammerdown_Armed_R;                                      // 0x2650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Screen_Front;                                            // 0x2658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_Damage_03;                                            // 0x2660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_Damage_02;                                            // 0x2668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_Damage_01;                                            // 0x2670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseAudioComponent*                                WwiseAudio_Iron_Loop;                                    // 0x2678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Delay_GunnestNestExit;                                   // 0x2680(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F06J[0x4];                                   // 0x2684(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeEffectData                                Att_BubbleShieldIdleRegenRate;                           // 0x2688(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      EnteredIronBear_GodDuration;                             // 0x26D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAutoBearStarted;                                        // 0x26D4(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_8D9I[0x3];                                   // 0x26D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoBearDuration;                                        // 0x26D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E4D9[0x4];                                   // 0x26DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              GunnersNestOccupant;                                     // 0x26E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float GetIronBearAutoSlideCooldownRefund();
		void OnRep_bAutoBearStarted();
		void CalculateAutoBearDuration();
		class UAIWeaponUserComponent* GetWeaponUserForWeaponSlot(class UWeaponSlotData* SlotData);
		void SetScreenLoopEnabled(bool bEnabled);
		void StopBubbleShieldAudioLoop();
		void StartBubbleShieldAudioLoop();
		void BootGunnersNestOccupant(bool InputPin, float* Delay);
		void SetNewAutoBearRotationRates();
		void LockGunnerNestUsability();
		void KickPlayerOutOfGunnersNest(bool zKilled, float* Delay);
		void InitNukeMod(EIronBearHardPointOrientation NewOrientation);
		void GetSurpriseForYouTarget(class AActor** AsActor);
		void ExitSurpriseForYouCore();
		bool HasBubbleShield();
		void Init_BubbleShieldCore();
		void Init_GunnersNestCore();
		void OnRep_GunnersNestOccupied();
		void OnRep_UseModdedBubbleShieldFX();
		void ToggleBubbleShieldCollision(bool On);
		void UpdateScreenParameter(const class FName& ParamName, EIronBearDamageLevel TriggeredLevel);
		void UpdateScreenDamage(class UParticleSystemComponent* ParticleSystem, EIronBearDamageLevel TriggeredLevel, EIronBearDamageLevel TriggeredSmokeLevel, EIronBearDamageLevel TriggeredFireLevel);
		void UpdateScreenCrack(class UParticleSystemComponent* ParticleSystem, EIronBearDamageLevel TriggeredLevel);
		void PrepareIronBearForEntry(class AOakCharacter* Gunner);
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void Timeline_2__FinishedFunc();
		void Timeline_2__UpdateFunc();
		void OnAnimEnd_2A9499CC4F6188887CB16E840419821A();
		void OnEnd_2A9499CC4F6188887CB16E840419821A(EGbxActionEndState EndState, class AActor* Actor);
		void OnAnimEnd_D554724642CB95A6F77CEEA2DFDC9FF2();
		void OnEnd_D554724642CB95A6F77CEEA2DFDC9FF2(EGbxActionEndState EndState, class AActor* Actor);
		void OnAnimEnd_A39BE65742340F11ACEF63BD04B6FCB1();
		void OnEnd_A39BE65742340F11ACEF63BD04B6FCB1(EGbxActionEndState EndState, class AActor* Actor);
		void OnExiting(bool bInstantExit);
		void OnExited(class AController* OldController);
		void OnExitStarted();
		void ServerNotifyIBScreenOff();
		void ClientOnExiting();
		void SetupAutoBearDestroyCleanup(float RepDelay, class AActor* Actor);
		void OnActionSkillActivated_IronBear(class UOakActionAbility* ActionAbility);
		void ManualExitCancelled();
		void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_IronBear(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser);
		void OnJumped();
		void OnLanded(const struct FHitResult& Hit);
		void ActivateGundamCore();
		void ServerActivateGundamCore();
		void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_IronBear(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void IBScreenOn();
		void IBScreenOff();
		void EnableDamageScreens();
		void DisableDamageScreens();
		void OnDamageLevelChanged();
		void ActivateNukeScreenIcons(EIronBearHardPointOrientation HardpointOrientation);
		void OnEntered();
		void OnEnteredClient();
		void OnEntering(class AOakCharacter_Player* InGunner);
		void ReceiveBeginPlay();
		void OnBubbleShieldEnabledStateChanged();
		void SetBubbleShieldFXModOverrideEnabled(bool Enabled);
		void BndEvt__DestructibleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_IronBear(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnAttachStateChanged_GunnersNest();
		void StartDigistructIn();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void IronBear_DoMeleeAttack();
		void UnlockResourceGod();
		void StopBubbleShield();
		void ExecuteUbergraph_BPChar_IronBear(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
