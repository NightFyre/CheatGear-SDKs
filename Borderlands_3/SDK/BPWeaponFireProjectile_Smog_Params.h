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
	 * Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.GetShotLightProjectileData
	 */
	struct UBPWeaponFireProjectile_Smog_C_GetShotLightProjectileData_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.OnCausedDeath_Event
	 */
	struct UBPWeaponFireProjectile_Smog_C_OnCausedDeath_Event_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.K2_OnActivated
	 */
	struct UBPWeaponFireProjectile_Smog_C_K2_OnActivated_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.K2_OnDeactivated
	 */
	struct UBPWeaponFireProjectile_Smog_C_K2_OnDeactivated_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.ExecuteUbergraph_BPWeaponFireProjectile_Smog
	 */
	struct UBPWeaponFireProjectile_Smog_C_ExecuteUbergraph_BPWeaponFireProjectile_Smog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YDVM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
