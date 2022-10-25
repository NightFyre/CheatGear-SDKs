#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Enum FSR2TemporalUpscaling.EFSR2HistoryFormat
	 */
	enum class EFSR2HistoryFormat : uint8_t
	{
		FloatRGBA      = 0,
		FloatR11G11B10 = 1,
		MAX            = 2
	};

	/**
	 * Enum FSR2TemporalUpscaling.EFSR2QualityMode
	 */
	enum class EFSR2QualityMode : uint8_t
	{
		Unused           = 0,
		Quality          = 1,
		Balanced         = 2,
		Performance      = 3,
		UltraPerformance = 4,
		MAX              = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
