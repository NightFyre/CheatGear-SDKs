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
	 * Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.ReceiveBeginPlay
	 */
	struct UBPWeaponFireProjectile_MAL_Flipper_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsedStarted_Event
	 */
	struct UBPWeaponFireProjectile_MAL_Flipper_C_NotifyUsedStarted_Event_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsedFinished_Event
	 */
	struct UBPWeaponFireProjectile_MAL_Flipper_C_NotifyUsedFinished_Event_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsed_Event
	 */
	struct UBPWeaponFireProjectile_MAL_Flipper_C_NotifyUsed_Event_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyReloadStarted_Event
	 */
	struct UBPWeaponFireProjectile_MAL_Flipper_C_NotifyReloadStarted_Event_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.ExecuteUbergraph_BPWeaponFireProjectile_MAL_Flipper
	 */
	struct UBPWeaponFireProjectile_MAL_Flipper_C_ExecuteUbergraph_BPWeaponFireProjectile_MAL_Flipper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
