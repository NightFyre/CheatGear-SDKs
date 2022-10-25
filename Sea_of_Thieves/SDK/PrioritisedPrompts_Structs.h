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
	 * Enum PrioritisedPrompts.EPromptPriority
	 */
	enum class EPromptPriority : uint8_t
	{
		Low  = 0,
		High = 1,
		MAX  = 2
	};

	/**
	 * Enum PrioritisedPrompts.EPromptEvaluatedType
	 */
	enum class EPromptEvaluatedType : uint8_t
	{
		ShowPrompt          = 0,
		ShowNoPrompt        = 1,
		CompleteCoordinator = 2,
		MAX                 = 3
	};

	/**
	 * Enum PrioritisedPrompts.EPromptStartStop
	 */
	enum class EPromptStartStop : uint8_t
	{
		Start = 0,
		Stop  = 1,
		MAX   = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct PrioritisedPrompts.PrioritisedPromptHandle
	 * Size -> 0x0010
	 */
	struct FPrioritisedPromptHandle
	{
	public:
		struct FGuid                                               Id;                                                      // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct PrioritisedPrompts.PrioritisedPrompt
	 * Size -> 0x0058
	 */
	struct FPrioritisedPrompt
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible
		unsigned char                                              UnknownData_YOFE[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              Key;                                                     // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class UPopUpMessageDesc*                                   PopUpMessageDesc;                                        // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPromptPriority                                            BasePriority;                                            // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMenuNavigationAction                                      MenuNavigation;                                          // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NNF3[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PrioritisedPrompts.PrioritisedPromptWithHandle
	 * Size -> 0x0068
	 */
	struct FPrioritisedPromptWithHandle
	{
	public:
		struct FPrioritisedPromptHandle                            PromptHandle;                                            // 0x0000(0x0010)
		struct FPrioritisedPrompt                                  Prompt;                                                  // 0x0010(0x0058) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct PrioritisedPrompts.PromptEvaluation
	 * Size -> 0x0070
	 */
	struct FPromptEvaluation
	{
	public:
		EPromptEvaluatedType                                       PromptType;                                              // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5AP7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrioritisedPromptWithHandle                        Prompt;                                                  // 0x0008(0x0068) BlueprintVisible
	};

	/**
	 * ScriptStruct PrioritisedPrompts.PermanentPromptNetworkEvent
	 * Size -> 0x0070 (FullSize[0x0080] - InheritedSize[0x0010])
	 */
	struct FPermanentPromptNetworkEvent : public FNetworkEventStruct
	{
	public:
		struct FPrioritisedPromptWithHandle                        Prompt;                                                  // 0x0010(0x0068)
		EPromptStartStop                                           StartOrStop;                                             // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V05A[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PrioritisedPrompts.PromptsCounterIncrementEvent
	 * Size -> 0x0008
	 */
	struct FPromptsCounterIncrementEvent
	{
	public:
		class UClass*                                              AccessKey;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct PrioritisedPrompts.PlayerPromptTelemetryEvent
	 * Size -> 0x0020
	 */
	struct FPlayerPromptTelemetryEvent
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              Key;                                                     // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
