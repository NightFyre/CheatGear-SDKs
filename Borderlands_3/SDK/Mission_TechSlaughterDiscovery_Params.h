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
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_GoToSanctuary
	 */
	struct UMission_TechSlaughterDiscovery_C_Set_GoToSanctuary_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_GoToSanctuary
	 */
	struct UMission_TechSlaughterDiscovery_C_Obj_GoToSanctuary_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TN3T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_TechSlaughterTitleCard
	 */
	struct UMission_TechSlaughterDiscovery_C_Set_TechSlaughterTitleCard_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_PlanetTitleCard
	 */
	struct UMission_TechSlaughterDiscovery_C_Obj_PlanetTitleCard_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4ZBL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.SET_UseDropPod_OnSanctuary
	 */
	struct UMission_TechSlaughterDiscovery_C_SET_UseDropPod_OnSanctuary_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_UseDropPod
	 */
	struct UMission_TechSlaughterDiscovery_C_Obj_UseDropPod_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R3F4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.OBJ_ReNavigate_TechSlaughter
	 */
	struct UMission_TechSlaughterDiscovery_C_OBJ_ReNavigate_TechSlaughter_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VBRE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Update_ReNavigate_TechSlaughter
	 */
	struct UMission_TechSlaughterDiscovery_C_Update_ReNavigate_TechSlaughter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_Navigate_TechSlaughter
	 */
	struct UMission_TechSlaughterDiscovery_C_Set_Navigate_TechSlaughter_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_Navigate_TechSlaughter
	 */
	struct UMission_TechSlaughterDiscovery_C_Obj_Navigate_TechSlaughter_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WO0B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.UPDATE_Navigate_TechSlaughter
	 */
	struct UMission_TechSlaughterDiscovery_C_UPDATE_Navigate_TechSlaughter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.ADVANCE_Navigate_TechSlaughter
	 */
	struct UMission_TechSlaughterDiscovery_C_ADVANCE_Navigate_TechSlaughter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.AdvanceTo_PlanetTitleCard
	 */
	struct UMission_TechSlaughterDiscovery_C_AdvanceTo_PlanetTitleCard_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_UseDropPod_OnPlanet
	 */
	struct UMission_TechSlaughterDiscovery_C_Set_UseDropPod_OnPlanet_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.[OBJ_UseDropPod_Objective] PROXY
	 */
	struct UMission_TechSlaughterDiscovery_C_OBJ_UseDropPod_Objective_PROXY_Params
	{	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_TalkToNPC
	 */
	struct UMission_TechSlaughterDiscovery_C_Set_TalkToNPC_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_TalkToNPC
	 */
	struct UMission_TechSlaughterDiscovery_C_Obj_TalkToNPC_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZB1G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Update_TalkToNPC
	 */
	struct UMission_TechSlaughterDiscovery_C_Update_TalkToNPC_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Update_GoToSanctuary
	 */
	struct UMission_TechSlaughterDiscovery_C_Update_GoToSanctuary_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.ExecuteUbergraph_Mission_TechSlaughterDiscovery
	 */
	struct UMission_TechSlaughterDiscovery_C_ExecuteUbergraph_Mission_TechSlaughterDiscovery_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3URD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
