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
	 * Class AIModule.BTNode
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UBTNode : public UObject
	{
	public:
		unsigned char                                              UnknownData_4FN6[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NodeName;                                                // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class UBehaviorTree*                                       TreeAsset;                                               // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBTCompositeNode*                                    ParentNode;                                              // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3AVV[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTAuxiliaryNode
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UBTAuxiliaryNode : public UBTNode
	{
	public:
		unsigned char                                              UnknownData_6JRR[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTDecorator : public UBTAuxiliaryNode
	{
	public:
		unsigned char                                              UnknownData_K5TO : 7;                                    // 0x0060(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bInverseCondition : 1;                                   // 0x0060(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_TGFQ[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EBTFlowAbortMode                                           FlowAbortMode;                                           // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZMLN[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_BlackboardBase
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UBTDecorator_BlackboardBase : public UBTDecorator
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0068(0x0028) Edit, Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTService
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBTService : public UBTAuxiliaryNode
	{
	public:
		float                                                      Interval;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      RandomDeviation;                                         // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              bCallTickOnSearchStart : 1;                              // 0x0068(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, Protected
		unsigned char                                              bRestartTimerOnEachActivation : 1;                       // 0x0068(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, Protected
		unsigned char                                              UnknownData_RB3Y[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTaskNode
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UBTTaskNode : public UBTNode
	{
	public:
		unsigned char                                              UnknownData_45IM[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_BlackboardBase
	 * Size -> 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
	 */
	class UBTTask_BlackboardBase : public UBTTaskNode
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0060(0x0028) Edit, Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_RunEQSQuery
	 * Size -> 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
	 */
	class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
	{
	public:
		class UEnvQuery*                                           QueryTemplate;                                           // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FEnvNamedValue>                              QueryParams;                                             // 0x0090(0x0010) Edit, ZeroConstructor
		EEnvQueryRunMode                                           RunMode;                                                 // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5853[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_RotateToFaceBBEntry
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
	{
	public:
		float                                                      Precision;                                               // 0x0088(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_70VO[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryContext
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryNode
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UEnvQueryNode : public UObject
	{
	public:
		int32_t                                                    VerNum;                                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WW03[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UEnvQueryGenerator : public UEnvQueryNode
	{
	public:
		class FString                                              OptionName;                                              // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       NonShippingOnly;                                         // 0x0040(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MNPB[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemType;                                                // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest
	 * Size -> 0x0140 (FullSize[0x0170] - InheritedSize[0x0030])
	 */
	class UEnvQueryTest : public UEnvQueryNode
	{
	public:
		int32_t                                                    TestOrder;                                               // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEnvTestPurpose                                            TestPurpose;                                             // 0x0034(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEnvTestFilterOperator                                     MultipleContextFilterOp;                                 // 0x0035(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		EEnvTestScoreOperator                                      MultipleContextScoreOp;                                  // 0x0036(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		EEnvTestFilterType                                         FilterType;                                              // 0x0037(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAIDataProviderBoolValue                            BoolValue;                                               // 0x0038(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           FloatValueMin;                                           // 0x0068(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           FloatValueMax;                                           // 0x0098(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		unsigned char                                              UnknownData_88G8[0x1];                                   // 0x00C8(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEnvTestScoreEquation                                      ScoringEquation;                                         // 0x00C9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEnvQueryTestClamping                                      ClampMinType;                                            // 0x00CA(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEnvQueryTestClamping                                      ClampMaxType;                                            // 0x00CB(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HV7R[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderFloatValue                           ScoreClampMin;                                           // 0x00D0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           ScoreClampMax;                                           // 0x0100(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           ScoringFactor;                                           // 0x0130(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		unsigned char                                              UnknownData_2MFV[0x8];                                   // 0x0160(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bWorkOnFloatValues : 1;                                  // 0x0168(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_KFL9[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIResourceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIResourceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PathFollowingComponent
	 * Size -> 0x01F0 (FullSize[0x02B8] - InheritedSize[0x00C8])
	 */
	class UPathFollowingComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_Y6TE[0x58];                                  // 0x00C8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNavMovementComponent*                               MovementComp;                                            // 0x0120(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_NGJ6[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANavigationData*                                     MyNavData;                                               // 0x0130(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_I97M[0xBC];                                  // 0x0138(0x00BC) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bUseVisibilityTestsSimplification : 1;                   // 0x01F4(0x0001) BIT_FIELD Config, NoDestructor, Protected
		unsigned char                                              UnknownData_Y9ID[0xC3];                                  // 0x01F5(0x00C3) MISSED OFFSET (PADDING)

	public:
		void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		struct FVector GetPathDestination();
		EPathFollowingAction GetPathActionType();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIAsyncTaskBlueprintProxy
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UAIAsyncTaskBlueprintProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnFail;                                                  // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_O0GA[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnMoveCompleted(const struct FAIRequestID& RequestID, EPathFollowingResult MovementResult);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIBlueprintHelperLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
		class APawn* STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail);
		void STATIC_SendAIMessage(class APawn* Target, const class FName& Message, class UObject* MessageSource, bool bSuccess);
		void STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
		bool STATIC_IsValidAIRotation(const struct FRotator& Rotation);
		bool STATIC_IsValidAILocation(const struct FVector& Location);
		bool STATIC_IsValidAIDirection(const struct FVector& DirectionVector);
		class UBlackboardComponent* STATIC_GetBlackboard(class AActor* Target);
		class AAIController* STATIC_GetAIController(class AActor* ControlledActor);
		class UAIAsyncTaskBlueprintProxy* STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnActionsComponent
	 * Size -> 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
	 */
	class UPawnActionsComponent : public UActorComponent
	{
	public:
		class APawn*                                               ControlledPawn;                                          // 0x00C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		TArray<struct FPawnActionStack>                            ActionStacks;                                            // 0x00D0(0x0010) ZeroConstructor, Protected
		TArray<struct FPawnActionEvent>                            ActionEvents;                                            // 0x00E0(0x0010) ZeroConstructor, Protected
		class UPawnAction*                                         CurrentAction;                                           // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_FXUY[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		bool K2_PushAction(class UPawnAction* NewAction, EAIRequestPriority Priority, class UObject* Instigator);
		bool STATIC_K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, EAIRequestPriority Priority);
		EPawnActionAbortState K2_ForceAbortAction(class UPawnAction* ActionToAbort);
		EPawnActionAbortState K2_AbortAction(class UPawnAction* ActionToAbort);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIPerceptionListenerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIPerceptionListenerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UBlackboardKeyType : public UObject
	{
	public:
		unsigned char                                              UnknownData_4UV3[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BehaviorTreeTypes
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBehaviorTreeTypes : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.GenericTeamAgentInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGenericTeamAgentInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIController
	 * Size -> 0x0090 (FullSize[0x04B8] - InheritedSize[0x0428])
	 */
	class AAIController : public AController
	{
	public:
		unsigned char                                              UnknownData_QQGT[0x28];                                  // 0x0428(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bLOSflag : 1;                                            // 0x0450(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bSkipExtraLOSChecks : 1;                                 // 0x0450(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bAllowStrafe : 1;                                        // 0x0450(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bWantsPlayerState : 1;                                   // 0x0450(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bDisableControlRotation : 1;                             // 0x0450(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_XSZA[0x7];                                   // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPathFollowingComponent*                             PathFollowingComponent;                                  // 0x0458(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBrainComponent*                                     BrainComponent;                                          // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIPerceptionComponent*                              PerceptionComponent;                                     // 0x0468(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPawnActionsComponent*                               ActionsComp;                                             // 0x0470(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlackboardComponent*                                Blackboard;                                              // 0x0478(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UGameplayTasksComponent*                             CachedGameplayTasksComponent;                            // 0x0480(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_4JWI[0x10];                                  // 0x0488(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ReceiveMoveCompleted;                                    // 0x0498(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_8GZZ[0x10];                                  // 0x04A8(0x0010) MISSED OFFSET (PADDING)

	public:
		bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
		void SetMoveBlockDetection(bool bEnable);
		bool RunBehaviorTree(class UBehaviorTree* BTAsset);
		void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
		void OnPossess(class APawn* PossessedPawn);
		void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
		EPathFollowingRequestResult MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
		EPathFollowingRequestResult MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
		void K2_SetFocus(class AActor* NewFocus);
		void K2_SetFocalPoint(const struct FVector& FP);
		void K2_ClearFocus();
		bool HasPartialPath();
		class UPathFollowingComponent* GetPathFollowingComponent();
		EPathFollowingStatus GetMoveStatus();
		struct FVector GetImmediateMoveDestination();
		class AActor* GetFocusActor();
		struct FVector GetFocalPointOnActor(class AActor* Actor);
		struct FVector GetFocalPoint();
		class UAIPerceptionComponent* GetAIPerceptionComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.DetourCrowdAIController
	 * Size -> 0x0000 (FullSize[0x04B8] - InheritedSize[0x04B8])
	 */
	class ADetourCrowdAIController : public AAIController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIDataProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIDataProvider : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.CustomDataProviderObject
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomDataProviderObject : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIDataProvider_QueryParamFromCustomObjectProperty
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAIDataProvider_QueryParamFromCustomObjectProperty : public UAIDataProvider
	{
	public:
		struct FCustomDataProviderObjectPropertySelector           ObjectProperty;                                          // 0x0028(0x0010) Edit
		float                                                      FloatValue;                                              // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    IntValue;                                                // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BoolValue;                                               // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HEZE[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIDataProvider_QueryParams
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAIDataProvider_QueryParams : public UAIDataProvider
	{
	public:
		class FName                                                ParamName;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FloatValue;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    IntValue;                                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BoolValue;                                               // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QXU5[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIHotSpotManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIHotSpotManager : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISystem
	 * Size -> 0x00B0 (FullSize[0x00F0] - InheritedSize[0x0040])
	 */
	class UAISystem : public UAISystemBase
	{
	public:
		struct FStringClassReference                               PerceptionSystemClassName;                               // 0x0040(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, Protected
		struct FStringClassReference                               HotSpotManagerClassName;                                 // 0x0050(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, Protected
		float                                                      AcceptanceRadius;                                        // 0x0060(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFinishMoveOnGoalOverlap;                                // 0x0064(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor
		bool                                                       bAcceptPartialPaths;                                     // 0x0065(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor
		bool                                                       bAllowStrafing;                                          // 0x0066(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor
		bool                                                       bEnableBTAITasks;                                        // 0x0067(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor
		class UBehaviorTreeManager*                                BehaviorTreeManager;                                     // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UEnvQueryManager*                                    EnvironmentQueryManager;                                 // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UAIPerceptionSystem*                                 PerceptionSystem;                                        // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		TArray<class UAIAsyncTaskBlueprintProxy*>                  AllProxyObjects;                                         // 0x0080(0x0010) ZeroConstructor, Transient, Protected
		class UAIHotSpotManager*                                   HotSpotManager;                                          // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_1UMG[0x58];                                  // 0x0098(0x0058) MISSED OFFSET (PADDING)

	public:
		void AILoggingVerbose();
		void AIIgnorePlayers();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UAISense : public UObject
	{
	public:
		struct FColor                                              DebugDrawColor;                                          // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_MN09[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DebugName;                                               // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash
		float                                                      DefaultExpirationAge;                                    // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		EAISenseNotifyType                                         NotifyType;                                              // 0x0044(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_PPKV[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bWantsNewPawnNotification : 1;                           // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected
		unsigned char                                              bAutoRegisterAllPawnsAsSources : 1;                      // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected
		unsigned char                                              UnknownData_0QEP[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIPerceptionSystem*                                 PerceptionSystemInstance;                                // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1N9Q[0x30];                                  // 0x0058(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIPerceptionSystem
	 * Size -> 0x0100 (FullSize[0x0128] - InheritedSize[0x0028])
	 */
	class UAIPerceptionSystem : public UObject
	{
	public:
		unsigned char                                              UnknownData_37WA[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAISense*>                                    Senses;                                                  // 0x0080(0x0010) ZeroConstructor, Protected
		float                                                      PerceptionAgingRate;                                     // 0x0090(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_QX3O[0x94];                                  // 0x0094(0x0094) MISSED OFFSET (PADDING)

	public:
		void STATIC_ReportPerceptionEvent(class UObject* WorldContext, class UAISenseEvent* PerceptionEvent);
		void ReportEvent(class UAISenseEvent* PerceptionEvent);
		bool STATIC_RegisterPerceptionStimuliSource(class UObject* WorldContext, class UClass* Sense, class AActor* Target);
		void OnPerceptionStimuliSourceEndPlay(EEndPlayReason EndPlayReason);
		class UClass* STATIC_GetSenseClassForStimulus(class UObject* WorldContext, const struct FAIStimulus& Stimulus);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIPerceptionComponent
	 * Size -> 0x0100 (FullSize[0x01C8] - InheritedSize[0x00C8])
	 */
	class UAIPerceptionComponent : public UActorComponent
	{
	public:
		float                                                      HearingRange;                                            // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      LoSHearingRange;                                         // 0x00CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      SightRadius;                                             // 0x00D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      LoseSightRadius;                                         // 0x00D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      PeripheralVisionAngle;                                   // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_33IM[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAISenseConfig*>                              SensesConfig;                                            // 0x00E0(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected
		class UClass*                                              DominantSense;                                           // 0x00F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_3SQO[0x10];                                  // 0x00F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAIController*                                       AIOwner;                                                 // 0x0108(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_F1VG[0x80];                                  // 0x0110(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPerceptionUpdated;                                     // 0x0190(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnTargetPerceptionUpdated;                               // 0x01A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_J73X[0x18];                                  // 0x01B0(0x0018) MISSED OFFSET (PADDING)

	public:
		void RequestStimuliListenerUpdate();
		void OnOwnerEndPlay(EEndPlayReason EndPlayReason);
		bool IsIgnored(class AActor* Actor);
		void GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
		void GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
		bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIPerceptionStimuliSourceComponent
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	class UAIPerceptionStimuliSourceComponent : public UActorComponent
	{
	public:
		unsigned char                                              bAutoRegisterAsSource : 1;                               // 0x00C8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, Protected
		unsigned char                                              UnknownData_RITA[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      RegisterAsSourceForSenses;                               // 0x00D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper

	public:
		void UnregisterFromSense(class UClass* SenseClass);
		void UnregisterFromPerceptionSystem();
		void RegisterWithPerceptionSystem();
		void RegisterForSense(class UClass* SenseClass);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIResource_Movement
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAIResource_Movement : public UGameplayTaskResource
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIResource_Logic
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAIResource_Logic : public UGameplayTaskResource
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Blueprint
	 * Size -> 0x0028 (FullSize[0x00B0] - InheritedSize[0x0088])
	 */
	class UAISense_Blueprint : public UAISense
	{
	public:
		class UClass*                                              ListenerDataType;                                        // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash
		TArray<class UAIPerceptionComponent*>                      ListenerContainer;                                       // 0x0090(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected
		TArray<class UAISenseEvent*>                               UnprocessedEvents;                                       // 0x00A0(0x0010) ZeroConstructor, Protected

	public:
		float OnUpdate(TArray<class UAISenseEvent*> EventsToProcess);
		void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
		void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
		void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
		void K2_OnNewPawn(class APawn* NewPawn);
		void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
		void GetAllListenerActors(TArray<class AActor*>* ListenerActors);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Damage
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UAISense_Damage : public UAISense
	{
	public:
		TArray<struct FAIDamageEvent>                              RegisteredEvents;                                        // 0x0088(0x0010) ZeroConstructor

	public:
		void STATIC_ReportDamageEvent(class UObject* WorldContext, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Hearing
	 * Size -> 0x0098 (FullSize[0x0120] - InheritedSize[0x0088])
	 */
	class UAISense_Hearing : public UAISense
	{
	public:
		int32_t                                                    MaxNoisesPerTick;                                        // 0x0088(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNoisesStored;                                         // 0x008C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_57NK[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAINoiseEvent>                               NoiseEventsArrayA;                                       // 0x0098(0x0010) ZeroConstructor
		TArray<struct FAINoiseEvent>                               NoiseEventsArrayB;                                       // 0x00A8(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_PS6F[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedOfSoundSq;                                          // 0x00C8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_IYB4[0x54];                                  // 0x00CC(0x0054) MISSED OFFSET (PADDING)

	public:
		void STATIC_ReportNoiseEvent(class UObject* WorldContext, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const class FName& Tag);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Prediction
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UAISense_Prediction : public UAISense
	{
	public:
		TArray<struct FAIPredictionEvent>                          RegisteredEvents;                                        // 0x0088(0x0010) ZeroConstructor

	public:
		void STATIC_RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
		void STATIC_RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Sight
	 * Size -> 0x00C8 (FullSize[0x0150] - InheritedSize[0x0088])
	 */
	class UAISense_Sight : public UAISense
	{
	public:
		unsigned char                                              UnknownData_EYU1[0xB0];                                  // 0x0088(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxTracesPerTick;                                        // 0x0138(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      HighImportanceQueryDistanceThreshold;                    // 0x013C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_5CL4[0x4];                                   // 0x0140(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxQueryImportance;                                      // 0x0144(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      SightLimitQueryImportance;                               // 0x0148(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_N5DK[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Team
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UAISense_Team : public UAISense
	{
	public:
		TArray<struct FAITeamStimulusEvent>                        RegisteredEvents;                                        // 0x0088(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Touch
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UAISense_Touch : public UAISense
	{
	public:
		TArray<struct FAITouchEvent>                               RegisteredEvents;                                        // 0x0088(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseBlueprintListener
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UAISenseBlueprintListener : public UUserDefinedStruct
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAISenseConfig : public UObject
	{
	public:
		float                                                      MaxAge;                                                  // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              bStartsEnabled : 1;                                      // 0x002C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected
		unsigned char                                              UnknownData_0M9X[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Blueprint
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAISenseConfig_Blueprint : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Damage
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAISenseConfig_Damage : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Hearing
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UAISenseConfig_Hearing : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      HearingRange;                                            // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LoSHearingRange;                                         // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bUseLoSHearing : 1;                                      // 0x0040(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_OZ0M[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAISenseAffiliationFilter                           DetectionByAffiliation;                                  // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Prediction
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAISenseConfig_Prediction : public UAISenseConfig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Sight
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAISenseConfig_Sight : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      SightRadius;                                             // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LoseSightRadius;                                         // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PeripheralVisionAngleDegrees;                            // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAISenseAffiliationFilter                           DetectionByAffiliation;                                  // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AutoSuccessRangeFromLastSeenLocation;                    // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LOL1[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Team
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAISenseConfig_Team : public UAISenseConfig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Touch
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAISenseConfig_Touch : public UAISenseConfig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseEvent
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAISenseEvent : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseEvent_Damage
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UAISenseEvent_Damage : public UAISenseEvent
	{
	public:
		struct FAIDamageEvent                                      Event;                                                   // 0x0028(0x0030) Edit, BlueprintVisible

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseEvent_Hearing
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UAISenseEvent_Hearing : public UAISenseEvent
	{
	public:
		struct FAINoiseEvent                                       Event;                                                   // 0x0028(0x0030) Edit, BlueprintVisible, Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISightTargetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAISightTargetInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AITask
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UAITask : public UGameplayTask
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AITask_MoveTo
	 * Size -> 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
	 */
	class UAITask_MoveTo : public UAITask
	{
	public:
		class FScriptMulticastDelegate                             OnRequestFailed;                                         // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected
		class FScriptMulticastDelegate                             OnMoveFinished;                                          // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected
		struct FVector                                             MoveGoalLocation;                                        // 0x0080(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn
		unsigned char                                              UnknownData_6ODK[0xC];                                   // 0x008C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              MoveGoalActor;                                           // 0x0098(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      MoveAcceptanceRadius;                                    // 0x00A0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bShouldStopOnOverlap;                                    // 0x00A4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, ExposeOnSpawn
		bool                                                       bShouldAcceptPartialPath;                                // 0x00A5(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, ExposeOnSpawn
		bool                                                       bShouldUsePathfinding;                                   // 0x00A6(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, ExposeOnSpawn
		unsigned char                                              UnknownData_UJR7[0x9];                                   // 0x00A7(0x0009) MISSED OFFSET (PADDING)

	public:
		class UAITask_MoveTo* STATIC_AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BrainComponent
	 * Size -> 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
	 */
	class UBrainComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_2CNC[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlackboardComponent*                                BlackboardComp;                                          // 0x00D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class AAIController*                                       AIOwner;                                                 // 0x00D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_FB4L[0x48];                                  // 0x00E0(0x0048) MISSED OFFSET (PADDING)

	public:
		void StopLogic(const class FString& Reason);
		void RestartLogic();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BehaviorTreeComponent
	 * Size -> 0x0160 (FullSize[0x0288] - InheritedSize[0x0128])
	 */
	class UBehaviorTreeComponent : public UBrainComponent
	{
	public:
		unsigned char                                              UnknownData_WRR4[0x20];                                  // 0x0128(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBTNode*>                                     NodeInstances;                                           // 0x0148(0x0010) ZeroConstructor, Transient, Protected
		unsigned char                                              UnknownData_TL35[0x130];                                 // 0x0158(0x0130) MISSED OFFSET (PADDING)

	public:
		void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
		float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
		void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CoolDownDuration, bool bAddToExistingDuration);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTCompositeNode
	 * Size -> 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
	 */
	class UBTCompositeNode : public UBTNode
	{
	public:
		TArray<struct FBTCompositeChild>                           Children;                                                // 0x0058(0x0010) ZeroConstructor
		TArray<class UBTService*>                                  Services;                                                // 0x0068(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_2DKR[0x10];                                  // 0x0078(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BehaviorTree
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UBehaviorTree : public UObject
	{
	public:
		class UBTCompositeNode*                                    RootNode;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlackboardData*                                     BlackboardAsset;                                         // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UBTDecorator*>                                RootDecorators;                                          // 0x0038(0x0010) ZeroConstructor
		TArray<struct FBTDecoratorLogic>                           RootDecoratorOps;                                        // 0x0048(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_MGFM[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BehaviorTreeManager
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UBehaviorTreeManager : public UObject
	{
	public:
		int32_t                                                    MaxDebuggerSteps;                                        // 0x0028(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U3DP[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBehaviorTreeTemplateInfo>                   LoadedTemplates;                                         // 0x0030(0x0010) ZeroConstructor, Protected
		TArray<class UBehaviorTreeComponent*>                      ActiveComponents;                                        // 0x0040(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Enum
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Enum : public UBlackboardKeyType
	{
	public:
		class UEnum*                                               EnumType;                                                // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              EnumName;                                                // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		unsigned char                                              bIsEnumNameValid : 1;                                    // 0x0048(0x0001) BIT_FIELD Edit, DisableEditOnInstance, EditConst, NoDestructor
		unsigned char                                              UnknownData_JL25[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_NativeEnum
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
	{
	public:
		class FString                                              EnumName;                                                // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UEnum*                                               EnumType;                                                // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardData
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UBlackboardData : public UDataAsset
	{
	public:
		class UBlackboardData*                                     Parent;                                                  // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FBlackboardEntry>                            Keys;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		unsigned char                                              bHasSynchronizedKeys : 1;                                // 0x0040(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_ARU6[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardComponent
	 * Size -> 0x0148 (FullSize[0x0210] - InheritedSize[0x00C8])
	 */
	class UBlackboardComponent : public UActorComponent
	{
	public:
		class UBrainComponent*                                     BrainComp;                                               // 0x00C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UBlackboardData*                                     BlackboardAsset;                                         // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_F6FZ[0x20];                                  // 0x00D8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBlackboardKeyType*>                          KeyInstances;                                            // 0x00F8(0x0010) ZeroConstructor, Transient, Protected
		unsigned char                                              UnknownData_XRJ7[0x108];                                 // 0x0108(0x0108) MISSED OFFSET (PADDING)

	public:
		void SetValueAsVector(const class FName& KeyName, const struct FVector& VectorValue);
		void SetValueAsString(const class FName& KeyName, const class FString& StringValue);
		void SetValueAsRotator(const class FName& KeyName, const struct FRotator& VectorValue);
		void SetValueAsObject(const class FName& KeyName, class UObject* ObjectValue);
		void SetValueAsName(const class FName& KeyName, const class FName& NameValue);
		void SetValueAsInt(const class FName& KeyName, int32_t IntValue);
		void SetValueAsFloat(const class FName& KeyName, float FloatValue);
		void SetValueAsEnum(const class FName& KeyName, unsigned char EnumValue);
		void SetValueAsClass(const class FName& KeyName, class UClass* ClassValue);
		void SetValueAsBool(const class FName& KeyName, bool BoolValue);
		bool IsVectorValueSet(const class FName& KeyName);
		struct FVector GetValueAsVector(const class FName& KeyName);
		class FString GetValueAsString(const class FName& KeyName);
		struct FRotator GetValueAsRotator(const class FName& KeyName);
		class UObject* GetValueAsObject(const class FName& KeyName);
		class FName GetValueAsName(const class FName& KeyName);
		int32_t GetValueAsInt(const class FName& KeyName);
		float GetValueAsFloat(const class FName& KeyName);
		unsigned char GetValueAsEnum(const class FName& KeyName);
		class UClass* GetValueAsClass(const class FName& KeyName);
		bool GetValueAsBool(const class FName& KeyName);
		bool GetRotationFromEntry(const class FName& KeyName, struct FRotator* ResultRotation);
		bool GetLocationFromEntry(const class FName& KeyName, struct FVector* ResultLocation);
		void ClearValueAsVector(const class FName& KeyName);
		void ClearValueAsRotator(const class FName& KeyName);
		void ClearValue(const class FName& KeyName);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Bool
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Bool : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Class
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Class : public UBlackboardKeyType
	{
	public:
		class UClass*                                              BaseClass;                                               // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Float
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Float : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Int
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Int : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Name
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Name : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Object
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Object : public UBlackboardKeyType
	{
	public:
		class UClass*                                              BaseClass;                                               // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Rotator
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Rotator : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_String
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_String : public UBlackboardKeyType
	{
	public:
		class FString                                              StringValue;                                             // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Vector
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Vector : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBTFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner);
		void STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
		void STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
		void STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FString& Value);
		void STATIC_SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
		void STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
		void STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FName& Value);
		void STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int32_t Value);
		void STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
		void STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value);
		void STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
		void STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
		class UBlackboardComponent* STATIC_GetOwnersBlackboard(class UBTNode* NodeOwner);
		class UBehaviorTreeComponent* STATIC_GetOwnerComponent(class UBTNode* NodeOwner);
		struct FVector STATIC_GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		class FString STATIC_GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		struct FRotator STATIC_GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		class UObject* STATIC_GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		class FName STATIC_GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		int32_t STATIC_GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		float STATIC_GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		unsigned char STATIC_GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		class UClass* STATIC_GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		bool STATIC_GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		class AActor* STATIC_GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		void STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		void STATIC_ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_Blackboard
	 * Size -> 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
	 */
	class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
	{
	public:
		int32_t                                                    IntValue;                                                // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      FloatValue;                                              // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class FString                                              StringValue;                                             // 0x0098(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash
		class FString                                              CachedDescription;                                       // 0x00A8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash
		unsigned char                                              OperationType;                                           // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		EBTBlackboardRestart                                       NotifyObserver;                                          // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_DQ06[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_ConditionalLoop
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_IsAtLocation
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
	{
	public:
		float                                                      AcceptableRadius;                                        // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseNavAgentGoalLocation;                                // 0x0094(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DXS3[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_IsBBEntryOfClass
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
	{
	public:
		class UClass*                                              TestClass;                                               // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_BlueprintBase
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	class UBTDecorator_BlueprintBase : public UBTDecorator
	{
	public:
		class AAIController*                                       AIOwner;                                                 // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class AActor*                                              ActorOwner;                                              // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		TArray<class FName>                                        ObservedKeyNames;                                        // 0x0078(0x0010) ZeroConstructor, Protected
		unsigned char                                              UnknownData_M947[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bShowPropertyDetails : 1;                                // 0x0098(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected
		unsigned char                                              bCheckConditionOnlyBlackBoardChanges : 1;                // 0x0098(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected
		unsigned char                                              bIsObservingBB : 1;                                      // 0x0098(0x0001) BIT_FIELD NoDestructor, Protected
		unsigned char                                              UnknownData_SLGD[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveObserverDeactivated(class AActor* OwnerActor);
		void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveObserverActivated(class AActor* OwnerActor);
		void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveExecutionStart(class AActor* OwnerActor);
		void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, EBTNodeResult NodeResult);
		void ReceiveExecutionFinish(class AActor* OwnerActor, EBTNodeResult NodeResult);
		void ReceiveConditionCheck(class AActor* OwnerActor);
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		bool PerformConditionCheck(class AActor* OwnerActor);
		bool IsDecoratorObserverActive();
		bool IsDecoratorExecutionActive();
		void FinishConditionCheck(bool bAllowExecution);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_CheckGameplayTagsOnActor
	 * Size -> 0x0068 (FullSize[0x00D0] - InheritedSize[0x0068])
	 */
	class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
	{
	public:
		struct FBlackboardKeySelector                              ActorToCheck;                                            // 0x0068(0x0028) Edit, Protected
		EGameplayContainerMatchType                                TagsToMatch;                                             // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_REUR[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0098(0x0028) Edit, Protected
		class FString                                              CachedDescription;                                       // 0x00C0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_CompareBBEntries
	 * Size -> 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
	 */
	class UBTDecorator_CompareBBEntries : public UBTDecorator
	{
	public:
		EBlackBoardEntryComparison                                 Operator;                                                // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_BKKI[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BlackboardKeyA;                                          // 0x0070(0x0028) Edit, Protected
		struct FBlackboardKeySelector                              BlackboardKeyB;                                          // 0x0098(0x0028) Edit, Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_ConeCheck
	 * Size -> 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
	 */
	class UBTDecorator_ConeCheck : public UBTDecorator
	{
	public:
		float                                                      ConeHalfAngle;                                           // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_29Q5[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              ConeOrigin;                                              // 0x0070(0x0028) Edit
		struct FBlackboardKeySelector                              ConeDirection;                                           // 0x0098(0x0028) Edit
		struct FBlackboardKeySelector                              Observed;                                                // 0x00C0(0x0028) Edit
		unsigned char                                              UnknownData_SDTL[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_Cooldown
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UBTDecorator_Cooldown : public UBTDecorator
	{
	public:
		float                                                      CoolDownTime;                                            // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HTHH[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_DoesPathExist
	 * Size -> 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
	 */
	class UBTDecorator_DoesPathExist : public UBTDecorator
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKeyA;                                          // 0x0068(0x0028) Edit, Protected
		struct FBlackboardKeySelector                              BlackboardKeyB;                                          // 0x0090(0x0028) Edit, Protected
		unsigned char                                              bUseSelf : 1;                                            // 0x00B8(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_3IUU[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPathExistanceQueryType                                    PathQueryType;                                           // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YLGM[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FilterClass;                                             // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_ForceSuccess
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_ForceSuccess : public UBTDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_KeepInCone
	 * Size -> 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
	 */
	class UBTDecorator_KeepInCone : public UBTDecorator
	{
	public:
		float                                                      ConeHalfAngle;                                           // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U8DZ[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              ConeOrigin;                                              // 0x0070(0x0028) Edit
		struct FBlackboardKeySelector                              Observed;                                                // 0x0098(0x0028) Edit
		unsigned char                                              bUseSelfAsOrigin : 1;                                    // 0x00C0(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bUseSelfAsObserved : 1;                                  // 0x00C0(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_4U0N[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_Loop
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UBTDecorator_Loop : public UBTDecorator
	{
	public:
		int32_t                                                    NumLoops;                                                // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInfiniteLoop;                                           // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TGTU[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_ReachedMoveGoal
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_ReachedMoveGoal : public UBTDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_SetTagCooldown
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UBTDecorator_SetTagCooldown : public UBTDecorator
	{
	public:
		struct FGameplayTag                                        CooldownTag;                                             // 0x0068(0x0008) Edit
		float                                                      CoolDownDuration;                                        // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAddToExistingDuration;                                  // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EQQW[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_TagCooldown
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UBTDecorator_TagCooldown : public UBTDecorator
	{
	public:
		struct FGameplayTag                                        CooldownTag;                                             // 0x0068(0x0008) Edit
		float                                                      CoolDownDuration;                                        // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAddToExistingDuration;                                  // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bActivatesCooldown;                                      // 0x0075(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5Z96[0x2];                                   // 0x0076(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_TimeLimit
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UBTDecorator_TimeLimit : public UBTDecorator
	{
	public:
		float                                                      TimeLimit;                                               // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0ME1[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTService_BlackboardBase
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UBTService_BlackboardBase : public UBTService
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0070(0x0028) Edit, Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTService_DefaultFocus
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UBTService_DefaultFocus : public UBTService_BlackboardBase
	{
	public:
		unsigned char                                              FocusPriority;                                           // 0x0098(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_0MU0[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTService_BlueprintBase
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UBTService_BlueprintBase : public UBTService
	{
	public:
		class AAIController*                                       AIOwner;                                                 // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class AActor*                                              ActorOwner;                                              // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_9CQU[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bShowPropertyDetails : 1;                                // 0x0090(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected
		unsigned char                                              bShowEventDetails : 1;                                   // 0x0090(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected
		unsigned char                                              UnknownData_TAJ7[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)

	public:
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveSearchStart(class AActor* OwnerActor);
		void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveDeactivation(class AActor* OwnerActor);
		void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveActivation(class AActor* OwnerActor);
		bool IsServiceActive();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTComposite_Selector
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UBTComposite_Selector : public UBTCompositeNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTComposite_Sequence
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UBTComposite_Sequence : public UBTCompositeNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTComposite_SimpleParallel
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UBTComposite_SimpleParallel : public UBTCompositeNode
	{
	public:
		EBTParallelMode                                            FinishMode;                                              // 0x0088(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XW1E[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_MoveDirectlyToward
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UBTTask_MoveDirectlyToward : public UBTTask_BlackboardBase
	{
	public:
		float                                                      AcceptableRadius;                                        // 0x0088(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bDisablePathUpdateOnGoalLocationChange : 1;              // 0x008C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bProjectVectorGoalToNavigation : 1;                      // 0x008C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAllowStrafe : 1;                                        // 0x008C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bStopOnOverlap : 1;                                      // 0x008C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_UQPN[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_MoveTo
	 * Size -> 0x0018 (FullSize[0x00A0] - InheritedSize[0x0088])
	 */
	class UBTTask_MoveTo : public UBTTask_BlackboardBase
	{
	public:
		float                                                      AcceptableRadius;                                        // 0x0088(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YKHP[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FilterClass;                                             // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              bAllowStrafe : 1;                                        // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAllowPartialPath : 1;                                   // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              bStopOnOverlap : 1;                                      // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_NF8N[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UEnvQueryItemType : public UObject
	{
	public:
		unsigned char                                              UnknownData_VQZP[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTypes
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryTypes : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_BlueprintBase
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	class UBTTask_BlueprintBase : public UBTTaskNode
	{
	public:
		class AAIController*                                       AIOwner;                                                 // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class AActor*                                              ActorOwner;                                              // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_5J5E[0x18];                                  // 0x0070(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bShowPropertyDetails : 1;                                // 0x0088(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected
		unsigned char                                              UnknownData_K53O[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetFinishOnMessageWithId(const class FName& MessageName, int32_t RequestID);
		void SetFinishOnMessage(const class FName& MessageName);
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveExecute(class AActor* OwnerActor);
		void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveAbort(class AActor* OwnerActor);
		bool IsTaskExecuting();
		bool IsTaskAborting();
		void FinishExecute(bool bSuccess);
		void FinishAbort();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_MakeNoise
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_MakeNoise : public UBTTaskNode
	{
	public:
		float                                                      Loudnes;                                                 // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FMR8[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UPawnAction : public UObject
	{
	public:
		class UPawnAction*                                         ChildAction;                                             // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPawnAction*                                         ParentAction;                                            // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPawnActionsComponent*                               OwnerComponent;                                          // 0x0038(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             Instigator;                                              // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBrainComponent*                                     BrainComp;                                               // 0x0048(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_LJ5X[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bAllowNewSameClassInstance : 1;                          // 0x0078(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected
		unsigned char                                              bReplaceActiveSameClassInstance : 1;                     // 0x0078(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected
		unsigned char                                              bShouldPauseMovement : 1;                                // 0x0078(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected
		unsigned char                                              UnknownData_F04X[0x17];                                  // 0x0079(0x0017) MISSED OFFSET (PADDING)

	public:
		EAIRequestPriority GetActionPriority();
		void Finish(EPawnActionResult WithResult);
		class UPawnAction* STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_PawnActionBase
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UBTTask_PawnActionBase : public UBTTaskNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_PushPawnAction
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
	{
	public:
		class UPawnAction*                                         Action;                                                  // 0x0060(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_PlayAnimation
	 * Size -> 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
	 */
	class UBTTask_PlayAnimation : public UBTTaskNode
	{
	public:
		class UAnimationAsset*                                     AnimationToPlay;                                         // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bLooping : 1;                                            // 0x0068(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bNonBlocking : 1;                                        // 0x0068(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_1F33[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviorTreeComponent*                              MyOwnerComp;                                             // 0x0070(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CachedSkelMesh;                                          // 0x0078(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U08H[0x18];                                  // 0x0080(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_PlaySound
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_PlaySound : public UBTTaskNode
	{
	public:
		class USoundCue*                                           SoundToPlay;                                             // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_RunBehavior
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_RunBehavior : public UBTTaskNode
	{
	public:
		class UBehaviorTree*                                       BehaviorAsset;                                           // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_RunBehaviorDynamic
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UBTTask_RunBehaviorDynamic : public UBTTaskNode
	{
	public:
		struct FGameplayTag                                        InjectionTag;                                            // 0x0060(0x0008) Edit, Protected
		class UBehaviorTree*                                       DefaultBehaviorAsset;                                    // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UBehaviorTree*                                       BehaviorAsset;                                           // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_SetTagCooldown
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBTTask_SetTagCooldown : public UBTTaskNode
	{
	public:
		struct FGameplayTag                                        CooldownTag;                                             // 0x0060(0x0008) Edit
		bool                                                       bAddToExistingDuration;                                  // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9FMW[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CoolDownDuration;                                        // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_Wait
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_Wait : public UBTTaskNode
	{
	public:
		float                                                      WaitTime;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RandomDeviation;                                         // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_WaitBlackboardTime
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UBTTask_WaitBlackboardTime : public UBTTask_Wait
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0068(0x0028) Edit, Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.CrowdAgentInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCrowdAgentInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.CrowdManager
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UCrowdManager : public UObject
	{
	public:
		class ANavigationData*                                     MyNavData;                                               // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		TArray<struct FCrowdAvoidanceConfig>                       AvoidanceConfig;                                         // 0x0030(0x0010) Edit, ZeroConstructor, Config, Protected
		TArray<struct FCrowdAvoidanceSamplingPattern>              SamplingPatterns;                                        // 0x0040(0x0010) Edit, ZeroConstructor, Config, Protected
		int32_t                                                    MaxAgents;                                               // 0x0050(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      MaxAgentRadius;                                          // 0x0054(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		int32_t                                                    MaxAvoidedAgents;                                        // 0x0058(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		int32_t                                                    MaxAvoidedWalls;                                         // 0x005C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      NavmeshCheckInterval;                                    // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      PathOptimizationInterval;                                // 0x0064(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_QX0M : 3;                                    // 0x0068(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bResolveCollisions : 1;                                  // 0x0068(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected
		unsigned char                                              UnknownData_YGMA[0x77];                                  // 0x0069(0x0077) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQuery
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEnvQuery : public UObject
	{
	public:
		TArray<class UEnvQueryOption*>                             Options;                                                 // 0x0028(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryContext_BlueprintBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
	{
	public:
		unsigned char                                              UnknownData_Y1FS[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		void ProvideSingleLocation(class AActor* QuerierActor, struct FVector* ResultingLocation);
		void ProvideSingleActor(class AActor* QuerierActor, class AActor** ResultingActor);
		void ProvideLocationsSet(class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
		void ProvideActorsSet(class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryContext_Item
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_Item : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryContext_Querier
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_Querier : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.VisualLoggerExtension
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVisualLoggerExtension : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryDebugHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryDebugHelpers : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EQSQueryResultSourceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEQSQueryResultSourceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryInstanceBlueprintWrapper
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UEnvQueryInstanceBlueprintWrapper : public UObject
	{
	public:
		unsigned char                                              UnknownData_D3NF[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    QueryID;                                                 // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_KRMH[0x1C];                                  // 0x0034(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemType;                                                // 0x0050(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    OptionIndex;                                             // 0x0058(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_5SKK[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnQueryFinishedEvent;                                    // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected

	public:
		TArray<struct FVector> GetResultsAsLocations();
		TArray<class AActor*> GetResultsAsActors();
		float GetItemScore(int32_t ItemIndex);
		void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType_VectorBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType_ActorBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType_Actor
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType_Direction
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType_Point
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryManager
	 * Size -> 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
	 */
	class UEnvQueryManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_FC7T[0x70];                                  // 0x0028(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEnvQueryInstanceCache>                      InstanceCache;                                           // 0x0098(0x0010) ZeroConstructor, Transient, Protected
		TArray<class UEnvQueryContext*>                            LocalContexts;                                           // 0x00A8(0x0010) ZeroConstructor, Transient, Protected
		unsigned char                                              UnknownData_MXF4[0x58];                                  // 0x00B8(0x0058) MISSED OFFSET (PADDING)

	public:
		class UEnvQueryInstanceBlueprintWrapper* STATIC_RunEQSQuery(class UObject* WorldContext, class UEnvQuery* QueryTemplate, class UObject* Querier, EEnvQueryRunMode RunMode, class UClass* WrapperClass);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_ActorsOfClass
	 * Size -> 0x0040 (FullSize[0x0090] - InheritedSize[0x0050])
	 */
	class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
	{
	public:
		struct FAIDataProviderFloatValue                           SearchRadius;                                            // 0x0050(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		class UClass*                                              SearchedActorClass;                                      // 0x0080(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              SearchCenter;                                            // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_BlueprintBase
	 * Size -> 0x0050 (FullSize[0x00A0] - InheritedSize[0x0050])
	 */
	class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
	{
	public:
		class FText                                                GeneratorsActionDescription;                             // 0x0050(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_LID9[0x20];                                  // 0x0068(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UClass*                                              Context;                                                 // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              GeneratedItemType;                                       // 0x0090(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_AN2L[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)

	public:
		class UObject* GetQuerier();
		void DoItemGeneration(TArray<struct FVector> ContextLocations);
		void AddGeneratedVector(const struct FVector& GeneratedVector);
		void AddGeneratedActor(class AActor* GeneratedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_Composite
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
	{
	public:
		TArray<class UEnvQueryGenerator*>                          Generators;                                              // 0x0050(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       bHasMatchingItemType;                                    // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8Z5R[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_ProjectedPoints
	 * Size -> 0x0040 (FullSize[0x0090] - InheritedSize[0x0050])
	 */
	class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
	{
	public:
		struct FEnvTraceData                                       ProjectionData;                                          // 0x0050(0x0040) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_Donut
	 * Size -> 0x0128 (FullSize[0x01B8] - InheritedSize[0x0090])
	 */
	class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		struct FAIDataProviderFloatValue                           InnerRadius;                                             // 0x0090(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           OuterRadius;                                             // 0x00C0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderIntValue                             NumberOfRings;                                           // 0x00F0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderIntValue                             PointsPerRing;                                           // 0x0120(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FEnvDirection                                       ArcDirection;                                            // 0x0150(0x0020) Edit, DisableEditOnInstance
		struct FAIDataProviderFloatValue                           ArcAngle;                                                // 0x0170(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       RandomiseRadius;                                         // 0x01A0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XHKR[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Center;                                                  // 0x01A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              bDefineArc : 1;                                          // 0x01B0(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_5TK2[0x7];                                   // 0x01B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_OnCircle
	 * Size -> 0x0108 (FullSize[0x0198] - InheritedSize[0x0090])
	 */
	class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		struct FAIDataProviderFloatValue                           CircleRadius;                                            // 0x0090(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           SpaceBetween;                                            // 0x00C0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FEnvDirection                                       ArcDirection;                                            // 0x00F0(0x0020) Edit, DisableEditOnInstance
		struct FAIDataProviderFloatValue                           ArcAngle;                                                // 0x0110(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		float                                                      AngleRadians;                                            // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QBST[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CircleCenter;                                            // 0x0148(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FEnvTraceData                                       TraceData;                                               // 0x0150(0x0040) Edit
		unsigned char                                              bDefineArc : 1;                                          // 0x0190(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_D6C5[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_SimpleGrid
	 * Size -> 0x0068 (FullSize[0x00F8] - InheritedSize[0x0090])
	 */
	class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		struct FAIDataProviderFloatValue                           GridSize;                                                // 0x0090(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           SpaceBetween;                                            // 0x00C0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		class UClass*                                              GenerateAround;                                          // 0x00F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_PathingGrid
	 * Size -> 0x0068 (FullSize[0x0160] - InheritedSize[0x00F8])
	 */
	class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
	{
	public:
		struct FAIDataProviderBoolValue                            PathToItem;                                              // 0x00F8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		class UClass*                                              NavigationFilter;                                        // 0x0128(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FAIDataProviderFloatValue                           ScanRangeMultiplier;                                     // 0x0130(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Distance
	 * Size -> 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
	 */
	class UEnvQueryTest_Distance : public UEnvQueryTest
	{
	public:
		EEnvTestDistance                                           TestMode;                                                // 0x0170(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UA2E[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DistanceTo;                                              // 0x0178(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Dot
	 * Size -> 0x0048 (FullSize[0x01B8] - InheritedSize[0x0170])
	 */
	class UEnvQueryTest_Dot : public UEnvQueryTest
	{
	public:
		struct FEnvDirection                                       LineA;                                                   // 0x0170(0x0020) Edit, DisableEditOnInstance, Protected
		struct FEnvDirection                                       LineB;                                                   // 0x0190(0x0020) Edit, DisableEditOnInstance, Protected
		EEnvTestDot                                                TestMode;                                                // 0x01B0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		bool                                                       bAbsoluteValue;                                          // 0x01B1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_ZGLH[0x6];                                   // 0x01B2(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_GameplayTags
	 * Size -> 0x0030 (FullSize[0x01A0] - InheritedSize[0x0170])
	 */
	class UEnvQueryTest_GameplayTags : public UEnvQueryTest
	{
	public:
		EGameplayContainerMatchType                                TagsToMatch;                                             // 0x0170(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_PF8E[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0178(0x0028) Edit, Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Pathfinding
	 * Size -> 0x00D8 (FullSize[0x0248] - InheritedSize[0x0170])
	 */
	class UEnvQueryTest_Pathfinding : public UEnvQueryTest
	{
	public:
		EEnvTestPathfinding                                        TestMode;                                                // 0x0170(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K2B1[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Context;                                                 // 0x0178(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FAIDataProviderBoolValue                            PathFromContext;                                         // 0x0180(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderBoolValue                            SkipUnreachable;                                         // 0x01B0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay
		struct FAIDataProviderIntValue                             MaxNumPathSegments;                                      // 0x01E0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay
		struct FAIDataProviderBoolValue                            PassThroughUnreachable;                                  // 0x0210(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay
		class UClass*                                              FilterClass;                                             // 0x0240(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_PathfindingBatch
	 * Size -> 0x0030 (FullSize[0x0278] - InheritedSize[0x0248])
	 */
	class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
	{
	public:
		struct FAIDataProviderFloatValue                           ScanRangeMultiplier;                                     // 0x0248(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Random
	 * Size -> 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
	 */
	class UEnvQueryTest_Random : public UEnvQueryTest
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Trace
	 * Size -> 0x00D8 (FullSize[0x0248] - InheritedSize[0x0170])
	 */
	class UEnvQueryTest_Trace : public UEnvQueryTest
	{
	public:
		struct FEnvTraceData                                       TraceData;                                               // 0x0170(0x0040) Edit, DisableEditOnInstance
		struct FAIDataProviderBoolValue                            TraceFromContext;                                        // 0x01B0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           ItemHeightOffset;                                        // 0x01E0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay
		struct FAIDataProviderFloatValue                           ContextHeightOffset;                                     // 0x0210(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay
		class UClass*                                              Context;                                                 // 0x0240(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryOption
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UEnvQueryOption : public UObject
	{
	public:
		class UEnvQueryGenerator*                                  Generator;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UEnvQueryTest*>                               Tests;                                                   // 0x0030(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EQSRenderingComponent
	 * Size -> 0x0018 (FullSize[0x05D0] - InheritedSize[0x05B8])
	 */
	class UEQSRenderingComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_IKDV[0x8];                                   // 0x05B8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_OWAF[0x10];                                  // 0x05C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EQSTestingPawn
	 * Size -> 0x0068 (FullSize[0x0640] - InheritedSize[0x05D8])
	 */
	class AEQSTestingPawn : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_QSW9[0x8];                                   // 0x05D8(0x0008) Fix Super Size
		class UEnvQuery*                                           QueryTemplate;                                           // 0x05E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FEnvNamedValue>                              QueryParams;                                             // 0x05E8(0x0010) Edit, ZeroConstructor
		class UClass*                                              ContextToLinkWithThis;                                   // 0x05F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      TimeLimitPerStep;                                        // 0x0600(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StepToDebugDraw;                                         // 0x0604(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEnvQueryHightlightMode                                    HighlightMode;                                           // 0x0608(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TP95[0x3];                                   // 0x0609(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bDrawLabels : 1;                                         // 0x060C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bDrawFailedItems : 1;                                    // 0x060C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bReRunQueryOnlyOnFinishedMove : 1;                       // 0x060C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bShouldBeVisibleInGame : 1;                              // 0x060C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_F8DM[0x3];                                   // 0x060D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEnvQueryRunMode                                           QueryingMode;                                            // 0x0610(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YHAM[0x2F];                                  // 0x0611(0x002F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.CrowdFollowingComponent
	 * Size -> 0x0050 (FullSize[0x0308] - InheritedSize[0x02B8])
	 */
	class UCrowdFollowingComponent : public UPathFollowingComponent
	{
	public:
		unsigned char                                              UnknownData_4QYL[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CrowdAgentMoveDirection;                                 // 0x02C0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S9WC[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterMovementComponent*                         CharacterMovement;                                       // 0x02D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		struct FNavAvoidanceMask                                   AvoidanceGroup;                                          // 0x02D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected
		struct FNavAvoidanceMask                                   GroupsToAvoid;                                           // 0x02DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected
		struct FNavAvoidanceMask                                   GroupsToIgnore;                                          // 0x02E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected
		unsigned char                                              UnknownData_TO0Y[0x24];                                  // 0x02E4(0x0024) MISSED OFFSET (PADDING)

	public:
		void SuspendCrowdSteering(bool bSuspend);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_BlueprintBase
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UPawnAction_BlueprintBase : public UPawnAction
	{
	public:
		void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
		void ActionStart(class APawn* ControlledPawn);
		void ActionResume(class APawn* ControlledPawn);
		void ActionPause(class APawn* ControlledPawn);
		void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_Move
	 * Size -> 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
	 */
	class UPawnAction_Move : public UPawnAction
	{
	public:
		class AActor*                                              GoalActor;                                               // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		struct FVector                                             GoalLocation;                                            // 0x0098(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		float                                                      AcceptableRadius;                                        // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UClass*                                              FilterClass;                                             // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              bAllowStrafe : 1;                                        // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected
		unsigned char                                              bFinishOnOverlap : 1;                                    // 0x00B0(0x0001) BIT_FIELD NoDestructor, Protected
		unsigned char                                              bUsePathfinding : 1;                                     // 0x00B0(0x0001) BIT_FIELD NoDestructor, Protected
		unsigned char                                              bAllowPartialPath : 1;                                   // 0x00B0(0x0001) BIT_FIELD NoDestructor, Protected
		unsigned char                                              bProjectGoalToNavigation : 1;                            // 0x00B0(0x0001) BIT_FIELD NoDestructor, Protected
		unsigned char                                              bUpdatePathToGoal : 1;                                   // 0x00B0(0x0001) BIT_FIELD NoDestructor, Protected
		unsigned char                                              bAbortChildActionOnPathChange : 1;                       // 0x00B0(0x0001) BIT_FIELD NoDestructor, Protected
		unsigned char                                              UnknownData_HPY8[0x2F];                                  // 0x00B1(0x002F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_Repeat
	 * Size -> 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
	 */
	class UPawnAction_Repeat : public UPawnAction
	{
	public:
		class UPawnAction*                                         ActionToRepeat;                                          // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPawnAction*                                         RecentActionCopy;                                        // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPawnActionFailHandling                                    ChildFailureHandlingMode;                                // 0x00A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NB4X[0xF];                                   // 0x00A1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_Sequence
	 * Size -> 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
	 */
	class UPawnAction_Sequence : public UPawnAction
	{
	public:
		TArray<class UPawnAction*>                                 ActionSequence;                                          // 0x0090(0x0010) ZeroConstructor
		EPawnActionFailHandling                                    ChildFailureHandlingMode;                                // 0x00A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KV9Q[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPawnAction*                                         RecentActionCopy;                                        // 0x00A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PYU7[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_Wait
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UPawnAction_Wait : public UPawnAction
	{
	public:
		float                                                      TimeToWait;                                              // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5CH1[0xC];                                   // 0x0094(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnSensingComponent
	 * Size -> 0x0048 (FullSize[0x0110] - InheritedSize[0x00C8])
	 */
	class UPawnSensingComponent : public UActorComponent
	{
	public:
		float                                                      HearingThreshold;                                        // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LOSHearingThreshold;                                     // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SightRadius;                                             // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SensingInterval;                                         // 0x00D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HearingMaxSoundAge;                                      // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bEnableSensingUpdates : 1;                               // 0x00DC(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bOnlySensePlayers : 1;                                   // 0x00DC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bSeePawns : 1;                                           // 0x00DC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bHearNoises : 1;                                         // 0x00DC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_NX8M[0xB];                                   // 0x00DD(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSeePawn;                                               // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnHearNoise;                                             // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		float                                                      PeripheralVisionAngle;                                   // 0x0108(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      PeripheralVisionCosine;                                  // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash

	public:
		void SetSensingUpdatesEnabled(bool bEnabled);
		void SetSensingInterval(float NewSensingInterval);
		void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
		void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
		void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
		float GetPeripheralVisionCosine();
		float GetPeripheralVisionAngle();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
