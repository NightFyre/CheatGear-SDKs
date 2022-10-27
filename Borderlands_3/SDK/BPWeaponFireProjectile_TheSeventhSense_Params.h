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
	 * Function BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C.ReceiveBeginPlay
	 */
	struct UBPWeaponFireProjectile_TheSeventhSense_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C.NotifyReloadStart_Event
	 */
	struct UBPWeaponFireProjectile_TheSeventhSense_C_NotifyReloadStart_Event_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCompleted;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C.HomeOnReload
	 */
	struct UBPWeaponFireProjectile_TheSeventhSense_C_HomeOnReload_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C.ExecuteUbergraph_BPWeaponFireProjectile_TheSeventhSense
	 */
	struct UBPWeaponFireProjectile_TheSeventhSense_C_ExecuteUbergraph_BPWeaponFireProjectile_TheSeventhSense_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4HK7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
