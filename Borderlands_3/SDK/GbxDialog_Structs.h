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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GbxDialog.EVoiceOfGodSpeaker
	 */
	enum class EVoiceOfGodSpeaker : uint8_t
	{
		INVALID       = 0,
		Lilith_Normal = 1,
		Tannis_Normal = 2,
		MAX           = 3
	};

	/**
	 * Enum GbxDialog.ETimeSlotEchoPreference
	 */
	enum class ETimeSlotEchoPreference : uint8_t
	{
		AutoTransition = 0,
		LiveOnly       = 1,
		EchoOnly       = 2,
		MAX            = 3
	};

	/**
	 * Enum GbxDialog.ECachedResultLifetime
	 */
	enum class ECachedResultLifetime : uint8_t
	{
		OneTest     = 0,
		OneSearch   = 1,
		ManualReset = 2,
		MAX         = 3
	};

	/**
	 * Enum GbxDialog.EDialogParameterMappingSourceType
	 */
	enum class EDialogParameterMappingSourceType : uint8_t
	{
		Parameter = 0,
		Constant  = 1,
		Counter   = 2,
		Flag      = 3,
		MAX       = 4
	};

	/**
	 * Enum GbxDialog.EDialogImplementationStatus
	 */
	enum class EDialogImplementationStatus : uint8_t
	{
		Unimplemented = 0,
		Implemented   = 1,
		MAX           = 2
	};

	/**
	 * Enum GbxDialog.EDialogParameterPrimaryType
	 */
	enum class EDialogParameterPrimaryType : uint8_t
	{
		Event   = 0,
		Object  = 1,
		Enum    = 2,
		Number  = 3,
		Boolean = 4,
		MAX     = 5
	};

	/**
	 * Enum GbxDialog.EGbxDialogQuietTimeScope
	 */
	enum class EGbxDialogQuietTimeScope : uint8_t
	{
		Individual = 0,
		SmallArea  = 1,
		Area       = 2,
		MAX        = 3
	};

	/**
	 * Enum GbxDialog.ELineScorePriorityMode
	 */
	enum class ELineScorePriorityMode : uint8_t
	{
		RetainLowerScores  = 0,
		DiscardLowerScores = 1,
		MAX                = 2
	};

	/**
	 * Enum GbxDialog.EDialogDecisionTestResult
	 */
	enum class EDialogDecisionTestResult : uint8_t
	{
		ConditionIsTrue  = 0,
		ConditionIsFalse = 1,
		TestIsInvalid    = 2,
		MAX              = 3
	};

	/**
	 * Enum GbxDialog.EGbxDialogConversationStatus
	 */
	enum class EGbxDialogConversationStatus : uint8_t
	{
		NotFound            = 0,
		Pending             = 1,
		Canceled            = 2,
		Started             = 3,
		HoldingConversation = 4,
		Interrupted         = 5,
		Succeeded           = 6,
		MAX                 = 7
	};

	/**
	 * Enum GbxDialog.EGbxDialogInterruptStrategy
	 */
	enum class EGbxDialogInterruptStrategy : uint8_t
	{
		StopOthers      = 0,
		SpeakOverOthers = 1,
		MAX             = 2
	};

	/**
	 * Enum GbxDialog.EGbxDialogSocialStrategy
	 */
	enum class EGbxDialogSocialStrategy : uint8_t
	{
		Normal    = 0,
		Selfish   = 1,
		NonSocial = 2,
		MAX       = 3
	};

	/**
	 * Enum GbxDialog.EGbxDialogCompileStatus
	 */
	enum class EGbxDialogCompileStatus : uint8_t
	{
		UpToDate = 0,
		Dirty    = 1,
		Error    = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxDialog.DialogParameterValue
	 * Size -> 0x0038
	 */
	struct FDialogParameterValue
	{
	public:
		unsigned char                                              UnknownData_RTIO[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxDialog.DialogContext
	 * Size -> 0x0218
	 */
	struct FDialogContext
	{
	public:
		unsigned char                                              UnknownData_N4MN[0x218];                                 // 0x0000(0x0218) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxDialog.DistributedSpeakerInfo
	 * Size -> 0x0018
	 */
	struct FDistributedSpeakerInfo
	{
	public:
		class UGbxDialogComponent*                                 DistributedSpeaker;                                      // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<TWeakObjectPtr<class UGbxDialogComponent>>          RepresentedSpeakers;                                     // 0x0008(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.DialogSequenceNotifyDelegate
	 * Size -> 0x0010
	 */
	struct FDialogSequenceNotifyDelegate
	{
	public:
		class FScriptDelegate                                      OnNotify;                                                // 0x0000(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.DialogSequenceDelegates
	 * Size -> 0x0070
	 */
	struct FDialogSequenceDelegates
	{
	public:
		class FScriptDelegate                                      OnFinished;                                              // 0x0000(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TLVG[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FDialogSequenceNotifyDelegate>    Notifies;                                                // 0x0020(0x0050) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.DialogBlackboardCounterValueMap
	 * Size -> 0x0050
	 */
	struct FDialogBlackboardCounterValueMap
	{
	public:
		TMap<class UDialogEnumValue*, float>                       Map;                                                     // 0x0000(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.DialogConversation
	 * Size -> 0x000C
	 */
	struct FDialogConversation
	{
	public:
		int32_t                                                    ConversationID;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UWorld>                               ConversationWorld;                                       // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.RecentConversationInfo
	 * Size -> 0x0028
	 */
	struct FRecentConversationInfo
	{
	public:
		double                                                     ExpirationTime;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class APlayerController>                    PreferredPlayer;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               LastKeyActor;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastKeyLocation;                                         // 0x0018(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWHL[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxDialog.RecentDialogPerformanceInfo
	 * Size -> 0x0020
	 */
	struct FRecentDialogPerformanceInfo
	{
	public:
		double                                                     ExpirationTime;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SequenceID;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UGbxDialogComponent>                  Speaker;                                                 // 0x000C(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UDialogPerformanceData>               Performance;                                             // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7ND[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxDialog.DialogThread
	 * Size -> 0x02C0
	 */
	struct FDialogThread
	{
	public:
		unsigned char                                              UnknownData_OH13[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDialogContext                                      Context;                                                 // 0x0010(0x0218) NativeAccessSpecifierPublic
		class UGbxDialogComponent*                                 Speaker;                                                 // 0x0228(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogPerformanceData*                              Performance;                                             // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             QuietTimeKey;                                            // 0x0238(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             GameCustomizationObject;                                 // 0x0240(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LD2X[0x78];                                  // 0x0248(0x0078) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxDialog.QuietTimeTracker
	 * Size -> 0x0050
	 */
	struct FQuietTimeTracker
	{
	public:
		TWeakObjectPtr<class UObject>                              KeyObject;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              ScopeObject;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UQuietTimePredicate*                                 ScopePredicate;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LN2M[0x38];                                  // 0x0018(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxDialog.DialogParameterMapping
	 * Size -> 0x0028
	 */
	struct FDialogParameterMapping
	{
	public:
		class UDialogParameter*                                    TargetParameter;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDialogParameterMappingSourceType                          SourceType;                                              // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7HYY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             SourceObject;                                            // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             SourceObjectSubContext;                                  // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceNumber;                                            // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TKY[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxDialog.DialogSelectorFunctionCallInstance
	 * Size -> 0x0018
	 */
	struct FDialogSelectorFunctionCallInstance
	{
	public:
		class UDialogSelectorFunction*                             Function;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDialogParameterMapping>                     ParameterMappings;                                       // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.DialogConditionRequirement
	 * Size -> 0x0020
	 */
	struct FDialogConditionRequirement
	{
	public:
		struct FDialogSelectorFunctionCallInstance                 SelectorCall;                                            // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bRequiredResult;                                         // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_73RW[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxDialog.DialogSelectionCondition
	 * Size -> 0x0010
	 */
	struct FDialogSelectionCondition
	{
	public:
		TArray<struct FDialogConditionRequirement>                 Requirements;                                            // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.DialogTimeSlotReference
	 * Size -> 0x0040
	 */
	struct FDialogTimeSlotReference
	{
	public:
		unsigned char                                              Script[0x28];                                            // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxDialog.DialogTimeSlotReference.Script
		struct FGuid                                               Guid;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogTimeSlotData*                                 CachedTimeSlot;                                          // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate, CPF_SkipSerialization
	};

	/**
	 * ScriptStruct GbxDialog.DialogLookupDecision
	 * Size -> 0x0028
	 */
	struct FDialogLookupDecision
	{
	public:
		struct FDialogSelectorFunctionCallInstance                 Call;                                                    // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		ECachedResultLifetime                                      CachedLifetime;                                          // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TKS2[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   DecisionNumber;                                          // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56RO[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxDialog.DialogDecisionNode
	 * Size -> 0x001C
	 */
	struct FDialogDecisionNode
	{
	public:
		int32_t                                                    Parent;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Decision;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TrueResultChild;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FalseResultChild;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UnrelatedResultChild;                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResultBucket;                                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxChildQuality;                                         // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.DialogLookupResult
	 * Size -> 0x0010
	 */
	struct FDialogLookupResult
	{
	public:
		class UDialogLineData*                                     Line;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quality;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_952Y[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxDialog.DialogLookupResultBucket
	 * Size -> 0x0010
	 */
	struct FDialogLookupResultBucket
	{
	public:
		TArray<struct FDialogLookupResult>                         Results;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.DialogDecisionTree
	 * Size -> 0x0030
	 */
	struct FDialogDecisionTree
	{
	public:
		TArray<struct FDialogLookupDecision>                       Decisions;                                               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDialogDecisionNode>                         Nodes;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDialogLookupResultBucket>                   ResultBuckets;                                           // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.DialogMoodInfo
	 * Size -> 0x0008
	 */
	struct FDialogMoodInfo
	{
	public:
		class UClass*                                              Action;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.ConditionalEchoData
	 * Size -> 0x0010
	 */
	struct FConditionalEchoData
	{
	public:
		class UGbxCondition*                                       Condition;                                               // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCharacterEchoDataBase*                              EchoData;                                                // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.DialogParameterType
	 * Size -> 0x0010
	 */
	struct FDialogParameterType
	{
	public:
		EDialogParameterPrimaryType                                PrimaryType;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZ7K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDialogEnumType*                                     SecondaryType;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.DialogPerformanceNotify
	 * Size -> 0x0010
	 */
	struct FDialogPerformanceNotify
	{
	public:
		float                                                      TimeFraction;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BLTO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.CurrentDialogPerformanceInfo
	 * Size -> 0x0060
	 */
	struct FCurrentDialogPerformanceInfo
	{
	public:
		int32_t                                                    DialogThreadID;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DialogSequenceID;                                        // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogPerformanceData*                              Performance;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWwisePlaybackInstance                              PlayingAudioInstance;                                    // 0x0010(0x0018) NativeAccessSpecifierPublic
		bool                                                       bForcingOwnerRelevantForEcho;                            // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J8ZK[0x37];                                  // 0x0029(0x0037) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxDialog.DialogScriptPinnedRef
	 * Size -> 0x0010
	 */
	struct FDialogScriptPinnedRef
	{
	public:
		TWeakObjectPtr<class UDialogBlackboard>                    Blackboard;                                              // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogScriptData*                                   Script;                                                  // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.InitialDialogInProgress
	 * Size -> 0x0018
	 */
	struct FInitialDialogInProgress
	{
	public:
		int32_t                                                    DialogThreadID;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DialogSequenceID;                                        // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogPerformanceData*                              Performance;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayTime;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZERC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxDialog.DialogBlackboardFlagValue
	 * Size -> 0x0010
	 */
	struct FDialogBlackboardFlagValue
	{
	public:
		unsigned char                                              UnknownData_DE1Q[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxDialog.DialogBlackboardFlagValueMap
	 * Size -> 0x0050
	 */
	struct FDialogBlackboardFlagValueMap
	{
	public:
		TMap<class UDialogEnumValue*, struct FDialogBlackboardFlagValue> Map;                                                     // 0x0000(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.DialogEventSubscription
	 * Size -> 0x0018
	 */
	struct FDialogEventSubscription
	{
	public:
		struct FSoftObjectPath                                     ReferencerTimeSlot;                                      // 0x0000(0x0018) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.DialogScopeParameterInfo
	 * Size -> 0x0018
	 */
	struct FDialogScopeParameterInfo
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDialogParameterMapping>                     ParameterMappings;                                       // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxDialog.MovieSceneDialogSectionTemplateData
	 * Size -> 0x0080
	 */
	struct FMovieSceneDialogSectionTemplateData
	{
	public:
		struct FDialogTimeSlotReference                            Dialog;                                                  // 0x0000(0x0040) Edit, NativeAccessSpecifierPublic
		bool                                                       bPlayThroughDialogSystem;                                // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSubtitleOnly;                                           // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWQT[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ManualSubtitleText;                                      // 0x0048(0x0018) Edit, NativeAccessSpecifierPublic
		float                                                      ManualSubtitleDuration;                                  // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NVEV[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDialogNameTag*                                      SubtitleNameTag;                                         // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RowIdx;                                                  // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        SectionStartFrame;                                       // 0x0074(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        SectionEndFrame;                                         // 0x0078(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5UXG[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxDialog.MovieSceneDialogSectionTemplate
	 * Size -> 0x0080 (FullSize[0x00A0] - InheritedSize[0x0020])
	 */
	struct FMovieSceneDialogSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieSceneDialogSectionTemplateData                TemplateData;                                            // 0x0020(0x0080) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
