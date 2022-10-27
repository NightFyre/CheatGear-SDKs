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
	 * Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ReloadTime
	 */
	struct UBPWeaponFireProjectile_Quickdraw_C_ReloadTime_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ApplyShotModAndReload
	 */
	struct UBPWeaponFireProjectile_Quickdraw_C_ApplyShotModAndReload_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ReloadTimer
	 */
	struct UBPWeaponFireProjectile_Quickdraw_C_ReloadTimer_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.K2_OnActivated
	 */
	struct UBPWeaponFireProjectile_Quickdraw_C_K2_OnActivated_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.K2_OnDeactivated
	 */
	struct UBPWeaponFireProjectile_Quickdraw_C_K2_OnDeactivated_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ReceiveEndPlay
	 */
	struct UBPWeaponFireProjectile_Quickdraw_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ExecuteUbergraph_BPWeaponFireProjectile_Quickdraw
	 */
	struct UBPWeaponFireProjectile_Quickdraw_C_ExecuteUbergraph_BPWeaponFireProjectile_Quickdraw_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
