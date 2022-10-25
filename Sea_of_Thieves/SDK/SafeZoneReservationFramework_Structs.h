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
	 * Enum SafeZoneReservationFramework.ESafeZoneState
	 */
	enum class ESafeZoneState : uint8_t
	{
		Initial     = 0,
		Activated   = 1,
		Deactivated = 2,
		MAX         = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
