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
	 * Enum GameStatsClient.EStatRequestState
	 */
	enum class EStatRequestState : uint8_t
	{
		Idle     = 0,
		Queued   = 1,
		InFlight = 2,
		MAX      = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
