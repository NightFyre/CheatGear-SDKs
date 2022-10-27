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
	 * Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.ReceiveBeginPlay
	 */
	struct UBPWeaponFireProjectile_TheNothing_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.NotifyUsed_Event
	 */
	struct UBPWeaponFireProjectile_TheNothing_C_NotifyUsed_Event_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.FireProjectiles
	 */
	struct UBPWeaponFireProjectile_TheNothing_C_FireProjectiles_Params
	{
	public:
		class UClass*                                              Data_Blueprint;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SampleCount;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.ExecuteUbergraph_BPWeaponFireProjectile_TheNothing
	 */
	struct UBPWeaponFireProjectile_TheNothing_C_ExecuteUbergraph_BPWeaponFireProjectile_TheNothing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
