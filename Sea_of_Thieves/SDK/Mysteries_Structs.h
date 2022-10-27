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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Mysteries.AbandonedNoteWeightedTextEntry
	 * Size -> 0x0078
	 */
	struct FAbandonedNoteWeightedTextEntry
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_5QHR[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                Body;                                                    // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_0R19[0x20];                                  // 0x0050(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      Weight;                                                  // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_334M[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Mysteries.SirenPuzzleLockState
	 * Size -> 0x0030
	 */
	struct FSirenPuzzleLockState
	{
	public:
		struct FGuid                                               LockId;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FLandmarkReactionKeyFrame>                   UnlockReactions;                                         // 0x0010(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		TArray<struct FGuid>                                       UnlockingCrews;                                          // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Mysteries.SirenPuzzleCompleteEvent
	 * Size -> 0x0001
	 */
	struct FSirenPuzzleCompleteEvent
	{
	public:
		unsigned char                                              UnknownData_2I7D[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
