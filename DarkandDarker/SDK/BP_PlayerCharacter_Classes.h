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
	 * BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
	 * Size -> 0x0160 (FullSize[0x0A40] - InheritedSize[0x08E0])
	 */
	class ABP_PlayerCharacter_C : public ADCPlayerCharacterBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDCPerkDataComponent*                                DCPerkData;                                              // 0x08E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UEmoteComponent*                                     Emote;                                                   // 0x08F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDCActorStatusComponent*                             DCActorStatus;                                           // 0x08F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDCAkComponent*                                      DCAk;                                                    // 0x0900(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkillComponent*                                     Skill;                                                   // 0x0908(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpellMemorizeComponent*                             SpellMemorize;                                           // 0x0910(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ULootComponent*                                      LootComponent;                                           // 0x0918(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInteractableTargetComponent*                        InteractableTarget;                                      // 0x0920(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGameHeadupWidgetComponent*                          GameHeadupWidget;                                        // 0x0928(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 ThirdPersonCameraBoom;                                   // 0x0930(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    FirstPersonCamera;                                       // 0x0938(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    ThirdPersonCamera;                                       // 0x0940(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DCHitBox_C*                                      BP_DCHitBox_Hand_R;                                      // 0x0948(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DCHitBox_C*                                      BP_DCHitBox_Arm_R1;                                      // 0x0950(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DCHitBox_C*                                      BP_DCHitBox_Arm_R;                                       // 0x0958(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DCHitBox_C*                                      BP_DCHitBox_Hand_L;                                      // 0x0960(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DCHitBox_C*                                      BP_DCHitBox_Arm_L1;                                      // 0x0968(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DCHitBox_C*                                      BP_DCHitBox_Arm_L;                                       // 0x0970(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DCHitBox_C*                                      BP_DCHitBox_Foot_R;                                      // 0x0978(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DCHitBox_C*                                      BP_DCHitBox_Leg_R1;                                      // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DCHitBox_C*                                      BP_DCHitBox_Leg_R;                                       // 0x0988(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DCHitBox_C*                                      BP_DCHitBox_Foot_L;                                      // 0x0990(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DCHitBox_C*                                      BP_DCHitBox_Leg_L1;                                      // 0x0998(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DCHitBox_C*                                      BP_DCHitBox_Leg_L;                                       // 0x09A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DCHitBox_C*                                      BP_DCHitBox_Body2;                                       // 0x09A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DCHitBox_C*                                      BP_DCHitBox_Body1;                                       // 0x09B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DCHitBox_C*                                      BP_DCHitBox_Body;                                        // 0x09B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_DCHitBox_C*                                      BP_DCHitBox_Head;                                        // 0x09C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UEquipmentInventoryComponent*                        EquipmentInventory;                                      // 0x09C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInventoryComponent*                                 InventoryComponent;                                      // 0x09D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     FallingStartedTime;                                      // 0x09D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FallThresholdTime;                                       // 0x09E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             GroundTraceStartPoint;                                   // 0x09E8(0x0018) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        SoundQueryTag;                                           // 0x0A00(0x0008) Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		EPhysicalSurface                                           LastFootStepSurface;                                     // 0x0A08(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFootStepLeft;                                           // 0x0A09(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SOUP[0x6];                                   // 0x0A0A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             SoundDataProvider;                                       // 0x0A10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0A18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Location;                                                // 0x0A20(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RTPCValuePlayerSpeed;                                    // 0x0A38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UCameraComponent* GetCameraComponent();
		void HasLocalCurrentCharacterEnhancedHearing(bool* HasEnhancedHearing);
		void SetRTPCValuePlayerSpeed();
		void OnMessageReceived_5101B37F4EC16839F281F3A967F04D5B(class UMsgBaseNode* ProxyObject);
		void OnMessageReceived_EA0BB1014365DB5602FF2A88319323AC(class UMsgBaseNode* ProxyObject);
		void OnMessageReceived_E32555534626CD303291009A607703E1(class UMsgBaseNode* ProxyObject);
		void ReceiveBeginPlay();
		void EventFMsgGASActorDieNotify(const struct FMsgGASActorDieNotify& Msg);
		void EventFMsgGASAttributeNotify(const struct FMsgGASAttributeNotify& Msg);
		void ReceivePreInitializeComponents();
		void EventFMsgSoundEvent(const struct FMsgSoundEvent& Msg);
		void InteractFound(class AActor* Interacter, class UPrimitiveComponent* InteractPart);
		void InteractLost(class AActor* Interacter);
		void InteractSucceed(class AActor* Interacter, const struct FGameplayTag& StateTag, const struct FGameplayTag& TriggerTag, const struct FHitResult& HitResult);
		void OnLanded(const struct FHitResult& Hit);
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void OnSetRenderCustomDepth(bool bValue);
		void OnSetPerspective(class APlayerController* InPlayerController, bool bInIsFirstPersonPerspective);
		void OnCommemorativePlaqueText(const struct FPrimaryAssetId& ScriptAseetId, const struct FVector& Location);
		void ExecuteUbergraph_BP_PlayerCharacter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
