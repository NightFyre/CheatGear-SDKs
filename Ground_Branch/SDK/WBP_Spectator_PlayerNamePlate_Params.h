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
	 * Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.Get_TextBlock_1_Text_1
	 */
	struct UWBP_Spectator_PlayerNamePlate_C_Get_TextBlock_1_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.Tick
	 */
	struct UWBP_Spectator_PlayerNamePlate_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.Construct
	 */
	struct UWBP_Spectator_PlayerNamePlate_C_Construct_Params
	{	};

	/**
	 * Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.Update
	 */
	struct UWBP_Spectator_PlayerNamePlate_C_Update_Params
	{	};

	/**
	 * Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.CalcOnScreenPosition
	 */
	struct UWBP_Spectator_PlayerNamePlate_C_CalcOnScreenPosition_Params
	{	};

	/**
	 * Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.BindElementChanged
	 */
	struct UWBP_Spectator_PlayerNamePlate_C_BindElementChanged_Params
	{	};

	/**
	 * Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.CheckSquads
	 */
	struct UWBP_Spectator_PlayerNamePlate_C_CheckSquads_Params
	{	};

	/**
	 * Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.OnTeamElementChanged_Event_1
	 */
	struct UWBP_Spectator_PlayerNamePlate_C_OnTeamElementChanged_Event_1_Params
	{
	public:
		class AGBPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.ExecuteUbergraph_WBP_Spectator_PlayerNamePlate
	 */
	struct UWBP_Spectator_PlayerNamePlate_C_ExecuteUbergraph_WBP_Spectator_PlayerNamePlate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
