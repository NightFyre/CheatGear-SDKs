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
	 * Function WBP_ReadyRoomName.WBP_ReadyRoomName_C.Show
	 */
	struct UWBP_ReadyRoomName_C_Show_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ETeamElement                                               PlayerTeamElement;                                       // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ReadyRoomName.WBP_ReadyRoomName_C.Hide
	 */
	struct UWBP_ReadyRoomName_C_Hide_Params
	{	};

	/**
	 * Function WBP_ReadyRoomName.WBP_ReadyRoomName_C.Construct
	 */
	struct UWBP_ReadyRoomName_C_Construct_Params
	{	};

	/**
	 * Function WBP_ReadyRoomName.WBP_ReadyRoomName_C.ExecuteUbergraph_WBP_ReadyRoomName
	 */
	struct UWBP_ReadyRoomName_C_ExecuteUbergraph_WBP_ReadyRoomName_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
