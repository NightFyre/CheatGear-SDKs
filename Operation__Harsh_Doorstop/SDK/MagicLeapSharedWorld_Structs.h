#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
	 * Size -> 0x0010
	 */
	struct FMagicLeapSharedWorldSharedData
	{
	public:
		TArray<struct FGuid>                                       PinIDs;                                                  // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
	 * Size -> 0x0010
	 */
	struct FMagicLeapSharedWorldAlignmentTransforms
	{
	public:
		TArray<struct FTransform>                                  AlignmentTransforms;                                     // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldPinData
	 * Size -> 0x0020
	 */
	struct FMagicLeapSharedWorldPinData
	{
	public:
		struct FGuid                                               PinID;                                                   // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMagicLeapARPinState                                PinState;                                                // 0x0010(0x0010) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
	 * Size -> 0x0010
	 */
	struct FMagicLeapSharedWorldLocalData
	{
	public:
		TArray<struct FMagicLeapSharedWorldPinData>                LocalPins;                                               // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
