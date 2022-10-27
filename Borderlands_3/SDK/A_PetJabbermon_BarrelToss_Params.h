﻿#pragma once

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
	 * Function A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C.Notify_Throw
	 */
	struct UA_PetJabbermon_BarrelToss_C_Notify_Throw_Params
	{	};

	/**
	 * Function A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C.OnServerBegin
	 */
	struct UA_PetJabbermon_BarrelToss_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C.OnServerEnd
	 */
	struct UA_PetJabbermon_BarrelToss_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z8KH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C.ExecuteUbergraph_A_PetJabbermon_BarrelToss
	 */
	struct UA_PetJabbermon_BarrelToss_C_ExecuteUbergraph_A_PetJabbermon_BarrelToss_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0EJ6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
