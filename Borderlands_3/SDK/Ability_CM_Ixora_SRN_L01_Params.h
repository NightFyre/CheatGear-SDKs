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
	 * Function Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C.CalculateAbilityState
	 */
	struct UAbility_CM_Ixora_SRN_L01_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C.OnActivated
	 */
	struct UAbility_CM_Ixora_SRN_L01_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C.SirenIxoraClassMod_OnActionSkillActivated
	 */
	struct UAbility_CM_Ixora_SRN_L01_C_SirenIxoraClassMod_OnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C.OnDeactivated
	 */
	struct UAbility_CM_Ixora_SRN_L01_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C.ExecuteUbergraph_Ability_CM_Ixora_SRN_L01
	 */
	struct UAbility_CM_Ixora_SRN_L01_C_ExecuteUbergraph_Ability_CM_Ixora_SRN_L01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8GLX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
