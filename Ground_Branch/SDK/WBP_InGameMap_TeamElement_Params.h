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
	 * Function WBP_InGameMap_TeamElement.WBP_InGameMap_TeamElement_C.FindOrCreatePlayerEntry
	 */
	struct UWBP_InGameMap_TeamElement_C_FindOrCreatePlayerEntry_Params
	{
	public:
		class AGBPlayerState*                                      GBPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWBP_InGameMap_PlayerName_C*                         OutPlayerInfo;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMap_TeamElement.WBP_InGameMap_TeamElement_C.Tick
	 */
	struct UWBP_InGameMap_TeamElement_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMap_TeamElement.WBP_InGameMap_TeamElement_C.PreConstruct
	 */
	struct UWBP_InGameMap_TeamElement_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InGameMap_TeamElement.WBP_InGameMap_TeamElement_C.TickStyleEvent
	 */
	struct UWBP_InGameMap_TeamElement_C_TickStyleEvent_Params
	{	};

	/**
	 * Function WBP_InGameMap_TeamElement.WBP_InGameMap_TeamElement_C.ExecuteUbergraph_WBP_InGameMap_TeamElement
	 */
	struct UWBP_InGameMap_TeamElement_C_ExecuteUbergraph_WBP_InGameMap_TeamElement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
