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
	 * Function Passive_Siren_DLCSkill_3.Passive_Siren_DLCSkill_2_C.OnActivated
	 */
	struct UPassive_Siren_DLCSkill_2_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Siren_DLCSkill_3.Passive_Siren_DLCSkill_2_C.DLCSkill1_OnCausedElementalEffect
	 */
	struct UPassive_Siren_DLCSkill_2_C_DLCSkill1_OnCausedElementalEffect_Params
	{
	public:
		class AActor*                                              Causer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStatusEffectSpec                                   Spec;                                                    // 0x0008(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Passive_Siren_DLCSkill_3.Passive_Siren_DLCSkill_2_C.DLCSkill1_OnCausedMaxResourceEffect
	 */
	struct UPassive_Siren_DLCSkill_2_C_DLCSkill1_OnCausedMaxResourceEffect_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOakStatusEffectResourceEffectType                         ResourceEffectType;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Siren_DLCSkill_3.Passive_Siren_DLCSkill_2_C.ExecuteUbergraph_Passive_Siren_DLCSkill_3
	 */
	struct UPassive_Siren_DLCSkill_2_C_ExecuteUbergraph_Passive_Siren_DLCSkill_3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LGK1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
