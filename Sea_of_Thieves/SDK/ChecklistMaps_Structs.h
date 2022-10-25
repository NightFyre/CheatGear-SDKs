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
	 * Enum ChecklistMaps.EChecklistActionType
	 */
	enum class EChecklistActionType : uint8_t
	{
		None           = 0,
		KillActor      = 1,
		NPCInteraction = 2,
		DeliverBooty   = 3,
		MAX            = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ChecklistMaps.ChecklistItem
	 * Size -> 0x0050
	 */
	struct FChecklistItem
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_WLYF[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    NumRequiredActionCompletions;                            // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_69WX[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UChecklistActionData*>                        ActionData;                                              // 0x0040(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference
	};

	/**
	 * ScriptStruct ChecklistMaps.ChecklistMapItemData
	 * Size -> 0x0050
	 */
	struct FChecklistMapItemData
	{
	public:
		struct FTreasureMapTextDesc                                Description;                                             // 0x0000(0x0048)
		bool                                                       IsComplete;                                              // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5QSB[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ChecklistMaps.ChecklistMapContents
	 * Size -> 0x00E8
	 */
	struct FChecklistMapContents
	{
	public:
		struct FTreasureMapTextDesc                                Title;                                                   // 0x0000(0x0048)
		struct FTreasureMapTextDesc                                Description;                                             // 0x0048(0x0048)
		TArray<struct FChecklistMapItemData>                       ChecklistItems;                                          // 0x0090(0x0010) ZeroConstructor
		struct FTreasureMapTextDesc                                Afternote;                                               // 0x00A0(0x0048)
	};

	/**
	 * ScriptStruct ChecklistMaps.CompleteEntireChecklistEvent
	 * Size -> 0x0001
	 */
	struct FCompleteEntireChecklistEvent
	{
	public:
		unsigned char                                              UnknownData_ZWE1[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ChecklistMaps.ChecklistBootyDeliveredEvent
	 * Size -> 0x0010
	 */
	struct FChecklistBootyDeliveredEvent
	{
	public:
		class AActor*                                              Seller;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              BuyingNPC;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ChecklistMaps.ChecklistCompletionEvent
	 * Size -> 0x0008
	 */
	struct FChecklistCompletionEvent
	{
	public:
		class UChecklistActionData*                                ActionData;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ChecklistMaps.ChecklistItemCompletedTelemetryEvent
	 * Size -> 0x0028
	 */
	struct FChecklistItemCompletedTelemetryEvent
	{
	public:
		struct FGuid                                               ChecklistMapId;                                          // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		EChecklistActionType                                       ReceivedActionType;                                      // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NLHH[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ActionDescryption;                                       // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
