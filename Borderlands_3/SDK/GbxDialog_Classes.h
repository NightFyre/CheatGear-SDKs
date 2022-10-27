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
	 * Class GbxDialog.AnimNotify_DialogEvent
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UAnimNotify_DialogEvent : public UAnimNotify
	{
	public:
		class UDialogEvent*                                        DialogEvent;                                             // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UDialogParameter*, struct FDialogParameterValue> ParameterValues;                                         // 0x0040(0x0050) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.CharacterEchoDataBase
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCharacterEchoDataBase : public UGbxDataAsset
	{
	public:
		TArray<class FString>                                      AvailableVoGMoodKeyframes;                               // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogActionBlueprintImplementation
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDialogActionBlueprintImplementation : public UGbxDataAsset
	{
	public:
		void Execute(const struct FDialogContext& Context);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.GbxDialogDataAsset
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGbxDialogDataAsset : public UGbxDataAsset
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0030(0x0010) Edit, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogActionFunction
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UDialogActionFunction : public UGbxDialogDataAsset
	{
	public:
		TArray<class UDialogParameter*>                            Parameters;                                              // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              BlueprintImplementation;                                 // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogAudioComponentProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDialogAudioComponentProvider : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogAudioComponentProvider_OcclusionResistant
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UDialogAudioComponentProvider_OcclusionResistant : public UDialogAudioComponentProvider
	{
	public:
		float                                                      OcclusionWeight;                                         // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XERA[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ComponentTag;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogBehaviorPreset
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDialogBehaviorPreset : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogBlackboard
	 * Size -> 0x29D0 (FullSize[0x29F8] - InheritedSize[0x0028])
	 */
	class UDialogBlackboard : public UObject
	{
	public:
		unsigned char                                              UnknownData_0FVM[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UDialogNameTag*, struct FDistributedSpeakerInfo> DistributedSpeakers;                                     // 0x0030(0x0050) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<int32_t, struct FDialogSequenceDelegates>             PlayingSequenceDelegates;                                // 0x0080(0x0050) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UDialogLookupSystem*                                 LookupSystem;                                            // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogControlSystem*                                ControlSystem;                                           // 0x00D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UGbxDialogComponent*>                         RegisteredSpeakers;                                      // 0x00E0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UDialogScriptData*>                           ActiveScripts;                                           // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              ActivePureEchoNameTags[0x50];                            // 0x0100(0x0050) UNKNOWN PROPERTY: SetProperty GbxDialog.DialogBlackboard.ActivePureEchoNameTags
		TMap<class UDialogScriptData*, int32_t>                    PinnedScriptRefCounts;                                   // 0x0150(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class UObject*, struct FDialogBlackboardCounterValueMap> CounterValues;                                           // 0x01A0(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5TPE[0xA0];                                  // 0x01F0(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              PureEchoSpeakerHost;                                     // 0x0290(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SZ13[0x2690];                                // 0x0298(0x2690) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDialogConversation                                 ConversationForDialogLookup;                             // 0x2928(0x000C) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GJOB[0x4];                                   // 0x2934(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class APlayerController>                    SuggestedPlayerForNextConversation;                      // 0x2938(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class AActor>                               SuggestedKeyActorForNextConversation;                    // 0x2940(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             SuggestedKeyLocationForNextConversation;                 // 0x2948(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O0Q9[0x4];                                   // 0x2954(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, struct FRecentConversationInfo>              RecentConversationInfo;                                  // 0x2958(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<int32_t, struct FRecentDialogPerformanceInfo>         RecentPerformances;                                      // 0x29A8(0x0050) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.QuietTimePredicate
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UQuietTimePredicate : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.QuietTimePredicate_BlockStuff
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UQuietTimePredicate_BlockStuff : public UQuietTimePredicate
	{
	public:
		TArray<class UObject*>                                     BlockDialogScopeObjects;                                 // 0x0028(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        BlockKinds;                                              // 0x0038(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UDialogStyle*>                                BlockStyles;                                             // 0x0048(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UDialogNameTag*                                      OnlyForCharacter;                                        // 0x0058(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogControlSystem
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UDialogControlSystem : public UObject
	{
	public:
		unsigned char                                              UnknownData_9YYG[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDialogThread>                               DialogThreads;                                           // 0x0030(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FQuietTimeTracker>                           ActiveQuietTimes;                                        // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NKWX[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDialogLookupSystem*                                 LookupSystem;                                            // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogBlackboard*                                   Blackboard;                                              // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxDialogSettings*                                  Settings;                                                // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UWorld>                               World;                                                   // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFakePauseMode;                                          // 0x0080(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInCinematicMode;                                        // 0x0081(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWQA[0x6];                                   // 0x0082(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     PauseModeLastFrameTime;                                  // 0x0088(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogEnumType
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UDialogEnumType : public UGbxDialogDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogEnumValue
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UDialogEnumValue : public UGbxDialogDataAsset
	{
	public:
		unsigned char                                              UnknownData_OVRL[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDialogEnumType*                                     EnumType;                                                // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxUIName*                                          UIName;                                                  // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRestrictedQualifier;                                    // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VS9B[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogEnumValueInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDialogEnumValueInterface : public UInterface
	{
	public:
		class UDialogEnumValue* GetEnumValue(class UDialogEnumType* EnumType);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogEvent
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UDialogEvent : public UGbxDialogDataAsset
	{
	public:
		TArray<class UDialogParameter*>                            Parameters;                                              // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        PerformanceNotifyNames;                                  // 0x0050(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogEventList
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UDialogEventList : public UGbxDialogDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogLineData
	 * Size -> 0x00A8 (FullSize[0x00E8] - InheritedSize[0x0040])
	 */
	class UDialogLineData : public UGbxDialogDataAsset
	{
	public:
		ELineScorePriorityMode                                     ScorePriorityMode;                                       // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_20DI[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDialogSelectionCondition>                   SelectionConditions;                                     // 0x0048(0x0010) Edit, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic
		class UDialogEnumValue*                                    SpeakingCharacter;                                       // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogEnumValue*                                    CharacterQualifier;                                      // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UDialogPerformanceData*>                      Performances;                                            // 0x0068(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
		class FString                                              VoGMoodKey;                                              // 0x0078(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDialogTimeSlotReference                            FollowupTimeSlot;                                        // 0x0088(0x0040) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		class UDialogEvent*                                        FollowupEvent;                                           // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDialogParameterMapping>                     FollowupParameterMappings;                               // 0x00D0(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bSequential;                                             // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LK07[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogLookupSystem
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UDialogLookupSystem : public UObject
	{
	public:
		class UDialogControlSystem*                                ControlSystem;                                           // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDialogBlackboard*                                   Blackboard;                                              // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class UDialogEvent*, struct FDialogDecisionTree>      EventTriggeringDecisionTrees;                            // 0x0038(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		struct FDialogDecisionTree                                 ConditionTriggeringDecisionTree;                         // 0x0088(0x0030) Transient, NativeAccessSpecifierPrivate
		TMap<class UDialogScriptData*, int32_t>                    ActiveScriptRegistrationIDs;                             // 0x00B8(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogNameTagMoodData
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UDialogNameTagMoodData : public UGbxDataAsset
	{
	public:
		TMap<class FName, struct FDialogMoodInfo>                  MoodData;                                                // 0x0030(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogNameTag
	 * Size -> 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
	 */
	class UDialogNameTag : public UGbxDataAsset
	{
	public:
		unsigned char                                              UnknownData_GFE4[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDialogEnumValue*                                    NameTagEnumValue;                                        // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UDialogEnumValue*>                            SupportedQualifiers;                                     // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UDialogNameTag*                                      ParentNameTag;                                           // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoiceOfGodSpeaker                                         VoGSpeaker;                                              // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQHQ[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterEchoDataBase*                              EchoData;                                                // 0x0060(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConditionalEchoData>                        ConditionalAlternateEchoData;                            // 0x0068(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUsableForPureEchoes;                                    // 0x0078(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDistributedSpeaker;                                     // 0x0079(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OXW2[0x2];                                   // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VoicePitchOffset;                                        // 0x007C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          CustomizationRTPC;                                       // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CustomizationRTPCValue;                                  // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48BA[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDialogNameTagMoodData*                              MoodDataAsset;                                           // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, struct FDialogMoodInfo>                  MoodData;                                                // 0x0098(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogParameter
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UDialogParameter : public UGbxDialogDataAsset
	{
	public:
		class UDialogParameter*                                    DefaultInputParameter;                                   // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDialogParameterType                                Type;                                                    // 0x0048(0x0010) Edit, NoDestructor, AssetRegistrySearchable, NativeAccessSpecifierPublic
		bool                                                       bForceDecisionsToAlwaysRetest;                           // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LQVO[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogPerformanceData
	 * Size -> 0x00A0 (FullSize[0x00E0] - InheritedSize[0x0040])
	 */
	class UDialogPerformanceData : public UGbxDialogDataAsset
	{
	public:
		class FText                                                Text;                                                    // 0x0040(0x0018) Edit, NativeAccessSpecifierPublic
		struct FGbxTriggerProperty                                 TriggerPlayWwiseEventPreview;                            // 0x0058(0x0001) Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6219[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         WwiseExternalMediaTemplate;                              // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EstimatedDuration;                                       // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   WwiseEventShortID;                                       // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Action;                                                  // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActionWeight;                                            // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C4AE[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MoodName;                                                // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoodWeight;                                              // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableEarlyFinish;                                      // 0x0094(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T7VI[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EarlyFinishTimeFraction;                                 // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QWNN[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDialogPerformanceNotify>                    Notifies;                                                // 0x00A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UDialogStyle*                                        Style;                                                   // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutputDelay;                                             // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceToPlay;                                            // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      QuietTime;                                               // 0x00C0(0x0008) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxDialogQuietTimeScope                                   QuietTimeScope;                                          // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C1TS[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatInterval                                      DialogKindCooldownTime;                                  // 0x00CC(0x0008) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6J1B[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPerformanceEchoDataBase*                            EchoData;                                                // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void PlayWwiseEventPreview();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogScriptData
	 * Size -> 0x00A8 (FullSize[0x00E8] - InheritedSize[0x0040])
	 */
	class UDialogScriptData : public UGbxDialogDataAsset
	{
	public:
		TArray<class UDialogTimeSlotData*>                         TimeSlots;                                               // 0x0040(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UDialogNameTag*>                              PureEchoNameTags;                                        // 0x0050(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		TMap<class UDialogEvent*, struct FDialogDecisionTree>      EventTriggeredDecisionTrees;                             // 0x0060(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FDialogDecisionTree                                 OtherConditionTriggeredDecisionTree;                     // 0x00B0(0x0030) Edit, NativeAccessSpecifierPublic
		class UObject*                                             FaceFXAnimSet;                                           // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogSelectorFunction
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UDialogSelectorFunction : public UGbxDialogDataAsset
	{
	public:
		TArray<class UDialogParameter*>                            Parameters;                                              // 0x0040(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bTriggeringCondition;                                    // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECachedResultLifetime                                      CachedResultLifetime;                                    // 0x0051(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QYD[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDialogSelectorImplementation*                       Implementation;                                          // 0x0058(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogSelectorImplementation
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UDialogSelectorImplementation : public UObject
	{
	public:
		unsigned char                                              UnknownData_N8ZH[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		void PerformTest(const struct FDialogContext& Context, EDialogDecisionTestResult* Result);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogSelectorImplementation_CheckDistance
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UDialogSelectorImplementation_CheckDistance : public UDialogSelectorImplementation
	{
	public:
		class UDialogParameter*                                    FromActorParam;                                          // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogParameter*                                    ToActorParam;                                            // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomDistance;                                      // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G5BT[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CustomDistance;                                          // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTrueIfCloser;                                           // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJU3[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogSelectorImplementation_CheckNameTag
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDialogSelectorImplementation_CheckNameTag : public UDialogSelectorImplementation
	{
	public:
		class UDialogParameter*                                    WhoParam;                                                // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogParameter*                                    NameTagParam;                                            // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogSelectorImplementation_Equality
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDialogSelectorImplementation_Equality : public UDialogSelectorImplementation
	{
	public:
		class UDialogParameter*                                    ParamA;                                                  // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogParameter*                                    ParamB;                                                  // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogSelectorImplementation_IsPreferredPlayer
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UDialogSelectorImplementation_IsPreferredPlayer : public UDialogSelectorImplementation
	{
	public:
		class UDialogParameter*                                    WhoParam;                                                // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogSpeakerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDialogSpeakerInterface : public UInterface
	{
	public:
		bool CanPerformThisDialog(class UDialogPerformanceData* Performance);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogStyle
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UDialogStyle : public UGbxDataAsset
	{
	public:
		EGbxDialogSocialStrategy                                   SocialStrategy;                                          // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterruptSamePriority;                                  // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxDialogInterruptStrategy                                InterruptStrategy;                                       // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99FP[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Priority;                                                // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     SubtitlePriority;                                        // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8TH1[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PatientWaitTime;                                         // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWaitTime;                                             // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpeakableWhenDead;                                      // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterruptableByHighPriorityVox;                         // 0x0045(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayableWhenPaused;                                     // 0x0046(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayableDuringCinematic;                                // 0x0047(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Kind;                                                    // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCallout;                                                // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FA6X[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDialogAudioComponentProvider*                       AudioComponentProvider;                                  // 0x0058(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocalOnly;                                              // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TYMW[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogSystemEchoManagerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDialogSystemEchoManagerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.DialogTimeSlotData
	 * Size -> 0x0070 (FullSize[0x00B0] - InheritedSize[0x0040])
	 */
	class UDialogTimeSlotData : public UGbxDialogDataAsset
	{
	public:
		struct FGbxTriggerProperty                                 TriggerPreviewAudio;                                     // 0x0040(0x0001) Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T34W[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDialogTimeSlotReference>                    CompositeAudioAdditionalTimeSlots;                       // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		ETimeSlotEchoPreference                                    EchoPreference;                                          // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RWMC[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UDialogParameter*>                            Parameters;                                              // 0x0060(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		TArray<class UDialogLineData*>                             Lines;                                                   // 0x0070(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FDialogDecisionTree                                 DecisionTree;                                            // 0x0080(0x0030) Edit, NativeAccessSpecifierPublic

	public:
		void PreviewAudio();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.GameDialogSystemCustomizationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameDialogSystemCustomizationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.GbxDialogBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxDialogBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_WaitForDialog(const struct FDialogConversation& Conversation, const struct FLatentActionInfo& LatentInfo);
		bool STATIC_TestDialogSelector(class UObject* WorldContextObject, class UDialogSelectorFunction* Selector, const struct FDialogContext& InputParameters);
		void STATIC_StopActiveDialog(class UObject* Target, bool bIncludeDeathDialog);
		void STATIC_SetNextDialogPlayerHints(class UObject* WorldContextObject, class AActor* Actor, class UDialogNameTag* NameTag, const struct FVector& Location);
		void STATIC_SetDialogGameCustomizationMetadata(class UObject* WorldContextObject, int32_t SequenceID, class UObject* Object, int32_t Cookie);
		void STATIC_SetDialogFlag(class UObject* WorldContextObject, class UDialogEnumValue* DialogEnumValue, bool Value, float Duration);
		void STATIC_SetDialogContextParameter(struct FDialogContext* Context, class UDialogParameter* Parameter, class UObject* ObjectValue, float FloatValue, bool bBoolValue);
		void STATIC_SetConversationPlayerHints(const struct FDialogConversation& Conversation, class AActor* Actor, class UDialogNameTag* NameTag, const struct FVector& Location);
		void STATIC_ResolveDialogTimeSlotReference(const struct FDialogTimeSlotReference& Reference, class UDialogTimeSlotData** TimeSlot, class UDialogScriptData** Script);
		void STATIC_PlaceRegionalDialogHold(class UObject* WorldContextObject, const class FName& HoldName, const struct FVector& Location, float Radius, class UQuietTimePredicate* Rules, float Duration);
		void STATIC_PlaceGlobalDialogHold(class UObject* WorldContextObject, const class FName& HoldName, class UQuietTimePredicate* Rules, float Duration);
		struct FDialogConversation STATIC_NewDialogConversation(class UObject* WorldContextObject, class AActor* KeyActor, class UDialogNameTag* KeySpeakerName, const struct FVector& KeyLocation);
		struct FDialogContext STATIC_NewDialogContext();
		void STATIC_InterruptDialogInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius);
		void STATIC_InterruptConversation(const struct FDialogConversation& Conversation);
		bool STATIC_GetDialogFlag(class UObject* WorldContextObject, class UDialogEnumValue* DialogEnumValue);
		TArray<class FString> STATIC_GetDialogContextParameterSummary(const struct FDialogContext& Context);
		void STATIC_GetDialogContextParameter(const struct FDialogContext& Context, class UDialogParameter* Parameter, class UObject** ObjectValue, float* FloatValue, bool* bBoolValue);
		EGbxDialogConversationStatus STATIC_GetConversationStatus(const struct FDialogConversation& Conversation);
		bool STATIC_FinishTriggerDialog(class UObject* WorldContextObject, class UDialogEvent* Event, struct FDialogContext* Context, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, float StartDelay, int32_t* SequenceID);
		bool STATIC_FinishSpeak(class UObject* WorldContextObject, const struct FDialogTimeSlotReference& TimeSlotRef, class UGbxDialogComponent* OptionalSpeaker, struct FDialogContext* Context, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, float StartDelay, int32_t* SequenceID, float OverrideMaxWait);
		bool STATIC_FindOrCreateNamedSpeaker(class UDialogNameTag* NameTag, bool bIncludePureEchoSpeakers, bool bCreateIfNotFound, class UGbxDialogComponent** Speaker);
		bool STATIC_EnqueueDialogPerformance(class UObject* WorldContextObject, class UGbxDialogComponent* Speaker, class UDialogPerformanceData* Performance, float StartDelay, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, int32_t* DialogPlaybackSequence);
		void STATIC_DeactivateDialogScript(class UObject* WorldContextObject, class UDialogScriptData* Script);
		EDialogDecisionTestResult STATIC_ConvertBoolToDialogTestResult(bool bValue);
		void STATIC_CancelDialogBlockingHold(class UObject* WorldContextObject, const class FName& HoldName);
		void STATIC_BindToDialogSequenceFinished(class UObject* WorldContextObject, int32_t PlayingSequenceID, const class FScriptDelegate& Delegate);
		void STATIC_BindToDialogNotify(class UObject* WorldContextObject, int32_t PlayingSequenceID, const class FName& NotifyName, const class FScriptDelegate& Delegate);
		void STATIC_ActivateDialogScript(class UObject* WorldContextObject, class UDialogScriptData* Script);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.GbxDialogComponent
	 * Size -> 0x0150 (FullSize[0x02C8] - InheritedSize[0x0178])
	 */
	class UGbxDialogComponent : public UActorComponent
	{
	public:
		TArray<class UDialogNameTag*>                              RandomNameTags;                                          // 0x0178(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UDialogScriptData*>                           DialogScripts;                                           // 0x0188(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStartedPerformance;                                    // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UDialogNameTag*                                      NameTag;                                                 // 0x01A8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCurrentDialogPerformanceInfo                       CurrentPerformance;                                      // 0x01B0(0x0060) Transient, NativeAccessSpecifierPublic
		struct FCurrentDialogPerformanceInfo                       PendingPerformance;                                      // 0x0210(0x0060) Transient, NativeAccessSpecifierPublic
		TArray<struct FDialogScriptPinnedRef>                      PinnedScripts;                                           // 0x0270(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       bPureEchoSpeaker;                                        // 0x0280(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JPOZ[0x7];                                   // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseAudioComponent*                                DistributedAudioComponent;                               // 0x0288(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTransientEchoSpeaker;                                   // 0x0290(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UGF[0x3];                                   // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TransientEchoSpeakerIdleTime;                            // 0x0294(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpeakDirectlyToPlayer;                                  // 0x0298(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FNBR[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   DirectSpeakerTarget;                                     // 0x02A0(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPositional;                                             // 0x02A8(0x0001) Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDistributedSpeaker;                                     // 0x02A9(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7BD4[0x6];                                   // 0x02AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInitialDialogInProgress                            InitialDialogInProgress;                                 // 0x02B0(0x0018) Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void StopPerformance(int32_t DialogThreadID, bool bIncludeDeathDialog);
		void StartPerformance(int32_t DialogThreadID, int32_t DialogSequenceID, class UDialogPerformanceData* Performance);
		void OnRep_InitialDialogInProgress();
		bool IsSpeakerClearToPlayDialog(class UDialogStyle* ProposedStyle, bool bProposingEcho, const struct FDialogConversation& ProposedConversation);
		bool IsSpeakerActive(bool bIncludePendingVO);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.GbxDialogSettings
	 * Size -> 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
	 */
	class UGbxDialogSettings : public UGbxDataAsset
	{
	public:
		class UClass*                                              PureEchoSpeakerActorClass;                               // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              GameGlobalParametersProviderClass;                       // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BlackboardClass;                                         // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         ConfigurePureEchoTalkerEvent;                            // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          EchoControlWwiseParameter;                               // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          PureEchoSpeakerWwiseParameter;                           // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          VoicePitchParameter;                                     // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UDialogEnumValue*>                            EnforcedRestrictionQualifiers;                           // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ConversationExpirationDuration;                          // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecentPerformancesExpirationDuration;                    // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmoteWeightBlendDuration;                                // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SmallCooldownRadius;                                     // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NearRadius;                                              // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      QuietTimeMergeRadius;                                    // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegionRadius;                                            // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnableEchoBelowVolume;                                   // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DisableEchoAboveVolume;                                  // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EchoTransitionReqiredVolumeChange;                       // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterConversationDelay;                                  // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQXU[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     ConfigurationErrorSound;                                 // 0x00A8(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogParameter*                                    EventParameter;                                          // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogParameter*                                    SelfParameter;                                           // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogParameter*                                    GlobalContextParameter;                                  // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogParameter*                                    ScriptContextParameter;                                  // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogParameter*                                    ConversationContextParameter;                            // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogParameter*                                    LineContextParameter;                                    // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogEnumType*                                     CountersEnum;                                            // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogEnumType*                                     FlagsEnum;                                               // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.GlobalDialogParametersProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGlobalDialogParametersProviderInterface : public UInterface
	{
	public:
		void InitDialogContext(struct FDialogContext* Parameters);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.MovieSceneDialogTrack
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UMovieSceneDialogTrack : public UMovieSceneNameableTrack
	{
	public:
		bool                                                       bAllowRename;                                            // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WD0Y[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0060(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.MovieSceneDialogSection
	 * Size -> 0x0070 (FullSize[0x0150] - InheritedSize[0x00E0])
	 */
	class UMovieSceneDialogSection : public UMovieSceneSection
	{
	public:
		struct FDialogTimeSlotReference                            Dialog;                                                  // 0x00E0(0x0040) Edit, NativeAccessSpecifierPublic
		bool                                                       bPlayThroughDialogSystem;                                // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSubtitleOnly;                                           // 0x0121(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RMLZ[0x6];                                   // 0x0122(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ManualSubtitleText;                                      // 0x0128(0x0018) Edit, NativeAccessSpecifierPublic
		float                                                      ManualSubtitleDuration;                                  // 0x0140(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6BA[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDialogNameTag*                                      SubtitleNameTag;                                         // 0x0148(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.PerformanceEchoDataBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPerformanceEchoDataBase : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDialog.PureEchoSpeakerHost
	 * Size -> 0x0000 (FullSize[0x0458] - InheritedSize[0x0458])
	 */
	class APureEchoSpeakerHost : public AActor
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
