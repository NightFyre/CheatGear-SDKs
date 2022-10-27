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
	 * Function BP_KillerInfo.BP_KillerInfo_C.SetHasValidInfo
	 */
	struct UBP_KillerInfo_C_SetHasValidInfo_Params
	{
	public:
		bool                                                       bNewValidInfo;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KillerInfo.BP_KillerInfo_C.SetKillerDistance
	 */
	struct UBP_KillerInfo_C_SetKillerDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KillerInfo.BP_KillerInfo_C.SetShowNemesisStats
	 */
	struct UBP_KillerInfo_C_SetShowNemesisStats_Params
	{
	public:
		bool                                                       bNewVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KillerInfo.BP_KillerInfo_C.UpdateKillerPlayerInfo
	 */
	struct UBP_KillerInfo_C_UpdateKillerPlayerInfo_Params
	{
	public:
		class AINSPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KillerInfo.BP_KillerInfo_C.Construct
	 */
	struct UBP_KillerInfo_C_Construct_Params
	{	};

	/**
	 * Function BP_KillerInfo.BP_KillerInfo_C.OnShowKillerInfo
	 */
	struct UBP_KillerInfo_C_OnShowKillerInfo_Params
	{
	public:
		struct FPlayerKillNotice                                   Notice;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FNemesisStats                                       NemesisStats;                                            // 0x0038(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_KillerInfo.BP_KillerInfo_C.Hide Panel
	 */
	struct UBP_KillerInfo_C_Hide_Panel_Params
	{	};

	/**
	 * Function BP_KillerInfo.BP_KillerInfo_C.OnPlayerSpawned
	 */
	struct UBP_KillerInfo_C_OnPlayerSpawned_Params
	{	};

	/**
	 * Function BP_KillerInfo.BP_KillerInfo_C.ExecuteUbergraph_BP_KillerInfo
	 */
	struct UBP_KillerInfo_C_ExecuteUbergraph_BP_KillerInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
