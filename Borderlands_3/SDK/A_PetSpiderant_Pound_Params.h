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
	 * Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.Notify_Melee
	 */
	struct UA_PetSpiderant_Pound_C_Notify_Melee_Params
	{	};

	/**
	 * Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.OnBegin
	 */
	struct UA_PetSpiderant_Pound_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.ExecuteUbergraph_A_PetSpiderant_Pound
	 */
	struct UA_PetSpiderant_Pound_C_ExecuteUbergraph_A_PetSpiderant_Pound_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
