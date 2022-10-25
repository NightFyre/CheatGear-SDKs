#pragma once

/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * Enum SteamVR.ESteamVRTrackedDeviceType
	 */
	enum class ESteamVRTrackedDeviceType : uint8_t
	{
		Controller        = 0,
		TrackingReference = 1,
		Other             = 2,
		Invalid           = 3,
		MAX               = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
