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
	 * Function BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C.ReceiveBeginPlay
	 */
	struct UBPWeaponFireProjectile_Gargoyle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C.NotifyReloadStart_Event
	 */
	struct UBPWeaponFireProjectile_Gargoyle_C_NotifyReloadStart_Event_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCompleted;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C.NotifyUsed_Event
	 */
	struct UBPWeaponFireProjectile_Gargoyle_C_NotifyUsed_Event_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C.ExecuteUbergraph_BPWeaponFireProjectile_Gargoyle
	 */
	struct UBPWeaponFireProjectile_Gargoyle_C_ExecuteUbergraph_BPWeaponFireProjectile_Gargoyle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HHNS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
