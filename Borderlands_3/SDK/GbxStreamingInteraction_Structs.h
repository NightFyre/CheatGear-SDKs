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
	 * Enum GbxStreamingInteraction.EStreamingService
	 */
	enum class EStreamingService : uint8_t
	{
		None   = 0,
		Twitch = 1,
		Mixer  = 2,
		MAX    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxStreamingInteraction.InteractiveStreamingServiceViewer
	 * Size -> 0x0020
	 */
	struct FInteractiveStreamingServiceViewer
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
