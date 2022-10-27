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
	 * Function Music.MusicZoneInterface.CanPlayForPlayer
	 */
	struct UMusicZoneInterface_CanPlayForPlayer_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Music.MusicZoneComponent.GetEmitter
	 */
	struct UMusicZoneComponent_GetEmitter_Params
	{
	public:
		struct FWwiseEmitter                                       ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Music.MusicZoneComponent.DisableZone
	 */
	struct UMusicZoneComponent_DisableZone_Params
	{	};

	/**
	 * Function Music.MusicZoneComponent.Client_StopMusicAndDisableZone
	 */
	struct UMusicZoneComponent_Client_StopMusicAndDisableZone_Params
	{	};

	/**
	 * Function Music.MusicZoneComponent.Client_PlayOneShot
	 */
	struct UMusicZoneComponent_Client_PlayOneShot_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Music.MusicZoneComponent.ActivateZone
	 */
	struct UMusicZoneComponent_ActivateZone_Params
	{	};

	/**
	 * Function Music.AISpawnerMusicZoneComponent.OnRep_SpawnerState
	 */
	struct UAISpawnerMusicZoneComponent_OnRep_SpawnerState_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
