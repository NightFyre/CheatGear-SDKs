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
	 * Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.ShouldSimulateTriggerRelease
	 */
	struct ULightProjectile_Drone_CalledShot_C_ShouldSimulateTriggerRelease_Params
	{
	public:
		class AActor*                                              ProjectileOwner;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bRes;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PDTQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.OnBegin
	 */
	struct ULightProjectile_Drone_CalledShot_C_OnBegin_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.StartHoming
	 */
	struct ULightProjectile_Drone_CalledShot_C_StartHoming_Params
	{
	public:
		class UOakLightProjectile*                                 LightProjectile;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.TryEnableHoming
	 */
	struct ULightProjectile_Drone_CalledShot_C_TryEnableHoming_Params
	{
	public:
		class UOakLightProjectile*                                 LightProjectile;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.OnLifetimeExpired
	 */
	struct ULightProjectile_Drone_CalledShot_C_OnLifetimeExpired_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
