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
	 * Enum ServiceHttp.EServiceHttpMetricsLevel
	 */
	enum class EServiceHttpMetricsLevel : uint8_t
	{
		None                        = 0,
		Failed                      = 1,
		FailedOrAborted             = 2,
		FailedOrAbortedOrNonSuccess = 3,
		All                         = 4,
		MAX                         = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
