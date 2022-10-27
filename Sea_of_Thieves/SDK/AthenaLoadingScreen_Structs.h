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
	 * ScriptStruct AthenaLoadingScreen.SlateLoadingScreenImageParams
	 * Size -> 0x0020
	 */
	struct FSlateLoadingScreenImageParams
	{
	public:
		struct FStringAssetReference                               ImageAsset;                                              // 0x0000(0x0010) Edit, ZeroConstructor
		TArray<class FText>                                        ImageTips;                                               // 0x0010(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenStateResponse
	 * Size -> 0x0001
	 */
	struct FEventAthenaLoadingScreenStateResponse
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenStateRequest
	 * Size -> 0x0001
	 */
	struct FEventAthenaLoadingScreenStateRequest
	{
	public:
		unsigned char                                              UnknownData_UVZ2[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenBlockUntilUIIntialisedClear
	 * Size -> 0x0010
	 */
	struct FEventAthenaLoadingScreenBlockUntilUIIntialisedClear
	{
	public:
		class FString                                              Description;                                             // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenBlockUntilUIIntialised
	 * Size -> 0x0010
	 */
	struct FEventAthenaLoadingScreenBlockUntilUIIntialised
	{
	public:
		class FString                                              Description;                                             // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenClose
	 * Size -> 0x0001
	 */
	struct FEventAthenaLoadingScreenClose
	{
	public:
		unsigned char                                              UnknownData_17XB[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenOpen
	 * Size -> 0x0001
	 */
	struct FEventAthenaLoadingScreenOpen
	{
	public:
		unsigned char                                              UnknownData_PJOR[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
