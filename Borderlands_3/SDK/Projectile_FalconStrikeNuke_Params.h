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
	 * Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.InitMissile
	 */
	struct AProjectile_FalconStrikeNuke_C_InitMissile_Params
	{	};

	/**
	 * Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.UserConstructionScript
	 */
	struct AProjectile_FalconStrikeNuke_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.GbxAsyncRequest_Miss_FB153E514BCFA0D9652350A562778064
	 */
	struct AProjectile_FalconStrikeNuke_C_GbxAsyncRequest_Miss_FB153E514BCFA0D9652350A562778064_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.GbxAsyncRequest_Hit_FB153E514BCFA0D9652350A562778064
	 */
	struct AProjectile_FalconStrikeNuke_C_GbxAsyncRequest_Hit_FB153E514BCFA0D9652350A562778064_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.ReceiveBeginPlay
	 */
	struct AProjectile_FalconStrikeNuke_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.OnExplode
	 */
	struct AProjectile_FalconStrikeNuke_C_OnExplode_Params
	{	};

	/**
	 * Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.StartAsyncLineTrace
	 */
	struct AProjectile_FalconStrikeNuke_C_StartAsyncLineTrace_Params
	{	};

	/**
	 * Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.ResumeBeginPlay
	 */
	struct AProjectile_FalconStrikeNuke_C_ResumeBeginPlay_Params
	{	};

	/**
	 * Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.ExecuteUbergraph_Projectile_FalconStrikeNuke
	 */
	struct AProjectile_FalconStrikeNuke_C_ExecuteUbergraph_Projectile_FalconStrikeNuke_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UOV8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
