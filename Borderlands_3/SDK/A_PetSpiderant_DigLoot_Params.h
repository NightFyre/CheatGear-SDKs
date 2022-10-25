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
	 * Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.Notify_Loot
	 */
	struct UA_PetSpiderant_DigLoot_C_Notify_Loot_Params
	{	};

	/**
	 * Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.OnBegin
	 */
	struct UA_PetSpiderant_DigLoot_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.ExecuteUbergraph_A_PetSpiderant_DigLoot
	 */
	struct UA_PetSpiderant_DigLoot_C_ExecuteUbergraph_A_PetSpiderant_DigLoot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
