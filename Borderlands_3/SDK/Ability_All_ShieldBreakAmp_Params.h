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
	 * Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.ShieldDepleted
	 */
	struct UAbility_All_ShieldBreakAmp_C_ShieldDepleted_Params
	{
	public:
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.ShieldRefilled
	 */
	struct UAbility_All_ShieldBreakAmp_C_ShieldRefilled_Params
	{
	public:
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.ShotFired
	 */
	struct UAbility_All_ShieldBreakAmp_C_ShotFired_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.OnDeactivated
	 */
	struct UAbility_All_ShieldBreakAmp_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.OnActivated
	 */
	struct UAbility_All_ShieldBreakAmp_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.ExecuteUbergraph_Ability_All_ShieldBreakAmp
	 */
	struct UAbility_All_ShieldBreakAmp_C_ExecuteUbergraph_Ability_All_ShieldBreakAmp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A7ZK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
