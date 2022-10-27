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
	 * Function A_PetSkag_Barf.A_PetSkag_Barf_C.OnBegin
	 */
	struct UA_PetSkag_Barf_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_PetSkag_Barf.A_PetSkag_Barf_C.VomitDamageNotify
	 */
	struct UA_PetSkag_Barf_C_VomitDamageNotify_Params
	{	};

	/**
	 * Function A_PetSkag_Barf.A_PetSkag_Barf_C.ExecuteUbergraph_A_PetSkag_Barf
	 */
	struct UA_PetSkag_Barf_C_ExecuteUbergraph_A_PetSkag_Barf_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3ZGC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
