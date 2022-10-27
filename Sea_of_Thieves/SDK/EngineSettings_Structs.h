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
	 * Enum EngineSettings.EThreePlayerSplitScreenType
	 */
	enum class EThreePlayerSplitScreenType : uint8_t
	{
		FavorTop    = 0,
		FavorBottom = 1,
		MAX         = 2
	};

	/**
	 * Enum EngineSettings.ETwoPlayerSplitScreenType
	 */
	enum class ETwoPlayerSplitScreenType : uint8_t
	{
		Horizontal = 0,
		Vertical   = 1,
		MAX        = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EngineSettings.AutoCompleteCommand
	 * Size -> 0x0030
	 */
	struct FAutoCompleteCommand
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		class FString                                              Desc;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		class FString                                              Keywords;                                                // 0x0020(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
