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
	 * ScriptStruct TaleMaps.TaleQuestVariableMapMarkType
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FTaleQuestVariableMapMarkType : public FQuestVariable
	{	};

	/**
	 * ScriptStruct TaleMaps.ChecklistActionProgressTracker
	 * Size -> 0x0010
	 */
	struct FChecklistActionProgressTracker
	{
	public:
		class UChecklistActionData*                                ActionData;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6O6Q[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaleMaps.TaleQuestChecklistItem
	 * Size -> 0x0050
	 */
	struct FTaleQuestChecklistItem
	{
	public:
		TArray<struct FChecklistActionProgressTracker>             ChecklistActions;                                        // 0x0000(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_C54T[0x40];                                  // 0x0010(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaleMaps.TaleQuestVariableTreasureMapItemDescType
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FTaleQuestVariableTreasureMapItemDescType : public FQuestVariable
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
