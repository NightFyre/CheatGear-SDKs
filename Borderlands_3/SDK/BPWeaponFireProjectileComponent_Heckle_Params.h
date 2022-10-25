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
	 * Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ReceiveBeginPlay
	 */
	struct UBPWeaponFireProjectileComponent_Heckle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ReloadStarted
	 */
	struct UBPWeaponFireProjectileComponent_Heckle_C_ReloadStarted_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.PowersCombined
	 */
	struct UBPWeaponFireProjectileComponent_Heckle_C_PowersCombined_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.K2_OnDeactivated
	 */
	struct UBPWeaponFireProjectileComponent_Heckle_C_K2_OnDeactivated_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.CheckPlayers
	 */
	struct UBPWeaponFireProjectileComponent_Heckle_C_CheckPlayers_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.K2_OnActivated
	 */
	struct UBPWeaponFireProjectileComponent_Heckle_C_K2_OnActivated_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Heckle
	 */
	struct UBPWeaponFireProjectileComponent_Heckle_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_Heckle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
