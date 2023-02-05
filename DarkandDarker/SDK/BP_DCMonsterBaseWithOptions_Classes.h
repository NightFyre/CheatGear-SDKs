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
	 * BlueprintGeneratedClass BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C
	 * Size -> 0x04B8 (FullSize[0x1030] - InheritedSize[0x0B78])
	 */
	class ABP_DCMonsterBaseWithOptions_C : public ABP_DCMonsterBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B78(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImpactableComponent*                                Impactable;                                              // 0x0B80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDCGameObjectLinkComponent*                          DCGameObjectLink;                                        // 0x0B88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FName                                                SpawnLocation;                                           // 0x0B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_DCMonsterBaseWithOptions_C*                      TargetProvider;                                          // 0x0B98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ADCCharacterBase*>                            EnemiesInCombatArea;                                     // 0x0BA0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AActor*>                                      EnemiesInRecogArea;                                      // 0x0BB0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ADCCharacterBase*>                            LostEnemiesInCombatArea;                                 // 0x0BC0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AActor*>                                      LostEnemiesInRecogArea;                                  // 0x0BD0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABP_DCMonsterBaseWithOptions_C*>              LinkedMonstersArray;                                     // 0x0BE0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    LinkedMonstersCountTemp;                                 // 0x0BF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GotLinkedMonsters;                                       // 0x0BF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DoActionOnceAfterSpawn;                                  // 0x0BF5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SBPO[0x2];                                   // 0x0BF6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             AttachEffectWhileActionOnceAfterSpawn;                   // 0x0BF8(0x0010) Edit, BlueprintVisible
		class UBehaviorTree*                                       ActionOnceAfterSpawnBehaviorTree;                        // 0x0C08(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CheckActionOnceAfterSpawnHasTag;                         // 0x0C10(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CheckActionOnceAfterSpawnTagReverse;                     // 0x0C11(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K6M7[0x6];                                   // 0x0C12(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               SetActionOnceAfterSpawnTags;                             // 0x0C18(0x0020) Edit, BlueprintVisible
		TArray<struct FGameplayTag>                                ActionOnceAfterSpawnTriggerTag;                          // 0x0C38(0x0010) Edit, BlueprintVisible
		TArray<int32_t>                                            ActionOnceAfterSpawnAbilityRates;                        // 0x0C48(0x0010) Edit, BlueprintVisible
		TArray<struct FGameplayTag>                                ActionOnceAfterSpawnWaitTag;                             // 0x0C58(0x0010) Edit, BlueprintVisible
		bool                                                       DoConditionalTopPriorityAction;                          // 0x0C68(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DoOnce;                                                  // 0x0C69(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X56R[0x6];                                   // 0x0C6A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             AttachEffectWhileConditionalTopPriorityAction;           // 0x0C70(0x0010) Edit, BlueprintVisible
		class UBehaviorTree*                                       ConditionalTopPriorityActionBehaviorTree;                // 0x0C80(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CheckConditionalTopPriorityActionHasTag;                 // 0x0C88(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CheckConditionalTopPriorityActionTagReverse;             // 0x0C89(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AU51[0x6];                                   // 0x0C8A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               SetConditionalTopPriorityActionTags;                     // 0x0C90(0x0020) Edit, BlueprintVisible
		E_ActionWhileConditionalTopPriorityMode                    ConditionalTopPriorityModeAction;                        // 0x0CB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_95KF[0x7];                                   // 0x0CB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<E_BTCheckFloatCondition>                            ConditionalTopPriorityActionCheckType;                   // 0x0CB8(0x0010) Edit, BlueprintVisible
		TArray<double>                                             ConditionFloatValue;                                     // 0x0CC8(0x0010) Edit, BlueprintVisible
		double                                                     FleeDistance;                                            // 0x0CD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FGameplayTag>                                ConditionalTopPriorityActionTriggerTag;                  // 0x0CE0(0x0010) Edit, BlueprintVisible
		TArray<int32_t>                                            ConditionalTopPriorityActionAbilityRates;                // 0x0CF0(0x0010) Edit, BlueprintVisible
		TArray<struct FGameplayTag>                                ConditionalTopPriorityActionWaitTag;                     // 0x0D00(0x0010) Edit, BlueprintVisible
		bool                                                       DoPeaceAction;                                           // 0x0D10(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_30ZW[0x7];                                   // 0x0D11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             AttachEffectWhilePeaceAction;                            // 0x0D18(0x0010) Edit, BlueprintVisible
		class UBehaviorTree*                                       PeaceBehaviorTree;                                       // 0x0D28(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CheckPeaceActionHasTag;                                  // 0x0D30(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CheckPeaceActionTagReverse;                              // 0x0D31(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H6IK[0x6];                                   // 0x0D32(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               SetPeaceActionTags;                                      // 0x0D38(0x0020) Edit, BlueprintVisible
		E_ActionWhilePeaceMode                                     PeaceModeAction;                                         // 0x0D58(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GDUC[0x7];                                   // 0x0D59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WanderDistance;                                          // 0x0D60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FGameplayTag>                                PeaceTriggerTag;                                         // 0x0D68(0x0010) Edit, BlueprintVisible
		TArray<int32_t>                                            PeaceAbilityRates;                                       // 0x0D78(0x0010) Edit, BlueprintVisible
		TArray<struct FGameplayTag>                                PeaceWaitTag;                                            // 0x0D88(0x0010) Edit, BlueprintVisible
		double                                                     PeaceCheckDistance;                                      // 0x0D98(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DoCombatAction;                                          // 0x0DA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_688I[0x7];                                   // 0x0DA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviorTree*                                       CombatBehaviorTree;                                      // 0x0DA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CheckCombatActionHasTag;                                 // 0x0DB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CheckCombatActionTagReverse;                             // 0x0DB1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7SBO[0x6];                                   // 0x0DB2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               SetCombatActionTags;                                     // 0x0DB8(0x0020) Edit, BlueprintVisible
		bool                                                       DoConditionalActionWhileCombat;                          // 0x0DD8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E7CP[0x7];                                   // 0x0DD9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviorTree*                                       ConditionalActionBehaviorTreeWhileCombat;                // 0x0DE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FPrimaryAssetId>                             AttachEffectWhileConditionalAction;                      // 0x0DE8(0x0010) Edit, BlueprintVisible
		bool                                                       GetTargetWhileCombat;                                    // 0x0DF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RE6Y[0x7];                                   // 0x0DF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             AttachEffectWhileGetTargetAction;                        // 0x0E00(0x0010) Edit, BlueprintVisible
		bool                                                       DoTrackingWhileCombat;                                   // 0x0E10(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MEH1[0x7];                                   // 0x0E11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             AttachEffectWhileTrackingAction;                         // 0x0E18(0x0010) Edit, BlueprintVisible
		double                                                     CombatAcceptanceRadius;                                  // 0x0E28(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SetHeightWhileTracking;                                  // 0x0E30(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DoAbilityWhileCombat;                                    // 0x0E31(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5G5V[0x6];                                   // 0x0E32(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             AttachEffectWhileDoAbilityCombatAction;                  // 0x0E38(0x0010) Edit, BlueprintVisible
		TArray<struct FGameplayTag>                                CombatTriggerTag;                                        // 0x0E48(0x0010) Edit, BlueprintVisible
		TArray<int32_t>                                            CombatAbilityRates;                                      // 0x0E58(0x0010) Edit, BlueprintVisible
		TArray<struct FGameplayTag>                                CombatWaitTag;                                           // 0x0E68(0x0010) Edit, BlueprintVisible
		double                                                     CheckAbilityDistance;                                    // 0x0E78(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DoWaitWhileCombat;                                       // 0x0E80(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F737[0x7];                                   // 0x0E81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             AttachEffectWhileWaitCombatAction;                       // 0x0E88(0x0010) Edit, BlueprintVisible
		bool                                                       ApplyWaitTimeByDistance;                                 // 0x0E98(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I5LM[0x7];                                   // 0x0E99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CombatAbilityAttackDelay;                                // 0x0EA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CombatAbilityAttackDelayRandomDeviation;                 // 0x0EA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTagQuery                                   ObjectLinkRequestParamDstTypeTagQuery;                   // 0x0EB0(0x0048) Edit, BlueprintVisible, DisableEditOnInstance
		E_ActivityArea                                             ActivityArea;                                            // 0x0EF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseCustomBehaviorTree;                                   // 0x0EF9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EDOB[0x6];                                   // 0x0EFA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviorTree*                                       CustomBehaviorTree;                                      // 0x0F00(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VGGR[0x8];                                   // 0x0F08(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnTransform;                                          // 0x0F10(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UShapeComponent*                                     CombatAreaCollision;                                     // 0x0F70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UShapeComponent*                                     RecognitionAreaCollision;                                // 0x0F78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FVector                                             CombatAreaBoxExtent;                                     // 0x0F80(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RecognizeAreaBoxExtent;                                  // 0x0F98(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LinkedMonstersCount;                                     // 0x0FB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E5NU[0x4];                                   // 0x0FB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilityAsync_WaitGameplayEffectApplied*             AsyncActionForFear;                                      // 0x0FB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_MonsterType                                              MonsterType;                                             // 0x0FC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_MonsterGrade                                             MonsterGrade;                                            // 0x0FC1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DBP4[0x6];                                   // 0x0FC2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              FearInstigator;                                          // 0x0FC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATriggerBox*                                         CombatAreaTriggerBox;                                    // 0x0FD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATriggerBox*                                         RecognizeAreaTriggerBox;                                 // 0x0FD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        CombatAreaCheckTimerHandle;                              // 0x0FE0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        RecognitionAreaCheckTimerHandle;                         // 0x0FE8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        MoveFailTimeoutTimerHandle;                              // 0x0FF0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ReachedToSpawnLocationMonsterCount;                      // 0x0FF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T6GJ[0x4];                                   // 0x0FFC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             CombatActivatedEventDispatcher;                          // 0x1000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PeaceActivatedEventDispatcher;                           // 0x1010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ComebackActivatedEventDispatcher;                        // 0x1020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void MoveFailTimeout();
		void CheckPeaceToCombat();
		void CheckCombatToComeback();
		void TriggerOutRecogArea(class AActor* OverlappedActor, class AActor* OtherActor);
		void TriggerInRecogArea(class AActor* OverlappedActor, class AActor* OtherActor);
		void TriggerOutCombatArea(class AActor* OverlappedActor, class AActor* OtherActor);
		void TriggerInCombatArea(class AActor* OverlappedActor, class AActor* OtherActor);
		void SpawnBoxforAreaCheck();
		void SetActivityArea();
		void GetBBTargetActorToCharacterBase(bool* Result, class ADCCharacterBase** AsDCCharacterBase);
		void GetBBTargetActorToMonsterBase(bool* Result, class ABP_DCMonsterBaseWithOptions_C** DCMonsterBaseWithOptions);
		void GetBBTargetActor(bool* Result, class UObject** ReturnValue);
		void IgnoreSignalFromMe(class UDCGameObjectLinkComponent* DCGameLinkObject, const struct FObjectLinkRequestEvent& RecvEvent, class UObjectLinkMetaDataBlueprint* SendEventParam, bool* Result);
		void GetLinkedMonsters(const struct FObjectLinkRequestEvent& RecvEvent, class UObjectLinkMetaDataBlueprint* SendEventParam);
		void LinkEventBase(class UDCGameObjectLinkComponent* DCGameLinkObject, const struct FObjectLinkRequestEvent& RecvEvent, class UObjectLinkMetaDataBlueprint* SendEventParam, bool* Result);
		void OnApplied_227A852046B3B9DACFFBA5ABA7D2A95E(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void Removed_CE0B13EA482C4B99CB7832A70FAC7611();
		void OnFail_21CEDD05472CF8AA4A07758D48F80F14(EPathFollowingResult MovementResult);
		void OnSuccess_21CEDD05472CF8AA4A07758D48F80F14(EPathFollowingResult MovementResult);
		void OnFail_801A2F7E484A71F27AD0278F8B82FB99(EPathFollowingResult MovementResult);
		void OnSuccess_801A2F7E484A71F27AD0278F8B82FB99(EPathFollowingResult MovementResult);
		void OnSetAI();
		void BndEvt__BP_DCMonsterBaseWithOptions_Impactable_K2Node_ComponentBoundEvent_0_ImpactEnduranceExhausted__DelegateSignature(class UClass* GameplayEffectClass, const struct FDCGameplayEffectContext& EffectContext);
		void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32_t InCount);
		void ReceivePossessed(class AController* NewController);
		void ComebackEventStart();
		void ComebackEventEnd();
		void OnFMsgGASAttributeNotifyBlueprint(const struct FMsgGASAttributeNotify& InMsg);
		void OnBeforeDeath();
		void ReceiveBeginPlay();
		void ComebackActivated();
		void PeaceActivated();
		void CombatActivated();
		void ExecuteUbergraph_BP_DCMonsterBaseWithOptions(int32_t EntryPoint);
		void ComebackActivatedEventDispatcher__DelegateSignature();
		void PeaceActivatedEventDispatcher__DelegateSignature();
		void CombatActivatedEventDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
