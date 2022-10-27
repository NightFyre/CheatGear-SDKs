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
	 * Enum PreLoadScreenMoviePlayer.EMovieScreenPlaybackType
	 */
	enum class EMovieScreenPlaybackType : uint8_t
	{
		MT_MS_Normal      = 0,
		MT_MS_Looped      = 1,
		MT_MS_LoadingLoop = 2,
		MT_MS_MAX         = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
