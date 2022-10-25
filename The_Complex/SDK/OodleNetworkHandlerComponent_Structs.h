#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Enum OodleNetworkHandlerComponent.EOodleNetResult
	 */
	enum class EOodleNetResult : uint8_t
	{
		Unknown                    = 0,
		Success                    = 1,
		OodleDecodeFailed          = 2,
		OodleSerializePayloadFail  = 3,
		OodleBadDecompressedLength = 4,
		OodleNoDictionary          = 5,
		MAX                        = 6
	};

	/**
	 * Enum OodleNetworkHandlerComponent.EOodleNetworkEnableMode
	 */
	enum class EOodleNetworkEnableMode : uint8_t
	{
		AlwaysEnabled                = 0,
		WhenCompressedPacketReceived = 1,
		MAX                          = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
