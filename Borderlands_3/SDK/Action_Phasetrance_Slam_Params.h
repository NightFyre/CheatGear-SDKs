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
	 * Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.StopSlamLoopFeedback
	 */
	struct UAction_Phasetrance_Slam_C_StopSlamLoopFeedback_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.GetSlamControlledMove
	 */
	struct UAction_Phasetrance_Slam_C_GetSlamControlledMove_Params
	{
	public:
		class UClass*                                              res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.GetSlamTargetLocation
	 */
	struct UAction_Phasetrance_Slam_C_GetSlamTargetLocation_Params
	{
	public:
		struct FVector                                             res;                                                     // 0x0000(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnServerBegin
	 */
	struct UAction_Phasetrance_Slam_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.InnerDoSlamDamage
	 */
	struct UAction_Phasetrance_Slam_C_InnerDoSlamDamage_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_Unlockmovement
	 */
	struct UAction_Phasetrance_Slam_C_AN_Unlockmovement_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnServerEnd
	 */
	struct UAction_Phasetrance_Slam_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W4HG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnBeginBringUpWeapon
	 */
	struct UAction_Phasetrance_Slam_C_OnBeginBringUpWeapon_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_SlamMoveLock
	 */
	struct UAction_Phasetrance_Slam_C_AN_SlamMoveLock_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnBegin
	 */
	struct UAction_Phasetrance_Slam_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_FeedbackSlamLand
	 */
	struct UAction_Phasetrance_Slam_C_AN_FeedbackSlamLand_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_FeedbackSlamLoop
	 */
	struct UAction_Phasetrance_Slam_C_AN_FeedbackSlamLoop_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.ExecuteUbergraph_Action_Phasetrance_Slam
	 */
	struct UAction_Phasetrance_Slam_C_ExecuteUbergraph_Action_Phasetrance_Slam_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DPJV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
