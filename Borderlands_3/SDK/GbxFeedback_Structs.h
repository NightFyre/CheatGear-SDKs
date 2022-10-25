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
	 * Enum GbxFeedback.EPlatform
	 */
	enum class EPlatform : uint8_t
	{
		Windows     = 0,
		PS4         = 1,
		XBoxOne     = 2,
		PS5         = 3,
		XBoxSeriesX = 4,
		MAX         = 5
	};

	/**
	 * Enum GbxFeedback.ERumbleSlot
	 */
	enum class ERumbleSlot : uint8_t
	{
		LeftSmall  = 0,
		LeftLarge  = 1,
		RightSmall = 2,
		RightLarge = 3,
		MAX        = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxFeedback.RumbleSlotMapping
	 * Size -> 0x0080
	 */
	struct FRumbleSlotMapping
	{
	public:
		ERumbleSlot                                                MapSlotTo;                                               // 0x0000(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFKM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  MappingScalar;                                           // 0x0008(0x0078) Edit, Config, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxFeedback.RumbleRemap
	 * Size -> 0x0200
	 */
	struct FRumbleRemap
	{
	public:
		struct FRumbleSlotMapping                                  LeftSmallScalar;                                         // 0x0000(0x0080) Edit, Config, NativeAccessSpecifierPublic
		struct FRumbleSlotMapping                                  LeftLargeScalar;                                         // 0x0080(0x0080) Edit, Config, NativeAccessSpecifierPublic
		struct FRumbleSlotMapping                                  RightSmallScalar;                                        // 0x0100(0x0080) Edit, Config, NativeAccessSpecifierPublic
		struct FRumbleSlotMapping                                  RightLargeScalar;                                        // 0x0180(0x0080) Edit, Config, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxFeedback.RemapByConsole
	 * Size -> 0x0210
	 */
	struct FRemapByConsole
	{
	public:
		class FString                                              ConsoleName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRumbleRemap                                        RemapValues;                                             // 0x0010(0x0200) Edit, Config, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
