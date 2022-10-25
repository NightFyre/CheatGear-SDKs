#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function BPInterface_IronBear.BPInterface_IronBear_C.IronBear_DoMeleeAttack
	 */
	struct UBPInterface_IronBear_C_IronBear_DoMeleeAttack_Params
	{	};

	/**
	 * Function BPInterface_IronBear.BPInterface_IronBear_C.ActivateNukeScreenIcons
	 */
	struct UBPInterface_IronBear_C_ActivateNukeScreenIcons_Params
	{
	public:
		EIronBearHardPointOrientation                              HardpointOrientation;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPInterface_IronBear.BPInterface_IronBear_C.SetBubbleShieldFXModOverrideEnabled
	 */
	struct UBPInterface_IronBear_C_SetBubbleShieldFXModOverrideEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
