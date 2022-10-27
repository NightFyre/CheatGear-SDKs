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
	 * Function Mission_Async_FrostbiteDragon.Mission_Async_FrostbiteDragon_C.Obj_KillFrostbiteDragon
	 */
	struct UMission_Async_FrostbiteDragon_C_Obj_KillFrostbiteDragon_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5DMX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Async_FrostbiteDragon.Mission_Async_FrostbiteDragon_C.Set_KillFrostbiteDragon
	 */
	struct UMission_Async_FrostbiteDragon_C_Set_KillFrostbiteDragon_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Async_FrostbiteDragon.Mission_Async_FrostbiteDragon_C.MCE_FrostbiteDragonKilled
	 */
	struct UMission_Async_FrostbiteDragon_C_MCE_FrostbiteDragonKilled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Async_FrostbiteDragon.Mission_Async_FrostbiteDragon_C.ExecuteUbergraph_Mission_Async_FrostbiteDragon
	 */
	struct UMission_Async_FrostbiteDragon_C_ExecuteUbergraph_Mission_Async_FrostbiteDragon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
