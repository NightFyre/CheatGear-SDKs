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
	 * Enum Tethering.ETetherConstrainMode
	 */
	enum class ETetherConstrainMode : uint8_t
	{
		ShrinkLength   = 0,
		ConstantLength = 1,
		GrowLength     = 2,
		MAX            = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Tethering.TetherProjectileImpact
	 * Size -> 0x0008
	 */
	struct FTetherProjectileImpact
	{
	public:
		class AActor*                                              HitActor;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
