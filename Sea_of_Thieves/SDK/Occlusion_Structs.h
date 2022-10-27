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
	 * Enum Occlusion.EOcclusionTypes
	 */
	enum class EOcclusionTypes : uint8_t
	{
		Visible  = 0,
		Occluded = 1,
		Unknown  = 2,
		MAX      = 3,
		MAX01    = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
