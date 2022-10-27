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
	 * Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Set_Navigate_NewPlanet
	 */
	struct UMission_ProvingGroundsDiscovery_Mission01_C_Set_Navigate_NewPlanet_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Advance_Navigate_NewPlanet
	 */
	struct UMission_ProvingGroundsDiscovery_Mission01_C_Advance_Navigate_NewPlanet_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Obj_Navigate_NewPlanet
	 */
	struct UMission_ProvingGroundsDiscovery_Mission01_C_Obj_Navigate_NewPlanet_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DXV0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Obj_ReNavigate_NewPlanet
	 */
	struct UMission_ProvingGroundsDiscovery_Mission01_C_Obj_ReNavigate_NewPlanet_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QDW3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Update_Navigate_NewPlanet
	 */
	struct UMission_ProvingGroundsDiscovery_Mission01_C_Update_Navigate_NewPlanet_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.AdvanceTo_ArriveAtMap
	 */
	struct UMission_ProvingGroundsDiscovery_Mission01_C_AdvanceTo_ArriveAtMap_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Obj_UseDropPod
	 */
	struct UMission_ProvingGroundsDiscovery_Mission01_C_Obj_UseDropPod_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EKWX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.SET_UseDropPod_OnSanctuary
	 */
	struct UMission_ProvingGroundsDiscovery_Mission01_C_SET_UseDropPod_OnSanctuary_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Set_ArriveAtMap
	 */
	struct UMission_ProvingGroundsDiscovery_Mission01_C_Set_ArriveAtMap_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.[OBJ_UseDropPod_Objective] PROXY
	 */
	struct UMission_ProvingGroundsDiscovery_Mission01_C_OBJ_UseDropPod_Objective_PROXY_Params
	{	};

	/**
	 * Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission01
	 */
	struct UMission_ProvingGroundsDiscovery_Mission01_C_ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
