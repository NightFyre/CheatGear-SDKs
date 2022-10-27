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
	 * Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.RemoveAmmo
	 */
	struct ATEDProjectile_TenGallon_C_RemoveAmmo_Params
	{	};

	/**
	 * Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.UserConstructionScript
	 */
	struct ATEDProjectile_TenGallon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.GbxAsyncRequest_Spawned_FEAE3B894C826C7A82741594B3C3BAB6
	 */
	struct ATEDProjectile_TenGallon_C_GbxAsyncRequest_Spawned_FEAE3B894C826C7A82741594B3C3BAB6_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InstanceIndex;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.ReceiveBeginPlay
	 */
	struct ATEDProjectile_TenGallon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.OnExplode
	 */
	struct ATEDProjectile_TenGallon_C_OnExplode_Params
	{	};

	/**
	 * Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.ExecuteUbergraph_TEDProjectile_TenGallon
	 */
	struct ATEDProjectile_TenGallon_C_ExecuteUbergraph_TEDProjectile_TenGallon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GG4B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
