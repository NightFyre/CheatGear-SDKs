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
	 * Enum AndroidFileServer.EAFSActiveType
	 */
	enum class EAFSActiveType : uint8_t
	{
		None        = 0,
		USBOnly     = 1,
		NetworkOnly = 2,
		Combined    = 3,
		MAX         = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
