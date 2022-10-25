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
	 * Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.FireAtTarget
	 */
	struct UAction_Operative_CalledShot_C_FireAtTarget_Params
	{	};

	/**
	 * Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.GetCommandRingActor
	 */
	struct UAction_Operative_CalledShot_C_GetCommandRingActor_Params
	{
	public:
		class ACommandRing_Operative_GRMLN*                        res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.StopTargetingBeam
	 */
	struct UAction_Operative_CalledShot_C_StopTargetingBeam_Params
	{	};

	/**
	 * Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.StartTargetingBeam
	 */
	struct UAction_Operative_CalledShot_C_StartTargetingBeam_Params
	{	};

	/**
	 * Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.OnEnd
	 */
	struct UAction_Operative_CalledShot_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VM0L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.AN_LoopStarted
	 */
	struct UAction_Operative_CalledShot_C_AN_LoopStarted_Params
	{	};

	/**
	 * Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.StopButtonPress
	 */
	struct UAction_Operative_CalledShot_C_StopButtonPress_Params
	{	};

	/**
	 * Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.AN_ShowDevice
	 */
	struct UAction_Operative_CalledShot_C_AN_ShowDevice_Params
	{	};

	/**
	 * Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.AN_HideDevice
	 */
	struct UAction_Operative_CalledShot_C_AN_HideDevice_Params
	{	};

	/**
	 * Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.OnBegin
	 */
	struct UAction_Operative_CalledShot_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.ExecuteUbergraph_Action_Operative_CalledShot
	 */
	struct UAction_Operative_CalledShot_C_ExecuteUbergraph_Action_Operative_CalledShot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ABEM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
