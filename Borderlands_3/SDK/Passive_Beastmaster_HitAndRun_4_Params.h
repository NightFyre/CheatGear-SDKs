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
	 * Function Passive_Beastmaster_HitAndRun_4.Passive_Beastmaster_HitAndRun_3_C.OnActivated
	 */
	struct UPassive_Beastmaster_HitAndRun_3_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_HitAndRun_4.Passive_Beastmaster_HitAndRun_3_C.CausedDeath_Beastmaster_HitAndRun3
	 */
	struct UPassive_Beastmaster_HitAndRun_3_C_CausedDeath_Beastmaster_HitAndRun3_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Passive_Beastmaster_HitAndRun_4.Passive_Beastmaster_HitAndRun_3_C.ExecuteUbergraph_Passive_Beastmaster_HitAndRun_4
	 */
	struct UPassive_Beastmaster_HitAndRun_3_C_ExecuteUbergraph_Passive_Beastmaster_HitAndRun_4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UYU9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
