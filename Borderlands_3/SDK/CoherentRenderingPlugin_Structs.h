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
	 * Enum CoherentRenderingPlugin.ECoherentRenderingSettingsSeverity
	 */
	enum class ECoherentRenderingSettingsSeverity : uint8_t
	{
		Trace         = 0,
		Debug         = 1,
		Info          = 2,
		Warning       = 3,
		AssertFailure = 4,
		Error         = 5,
		MAX           = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
