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
	 * Enum CableComponent.EFollowCableMovementMode
	 */
	enum class EFollowCableMovementMode : uint8_t
	{
		StopAtEnd = 0,
		Loop      = 1,
		PingPong  = 2,
		MAX       = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
