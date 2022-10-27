#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Enum ChaosCloth.EChaosWeightMapTarget
	 */
	enum class EChaosWeightMapTarget : uint8_t
	{
		None                = 0,
		MaxDistance         = 1,
		BackstopDistance    = 2,
		BackstopRadius      = 3,
		AnimDriveMultiplier = 4,
		MAX                 = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
