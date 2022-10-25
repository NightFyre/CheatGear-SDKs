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
	 * Function BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C.ReceiveBeginPlay
	 */
	struct UBPWeaponFireProjectile_Shoveler_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C.NotifyReloadStart_Event
	 */
	struct UBPWeaponFireProjectile_Shoveler_C_NotifyReloadStart_Event_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCompleted;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C.K2_OnDeactivated
	 */
	struct UBPWeaponFireProjectile_Shoveler_C_K2_OnDeactivated_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C.ExecuteUbergraph_BPWeaponFireProjectile_Shoveler
	 */
	struct UBPWeaponFireProjectile_Shoveler_C_ExecuteUbergraph_BPWeaponFireProjectile_Shoveler_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QP59[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
