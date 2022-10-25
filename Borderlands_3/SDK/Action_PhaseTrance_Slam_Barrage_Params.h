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
	 * Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.StopSlamLoopFeedback
	 */
	struct UAction_PhaseTrance_Slam_Barrage_C_StopSlamLoopFeedback_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.InnerStopBeam
	 */
	struct UAction_PhaseTrance_Slam_Barrage_C_InnerStopBeam_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.InnerStartBeam
	 */
	struct UAction_PhaseTrance_Slam_Barrage_C_InnerStartBeam_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_StopBlastBeam
	 */
	struct UAction_PhaseTrance_Slam_Barrage_C_AN_StopBlastBeam_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_FireBlastProjectileDown
	 */
	struct UAction_PhaseTrance_Slam_Barrage_C_AN_FireBlastProjectileDown_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.Cleanup
	 */
	struct UAction_PhaseTrance_Slam_Barrage_C_Cleanup_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_DoSlam
	 */
	struct UAction_PhaseTrance_Slam_Barrage_C_AN_DoSlam_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.DoDamageAsync
	 */
	struct UAction_PhaseTrance_Slam_Barrage_C_DoDamageAsync_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.OnServerBegin
	 */
	struct UAction_PhaseTrance_Slam_Barrage_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.OnServerEnd
	 */
	struct UAction_PhaseTrance_Slam_Barrage_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4G47[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_StartBlastBeam
	 */
	struct UAction_PhaseTrance_Slam_Barrage_C_AN_StartBlastBeam_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_RemoveBeamEmitter
	 */
	struct UAction_PhaseTrance_Slam_Barrage_C_AN_RemoveBeamEmitter_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.OnBeginBringUpWeapon
	 */
	struct UAction_PhaseTrance_Slam_Barrage_C_OnBeginBringUpWeapon_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_BeamRumble
	 */
	struct UAction_PhaseTrance_Slam_Barrage_C_AN_BeamRumble_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_SlamLoopRumble
	 */
	struct UAction_PhaseTrance_Slam_Barrage_C_AN_SlamLoopRumble_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.ExecuteUbergraph_Action_PhaseTrance_Slam_Barrage
	 */
	struct UAction_PhaseTrance_Slam_Barrage_C_ExecuteUbergraph_Action_PhaseTrance_Slam_Barrage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JEWL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
