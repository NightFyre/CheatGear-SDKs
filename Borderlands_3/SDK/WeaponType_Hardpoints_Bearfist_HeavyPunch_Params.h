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
	 * Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.DoMod1Effect
	 */
	struct AWeaponType_Hardpoints_Bearfist_HeavyPunch_C_DoMod1Effect_Params
	{
	public:
		class UDamageSource*                                       InDamageSource;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              InDamageCauser;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.UserConstructionScript
	 */
	struct AWeaponType_Hardpoints_Bearfist_HeavyPunch_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.CausedDamage_BearFist
	 */
	struct AWeaponType_Hardpoints_Bearfist_HeavyPunch_C_CausedDamage_BearFist_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M8XV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.BndEvt__IronBearWeaponUseComponent_Jackhammer_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_WeaponType_Hardpoints_Bearfist_HeavyPunch
	 */
	struct AWeaponType_Hardpoints_Bearfist_HeavyPunch_C_BndEvt__IronBearWeaponUseComponent_Jackhammer_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_WeaponType_Hardpoints_Bearfist_HeavyPunch_Params
	{	};

	/**
	 * Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.ExecuteUbergraph_WeaponType_Hardpoints_Bearfist_HeavyPunch
	 */
	struct AWeaponType_Hardpoints_Bearfist_HeavyPunch_C_ExecuteUbergraph_WeaponType_Hardpoints_Bearfist_HeavyPunch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MZ06[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
