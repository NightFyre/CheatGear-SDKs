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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Tutorial.ETutorialType
	 */
	enum class ETutorialType : uint8_t
	{
		Undecided         = 0,
		NoTutorial        = 1,
		MaidenVoyage      = 2,
		BeachNPCSpawnFlow = 3,
		CompanyOnBoarding = 4,
		Captaincy         = 5,
		MAX               = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Tutorial.ContextualTutorialPromptDesc
	 * Size -> 0x0020
	 */
	struct FContextualTutorialPromptDesc
	{
	public:
		class UClass*                                              PromptActorClass;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              AccessKey;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FName                                                FeatureName;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MustBeUnderCount;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X9RJ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Tutorial.EventTutorialTypeDecided
	 * Size -> 0x0001
	 */
	struct FEventTutorialTypeDecided
	{
	public:
		ETutorialType                                              TutorialType;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Tutorial.BeachNPCSpawnFlowNetworkEvent
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FBeachNPCSpawnFlowNetworkEvent : public FNetworkEventStruct
	{
	public:
		bool                                                       HasTaleCheckpointVoyage;                                 // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z2E2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Tutorial.TutorialStepEndedTelemetryEvent
	 * Size -> 0x0028
	 */
	struct FTutorialStepEndedTelemetryEvent
	{
	public:
		class FString                                              SequenceName;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              StepName;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		bool                                                       StepCompleted;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsFinalStep;                                             // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2YHW[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Tutorial.TutorialShowTutorialLegendaryTavernStrangerEvent
	 * Size -> 0x0001
	 */
	struct FTutorialShowTutorialLegendaryTavernStrangerEvent
	{
	public:
		unsigned char                                              UnknownData_INBW[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
