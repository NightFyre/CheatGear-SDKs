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
	 * Function PassiveSkill_Operative_Refreshment.PassiveSkill_Operative_Refreshment_C.OnActivated
	 */
	struct UPassiveSkill_Operative_Refreshment_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_Refreshment.PassiveSkill_Operative_Refreshment_C.ExecuteUbergraph_PassiveSkill_Operative_Refreshment
	 */
	struct UPassiveSkill_Operative_Refreshment_C_ExecuteUbergraph_PassiveSkill_Operative_Refreshment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W41J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
