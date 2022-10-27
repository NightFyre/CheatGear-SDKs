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
	 * Function A_PetJabbermon_Fling.A_PetJabbermon_Fling_C.BeginFling
	 */
	struct UA_PetJabbermon_Fling_C_BeginFling_Params
	{	};

	/**
	 * Function A_PetJabbermon_Fling.A_PetJabbermon_Fling_C.OnServerBegin
	 */
	struct UA_PetJabbermon_Fling_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_PetJabbermon_Fling.A_PetJabbermon_Fling_C.Notify_ShowPoop
	 */
	struct UA_PetJabbermon_Fling_C_Notify_ShowPoop_Params
	{	};

	/**
	 * Function A_PetJabbermon_Fling.A_PetJabbermon_Fling_C.ExecuteUbergraph_A_PetJabbermon_Fling
	 */
	struct UA_PetJabbermon_Fling_C_ExecuteUbergraph_A_PetJabbermon_Fling_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EXYX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
