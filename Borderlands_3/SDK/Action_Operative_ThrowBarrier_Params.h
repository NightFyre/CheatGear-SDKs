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
	 * Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.OnBegin
	 */
	struct UAction_Operative_ThrowBarrier_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.OnEnd
	 */
	struct UAction_Operative_ThrowBarrier_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GPH1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.OnBeginBringUpWeapon
	 */
	struct UAction_Operative_ThrowBarrier_C_OnBeginBringUpWeapon_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.AnimNotify_ThrowProjectile
	 */
	struct UAction_Operative_ThrowBarrier_C_AnimNotify_ThrowProjectile_Params
	{	};

	/**
	 * Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.AN_PerformBarrierTossFeedback
	 */
	struct UAction_Operative_ThrowBarrier_C_AN_PerformBarrierTossFeedback_Params
	{	};

	/**
	 * Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.ExecuteUbergraph_Action_Operative_ThrowBarrier
	 */
	struct UAction_Operative_ThrowBarrier_C_ExecuteUbergraph_Action_Operative_ThrowBarrier_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9M0T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
