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
	 * Function WBP_InGameMap.WBP_InGameMap_C.CorrespondsToPlayerState
	 */
	struct UWBP_InGameMap_C_CorrespondsToPlayerState_Params
	{
	public:
		class AGBPlayerState*                                      ComparePlayerState;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       MatchesOwningPlayerState;                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InGameMap.WBP_InGameMap_C.UpdateObjectiveMarkers
	 */
	struct UWBP_InGameMap_C_UpdateObjectiveMarkers_Params
	{	};

	/**
	 * Function WBP_InGameMap.WBP_InGameMap_C.UpdateObjectives
	 */
	struct UWBP_InGameMap_C_UpdateObjectives_Params
	{	};

	/**
	 * Function WBP_InGameMap.WBP_InGameMap_C.FindOrAddPlayerBlip
	 */
	struct UWBP_InGameMap_C_FindOrAddPlayerBlip_Params
	{
	public:
		class AGBPlayerState*                                      InPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWBP_InGameMap_PlayerBlip_C*                         OutPlayerBlip;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMap.WBP_InGameMap_C.Construct
	 */
	struct UWBP_InGameMap_C_Construct_Params
	{	};

	/**
	 * Function WBP_InGameMap.WBP_InGameMap_C.Tick
	 */
	struct UWBP_InGameMap_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMap.WBP_InGameMap_C.UpdatePlayerBlips
	 */
	struct UWBP_InGameMap_C_UpdatePlayerBlips_Params
	{
	public:
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMap.WBP_InGameMap_C.ExecuteUbergraph_WBP_InGameMap
	 */
	struct UWBP_InGameMap_C_ExecuteUbergraph_WBP_InGameMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
