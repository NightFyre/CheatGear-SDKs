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
	 * Enum TypedElementRuntime.ETypedElementChildInclusionMethod
	 */
	enum class ETypedElementChildInclusionMethod : uint8_t
	{
		None      = 0,
		Immediate = 1,
		Recursive = 2,
		MAX       = 3
	};

	/**
	 * Enum TypedElementRuntime.ETypedElementSelectionMethod
	 */
	enum class ETypedElementSelectionMethod : uint8_t
	{
		Primary   = 0,
		Secondary = 1,
		MAX       = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TypedElementRuntime.TypedElementSelectionOptions
	 * Size -> 0x0005
	 */
	struct FTypedElementSelectionOptions
	{
	public:
		bool                                                       bAllowHidden;                                            // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAllowGroups;                                            // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAllowLegacyNotifications;                               // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bWarnIfLocked;                                           // 0x0003(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ETypedElementChildInclusionMethod                          ChildElementInclusionMethod;                             // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct TypedElementRuntime.TypedElementSelectionSetState
	 * Size -> 0x0018
	 */
	struct FTypedElementSelectionSetState
	{
	public:
		TWeakObjectPtr<class UTypedElementSelectionSet>            CreatedFromSelectionSet;                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DM34[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TypedElementRuntime.TypedElementIsSelectedOptions
	 * Size -> 0x0001
	 */
	struct FTypedElementIsSelectedOptions
	{
	public:
		bool                                                       bAllowIndirect;                                          // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct TypedElementRuntime.TypedElementSelectionNormalizationOptions
	 * Size -> 0x0002
	 */
	struct FTypedElementSelectionNormalizationOptions
	{
	public:
		bool                                                       bExpandGroups;                                           // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bFollowAttachment;                                       // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
