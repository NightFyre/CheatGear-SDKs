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
	 * Enum KnockbackFramework.ESolidState
	 */
	enum class ESolidState : uint8_t
	{
		Disabled  = 0,
		Knockback = 1,
		Solid     = 2,
		MAX       = 3
	};

	/**
	 * Enum KnockbackFramework.EKnockbackType
	 */
	enum class EKnockbackType : uint8_t
	{
		AwayFromCentre = 0,
		TowardsActor   = 1,
		MAX            = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct KnockbackFramework.KnockbackableInfo
	 * Size -> 0x0020
	 */
	struct FKnockbackableInfo
	{
	public:
		unsigned char                                              UnknownData_VLJE[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
