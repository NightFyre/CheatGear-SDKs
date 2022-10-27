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
	 * Enum AthenaInputMkII.ELeftStickScalarReason
	 */
	enum class ELeftStickScalarReason : uint8_t
	{
		Limping    = 0,
		Pacing     = 1,
		NumReasons = 2,
		MAX        = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
