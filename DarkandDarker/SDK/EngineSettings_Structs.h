#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Enum EngineSettings.ETwoPlayerSplitScreenType
	 */
	enum class ETwoPlayerSplitScreenType : uint8_t
	{
		Horizontal = 0,
		Vertical   = 1,
		MAX        = 2
	};

	/**
	 * Enum EngineSettings.EThreePlayerSplitScreenType
	 */
	enum class EThreePlayerSplitScreenType : uint8_t
	{
		FavorTop    = 0,
		FavorBottom = 1,
		Vertical    = 2,
		Horizontal  = 3,
		MAX         = 4
	};

	/**
	 * Enum EngineSettings.EFourPlayerSplitScreenType
	 */
	enum class EFourPlayerSplitScreenType : uint8_t
	{
		Grid       = 0,
		Vertical   = 1,
		Horizontal = 2,
		MAX        = 3
	};

	/**
	 * Enum EngineSettings.ESubLevelStripMode
	 */
	enum class ESubLevelStripMode : uint8_t
	{
		ExactClass = 0,
		IsChildOf  = 1,
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
		unsigned char                                              UnknownData_SPZF[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EngineSettings.GameModeName
	 * Size -> 0x0028
	 */
	struct FGameModeName
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      GameMode;                                                // 0x0010(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EngineSettings.TemplateMapInfoOverride
	 * Size -> 0x0048
	 */
	struct FTemplateMapInfoOverride
	{
	public:
		struct FSoftObjectPath                                     Thumbnail;                                               // 0x0000(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     Map;                                                     // 0x0018(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0030(0x0018) Edit, Config, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
