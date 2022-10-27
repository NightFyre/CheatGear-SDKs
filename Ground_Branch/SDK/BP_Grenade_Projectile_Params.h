#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_Grenade_Projectile.BP_Grenade_Projectile_C.ReceiveBeginPlay
	 */
	struct ABP_Grenade_Projectile_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Grenade_Projectile.BP_Grenade_Projectile_C.Explode
	 */
	struct ABP_Grenade_Projectile_C_Explode_Params
	{	};

	/**
	 * Function BP_Grenade_Projectile.BP_Grenade_Projectile_C.DetachSppon
	 */
	struct ABP_Grenade_Projectile_C_DetachSppon_Params
	{	};

	/**
	 * Function BP_Grenade_Projectile.BP_Grenade_Projectile_C.ExecuteUbergraph_BP_Grenade_Projectile
	 */
	struct ABP_Grenade_Projectile_C_ExecuteUbergraph_BP_Grenade_Projectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ABXM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
