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
	 * Enum BlockoutToolsPlugin.EBlockoutMaterialType
	 */
	enum class EBlockoutMaterialType : uint8_t
	{
		BlockoutMaterialType_Grid           = 0,
		BlockoutMaterialType_CustomMaterial = 1,
		BlockoutMaterialType_MAX            = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
