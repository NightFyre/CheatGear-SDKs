#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Enum Sentry.ESentryLevel
	 */
	enum class ESentryLevel : uint8_t
	{
		Debug   = 0,
		Info    = 1,
		Warning = 2,
		Error   = 3,
		Fatal   = 4,
		MAX     = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
