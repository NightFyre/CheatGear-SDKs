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
	 * Class AIModule.BTNode
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UBTNode : public UObject
	{
	public:
		unsigned char                                              UnknownData_WQOH[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NodeName;                                                // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBehaviorTree*                                       TreeAsset;                                               // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBTCompositeNode*                                    ParentNode;                                              // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R1GU[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTaskNode
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UBTTaskNode : public UBTNode
	{
	public:
		TArray<class UBTService*>                                  Services;                                                // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreRestartSelf : 1;                                  // 0x0068(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OUVY[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BrainComponent
	 * Size -> 0x0060 (FullSize[0x01D8] - InheritedSize[0x0178])
	 */
	class UBrainComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_XRQW[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlackboardComponent*                                BlackboardComp;                                          // 0x0180(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AAIController*                                       AIOwner;                                                 // 0x0188(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GW2V[0x48];                                  // 0x0190(0x0048) MISSED OFFSET (PADDING)

	public:
		void StopLogic(const class FString& Reason);
		void RestartLogic();
		bool IsRunning();
		bool IsPaused();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UAISense : public UObject
	{
	public:
		float                                                      DefaultExpirationAge;                                    // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAISenseNotifyType                                         NotifyType;                                              // 0x002C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GM3B[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bWantsNewPawnNotification : 1;                           // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAutoRegisterAllPawnsAsSources : 1;                      // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NHE1[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIPerceptionSystem*                                 PerceptionSystemInstance;                                // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8NS9[0x58];                                  // 0x0040(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAISenseConfig : public UObject
	{
	public:
		struct FColor                                              DebugColor;                                              // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxAge;                                                  // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bStartsEnabled : 1;                                      // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NAXZ[0x17];                                  // 0x0031(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AITask
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UAITask : public UGameplayTask
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0068(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

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
		unsigned char                                              UnknownData_HBWQ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTCompositeNode
	 * Size -> 0x0038 (FullSize[0x0090] - InheritedSize[0x0058])
	 */
	class UBTCompositeNode : public UBTNode
	{
	public:
		TArray<struct FBTCompositeChild>                           Children;                                                // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UBTService*>                                  Services;                                                // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_52NQ[0x10];                                  // 0x0078(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bApplyDecoratorScope : 1;                                // 0x0088(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JCKM[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTComposite_Selector
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UBTComposite_Selector : public UBTCompositeNode
	{
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
		unsigned char                                              UnknownData_FYNA[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_9G9F : 7;                                    // 0x0060(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bInverseCondition : 1;                                   // 0x0060(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FBK6[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EBTFlowAbortMode                                           FlowAbortMode;                                           // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I4I0[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

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
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0068(0x0028) Edit, Protected, NativeAccessSpecifierProtected

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
		float                                                      Interval;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RandomDeviation;                                         // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCallTickOnSearchStart : 1;                              // 0x0068(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bRestartTimerOnEachActivation : 1;                       // 0x0068(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PTOJ[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

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
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0070(0x0028) Edit, Protected, NativeAccessSpecifierProtected

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
		unsigned char                                              FocusPriority;                                           // 0x0098(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RU9A[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTService_RunEQS
	 * Size -> 0x0060 (FullSize[0x00F8] - InheritedSize[0x0098])
	 */
	class UBTService_RunEQS : public UBTService_BlackboardBase
	{
	public:
		struct FEQSParametrizedQueryExecutionRequest               EQSRequest;                                              // 0x0098(0x0048) Edit, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OJQP[0x10];                                  // 0x00E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bClearEntryOnFailure;                                    // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GJW8[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_BlackboardBase
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UBTTask_BlackboardBase : public UBTTaskNode
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0070(0x0028) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_MoveTo
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UBTTask_MoveTo : public UBTTask_BlackboardBase
	{
	public:
		float                                                      AcceptableRadius;                                        // 0x0098(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GLC7[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FilterClass;                                             // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ObservedBlackboardValueTolerance;                        // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bObserveBlackboardValue : 1;                             // 0x00AC(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAllowStrafe : 1;                                        // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAllowPartialPath : 1;                                   // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bTrackMovingGoal : 1;                                    // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bProjectGoalLocation : 1;                                // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bReachTestIncludesAgentRadius : 1;                       // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bReachTestIncludesGoalRadius : 1;                        // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bStopOnOverlap : 1;                                      // 0x00AC(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bStopOnOverlapNeedsUpdate : 1;                           // 0x00AD(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QW2V[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (PADDING)

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
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UEnvQueryNode : public UObject
	{
	public:
		int32_t                                                    VerNum;                                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O92G[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      ContextTypes;                                            // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UEnvQueryGenerator : public UEnvQueryNode
	{
	public:
		class FString                                              OptionName;                                              // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ItemType;                                                // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAutoSortTests : 1;                                      // 0x0058(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNDE[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_ProjectedPoints
	 * Size -> 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
	 */
	class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
	{
	public:
		struct FEnvTraceData                                       ProjectionData;                                          // 0x0060(0x0030) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCaresAboutHotSpots;                                     // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UTEE[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_9RWW[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
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
	 * Class AIModule.EnvQueryTest
	 * Size -> 0x0198 (FullSize[0x01D8] - InheritedSize[0x0040])
	 */
	class UEnvQueryTest : public UEnvQueryNode
	{
	public:
		int32_t                                                    TestOrder;                                               // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvTestPurpose                                            TestPurpose;                                             // 0x0044(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OERB[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TestComment;                                             // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvTestFilterOperator                                     MultipleContextFilterOp;                                 // 0x0058(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvTestScoreOperator                                      MultipleContextScoreOp;                                  // 0x0059(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvTestFilterType                                         FilterType;                                              // 0x005A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_39IC[0x5];                                   // 0x005B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderBoolValue                            BoolValue;                                               // 0x0060(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           FloatValueMin;                                           // 0x0090(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           FloatValueMax;                                           // 0x00C0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DVYF[0x1];                                   // 0x00F0(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEnvTestScoreEquation                                      ScoringEquation;                                         // 0x00F1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvQueryTestClamping                                      ClampMinType;                                            // 0x00F2(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvQueryTestClamping                                      ClampMaxType;                                            // 0x00F3(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEQSNormalizationType                                      NormalizationType;                                       // 0x00F4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GUZZ[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderFloatValue                           ScoreClampMin;                                           // 0x00F8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ScoreClampMax;                                           // 0x0128(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ScoringFactor;                                           // 0x0158(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ReferenceValue;                                          // 0x0188(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bDefineReferenceValue;                                   // 0x01B8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MUXP[0xF];                                   // 0x01B9(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bWorkOnFloatValues : 1;                                  // 0x01C8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N9X4[0x7];                                   // 0x01C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnvQueryTest*                                       CopiedFrom;                                              // 0x01D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Trace
	 * Size -> 0x00C8 (FullSize[0x02A0] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_Trace : public UEnvQueryTest
	{
	public:
		struct FEnvTraceData                                       TraceData;                                               // 0x01D8(0x0030) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAIDataProviderBoolValue                            TraceFromContext;                                        // 0x0208(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ItemHeightOffset;                                        // 0x0238(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ContextHeightOffset;                                     // 0x0268(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
		class UClass*                                              Context;                                                 // 0x0298(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIController
	 * Size -> 0x0090 (FullSize[0x0598] - InheritedSize[0x0508])
	 */
	class AAIController : public AController
	{
	public:
		unsigned char                                              UnknownData_MML4[0x38];                                  // 0x0508(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bStopAILogicOnUnposses : 1;                              // 0x0540(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bLOSflag : 1;                                            // 0x0540(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSkipExtraLOSChecks : 1;                                 // 0x0540(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowStrafe : 1;                                        // 0x0540(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWantsPlayerState : 1;                                   // 0x0540(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSetControlRotationFromPawnOrientation : 1;              // 0x0540(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NWVF[0x7];                                   // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPathFollowingComponent*                             PathFollowingComponent;                                  // 0x0548(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBrainComponent*                                     BrainComponent;                                          // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAIPerceptionComponent*                              PerceptionComponent;                                     // 0x0558(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnActionsComponent*                               ActionsComp;                                             // 0x0560(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBlackboardComponent*                                Blackboard;                                              // 0x0568(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameplayTasksComponent*                             CachedGameplayTasksComponent;                            // 0x0570(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DefaultNavigationFilterClass;                            // 0x0578(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             ReceiveMoveCompleted;                                    // 0x0580(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R5XL[0x8];                                   // 0x0590(0x0008) MISSED OFFSET (PADDING)

	public:
		bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
		void UnclaimTaskResource(class UClass* ResourceClass);
		void SetMoveBlockDetection(bool bEnable);
		bool RunBehaviorTree(class UBehaviorTree* BTAsset);
		void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
		void OnUnpossess(class APawn* UnpossessedPawn);
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
		void ClaimTaskResource(class UClass* ResourceClass);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISystem
	 * Size -> 0x00D8 (FullSize[0x0128] - InheritedSize[0x0050])
	 */
	class UAISystem : public UAISystemBase
	{
	public:
		struct FSoftClassPath                                      PerceptionSystemClassName;                               // 0x0050(0x0018) Edit, Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftClassPath                                      HotSpotManagerClassName;                                 // 0x0068(0x0018) Edit, Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AcceptanceRadius;                                        // 0x0080(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PathfollowingRegularPathPointAcceptanceRadius;           // 0x0084(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PathfollowingNavLinkAcceptanceRadius;                    // 0x0088(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFinishMoveOnGoalOverlap;                                // 0x008C(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAcceptPartialPaths;                                     // 0x008D(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowStrafing;                                          // 0x008E(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableBTAITasks;                                        // 0x008F(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowControllersAsEQSQuerier;                           // 0x0090(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebuggerPlugin;                                   // 0x0091(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          DefaultSightCollisionChannel;                            // 0x0092(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QRP4[0x5];                                   // 0x0093(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviorTreeManager*                                BehaviorTreeManager;                                     // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEnvQueryManager*                                    EnvironmentQueryManager;                                 // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAIPerceptionSystem*                                 PerceptionSystem;                                        // 0x00A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UAIAsyncTaskBlueprintProxy*>                  AllProxyObjects;                                         // 0x00B0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UAIHotSpotManager*                                   HotSpotManager;                                          // 0x00C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNavLocalGridManager*                                NavLocalGrids;                                           // 0x00C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DMUD[0x58];                                  // 0x00D0(0x0058) MISSED OFFSET (PADDING)

	public:
		void AILoggingVerbose();
		void AIIgnorePlayers();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BehaviorTreeComponent
	 * Size -> 0x0150 (FullSize[0x0328] - InheritedSize[0x01D8])
	 */
	class UBehaviorTreeComponent : public UBrainComponent
	{
	public:
		unsigned char                                              UnknownData_JTNM[0x20];                                  // 0x01D8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBTNode*>                                     NodeInstances;                                           // 0x01F8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6DNG[0x120];                                 // 0x0208(0x0120) MISSED OFFSET (PADDING)

	public:
		void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
		float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
		void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EQSTestingPawn
	 * Size -> 0x00F0 (FullSize[0x09A0] - InheritedSize[0x08B0])
	 */
	class AEQSTestingPawn : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_AIZ8[0x8];                                   // 0x08B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnvQuery*                                           QueryTemplate;                                           // 0x08B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEnvNamedValue>                              QueryParams;                                             // 0x08C0(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FAIDynamicParam>                             QueryConfig;                                             // 0x08D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class UClass*, class AActor*>                         QueryContexts;                                           // 0x08E0(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      TimeLimitPerStep;                                        // 0x0930(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StepToDebugDraw;                                         // 0x0934(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvQueryHightlightMode                                    HighlightMode;                                           // 0x0938(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W8L9[0x3];                                   // 0x0939(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bDrawLabels : 1;                                         // 0x093C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawFailedItems : 1;                                    // 0x093C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReRunQueryOnlyOnFinishedMove : 1;                       // 0x093C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShouldBeVisibleInGame : 1;                              // 0x093C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTickDuringGame : 1;                                     // 0x093C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SIOZ[0x3];                                   // 0x093D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEnvQueryRunMode                                           QueryingMode;                                            // 0x0940(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LV00[0x7];                                   // 0x0941(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNavAgentProperties                                 NavAgentProperties;                                      // 0x0948(0x0030) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawTraces : 1;                                         // 0x0978(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MPOE[0x27];                                  // 0x0979(0x0027) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIAsyncTaskBlueprintProxy
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UAIAsyncTaskBlueprintProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFail;                                                  // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3M3[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

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
		void STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
		void STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal);
		void STATIC_SendAIMessage(class APawn* Target, const class FName& Message, class UObject* MessageSource, bool bSuccess);
		void STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
		bool STATIC_IsValidAIRotation(const struct FRotator& Rotation);
		bool STATIC_IsValidAILocation(const struct FVector& Location);
		bool STATIC_IsValidAIDirection(const struct FVector& DirectionVector);
		class UNavigationPath* STATIC_GetCurrentPath(class AController* Controller);
		class UBlackboardComponent* STATIC_GetBlackboard(class AActor* Target);
		class AAIController* STATIC_GetAIController(class AActor* ControlledActor);
		class UAIAsyncTaskBlueprintProxy* STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
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
	 * Class AIModule.AIDataProvider_QueryParams
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAIDataProvider_QueryParams : public UAIDataProvider
	{
	public:
		class FName                                                ParamName;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntValue;                                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9DK[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIDataProvider_Random
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UAIDataProvider_Random : public UAIDataProvider_QueryParams
	{
	public:
		float                                                      Min;                                                     // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Max;                                                     // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInteger : 1;                                            // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VJYG[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

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
	 * Class AIModule.AIPerceptionComponent
	 * Size -> 0x00F8 (FullSize[0x0270] - InheritedSize[0x0178])
	 */
	class UAIPerceptionComponent : public UActorComponent
	{
	public:
		TArray<class UAISenseConfig*>                              SensesConfig;                                            // 0x0178(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UClass*                                              DominantSense;                                           // 0x0188(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GOFS[0x10];                                  // 0x0190(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAIController*                                       AIOwner;                                                 // 0x01A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              OwnerTeamAgent[0x10];                                    // 0x01A8(0x0010) UNKNOWN PROPERTY: InterfaceProperty AIModule.AIPerceptionComponent.OwnerTeamAgent
		unsigned char                                              UnknownData_I19I[0x4];                                   // 0x01B8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOwnerIsStationary;                                      // 0x01BC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8FU[0x7B];                                  // 0x01BD(0x007B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPerceptionUpdated;                                     // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTargetPerceptionUpdated;                               // 0x0248(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCB7[0x18];                                  // 0x0258(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetSenseEnabled(class UClass* SenseClass, bool bEnable);
		void RequestStimuliListenerUpdate();
		void OnOwnerEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		void GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
		void GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
		void GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
		void GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
		bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
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
	 * Class AIModule.AIPerceptionStimuliSourceComponent
	 * Size -> 0x0018 (FullSize[0x0190] - InheritedSize[0x0178])
	 */
	class UAIPerceptionStimuliSourceComponent : public UActorComponent
	{
	public:
		unsigned char                                              bAutoRegisterAsSource : 1;                               // 0x0178(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8PVH[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      RegisterAsSourceForSenses;                               // 0x0180(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		void UnregisterFromSense(class UClass* SenseClass);
		void UnregisterFromPerceptionSystem();
		void RegisterWithPerceptionSystem();
		void RegisterForSense(class UClass* SenseClass);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIPerceptionSystem
	 * Size -> 0x01B8 (FullSize[0x01E0] - InheritedSize[0x0028])
	 */
	class UAIPerceptionSystem : public UObject
	{
	public:
		unsigned char                                              UnknownData_3DT5[0xA8];                                  // 0x0028(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAISense*>                                    Senses;                                                  // 0x00D0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      PerceptionAgingRate;                                     // 0x00E0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UXO2[0x9C];                                  // 0x00E4(0x009C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      PerceptionSourceWhitelist;                               // 0x0180(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate
		TArray<class FString>                                      PerceptionSourceBlacklist;                               // 0x0190(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate
		TArray<class FString>                                      MustHaveAssociatedCharacter;                             // 0x01A0(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5ZA9[0x30];                                  // 0x01B0(0x0030) MISSED OFFSET (PADDING)

	public:
		void STATIC_ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);
		void ReportEvent(class UAISenseEvent* PerceptionEvent);
		bool STATIC_RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target);
		void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		class UClass* STATIC_GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus);
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
	 * Size -> 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
	 */
	class UAISense_Blueprint : public UAISense
	{
	public:
		class UClass*                                              ListenerDataType;                                        // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UAIPerceptionComponent*>                      ListenerContainer;                                       // 0x00A0(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UAISenseEvent*>                               UnprocessedEvents;                                       // 0x00B0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

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
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UAISense_Damage : public UAISense
	{
	public:
		TArray<struct FAIDamageEvent>                              RegisteredEvents;                                        // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void STATIC_ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Hearing
	 * Size -> 0x0068 (FullSize[0x0100] - InheritedSize[0x0098])
	 */
	class UAISense_Hearing : public UAISense
	{
	public:
		TArray<struct FAINoiseEvent>                               NoiseEvents;                                             // 0x0098(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      SpeedOfSoundSq;                                          // 0x00A8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C621[0x54];                                  // 0x00AC(0x0054) MISSED OFFSET (PADDING)

	public:
		void STATIC_ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const class FName& Tag);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Prediction
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UAISense_Prediction : public UAISense
	{
	public:
		TArray<struct FAIPredictionEvent>                          RegisteredEvents;                                        // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void STATIC_RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
		void STATIC_RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Sight
	 * Size -> 0x00D8 (FullSize[0x0170] - InheritedSize[0x0098])
	 */
	class UAISense_Sight : public UAISense
	{
	public:
		unsigned char                                              UnknownData_NXKT[0xB0];                                  // 0x0098(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxTracesPerTick;                                        // 0x0148(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinQueriesPerTimeSliceCheck;                             // 0x014C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		double                                                     MaxTimeSlicePerTick;                                     // 0x0150(0x0008) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HighImportanceQueryDistanceThreshold;                    // 0x0158(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZXVN[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxQueryImportance;                                      // 0x0160(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SightLimitQueryImportance;                               // 0x0164(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ORP2[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Team
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UAISense_Team : public UAISense
	{
	public:
		TArray<struct FAITeamStimulusEvent>                        RegisteredEvents;                                        // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Touch
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UAISense_Touch : public UAISense
	{
	public:
		TArray<struct FAITouchEvent>                               RegisteredEvents;                                        // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseBlueprintListener
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UAISenseBlueprintListener : public UUserDefinedStruct
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Blueprint
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Blueprint : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Damage
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Damage : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Hearing
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Hearing : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HearingRange;                                            // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoSHearingRange;                                         // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseLoSHearing : 1;                                      // 0x0058(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_53II[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAISenseAffiliationFilter                           DetectionByAffiliation;                                  // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Prediction
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Prediction : public UAISenseConfig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Sight
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Sight : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SightRadius;                                             // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoseSightRadius;                                         // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PeripheralVisionAngleDegrees;                            // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAISenseAffiliationFilter                           DetectionByAffiliation;                                  // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AutoSuccessRangeFromLastSeenLocation;                    // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9EMS[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Team
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Team : public UAISenseConfig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Touch
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
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
		struct FAIDamageEvent                                      Event;                                                   // 0x0028(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

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
		struct FAINoiseEvent                                       Event;                                                   // 0x0028(0x0030) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected

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
	 * Class AIModule.AITask_LockLogic
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAITask_LockLogic : public UAITask
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AITask_MoveTo
	 * Size -> 0x00A0 (FullSize[0x0110] - InheritedSize[0x0070])
	 */
	class UAITask_MoveTo : public UAITask
	{
	public:
		class FScriptMulticastDelegate                             OnRequestFailed;                                         // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnMoveFinished;                                          // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		struct FAIMoveRequest                                      MoveRequest;                                             // 0x0090(0x0040) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IG6W[0x40];                                  // 0x00D0(0x0040) MISSED OFFSET (PADDING)

	public:
		class UAITask_MoveTo* STATIC_AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AITask_RunEQS
	 * Size -> 0x0078 (FullSize[0x00E8] - InheritedSize[0x0070])
	 */
	class UAITask_RunEQS : public UAITask
	{
	public:
		unsigned char                                              UnknownData_2S5Y[0x78];                                  // 0x0070(0x0078) MISSED OFFSET (PADDING)

	public:
		class UAITask_RunEQS* STATIC_RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BehaviorTree
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UBehaviorTree : public UObject
	{
	public:
		class UBTCompositeNode*                                    RootNode;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlackboardData*                                     BlackboardAsset;                                         // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UBTDecorator*>                                RootDecorators;                                          // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FBTDecoratorLogic>                           RootDecoratorOps;                                        // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UM4O[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

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
		int32_t                                                    MaxDebuggerSteps;                                        // 0x0028(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZY24[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBehaviorTreeTemplateInfo>                   LoadedTemplates;                                         // 0x0030(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UBehaviorTreeComponent*>                      ActiveComponents;                                        // 0x0040(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

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
	 * Class AIModule.BlackboardComponent
	 * Size -> 0x0108 (FullSize[0x0280] - InheritedSize[0x0178])
	 */
	class UBlackboardComponent : public UActorComponent
	{
	public:
		class UBrainComponent*                                     BrainComp;                                               // 0x0178(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBlackboardData*                                     BlackboardAsset;                                         // 0x0180(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZZAG[0x20];                                  // 0x0188(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBlackboardKeyType*>                          KeyInstances;                                            // 0x01A8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7Y4V[0xB8];                                  // 0x01B8(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBlackboardEntry>                            RuntimeKeys;                                             // 0x0270(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

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
		bool HasValue(const class FName& KeyName);
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
		void ClearValue(const class FName& KeyName);
		unsigned char AddRuntimeKey(const class FName& KeyName, class UBlackboardKeyType* KeyType);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UBlackboardData : public UDataAsset
	{
	public:
		class UBlackboardData*                                     Parent;                                                  // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBlackboardEntry>                            Keys;                                                    // 0x0038(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              bHasSynchronizedKeys : 1;                                // 0x0048(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P2TC[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Bool
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Bool : public UBlackboardKeyType
	{
	public:
		bool                                                       DefaultValue;                                            // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0MKH[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

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
		class UClass*                                              BaseClass;                                               // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

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
		class UEnum*                                               EnumType;                                                // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EnumName;                                                // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsEnumNameValid : 1;                                    // 0x0048(0x0001) BIT_FIELD Edit, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZTN[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Float
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Float : public UBlackboardKeyType
	{
	public:
		float                                                      DefaultValue;                                            // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I6ZJ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Int
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Int : public UBlackboardKeyType
	{
	public:
		int32_t                                                    DefaultValue;                                            // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L6T3[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Name
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Name : public UBlackboardKeyType
	{
	public:
		class FName                                                DefaultValue;                                            // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

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
		class FString                                              EnumName;                                                // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEnum*                                               EnumType;                                                // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

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
		class UClass*                                              BaseClass;                                               // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Rotator
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Rotator : public UBlackboardKeyType
	{
	public:
		struct FRotator                                            DefaultValue;                                            // 0x0030(0x000C) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bUseDefaultValue;                                        // 0x003C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_186N[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_String
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_String : public UBlackboardKeyType
	{
	public:
		class FString                                              StringValue;                                             // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultValue;                                            // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Vector
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Vector : public UBlackboardKeyType
	{
	public:
		struct FVector                                             DefaultValue;                                            // 0x0030(0x000C) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseDefaultValue;                                        // 0x003C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OSZE[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTComposite_Sequence
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UBTComposite_Sequence : public UBTCompositeNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTComposite_SimpleParallel
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UBTComposite_SimpleParallel : public UBTCompositeNode
	{
	public:
		EBTParallelMode                                            FinishMode;                                              // 0x0090(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQMV[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_Blackboard
	 * Size -> 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
	 */
	class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
	{
	public:
		int32_t                                                    IntValue;                                                // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FloatValue;                                              // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              StringValue;                                             // 0x0098(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              CachedDescription;                                       // 0x00A8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              OperationType;                                           // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EBTBlackboardRestart                                       NotifyObserver;                                          // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4258[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (PADDING)

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
		class AAIController*                                       AIOwner;                                                 // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              ActorOwner;                                              // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FName>                                        ObservedKeyNames;                                        // 0x0078(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AIYX[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bShowPropertyDetails : 1;                                // 0x0098(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCheckConditionOnlyBlackBoardChanges : 1;                // 0x0098(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsObservingBB : 1;                                      // 0x0098(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AKYK[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

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
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		bool PerformConditionCheck(class AActor* OwnerActor);
		bool IsDecoratorObserverActive();
		bool IsDecoratorExecutionActive();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_CheckGameplayTagsOnActor
	 * Size -> 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
	 */
	class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
	{
	public:
		struct FBlackboardKeySelector                              ActorToCheck;                                            // 0x0068(0x0028) Edit, Protected, NativeAccessSpecifierProtected
		EGameplayContainerMatchType                                TagsToMatch;                                             // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7EYA[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0098(0x0020) Edit, Protected, NativeAccessSpecifierProtected
		class FString                                              CachedDescription;                                       // 0x00B8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

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
		EBlackBoardEntryComparison                                 Operator;                                                // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y0XL[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BlackboardKeyA;                                          // 0x0070(0x0028) Edit, Protected, NativeAccessSpecifierProtected
		struct FBlackboardKeySelector                              BlackboardKeyB;                                          // 0x0098(0x0028) Edit, Protected, NativeAccessSpecifierProtected

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
	 * Class AIModule.BTDecorator_ConeCheck
	 * Size -> 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
	 */
	class UBTDecorator_ConeCheck : public UBTDecorator
	{
	public:
		float                                                      ConeHalfAngle;                                           // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VIK3[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              ConeOrigin;                                              // 0x0070(0x0028) Edit, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              ConeDirection;                                           // 0x0098(0x0028) Edit, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              Observed;                                                // 0x00C0(0x0028) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07F0[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

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
		float                                                      CooldownTime;                                            // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JDD7[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

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
		struct FBlackboardKeySelector                              BlackboardKeyA;                                          // 0x0068(0x0028) Edit, Protected, NativeAccessSpecifierProtected
		struct FBlackboardKeySelector                              BlackboardKeyB;                                          // 0x0090(0x0028) Edit, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bUseSelf : 1;                                            // 0x00B8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VAF5[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPathExistanceQueryType                                    PathQueryType;                                           // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FEYJ[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FilterClass;                                             // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

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
	 * Class AIModule.BTDecorator_IsAtLocation
	 * Size -> 0x0040 (FullSize[0x00D0] - InheritedSize[0x0090])
	 */
	class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
	{
	public:
		float                                                      AcceptableRadius;                                        // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T9K2[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderFloatValue                           ParametrizedAcceptableRadius;                            // 0x0098(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		EFAIDistanceType                                           GeometricDistanceType;                                   // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SEBA[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bUseParametrizedRadius : 1;                              // 0x00CC(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseNavAgentGoalLocation : 1;                            // 0x00CC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPathFindingBasedTest : 1;                               // 0x00CC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7P9S[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (PADDING)

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
		class UClass*                                              TestClass;                                               // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

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
		float                                                      ConeHalfAngle;                                           // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XIL8[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              ConeOrigin;                                              // 0x0070(0x0028) Edit, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              Observed;                                                // 0x0098(0x0028) Edit, NativeAccessSpecifierPublic
		unsigned char                                              bUseSelfAsOrigin : 1;                                    // 0x00C0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseSelfAsObserved : 1;                                  // 0x00C0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SD4Q[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_Loop
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UBTDecorator_Loop : public UBTDecorator
	{
	public:
		int32_t                                                    NumLoops;                                                // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteLoop;                                           // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6HU[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InfiniteLoopTimeoutTime;                                 // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CIOW[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

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
		struct FGameplayTag                                        CooldownTag;                                             // 0x0068(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownDuration;                                        // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddToExistingDuration;                                  // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ROL9[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (PADDING)

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
		struct FGameplayTag                                        CooldownTag;                                             // 0x0068(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownDuration;                                        // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddToExistingDuration;                                  // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActivatesCooldown;                                      // 0x0075(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TMT[0x2];                                   // 0x0076(0x0002) MISSED OFFSET (PADDING)

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
		float                                                      TimeLimit;                                               // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LE9Q[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

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
	 * Class AIModule.BTService_BlueprintBase
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UBTService_BlueprintBase : public UBTService
	{
	public:
		class AAIController*                                       AIOwner;                                                 // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              ActorOwner;                                              // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8M2A[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bShowPropertyDetails : 1;                                // 0x0090(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bShowEventDetails : 1;                                   // 0x0090(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GTBZ[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)

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
	 * Class AIModule.BTTask_BlueprintBase
	 * Size -> 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
	 */
	class UBTTask_BlueprintBase : public UBTTaskNode
	{
	public:
		class AAIController*                                       AIOwner;                                                 // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              ActorOwner;                                              // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HODV[0x18];                                  // 0x0080(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bShowPropertyDetails : 1;                                // 0x0098(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C2B5[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

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
	 * Class AIModule.BTTask_GameplayTaskBase
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTTask_GameplayTaskBase : public UBTTaskNode
	{
	public:
		unsigned char                                              bWaitForGameplayTask : 1;                                // 0x0070(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FNGQ[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_MakeNoise
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTTask_MakeNoise : public UBTTaskNode
	{
	public:
		float                                                      Loudnes;                                                 // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RQT4[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_MoveDirectlyToward
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
	{
	public:
		unsigned char                                              bDisablePathUpdateOnGoalLocationChange : 1;              // 0x00B0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bProjectVectorGoalToNavigation : 1;                      // 0x00B0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUpdatedDeprecatedProperties : 1;                        // 0x00B0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WI2E[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_PawnActionBase
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UBTTask_PawnActionBase : public UBTTaskNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_PlayAnimation
	 * Size -> 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
	 */
	class UBTTask_PlayAnimation : public UBTTaskNode
	{
	public:
		class UAnimationAsset*                                     AnimationToPlay;                                         // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLooping : 1;                                            // 0x0078(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNonBlocking : 1;                                        // 0x0078(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RQR5[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviorTreeComponent*                              MyOwnerComp;                                             // 0x0080(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              CachedSkelMesh;                                          // 0x0088(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJK1[0x20];                                  // 0x0090(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_PlaySound
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTTask_PlaySound : public UBTTaskNode
	{
	public:
		class USoundCue*                                           SoundToPlay;                                             // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_PushPawnAction
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
	{
	public:
		class UPawnAction*                                         Action;                                                  // 0x0070(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_RotateToFaceBBEntry
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
	{
	public:
		float                                                      Precision;                                               // 0x0098(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XZ8I[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_RunBehavior
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTTask_RunBehavior : public UBTTaskNode
	{
	public:
		class UBehaviorTree*                                       BehaviorAsset;                                           // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_RunBehaviorDynamic
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	class UBTTask_RunBehaviorDynamic : public UBTTaskNode
	{
	public:
		struct FGameplayTag                                        InjectionTag;                                            // 0x0070(0x0008) Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBehaviorTree*                                       DefaultBehaviorAsset;                                    // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBehaviorTree*                                       BehaviorAsset;                                           // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_RunEQSQuery
	 * Size -> 0x00B8 (FullSize[0x0150] - InheritedSize[0x0098])
	 */
	class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
	{
	public:
		class UEnvQuery*                                           QueryTemplate;                                           // 0x0098(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEnvNamedValue>                              QueryParams;                                             // 0x00A0(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FAIDynamicParam>                             QueryConfig;                                             // 0x00B0(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		EEnvQueryRunMode                                           RunMode;                                                 // 0x00C0(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SO65[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              EQSQueryBlackboardKey;                                   // 0x00C8(0x0028) Edit, EditConst, NativeAccessSpecifierPublic
		bool                                                       bUseBBKey;                                               // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J0WI[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEQSParametrizedQueryExecutionRequest               EQSRequest;                                              // 0x00F8(0x0048) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S34R[0x10];                                  // 0x0140(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_SetTagCooldown
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UBTTask_SetTagCooldown : public UBTTaskNode
	{
	public:
		struct FGameplayTag                                        CooldownTag;                                             // 0x0070(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddToExistingDuration;                                  // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJ3G[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CooldownDuration;                                        // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_Wait
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTTask_Wait : public UBTTaskNode
	{
	public:
		float                                                      WaitTime;                                                // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomDeviation;                                         // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_WaitBlackboardTime
	 * Size -> 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
	 */
	class UBTTask_WaitBlackboardTime : public UBTTask_Wait
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0078(0x0028) Edit, Protected, NativeAccessSpecifierProtected

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
	 * Class AIModule.PathFollowingComponent
	 * Size -> 0x01D8 (FullSize[0x0350] - InheritedSize[0x0178])
	 */
	class UPathFollowingComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_J4SZ[0x50];                                  // 0x0178(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNavMovementComponent*                               MovementComp;                                            // 0x01C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9BSX[0x8];                                   // 0x01D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANavigationData*                                     MyNavData;                                               // 0x01D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S4WQ[0x170];                                 // 0x01E0(0x0170) MISSED OFFSET (PADDING)

	public:
		void OnNavDataRegistered(class ANavigationData* NavData);
		void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		struct FVector GetPathDestination();
		EPathFollowingAction GetPathActionType();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.CrowdFollowingComponent
	 * Size -> 0x0050 (FullSize[0x03A0] - InheritedSize[0x0350])
	 */
	class UCrowdFollowingComponent : public UPathFollowingComponent
	{
	public:
		unsigned char                                              UnknownData_XR6F[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CrowdAgentMoveDirection;                                 // 0x0358(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_62T5[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterMovementComponent*                         CharacterMovement;                                       // 0x0368(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNavAvoidanceMask                                   AvoidanceGroup;                                          // 0x0370(0x0004) Deprecated, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FNavAvoidanceMask                                   GroupsToAvoid;                                           // 0x0374(0x0004) Deprecated, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FNavAvoidanceMask                                   GroupsToIgnore;                                          // 0x0378(0x0004) Deprecated, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SBTT[0x24];                                  // 0x037C(0x0024) MISSED OFFSET (PADDING)

	public:
		void SuspendCrowdSteering(bool bSuspend);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.CrowdManager
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UCrowdManager : public UCrowdManagerBase
	{
	public:
		class ANavigationData*                                     MyNavData;                                               // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FCrowdAvoidanceConfig>                       AvoidanceConfig;                                         // 0x0030(0x0010) Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<struct FCrowdAvoidanceSamplingPattern>              SamplingPatterns;                                        // 0x0040(0x0010) Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		int32_t                                                    MaxAgents;                                               // 0x0050(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxAgentRadius;                                          // 0x0054(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxAvoidedAgents;                                        // 0x0058(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxAvoidedWalls;                                         // 0x005C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NavmeshCheckInterval;                                    // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PathOptimizationInterval;                                // 0x0064(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SeparationDirClamp;                                      // 0x0068(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PathOffsetRadiusMultiplier;                              // 0x006C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DC24 : 4;                                    // 0x0070(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bResolveCollisions : 1;                                  // 0x0070(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_846V[0x67];                                  // 0x0071(0x0067) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.DetourCrowdAIController
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class ADetourCrowdAIController : public AAIController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQuery
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UEnvQuery : public UDataAsset
	{
	public:
		class FName                                                QueryName;                                               // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UEnvQueryOption*>                             Options;                                                 // 0x0038(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TMap<class FName, class UClass*>                           ContextTypes;                                            // 0x0048(0x0050) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

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
		unsigned char                                              UnknownData_9X4J[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
		void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
		void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
		void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
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
	 * Class AIModule.EnvQueryDebugHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryDebugHelpers : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_ActorsOfClass
	 * Size -> 0x0070 (FullSize[0x00D0] - InheritedSize[0x0060])
	 */
	class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
	{
	public:
		class UClass*                                              SearchedActorClass;                                      // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDataProviderBoolValue                            GenerateOnlyActorsInRadius;                              // 0x0068(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           SearchRadius;                                            // 0x0098(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UClass*                                              SearchCenter;                                            // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_BlueprintBase
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
	{
	public:
		class FText                                                GeneratorsActionDescription;                             // 0x0060(0x0018) Edit, NativeAccessSpecifierPublic
		class UClass*                                              Context;                                                 // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              GeneratedItemType;                                       // 0x0080(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2Y9T[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)

	public:
		class UObject* GetQuerier();
		void DoItemGeneration(TArray<struct FVector> ContextLocations);
		void AddGeneratedVector(const struct FVector& GeneratedVector);
		void AddGeneratedActor(class AActor* GeneratedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_Composite
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
	{
	public:
		TArray<class UEnvQueryGenerator*>                          Generators;                                              // 0x0060(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              bAllowDifferentItemTypes : 1;                            // 0x0070(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHasMatchingItemType : 1;                                // 0x0070(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQ93[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ForcedItemType;                                          // 0x0078(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_Cone
	 * Size -> 0x00D0 (FullSize[0x0168] - InheritedSize[0x0098])
	 */
	class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		struct FAIDataProviderFloatValue                           AlignedPointsDistance;                                   // 0x0098(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAIDataProviderFloatValue                           ConeDegrees;                                             // 0x00C8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAIDataProviderFloatValue                           AngleStep;                                               // 0x00F8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAIDataProviderFloatValue                           Range;                                                   // 0x0128(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UClass*                                              CenterActor;                                             // 0x0158(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIncludeContextLocation : 1;                             // 0x0160(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V0NL[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_CurrentLocation
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
	{
	public:
		class UClass*                                              QueryContext;                                            // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_Donut
	 * Size -> 0x01B8 (FullSize[0x0250] - InheritedSize[0x0098])
	 */
	class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		struct FAIDataProviderFloatValue                           InnerRadius;                                             // 0x0098(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           OuterRadius;                                             // 0x00C8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderIntValue                             NumberOfRings;                                           // 0x00F8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderIntValue                             PointsPerRing;                                           // 0x0128(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FEnvDirection                                       ArcDirection;                                            // 0x0158(0x0020) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ArcAngle;                                                // 0x0178(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseSpiralPattern;                                       // 0x01A8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RML[0x7];                                   // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Center;                                                  // 0x01B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDefineArc : 1;                                          // 0x01B8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BZZ[0x7];                                   // 0x01B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderIntValue                             NumberOfLayers;                                          // 0x01C0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           HighestLayerHeight;                                      // 0x01F0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           LowestLayerHeight;                                       // 0x0220(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_OnCircle
	 * Size -> 0x0168 (FullSize[0x0200] - InheritedSize[0x0098])
	 */
	class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		struct FAIDataProviderFloatValue                           CircleRadius;                                            // 0x0098(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           SpaceBetween;                                            // 0x00C8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderIntValue                             NumberOfPoints;                                          // 0x00F8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		EPointOnCircleSpacingMethod                                PointOnCircleSpacingMethod;                              // 0x0128(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DUIA[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEnvDirection                                       ArcDirection;                                            // 0x0130(0x0020) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ArcAngle;                                                // 0x0150(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      AngleRadians;                                            // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07NC[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CircleCenter;                                            // 0x0188(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreAnyContextActorsWhenGeneratingCircle;             // 0x0190(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XNFP[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderFloatValue                           CircleCenterZOffset;                                     // 0x0198(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FEnvTraceData                                       TraceData;                                               // 0x01C8(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bDefineArc : 1;                                          // 0x01F8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QRA5[0x7];                                   // 0x01F9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_SimpleGrid
	 * Size -> 0x0068 (FullSize[0x0100] - InheritedSize[0x0098])
	 */
	class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		struct FAIDataProviderFloatValue                           GridSize;                                                // 0x0098(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           SpaceBetween;                                            // 0x00C8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UClass*                                              GenerateAround;                                          // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_PathingGrid
	 * Size -> 0x0068 (FullSize[0x0168] - InheritedSize[0x0100])
	 */
	class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
	{
	public:
		struct FAIDataProviderBoolValue                            PathToItem;                                              // 0x0100(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UClass*                                              NavigationFilter;                                        // 0x0130(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ScanRangeMultiplier;                                     // 0x0138(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryInstanceBlueprintWrapper
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UEnvQueryInstanceBlueprintWrapper : public UObject
	{
	public:
		unsigned char                                              UnknownData_P64D[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    QueryID;                                                 // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H6TS[0x24];                                  // 0x0034(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemType;                                                // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    OptionIndex;                                             // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RWWT[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnQueryFinishedEvent;                                    // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected

	public:
		void SetNamedParam(const class FName& ParamName, float Value);
		TArray<struct FVector> GetResultsAsLocations();
		TArray<class AActor*> GetResultsAsActors();
		float GetItemScore(int32_t ItemIndex);
		void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
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
	 * Class AIModule.EnvQueryItemType_Component
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_Component : public UEnvQueryItemType_ActorBase
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
	 * Size -> 0x0120 (FullSize[0x0148] - InheritedSize[0x0028])
	 */
	class UEnvQueryManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_L73V[0x78];                                  // 0x0028(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEnvQueryInstanceCache>                      InstanceCache;                                           // 0x00A0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UEnvQueryTest*>                               AdditionalTestsCache;                                    // 0x00B0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UEnvQueryContext*>                            LocalContexts;                                           // 0x00C0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UEnvQueryInstanceBlueprintWrapper*>           GCShieldedWrappers;                                      // 0x00D0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0Y5O[0x54];                                  // 0x00E0(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxAllowedTestingTime;                                   // 0x0134(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTestQueriesUsingBreadth;                                // 0x0138(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D7J0[0x3];                                   // 0x0139(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    QueryCountWarningThreshold;                              // 0x013C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		double                                                     QueryCountWarningInterval;                               // 0x0140(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UEnvQueryInstanceBlueprintWrapper* STATIC_RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, EEnvQueryRunMode RunMode, class UClass* WrapperClass);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryOption
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UEnvQueryOption : public UObject
	{
	public:
		class UEnvQueryGenerator*                                  Generator;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UEnvQueryTest*>                               Tests;                                                   // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Distance
	 * Size -> 0x0018 (FullSize[0x01F0] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_Distance : public UEnvQueryTest
	{
	public:
		EEnvTestDistance                                           TestMode;                                                // 0x01D8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z4Y1[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DistanceTo;                                              // 0x01E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceThreshold;                                       // 0x01E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JG27[0x4];                                   // 0x01EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Dot
	 * Size -> 0x0048 (FullSize[0x0220] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_Dot : public UEnvQueryTest
	{
	public:
		struct FEnvDirection                                       LineA;                                                   // 0x01D8(0x0020) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FEnvDirection                                       LineB;                                                   // 0x01F8(0x0020) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		EEnvTestDot                                                TestMode;                                                // 0x0218(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAbsoluteValue;                                          // 0x0219(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VIWW[0x6];                                   // 0x021A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_GameplayTags
	 * Size -> 0x0070 (FullSize[0x0248] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_GameplayTags : public UEnvQueryTest
	{
	public:
		struct FGameplayTagQuery                                   TagQueryToMatch;                                         // 0x01D8(0x0048) Edit, Protected, NativeAccessSpecifierProtected
		bool                                                       bPassIfNoTags;                                           // 0x0220(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUpdatedToUseQuery;                                      // 0x0221(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EGameplayContainerMatchType                                TagsToMatch;                                             // 0x0222(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2WC9[0x5];                                   // 0x0223(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0228(0x0020) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Overlap
	 * Size -> 0x0020 (FullSize[0x01F8] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_Overlap : public UEnvQueryTest
	{
	public:
		struct FEnvOverlapData                                     OverlapData;                                             // 0x01D8(0x0020) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Pathfinding
	 * Size -> 0x0078 (FullSize[0x0250] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_Pathfinding : public UEnvQueryTest
	{
	public:
		EEnvTestPathfinding                                        TestMode;                                                // 0x01D8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W8QO[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Context;                                                 // 0x01E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDataProviderBoolValue                            PathFromContext;                                         // 0x01E8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderBoolValue                            SkipUnreachable;                                         // 0x0218(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
		class UClass*                                              FilterClass;                                             // 0x0248(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_PathfindingBatch
	 * Size -> 0x0030 (FullSize[0x0280] - InheritedSize[0x0250])
	 */
	class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
	{
	public:
		struct FAIDataProviderFloatValue                           ScanRangeMultiplier;                                     // 0x0250(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Project
	 * Size -> 0x0030 (FullSize[0x0208] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_Project : public UEnvQueryTest
	{
	public:
		struct FEnvTraceData                                       ProjectionData;                                          // 0x01D8(0x0030) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Random
	 * Size -> 0x0000 (FullSize[0x01D8] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_Random : public UEnvQueryTest
	{
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
	 * Class AIModule.EQSQueryResultSourceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEQSQueryResultSourceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EQSRenderingComponent
	 * Size -> 0x0040 (FullSize[0x0730] - InheritedSize[0x06F0])
	 */
	class UEQSRenderingComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_2F37[0x40];                                  // 0x06F0(0x0040) MISSED OFFSET (PADDING)

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
	 * Class AIModule.GridPathAIController
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class AGridPathAIController : public AAIController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.GridPathFollowingComponent
	 * Size -> 0x0030 (FullSize[0x0380] - InheritedSize[0x0350])
	 */
	class UGridPathFollowingComponent : public UPathFollowingComponent
	{
	public:
		class UNavLocalGridManager*                                GridManager;                                             // 0x0350(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F8LZ[0x28];                                  // 0x0358(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.NavFilter_AIControllerDefault
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.NavLinkProxy
	 * Size -> 0x0050 (FullSize[0x04A8] - InheritedSize[0x0458])
	 */
	class ANavLinkProxy : public AActor
	{
	public:
		unsigned char                                              UnknownData_UWLZ[0x10];                                  // 0x0458(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNavigationLink>                             PointLinks;                                              // 0x0468(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNavigationSegmentLink>                      SegmentLinks;                                            // 0x0478(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UNavLinkCustomComponent*                             SmartLinkComp;                                           // 0x0488(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSmartLinkIsRelevant;                                    // 0x0490(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9UM[0x7];                                   // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSmartLinkReached;                                      // 0x0498(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected

	public:
		void SetSmartLinkEnabled(bool bEnabled);
		void ResumePathFollowing(class AActor* Agent);
		void ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination);
		bool IsSmartLinkEnabled();
		bool HasMovingAgents();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.NavLocalGridManager
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UNavLocalGridManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_9L5D[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		bool STATIC_SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);
		void STATIC_RemoveLocalNavigationGrid(class UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids);
		bool STATIC_FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints);
		int32_t STATIC_AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int32_t Radius2D, float Height, bool bRebuildGrids);
		int32_t STATIC_AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids);
		int32_t STATIC_AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids);
		int32_t STATIC_AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int32_t Radius2D, float Height, bool bRebuildGrids);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PathFollowingManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPathFollowingManager : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UPawnAction : public UObject
	{
	public:
		class UPawnAction*                                         ChildAction;                                             // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPawnAction*                                         ParentAction;                                            // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPawnActionsComponent*                               OwnerComponent;                                          // 0x0038(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UObject*                                             Instigator;                                              // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBrainComponent*                                     BrainComp;                                               // 0x0048(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9U4A[0x30];                                  // 0x0050(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bAllowNewSameClassInstance : 1;                          // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bReplaceActiveSameClassInstance : 1;                     // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bShouldPauseMovement : 1;                                // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAlwaysNotifyOnFinished : 1;                             // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B7O6[0x17];                                  // 0x0081(0x0017) MISSED OFFSET (PADDING)

	public:
		EAIRequestPriority GetActionPriority();
		void Finish(EPawnActionResult WithResult);
		class UPawnAction* STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_BlueprintBase
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
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
	 * Size -> 0x0050 (FullSize[0x00E8] - InheritedSize[0x0098])
	 */
	class UPawnAction_Move : public UPawnAction
	{
	public:
		class AActor*                                              GoalActor;                                               // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             GoalLocation;                                            // 0x00A0(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AcceptableRadius;                                        // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              FilterClass;                                             // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAllowStrafe : 1;                                        // 0x00B8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bFinishOnOverlap : 1;                                    // 0x00B8(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bUsePathfinding : 1;                                     // 0x00B8(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAllowPartialPath : 1;                                   // 0x00B8(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bProjectGoalToNavigation : 1;                            // 0x00B8(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bUpdatePathToGoal : 1;                                   // 0x00B8(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAbortChildActionOnPathChange : 1;                       // 0x00B8(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CI1A[0x2F];                                  // 0x00B9(0x002F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_Repeat
	 * Size -> 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
	 */
	class UPawnAction_Repeat : public UPawnAction
	{
	public:
		class UPawnAction*                                         ActionToRepeat;                                          // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnAction*                                         RecentActionCopy;                                        // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPawnActionFailHandling                                    ChildFailureHandlingMode;                                // 0x00A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QU0L[0xF];                                   // 0x00A9(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_Sequence
	 * Size -> 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
	 */
	class UPawnAction_Sequence : public UPawnAction
	{
	public:
		TArray<class UPawnAction*>                                 ActionSequence;                                          // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EPawnActionFailHandling                                    ChildFailureHandlingMode;                                // 0x00A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZDF[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPawnAction*                                         RecentActionCopy;                                        // 0x00B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HOUO[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_Wait
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UPawnAction_Wait : public UPawnAction
	{
	public:
		float                                                      TimeToWait;                                              // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NYYX[0xC];                                   // 0x009C(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnActionsComponent
	 * Size -> 0x0038 (FullSize[0x01B0] - InheritedSize[0x0178])
	 */
	class UPawnActionsComponent : public UActorComponent
	{
	public:
		class APawn*                                               ControlledPawn;                                          // 0x0178(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FPawnActionStack>                            ActionStacks;                                            // 0x0180(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FPawnActionEvent>                            ActionEvents;                                            // 0x0190(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UPawnAction*                                         CurrentAction;                                           // 0x01A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QDK6[0x8];                                   // 0x01A8(0x0008) MISSED OFFSET (PADDING)

	public:
		bool K2_PushAction(class UPawnAction* NewAction, EAIRequestPriority Priority, class UObject* Instigator);
		bool STATIC_K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, EAIRequestPriority Priority);
		EPawnActionAbortState K2_ForceAbortAction(class UPawnAction* ActionToAbort);
		EPawnActionAbortState K2_AbortAction(class UPawnAction* ActionToAbort);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnSensingComponent
	 * Size -> 0x0048 (FullSize[0x01C0] - InheritedSize[0x0178])
	 */
	class UPawnSensingComponent : public UActorComponent
	{
	public:
		float                                                      HearingThreshold;                                        // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LOSHearingThreshold;                                     // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SightRadius;                                             // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SensingInterval;                                         // 0x0184(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HearingMaxSoundAge;                                      // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableSensingUpdates : 1;                               // 0x018C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOnlySensePlayers : 1;                                   // 0x018C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSeePawns : 1;                                           // 0x018C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHearNoises : 1;                                         // 0x018C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SM3O[0xB];                                   // 0x018D(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSeePawn;                                               // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHearNoise;                                             // 0x01A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      PeripheralVisionAngle;                                   // 0x01B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PeripheralVisionCosine;                                  // 0x01BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

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

	/**
	 * Class AIModule.VisualLoggerExtension
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVisualLoggerExtension : public UObject
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
