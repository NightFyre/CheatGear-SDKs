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
	 * UserDefinedEnum MessageType.MessageType
	 */
	enum class EMessageType : uint8_t
	{
		MessageType_NewEnumerator0  = 0,
		MessageType_NewEnumerator1  = 1,
		MessageType_MessageType_MAX = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
