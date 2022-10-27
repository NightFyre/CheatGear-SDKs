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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum EngineSettings.EThreePlayerSplitScreenType
	 */
	enum class EThreePlayerSplitScreenType : uint8_t
	{
		FavorTop                               = 0,
		FavorBottom                            = 1,
		RespectTwoPlayerSplit_FavorTopLeft     = 2,
		RespectTwoPlayerSplit_FavorTopRight    = 3,
		RespectTwoPlayerSplit_FavorBottomLeft  = 4,
		RespectTwoPlayerSplit_FavorBottomRight = 5,
		MAX                                    = 6
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
	 * Size -> 0x0028
	 */
	struct FAutoCompleteCommand
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Desc;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RB91[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EngineSettings.GameModeName
	 * Size -> 0x0028
	 */
	struct FGameModeName
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      GameMode;                                                // 0x0010(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
