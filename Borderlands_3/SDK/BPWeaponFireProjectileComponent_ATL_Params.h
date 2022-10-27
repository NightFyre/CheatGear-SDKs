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
	 * Function BPWeaponFireProjectileComponent_ATL.BPWeaponFireProjectileComponent_ATL_C.GetLockedTarget
	 */
	struct UBPWeaponFireProjectileComponent_ATL_C_GetLockedTarget_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeaponFireProjectileComponent_ATL.BPWeaponFireProjectileComponent_ATL_C.ReceiveBeginPlay
	 */
	struct UBPWeaponFireProjectileComponent_ATL_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_ATL.BPWeaponFireProjectileComponent_ATL_C.Notify_WeaponFired
	 */
	struct UBPWeaponFireProjectileComponent_ATL_C_Notify_WeaponFired_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_ATL.BPWeaponFireProjectileComponent_ATL_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL
	 */
	struct UBPWeaponFireProjectileComponent_ATL_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_681E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
