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
	 * Function Action_PetLoader_Roundhouse.Action_PetLoader_Roundhouse_C.AN_DealDamage
	 */
	struct UAction_PetLoader_Roundhouse_C_AN_DealDamage_Params
	{	};

	/**
	 * Function Action_PetLoader_Roundhouse.Action_PetLoader_Roundhouse_C.ExecuteUbergraph_Action_PetLoader_Roundhouse
	 */
	struct UAction_PetLoader_Roundhouse_C_ExecuteUbergraph_Action_PetLoader_Roundhouse_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RANK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
