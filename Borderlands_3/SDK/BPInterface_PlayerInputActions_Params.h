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
	 * Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.DoMelee
	 */
	struct UBPInterface_PlayerInputActions_C_DoMelee_Params
	{	};

	/**
	 * Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.GroundSlam_End
	 */
	struct UBPInterface_PlayerInputActions_C_GroundSlam_End_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
