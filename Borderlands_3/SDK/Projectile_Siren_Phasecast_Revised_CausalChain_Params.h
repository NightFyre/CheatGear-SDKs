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
	 * Function Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C.CalculateDamage
	 */
	struct AProjectile_Siren_Phasecast_Revised_CausalChain_C_CalculateDamage_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2YMY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C.UserConstructionScript
	 */
	struct AProjectile_Siren_Phasecast_Revised_CausalChain_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C.DoDamageToEnemy
	 */
	struct AProjectile_Siren_Phasecast_Revised_CausalChain_C_DoDamageToEnemy_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_CausalChain
	 */
	struct AProjectile_Siren_Phasecast_Revised_CausalChain_C_ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_CausalChain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N9Z5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
