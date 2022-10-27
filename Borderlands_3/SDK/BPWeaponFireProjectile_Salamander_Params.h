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
	 * Function BPWeaponFireProjectile_Salamander.BPWeaponFireProjectile_Salamander_C.SetReadyForSplat
	 */
	struct UBPWeaponFireProjectile_Salamander_C_SetReadyForSplat_Params
	{
	public:
		bool                                                       bReadyForSplat;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeaponFireProjectile_Salamander.BPWeaponFireProjectile_Salamander_C.GetShotLightProjectileData
	 */
	struct UBPWeaponFireProjectile_Salamander_C_GetShotLightProjectileData_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
