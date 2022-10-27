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
	 * Function BPWeaponFireProjectileComponent_PI.BPWeaponFireProjectileComponent_PI_C.QueryBuiltStacks
	 */
	struct UBPWeaponFireProjectileComponent_PI_C_QueryBuiltStacks_Params
	{
	public:
		unsigned char                                              Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WW3B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NumberOfInstances;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeaponFireProjectileComponent_PI.BPWeaponFireProjectileComponent_PI_C.QueryActiveBonus
	 */
	struct UBPWeaponFireProjectileComponent_PI_C_QueryActiveBonus_Params
	{
	public:
		int32_t                                                    NumberOfInstances;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeaponFireProjectileComponent_PI.BPWeaponFireProjectileComponent_PI_C.GetShotLightProjectileData
	 */
	struct UBPWeaponFireProjectileComponent_PI_C_GetShotLightProjectileData_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
