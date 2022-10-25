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
	 * Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.DisableWaterBottle
	 */
	struct ABPWeap_COV_BaseWeapon_C_DisableWaterBottle_Params
	{	};

	/**
	 * Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.EnableWaterBottle
	 */
	struct ABPWeap_COV_BaseWeapon_C_EnableWaterBottle_Params
	{	};

	/**
	 * Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.GetRepairStyle
	 */
	struct ABPWeap_COV_BaseWeapon_C_GetRepairStyle_Params
	{
	public:
		int32_t                                                    Param;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5VRP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.UserConstructionScript
	 */
	struct ABPWeap_COV_BaseWeapon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.ReceiveBeginPlay
	 */
	struct ABPWeap_COV_BaseWeapon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponOnFire
	 */
	struct ABPWeap_COV_BaseWeapon_C_WeaponOnFire_Params
	{	};

	/**
	 * Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponPutOut
	 */
	struct ABPWeap_COV_BaseWeapon_C_WeaponPutOut_Params
	{	};

	/**
	 * Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponSmokeStop
	 */
	struct ABPWeap_COV_BaseWeapon_C_WeaponSmokeStop_Params
	{	};

	/**
	 * Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.FirstPersonCreated
	 */
	struct ABPWeap_COV_BaseWeapon_C_FirstPersonCreated_Params
	{	};

	/**
	 * Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.EngineStart
	 */
	struct ABPWeap_COV_BaseWeapon_C_EngineStart_Params
	{	};

	/**
	 * Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.Notify_ReloadEnded
	 */
	struct ABPWeap_COV_BaseWeapon_C_Notify_ReloadEnded_Params
	{
	public:
		bool                                                       bCompleted;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.StarterSparks
	 */
	struct ABPWeap_COV_BaseWeapon_C_StarterSparks_Params
	{	};

	/**
	 * Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponStartWatering
	 */
	struct ABPWeap_COV_BaseWeapon_C_WeaponStartWatering_Params
	{	};

	/**
	 * Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.ExecuteUbergraph_BPWeap_COV_BaseWeapon
	 */
	struct ABPWeap_COV_BaseWeapon_C_ExecuteUbergraph_BPWeap_COV_BaseWeapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IIG6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
