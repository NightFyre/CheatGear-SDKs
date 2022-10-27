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
	 * Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.OnActivated
	 */
	struct UPassiveSkill_Gunner_DrowningInBrass_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.CausedDeath_DrowningInBrass
	 */
	struct UPassiveSkill_Gunner_DrowningInBrass_C_CausedDeath_DrowningInBrass_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.ExecuteUbergraph_PassiveSkill_Gunner_DrowningInBrass
	 */
	struct UPassiveSkill_Gunner_DrowningInBrass_C_ExecuteUbergraph_PassiveSkill_Gunner_DrowningInBrass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_62EU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
