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
	 * Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.AnointOnActionSkillActivated
	 */
	struct UAbility_All_SkillStart_OverchargeShield_C_AnointOnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.SkillStarted
	 */
	struct UAbility_All_SkillStart_OverchargeShield_C_SkillStarted_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.DrainShield
	 */
	struct UAbility_All_SkillStart_OverchargeShield_C_DrainShield_Params
	{	};

	/**
	 * Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.ResetShield
	 */
	struct UAbility_All_SkillStart_OverchargeShield_C_ResetShield_Params
	{	};

	/**
	 * Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.ExecuteUbergraph_Ability_All_SkillStart_OverchargeShield
	 */
	struct UAbility_All_SkillStart_OverchargeShield_C_ExecuteUbergraph_Ability_All_SkillStart_OverchargeShield_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QNO1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
