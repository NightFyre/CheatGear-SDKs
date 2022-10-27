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
	 * Enum ShantyPuzzle.EShantyPuzzleCompletionReactionState
	 */
	enum class EShantyPuzzleCompletionReactionState : uint8_t
	{
		None              = 0,
		CompletionStarted = 1,
		CompletionAborted = 2,
		UnlockComplete    = 3,
		MAX               = 4
	};

	/**
	 * Enum ShantyPuzzle.EGlitterBeardPlayerPuzzleOutcome
	 */
	enum class EGlitterBeardPlayerPuzzleOutcome : uint8_t
	{
		WrongTime                    = 0,
		WrongInstrument              = 1,
		WrongShanty                  = 2,
		ConditionsMetForThisPosition = 3,
		MAX                          = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ShantyPuzzle.ShantyPuzzleInteractionZoneDefinition
	 * Size -> 0x0018
	 */
	struct FShantyPuzzleInteractionZoneDefinition
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMusicalInstrumentType                                     RequiredMusicalInstrumentType;                           // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L7PO[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RequiredNumInteractors;                                  // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ShantyPuzzle.ShantyPuzzleUnlockCanceledEvent
	 * Size -> 0x0001
	 */
	struct FShantyPuzzleUnlockCanceledEvent
	{
	public:
		unsigned char                                              UnknownData_J58Q[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShantyPuzzle.ShantyPuzzleSingleInteractionZoneStopInteractingEvent
	 * Size -> 0x0010
	 */
	struct FShantyPuzzleSingleInteractionZoneStopInteractingEvent
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InteractionZoneIdx;                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_51RY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShantyPuzzle.ShantyPuzzleSingleInteractionZoneUnlockEvent
	 * Size -> 0x0010
	 */
	struct FShantyPuzzleSingleInteractionZoneUnlockEvent
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InteractionZoneIdx;                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2O1Z[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShantyPuzzle.ShantyPuzzlePlayerExitInteractionZoneEvent
	 * Size -> 0x0008
	 */
	struct FShantyPuzzlePlayerExitInteractionZoneEvent
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ShantyPuzzle.ShantyPuzzlePlayerEnterInteractionZoneEvent
	 * Size -> 0x0008
	 */
	struct FShantyPuzzlePlayerEnterInteractionZoneEvent
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ShantyPuzzle.ShantyPuzzleUnlockedCompleteEvent
	 * Size -> 0x0001
	 */
	struct FShantyPuzzleUnlockedCompleteEvent
	{
	public:
		unsigned char                                              UnknownData_FPQI[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShantyPuzzle.ShantyPuzzleCompleteEvent
	 * Size -> 0x0010
	 */
	struct FShantyPuzzleCompleteEvent
	{
	public:
		TArray<struct FGuid>                                       ParticipatingCrews;                                      // 0x0000(0x0010) ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
