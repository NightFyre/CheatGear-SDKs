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
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.OnDialogSequenceFinished_5
	 */
	struct UMission_Raid1Intro_C_OnDialogSequenceFinished_5_Params
	{	};

	/**
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.OnDialogSequenceFinished_4
	 */
	struct UMission_Raid1Intro_C_OnDialogSequenceFinished_4_Params
	{	};

	/**
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.Set_Navigate_Raid1Planet
	 */
	struct UMission_Raid1Intro_C_Set_Navigate_Raid1Planet_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_Navigate_Raid1Planet
	 */
	struct UMission_Raid1Intro_C_Obj_Navigate_Raid1Planet_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AR59[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.UPDATE_Navigate_Raid1Planet
	 */
	struct UMission_Raid1Intro_C_UPDATE_Navigate_Raid1Planet_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.ADVANCE_Navigate_Raid1Planet
	 */
	struct UMission_Raid1Intro_C_ADVANCE_Navigate_Raid1Planet_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.Set_UseDropPod
	 */
	struct UMission_Raid1Intro_C_Set_UseDropPod_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.Set_PlanetTitleCard
	 */
	struct UMission_Raid1Intro_C_Set_PlanetTitleCard_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.Set_MissionEnd
	 */
	struct UMission_Raid1Intro_C_Set_MissionEnd_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_ReNavigate_Raid1Planet
	 */
	struct UMission_Raid1Intro_C_Obj_ReNavigate_Raid1Planet_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9UN3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.UPDATE_ReNavigate_Raid1Planet
	 */
	struct UMission_Raid1Intro_C_UPDATE_ReNavigate_Raid1Planet_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_UseDropPod
	 */
	struct UMission_Raid1Intro_C_Obj_UseDropPod_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P8HT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_TITLECARD_RAIDPLANET
	 */
	struct UMission_Raid1Intro_C_Obj_TITLECARD_RAIDPLANET_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E968[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_MissionEnd
	 */
	struct UMission_Raid1Intro_C_Obj_MissionEnd_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TTU9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.MissionKickoff
	 */
	struct UMission_Raid1Intro_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.AdvanceTo_PlanetTitleCard
	 */
	struct UMission_Raid1Intro_C_AdvanceTo_PlanetTitleCard_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Raid1Intro.Mission_Raid1Intro_C.ExecuteUbergraph_Mission_Raid1Intro
	 */
	struct UMission_Raid1Intro_C_ExecuteUbergraph_Mission_Raid1Intro_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BQ9K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
