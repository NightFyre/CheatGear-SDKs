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
	 * Enum TradeRouteFramework.ETradeRouteMapOrientation
	 */
	enum class ETradeRouteMapOrientation : uint8_t
	{
		Landscape = 0,
		Portrait  = 1,
		MAX       = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TradeRouteFramework.QuestVariableTradeRouteData
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableTradeRouteData : public FQuestVariable
	{	};

	/**
	 * ScriptStruct TradeRouteFramework.TradeRouteMapping
	 * Size -> 0x0020
	 */
	struct FTradeRouteMapping
	{
	public:
		struct FIslandSelectionType                                StartIsland;                                             // 0x0000(0x0008) Edit
		class UClass*                                              DifficultyBand;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FStringAssetReference                               TradeRouteReference;                                     // 0x0010(0x0010) Edit, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
