#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.UpdateFactionColor
	 */
	struct UBP_Widget_TacticalMap_SpawnZone_C_UpdateFactionColor_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.UpdateFactionIcon
	 */
	struct UBP_Widget_TacticalMap_SpawnZone_C_UpdateFactionIcon_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.Construct
	 */
	struct UBP_Widget_TacticalMap_SpawnZone_C_Construct_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.OnRefreshTeams
	 */
	struct UBP_Widget_TacticalMap_SpawnZone_C_OnRefreshTeams_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.OnChangeTeam
	 */
	struct UBP_Widget_TacticalMap_SpawnZone_C_OnChangeTeam_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IFJ2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATeamInfo*                                           TeamInfo;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.ExecuteUbergraph_BP_Widget_TacticalMap_SpawnZone
	 */
	struct UBP_Widget_TacticalMap_SpawnZone_C_ExecuteUbergraph_BP_Widget_TacticalMap_SpawnZone_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_97M8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
