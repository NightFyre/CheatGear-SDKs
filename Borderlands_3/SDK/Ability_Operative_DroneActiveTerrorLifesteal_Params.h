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
	 * Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.OnActivated
	 */
	struct UAbility_Operative_DroneActiveTerrorLifesteal_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.DroneStarted
	 */
	struct UAbility_Operative_DroneActiveTerrorLifesteal_C_DroneStarted_Params
	{
	public:
		EOperativeGadgets                                          ActionSkill;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.DroneEnded
	 */
	struct UAbility_Operative_DroneActiveTerrorLifesteal_C_DroneEnded_Params
	{
	public:
		EOperativeGadgets                                          ActionSkill;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.CausedDamage
	 */
	struct UAbility_Operative_DroneActiveTerrorLifesteal_C_CausedDamage_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GPAZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.ExecuteUbergraph_Ability_Operative_DroneActiveTerrorLifesteal
	 */
	struct UAbility_Operative_DroneActiveTerrorLifesteal_C_ExecuteUbergraph_Ability_Operative_DroneActiveTerrorLifesteal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F31E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
