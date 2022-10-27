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
	 * Enum GbxBlueprintFunctionLibraries.ECompareTag
	 */
	enum class ECompareTag : uint8_t
	{
		ContainsSameTags = 0,
		UniqueTags       = 1,
		MAX              = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
