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
	 * Function RareMediaComponents.MediaSubtitleComponent.SetMediaPlayer
	 */
	struct UMediaSubtitleComponent_SetMediaPlayer_Params
	{
	public:
		class UMediaPlayer*                                        NewMediaPlayer;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareMediaComponents.MediaSubtitleComponent.GetMediaPlayer
	 */
	struct UMediaSubtitleComponent_GetMediaPlayer_Params
	{
	public:
		class UMediaPlayer*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
