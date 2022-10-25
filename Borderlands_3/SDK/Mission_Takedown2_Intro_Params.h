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
	 * Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.OnDialogSequenceFinished_3
	 */
	struct UMission_Takedown2_Intro_C_OnDialogSequenceFinished_3_Params
	{	};

	/**
	 * Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Set_Navigate_TakedownTwoPlanet
	 */
	struct UMission_Takedown2_Intro_C_Set_Navigate_TakedownTwoPlanet_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_Navigate_TakedownTwoPlanet
	 */
	struct UMission_Takedown2_Intro_C_Obj_Navigate_TakedownTwoPlanet_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5LIS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.UPDATE_Navigate_Takedown2Planet
	 */
	struct UMission_Takedown2_Intro_C_UPDATE_Navigate_Takedown2Planet_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.ADVANCE_Navigate_Takedown2Planet
	 */
	struct UMission_Takedown2_Intro_C_ADVANCE_Navigate_Takedown2Planet_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Set_UseDropPod
	 */
	struct UMission_Takedown2_Intro_C_Set_UseDropPod_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Set_PlanetTitleCard
	 */
	struct UMission_Takedown2_Intro_C_Set_PlanetTitleCard_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Set_MissionEnd
	 */
	struct UMission_Takedown2_Intro_C_Set_MissionEnd_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_ReNavigate_Takedown2Planet
	 */
	struct UMission_Takedown2_Intro_C_Obj_ReNavigate_Takedown2Planet_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VJG9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.UPDATE_ReNavigate_Takedown2Planet
	 */
	struct UMission_Takedown2_Intro_C_UPDATE_ReNavigate_Takedown2Planet_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_UseDropPod
	 */
	struct UMission_Takedown2_Intro_C_Obj_UseDropPod_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1XL7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_TITLECARD_TAKEDOWNTWOPLANET
	 */
	struct UMission_Takedown2_Intro_C_Obj_TITLECARD_TAKEDOWNTWOPLANET_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P592[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.Obj_MissionEnd
	 */
	struct UMission_Takedown2_Intro_C_Obj_MissionEnd_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R5HJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.MissionKickoff
	 */
	struct UMission_Takedown2_Intro_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.AdvanceTo_PlanetTitleCard
	 */
	struct UMission_Takedown2_Intro_C_AdvanceTo_PlanetTitleCard_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Takedown2_Intro.Mission_Takedown2_Intro_C.ExecuteUbergraph_Mission_Takedown2_Intro
	 */
	struct UMission_Takedown2_Intro_C_ExecuteUbergraph_Mission_Takedown2_Intro_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XFDK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
