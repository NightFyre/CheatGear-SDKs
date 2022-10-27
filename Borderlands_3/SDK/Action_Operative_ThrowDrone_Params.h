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
	 * Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.AnimNotify_SpawnDrone
	 */
	struct UAction_Operative_ThrowDrone_C_AnimNotify_SpawnDrone_Params
	{	};

	/**
	 * Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnBegin
	 */
	struct UAction_Operative_ThrowDrone_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnEnd
	 */
	struct UAction_Operative_ThrowDrone_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WOU5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.AN_PerformDroneCameraShake
	 */
	struct UAction_Operative_ThrowDrone_C_AN_PerformDroneCameraShake_Params
	{	};

	/**
	 * Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnBeginBringUpWeapon
	 */
	struct UAction_Operative_ThrowDrone_C_OnBeginBringUpWeapon_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.ExecuteUbergraph_Action_Operative_ThrowDrone
	 */
	struct UAction_Operative_ThrowDrone_C_ExecuteUbergraph_Action_Operative_ThrowDrone_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TZRL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
