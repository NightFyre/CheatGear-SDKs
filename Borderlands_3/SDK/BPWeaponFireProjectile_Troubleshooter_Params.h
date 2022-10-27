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
	 * Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.K2_OnActivated
	 */
	struct UBPWeaponFireProjectile_Troubleshooter_C_K2_OnActivated_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.WeaponFired
	 */
	struct UBPWeaponFireProjectile_Troubleshooter_C_WeaponFired_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.OnCausedDamage
	 */
	struct UBPWeaponFireProjectile_Troubleshooter_C_OnCausedDamage_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HQAG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.ClearLastTarget
	 */
	struct UBPWeaponFireProjectile_Troubleshooter_C_ClearLastTarget_Params
	{	};

	/**
	 * Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.ExecuteUbergraph_BPWeaponFireProjectile_Troubleshooter
	 */
	struct UBPWeaponFireProjectile_Troubleshooter_C_ExecuteUbergraph_BPWeaponFireProjectile_Troubleshooter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FO8Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
