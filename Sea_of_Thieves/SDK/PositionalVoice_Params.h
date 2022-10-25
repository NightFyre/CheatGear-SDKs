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
	 * Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation
	 */
	struct UVoiceChatEmitterInterface_GetVoiceLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy
	 */
	struct UVoiceChatEmitterInterface_GetVoiceAudioEmitterProxy_Params
	{
	public:
		struct FWwiseEmitter                                       EmitterProxy;                                            // 0x0000(0x0020)  (Parm, OutParm)
	};

	/**
	 * Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler
	 */
	struct UVoiceChatEmitterInterface_GetVoiceAttenuationScaler_Params
	{
	public:
		unsigned char                                              UnknownData_ONRZ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
