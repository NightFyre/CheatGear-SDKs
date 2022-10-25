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
	 * ScriptStruct DebugMenu.DebugMenuDataAssetEntry
	 * Size -> 0x0038
	 */
	struct FDebugMenuDataAssetEntry
	{
	public:
		class FString                                              MenuPath;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              DisplayName;                                             // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ConsoleCommand;                                          // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		bool                                                       CloseMenuWhenExecuted;                                   // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AvailableInShippingBuilds;                               // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AddToCommonlyUsedMenu;                                   // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KCA9[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DebugMenu.DebugMenuButtonShortcut
	 * Size -> 0x0040
	 */
	struct FDebugMenuButtonShortcut
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ConsoleCommand;                                          // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		TArray<struct FKey>                                        Buttons;                                                 // 0x0020(0x0010) Edit, ZeroConstructor
		float                                                      RequiredHoldTime;                                        // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AvailableInShippingBuilds;                               // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GK7L[0xB];                                   // 0x0035(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DebugMenu.DebugMenuUserItem
	 * Size -> 0x0020
	 */
	struct FDebugMenuUserItem
	{
	public:
		class FString                                              path;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              Command;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct DebugMenu.DebugErrorHappeningEvent
	 * Size -> 0x0001
	 */
	struct FDebugErrorHappeningEvent
	{
	public:
		unsigned char                                              UnknownData_K615[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DebugMenu.DebugMenuOptionExecutedEvent
	 * Size -> 0x0020
	 */
	struct FDebugMenuOptionExecutedEvent
	{
	public:
		class FString                                              DebugMenuItemName;                                       // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ConsoleCommand;                                          // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
