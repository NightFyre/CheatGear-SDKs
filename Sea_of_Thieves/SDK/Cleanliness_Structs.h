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
	 * Enum Cleanliness.EDirtinessType
	 */
	enum class EDirtinessType : uint8_t
	{
		Soot  = 0,
		Dust  = 1,
		MAX   = 2,
		MAX01 = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Cleanliness.CleanlinessInfo
	 * Size -> 0x000C
	 */
	struct FCleanlinessInfo
	{
	public:
		EDirtinessType                                             DirtinessType;                                           // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PRLG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Strength;                                                // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       QuickClean;                                              // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ULM2[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Cleanliness.EventQuickCleanRequest
	 * Size -> 0x0001
	 */
	struct FEventQuickCleanRequest
	{
	public:
		unsigned char                                              UnknownData_YDIO[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
