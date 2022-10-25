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
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.GetSlamDamage
	 */
	struct UAction_Phasetrance_Slam_Base_C_GetSlamDamage_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.SlamFeedbackLaunch
	 */
	struct UAction_Phasetrance_Slam_Base_C_SlamFeedbackLaunch_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XNCV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerDoSlam
	 */
	struct UAction_Phasetrance_Slam_Base_C_InnerDoSlam_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerDoSlamDamage
	 */
	struct UAction_Phasetrance_Slam_Base_C_InnerDoSlamDamage_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerShowSlamLandFX
	 */
	struct UAction_Phasetrance_Slam_Base_C_InnerShowSlamLandFX_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerOnSlamEnded
	 */
	struct UAction_Phasetrance_Slam_Base_C_InnerOnSlamEnded_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerOnSlamStarted
	 */
	struct UAction_Phasetrance_Slam_Base_C_InnerOnSlamStarted_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnBegin
	 */
	struct UAction_Phasetrance_Slam_Base_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.AN_StartDive
	 */
	struct UAction_Phasetrance_Slam_Base_C_AN_StartDive_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnEnd
	 */
	struct UAction_Phasetrance_Slam_Base_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CC1Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnFallEnded
	 */
	struct UAction_Phasetrance_Slam_Base_C_OnFallEnded_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnServerEnd
	 */
	struct UAction_Phasetrance_Slam_Base_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VL6A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.AN_DoSlam
	 */
	struct UAction_Phasetrance_Slam_Base_C_AN_DoSlam_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnBeginBringUpWeapon
	 */
	struct UAction_Phasetrance_Slam_Base_C_OnBeginBringUpWeapon_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.HandlePlayerLanded
	 */
	struct UAction_Phasetrance_Slam_Base_C_HandlePlayerLanded_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.TriggerActionSkillReactDialogue
	 */
	struct UAction_Phasetrance_Slam_Base_C_TriggerActionSkillReactDialogue_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.TriggerActionSkillUseDialogue
	 */
	struct UAction_Phasetrance_Slam_Base_C_TriggerActionSkillUseDialogue_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger Slam Begin Dialogue
	 */
	struct UAction_Phasetrance_Slam_Base_C_Trigger_Slam_Begin_Dialogue_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger Slam Impact Dialogue
	 */
	struct UAction_Phasetrance_Slam_Base_C_Trigger_Slam_Impact_Dialogue_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger slam Taunt Dialogue
	 */
	struct UAction_Phasetrance_Slam_Base_C_Trigger_slam_Taunt_Dialogue_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.ExecuteUbergraph_Action_Phasetrance_Slam_Base
	 */
	struct UAction_Phasetrance_Slam_Base_C_ExecuteUbergraph_Action_Phasetrance_Slam_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1ZGR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
