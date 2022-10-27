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
	 * Function Action_WeaponMelee_RH_Success.Action_WeaponMelee_RH_Success_C.PlayScreenParticle
	 */
	struct UAction_WeaponMelee_RH_Success_C_PlayScreenParticle_Params
	{	};

	/**
	 * Function Action_WeaponMelee_RH_Success.Action_WeaponMelee_RH_Success_C.ExecuteUbergraph_Action_WeaponMelee_RH_Success
	 */
	struct UAction_WeaponMelee_RH_Success_C_ExecuteUbergraph_Action_WeaponMelee_RH_Success_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HGUV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
