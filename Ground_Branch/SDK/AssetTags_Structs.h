#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Enum AssetTags.ECollectionScriptingShareType
	 */
	enum class ECollectionScriptingShareType : uint8_t
	{
		Local   = 0,
		Private = 1,
		Shared  = 2,
		MAX     = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
