#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayBuffAudio
	 */
	struct UOceanCrawlerAudioBroadcaster_Multicast_PlayBuffAudio_Params
	{
	public:
		struct FEventOceanCrawlerAIBuffAudioRequest                InRequest;                                               // 0x0000(0x0001)  (ConstParm, Parm, ReferenceParm)
	};

	/**
	 * Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayAudio
	 */
	struct UOceanCrawlerAudioBroadcaster_Multicast_PlayAudio_Params
	{
	public:
		EOceanCrawlerAbilityAudioKey                               InAudioKey;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9O1L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InAudioDelay;                                            // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
