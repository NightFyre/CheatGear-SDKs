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
	 * Function Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C.Obj_KillCaptainThunkAndSloth
	 */
	struct UMission_Async_CaptainThunkAndSloth_C_Obj_KillCaptainThunkAndSloth_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FLI5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C.Set_KillCaptainThunkAndSloth
	 */
	struct UMission_Async_CaptainThunkAndSloth_C_Set_KillCaptainThunkAndSloth_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C.MCE_CaptainThunkAndSlothKilled
	 */
	struct UMission_Async_CaptainThunkAndSloth_C_MCE_CaptainThunkAndSlothKilled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C.ExecuteUbergraph_Mission_Async_CaptainThunkAndSloth
	 */
	struct UMission_Async_CaptainThunkAndSloth_C_ExecuteUbergraph_Mission_Async_CaptainThunkAndSloth_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
