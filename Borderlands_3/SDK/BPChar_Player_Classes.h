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
	 * BlueprintGeneratedClass BPChar_Player.BPChar_Player_C
	 * Size -> 0x0218 (FullSize[0x35E8] - InheritedSize[0x33D0])
	 */
	class ABPChar_Player_C : public AOakCharacter_Player
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x33D0(0x0008) Transient, DuplicateTransient
		class UTerritoryComponent*                                 Territory;                                               // 0x33D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UHavokNavObstacleComponent*                          HavokNavObstacle;                                        // 0x33E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocialInteractionComponent*                         SocialInteraction;                                       // 0x33E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakInventoryListComponent*                          InventoryList;                                           // 0x33F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakInventoryListComponent*                          BankInventoryList;                                       // 0x33F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakMinimapIconComponent*                            OakMinimapIcon;                                          // 0x3400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakHitRegionComponent*                              HitRegion;                                               // 0x3408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakCharacterSoundLogicComponent*                    OakCharacterSoundLogic;                                  // 0x3410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_OakAttributeComponent_C*                         BP_OakAttributeComponent;                                // 0x3418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPFightForYourLifeComponent_C*                      BPFightForYourLifeComponent;                             // 0x3420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPlayerMeleeStateComponent*                          PlayerMeleeState;                                        // 0x3428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakPlayerAbilityManagerComponent*                   OakPlayerAbilityManager;                                 // 0x3430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBodyWeaponHoldManagerComponent*                     BodyWeaponHoldManager;                                   // 0x3438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakFirstPersonComponent*                            FirstPerson;                                             // 0x3440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFoleyMainComponent*                                 FoleyMain;                                               // 0x3448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGameplayTasksComponent*                             GameplayTasks;                                           // 0x3450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPlayerBalanceStateComponent*                        PlayerBalanceState;                                      // 0x3458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IK_Override;                                             // 0x3460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2A4B[0xF];                                   // 0x3461(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          R_Hand_IK_World;                                         // 0x3470(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          L_Hand_IK_World;                                         // 0x34A0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FText                                                Text;                                                    // 0x34D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        TextColor;                                               // 0x34E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                TextColorText;                                           // 0x34F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      TextSize;                                                // 0x3510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TextDuration;                                            // 0x3514(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TraceEnd;                                                // 0x3518(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Att_HealthPickRegenerationScalar;                        // 0x3524(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Att_ButtSlamRadius;                                      // 0x3530(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Att_ButtSlamImpact_Multiplier;                           // 0x353C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Att_SlideSpeedMultiplier;                                // 0x3548(0x000C) Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Att_CashMultiplier;                                      // 0x3554(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Att_AmmoMultiplier;                                      // 0x3560(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      Multikill_Count;                                         // 0x356C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<unsigned char>                                      Manufacturers;                                           // 0x3570(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FForceSelection                                     ForceImpact_Heavy;                                       // 0x3580(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class FScriptMulticastDelegate                             GroundSlam;                                              // 0x35A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              ArtifactGroundSlamDamageType;                            // 0x35B0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ArtifactSlideDamageType;                                 // 0x35B8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Att_ClassMod_Gunner_ClassModL02Equipped;                 // 0x35C0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsDueling;                                               // 0x35CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5AT0[0x3];                                   // 0x35CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAttributeFloat                                  WalkSpeed_ZeroG;                                         // 0x35D0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  WalkSpeed_Normal;                                        // 0x35DC(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void GetTransfusionSpawnEndLocation(class AActor* SourceActor, struct FVector* res);
		void GetLevelUpFXAttachComponent(class USceneComponent** res);
		void PlayLevelUpFX();
		void GroundSlamEnd(float Distance);
		void BackupFriendlyTargeting();
		void GetHeadMesh(class USkeletalMesh** HeadMesh);
		void ClearTargetingTimers();
		bool PreInventoryItemPickupCheck(class AActor* PickupActor, int32_t Quantity, bool UsedByInstigator, class AInventoryItemPickup* WorldPickupActor);
		void UserConstructionScript();
		void Player_HealthDepleted(class AOakCharacter* Character);
		void Enemy_OnPhaseLockStart();
		void Enemy_OnPhaseLockStop();
		void Enemy_OnThoughtLockStart();
		void Enemy_OnThoughtLockStop();
		void SetMissionDebugText(const class FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer);
		void OnInventoryEquipped(class AActor* InventoryActor, class UInventorySlotData* SlotData);
		void OnInventoryUnequipped(class AActor* InventoryActor, class UInventorySlotData* SlotData);
		void OnInventoryPickedUp(class AActor* PickedUpActor, int32_t Quantity);
		void DoMelee();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void OnJumped();
		void OnLanded(const struct FHitResult& Hit);
		void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Player(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser);
		void GroundSlam_End(float Distance);
		void BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_SimplePlayerBalanceEvent__DelegateSignature_BPChar_Player();
		void BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void Multikill_Reset();
		void Player_LevelUp(int32_t Old_XP_Level, int32_t New_XP_Level);
		void BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_PlayerBalanceEvent__DelegateSignature_BPChar_Player(int32_t OldExperienceLevel, int32_t NewExperienceLevel);
		void Player_SpawnTransfusionProjectile(class UClass* DataBlueprint_Override, class UClass* DamageType_Override, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer_Override);
		void StartZeroG();
		void EndZeroG();
		void ServerStartZeroG();
		void ExecuteUbergraph_BPChar_Player(int32_t EntryPoint);
		void GroundSlam__DelegateSignature(float Distance, float Damage);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
