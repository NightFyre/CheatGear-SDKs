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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameLiveStreaming.BlueprintLiveStreamInfo
	 * Size -> 0x0030
	 */
	struct FBlueprintLiveStreamInfo
	{
	public:
		class FString                                              GameName;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              StreamName;                                              // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              URL;                                                     // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
