#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_Mission_PlayerList.WBP_Mission_PlayerList_C.SetTeamRole
	 */
	struct UWBP_Mission_PlayerList_C_SetTeamRole_Params
	{
	public:
		class FName                                                Role;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Mission_PlayerList.WBP_Mission_PlayerList_C.GetTotalTeamBoxVis
	 */
	struct UWBP_Mission_PlayerList_C_GetTotalTeamBoxVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Mission_PlayerList.WBP_Mission_PlayerList_C.Construct
	 */
	struct UWBP_Mission_PlayerList_C_Construct_Params
	{	};

	/**
	 * Function WBP_Mission_PlayerList.WBP_Mission_PlayerList_C.OnUpdate_Event_1
	 */
	struct UWBP_Mission_PlayerList_C_OnUpdate_Event_1_Params
	{	};

	/**
	 * Function WBP_Mission_PlayerList.WBP_Mission_PlayerList_C.ExecuteUbergraph_WBP_Mission_PlayerList
	 */
	struct UWBP_Mission_PlayerList_C_ExecuteUbergraph_WBP_Mission_PlayerList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
