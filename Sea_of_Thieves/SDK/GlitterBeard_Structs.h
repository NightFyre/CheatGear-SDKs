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
	 * Enum GlitterBeard.EFinaleState
	 */
	enum class EFinaleState : uint8_t
	{
		Inactive       = 0,
		Active         = 1,
		ServerComplete = 2,
		MAX            = 3
	};

	/**
	 * Enum GlitterBeard.EGlitterbeardVFXState
	 */
	enum class EGlitterbeardVFXState : uint8_t
	{
		Active   = 0,
		Inactive = 1,
		MAX      = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GlitterBeard.FinaleReplicationState
	 * Size -> 0x0010
	 */
	struct FFinaleReplicationState
	{
	public:
		EFinaleState                                               State;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IYUU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             TargetEnsemble;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GlitterBeard.UnlockEventData
	 * Size -> 0x0004
	 */
	struct FUnlockEventData
	{
	public:
		int32_t                                                    Idx;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GlitterBeard.GlitterBeardVFXTransitionCompletedEvent
	 * Size -> 0x0004
	 */
	struct FGlitterBeardVFXTransitionCompletedEvent
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GlitterBeard.ChangeGlitterBeardVFXStateEvent
	 * Size -> 0x0008
	 */
	struct FChangeGlitterBeardVFXStateEvent
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGlitterbeardVFXState                                      Target;                                                  // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q84I[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GlitterBeard.GlitterbeardPuzzleCancelTelemetryEvent
	 * Size -> 0x0010
	 */
	struct FGlitterbeardPuzzleCancelTelemetryEvent
	{
	public:
		unsigned char                                              UnknownData_OARS[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GlitterBeard.GlitterbeardPuzzleUnlockTelemetryEvent
	 * Size -> 0x0010
	 */
	struct FGlitterbeardPuzzleUnlockTelemetryEvent
	{
	public:
		unsigned char                                              UnknownData_7XKY[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GlitterBeard.GlitterbeardPlayerPuzzleUnlockSuccessTelemetryEvent
	 * Size -> 0x0010
	 */
	struct FGlitterbeardPlayerPuzzleUnlockSuccessTelemetryEvent
	{
	public:
		unsigned char                                              UnknownData_ICA9[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GlitterBeard.GlitterbeardPlayerPuzzleUnlockFailureTelemetryEvent
	 * Size -> 0x0020
	 */
	struct FGlitterbeardPlayerPuzzleUnlockFailureTelemetryEvent
	{
	public:
		unsigned char                                              UnknownData_IC8M[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GlitterBeard.GlitterbeardSessionEndTelemetryEvent
	 * Size -> 0x0010
	 */
	struct FGlitterbeardSessionEndTelemetryEvent
	{
	public:
		unsigned char                                              UnknownData_92V6[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GlitterBeard.GlitterbeardSessionBeginTelemetryEvent
	 * Size -> 0x0010
	 */
	struct FGlitterbeardSessionBeginTelemetryEvent
	{
	public:
		unsigned char                                              UnknownData_BEJ4[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
