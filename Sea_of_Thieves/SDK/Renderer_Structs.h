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
	 * Enum Renderer.ERefChangeFadPhase
	 */
	enum class ERefChangeFadPhase : uint8_t
	{
		NoFading = 0,
		FadeOut  = 1,
		FadeIn   = 2,
		MAX      = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
