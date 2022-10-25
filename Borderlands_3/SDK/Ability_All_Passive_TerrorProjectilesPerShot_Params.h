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
	 * Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.GetFiringComponent
	 */
	struct UAbility_All_Passive_TerrorProjectilesPerShot_C_GetFiringComponent_Params
	{
	public:
		class AWeapon*                                             InWeapon;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWeaponFireProjectileComponent*                      FireComponent;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.WeaponUsed
	 */
	struct UAbility_All_Passive_TerrorProjectilesPerShot_C_WeaponUsed_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.WeaponChanged
	 */
	struct UAbility_All_Passive_TerrorProjectilesPerShot_C_WeaponChanged_Params
	{
	public:
		class AWeapon*                                             NewWeapon;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AWeapon*                                             LastWeapon;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.AddProjectilePerShot
	 */
	struct UAbility_All_Passive_TerrorProjectilesPerShot_C_AddProjectilePerShot_Params
	{
	public:
		class AWeapon*                                             InWeapon;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.OnActivated
	 */
	struct UAbility_All_Passive_TerrorProjectilesPerShot_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.ExecuteUbergraph_Ability_All_Passive_TerrorProjectilesPerShot
	 */
	struct UAbility_All_Passive_TerrorProjectilesPerShot_C_ExecuteUbergraph_Ability_All_Passive_TerrorProjectilesPerShot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_06KF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
