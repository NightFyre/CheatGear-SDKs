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
	 * Function Projectile_PetJabbermon_Barrel.Projectile_PetJabbermon_Barrel_C.UserConstructionScript
	 */
	struct AProjectile_PetJabbermon_Barrel_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_PetJabbermon_Barrel.Projectile_PetJabbermon_Barrel_C.ReceiveBeginPlay
	 */
	struct AProjectile_PetJabbermon_Barrel_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_PetJabbermon_Barrel.Projectile_PetJabbermon_Barrel_C.OnHitDamagableObject
	 */
	struct AProjectile_PetJabbermon_Barrel_C_OnHitDamagableObject_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_PetJabbermon_Barrel.Projectile_PetJabbermon_Barrel_C.OnHitWorld
	 */
	struct AProjectile_PetJabbermon_Barrel_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_PetJabbermon_Barrel.Projectile_PetJabbermon_Barrel_C.OnExplode
	 */
	struct AProjectile_PetJabbermon_Barrel_C_OnExplode_Params
	{	};

	/**
	 * Function Projectile_PetJabbermon_Barrel.Projectile_PetJabbermon_Barrel_C.ExecuteUbergraph_Projectile_PetJabbermon_Barrel
	 */
	struct AProjectile_PetJabbermon_Barrel_C_ExecuteUbergraph_Projectile_PetJabbermon_Barrel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
