#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * ScriptStruct RamaMeleePlugin.RamaMeleeDamageInfo
	 * Size -> 0x0018
	 */
	struct FRamaMeleeDamageInfo
	{
	public:
		int32_t                                                    BodyIndex;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XLX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ShapeIndicies;                                           // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RamaMeleePlugin.RamaMeleeDamageMap
	 * Size -> 0x0010
	 */
	struct FRamaMeleeDamageMap
	{
	public:
		TArray<struct FRamaMeleeDamageInfo>                        Bodies;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
