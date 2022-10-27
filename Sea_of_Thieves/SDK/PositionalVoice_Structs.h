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
	 * Enum PositionalVoice.EVoiceChatState
	 */
	enum class EVoiceChatState : uint8_t
	{
		Silent   = 0,
		Talking  = 1,
		Muted    = 2,
		Deafened = 3,
		MAX      = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
