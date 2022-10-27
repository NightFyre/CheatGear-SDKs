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
	 * Enum EnchantedCompass.ETargetUpdateReason
	 */
	enum class ETargetUpdateReason : uint8_t
	{
		Update  = 0,
		Replace = 1,
		MAX     = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EnchantedCompass.CompassTargetSet
	 * Size -> 0x000C
	 */
	struct FCompassTargetSet
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
