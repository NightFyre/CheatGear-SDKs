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
	 * Function PassiveSkill_Siren_Vigor.PassiveSkill_Siren_Vigor_C.OnActivated
	 */
	struct UPassiveSkill_Siren_Vigor_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_Vigor.PassiveSkill_Siren_Vigor_C.OnCausedActionSkillDeath
	 */
	struct UPassiveSkill_Siren_Vigor_C_OnCausedActionSkillDeath_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PassiveSkill_Siren_Vigor.PassiveSkill_Siren_Vigor_C.ExecuteUbergraph_PassiveSkill_Siren_Vigor
	 */
	struct UPassiveSkill_Siren_Vigor_C_ExecuteUbergraph_PassiveSkill_Siren_Vigor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_439C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
