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
	 * Function Action_Pet_FindLoot.Action_Pet_FindLoot_C.Notify_FoundLoot
	 */
	struct UAction_Pet_FindLoot_C_Notify_FoundLoot_Params
	{	};

	/**
	 * Function Action_Pet_FindLoot.Action_Pet_FindLoot_C.ExecuteUbergraph_Action_Pet_FindLoot
	 */
	struct UAction_Pet_FindLoot_C_ExecuteUbergraph_Action_Pet_FindLoot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KLM7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
