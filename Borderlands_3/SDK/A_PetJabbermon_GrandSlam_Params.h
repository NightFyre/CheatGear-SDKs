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
	 * Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.OnBegin
	 */
	struct UA_PetJabbermon_GrandSlam_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.Notify_Melee
	 */
	struct UA_PetJabbermon_GrandSlam_C_Notify_Melee_Params
	{	};

	/**
	 * Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.OnEnd
	 */
	struct UA_PetJabbermon_GrandSlam_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RU1O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.Notify_BatVis
	 */
	struct UA_PetJabbermon_GrandSlam_C_Notify_BatVis_Params
	{	};

	/**
	 * Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.ExecuteUbergraph_A_PetJabbermon_GrandSlam
	 */
	struct UA_PetJabbermon_GrandSlam_C_ExecuteUbergraph_A_PetJabbermon_GrandSlam_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
