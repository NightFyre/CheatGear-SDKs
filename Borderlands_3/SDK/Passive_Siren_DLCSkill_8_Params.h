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
	 * Function Passive_Siren_DLCSkill_8.Passive_Siren_DLCSkill_7_C.OnActivated
	 */
	struct UPassive_Siren_DLCSkill_7_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Siren_DLCSkill_8.Passive_Siren_DLCSkill_7_C.DLCSkill7_OnCausedDeath
	 */
	struct UPassive_Siren_DLCSkill_7_C_DLCSkill7_OnCausedDeath_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Passive_Siren_DLCSkill_8.Passive_Siren_DLCSkill_7_C.ExecuteUbergraph_Passive_Siren_DLCSkill_8
	 */
	struct UPassive_Siren_DLCSkill_7_C_ExecuteUbergraph_Passive_Siren_DLCSkill_8_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DCFL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
