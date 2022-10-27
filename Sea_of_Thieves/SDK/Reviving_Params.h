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
	 * Function Reviving.DeathSelfInteractionComponent.SetGiveUpAvaliable
	 */
	struct UDeathSelfInteractionComponent_SetGiveUpAvaliable_Params
	{	};

	/**
	 * Function Reviving.DeathSelfInteractionComponent.OnRep_HasGivenUp
	 */
	struct UDeathSelfInteractionComponent_OnRep_HasGivenUp_Params
	{	};

	/**
	 * Function Reviving.ReviveComponent.OnRep_ReviveState
	 */
	struct UReviveComponent_OnRep_ReviveState_Params
	{
	public:
		EReviveState                                               PreviousReviveState;                                     // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Reviving.ReviveComponent.HandleOwningCharacterEndPlay
	 */
	struct UReviveComponent_HandleOwningCharacterEndPlay_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
