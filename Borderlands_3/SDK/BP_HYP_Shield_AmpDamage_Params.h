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
	 * Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.OnShieldCreated
	 */
	struct UBP_HYP_Shield_AmpDamage_C_OnShieldCreated_Params
	{	};

	/**
	 * Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.OnTakeWeaponShieldDamage
	 */
	struct UBP_HYP_Shield_AmpDamage_C_OnTakeWeaponShieldDamage_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ShieldDamage;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6Z9L[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.OnShieldBreak
	 */
	struct UBP_HYP_Shield_AmpDamage_C_OnShieldBreak_Params
	{	};

	/**
	 * Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.Weapon Equip
	 */
	struct UBP_HYP_Shield_AmpDamage_C_Weapon_Equip_Params
	{	};

	/**
	 * Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.Weapon Put Down
	 */
	struct UBP_HYP_Shield_AmpDamage_C_Weapon_Put_Down_Params
	{
	public:
		class AWeapon*                                             Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.OnWeaponUsed
	 */
	struct UBP_HYP_Shield_AmpDamage_C_OnWeaponUsed_Params
	{	};

	/**
	 * Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.ExecuteUbergraph_BP_HYP_Shield_AmpDamage
	 */
	struct UBP_HYP_Shield_AmpDamage_C_ExecuteUbergraph_BP_HYP_Shield_AmpDamage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
