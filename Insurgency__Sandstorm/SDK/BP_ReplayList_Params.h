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
	 * Function BP_ReplayList.BP_ReplayList_C.SetFocusOnChild
	 */
	struct UBP_ReplayList_C_SetFocusOnChild_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z1OB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ReplayList.BP_ReplayList_C.GetReplayIdFromTimestamp
	 */
	struct UBP_ReplayList_C_GetReplayIdFromTimestamp_Params
	{
	public:
		struct FDateTime                                           Timestamp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReplayList.BP_ReplayList_C.ClearChildren
	 */
	struct UBP_ReplayList_C_ClearChildren_Params
	{	};

	/**
	 * Function BP_ReplayList.BP_ReplayList_C.Construct
	 */
	struct UBP_ReplayList_C_Construct_Params
	{	};

	/**
	 * Function BP_ReplayList.BP_ReplayList_C.OnRecentStreamsUpdate
	 */
	struct UBP_ReplayList_C_OnRecentStreamsUpdate_Params
	{
	public:
		TArray<struct FReplayBrowserInfo>                          Streams;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReplayList.BP_ReplayList_C.OnRecentStreamTravelTo
	 */
	struct UBP_ReplayList_C_OnRecentStreamTravelTo_Params
	{
	public:
		struct FReplayBrowserInfo                                  ReplayInfo;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ReplayList.BP_ReplayList_C.OnSendToTrash
	 */
	struct UBP_ReplayList_C_OnSendToTrash_Params
	{
	public:
		class UBP_ReplayListRow_C*                                 ReplayListRow;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReplayList.BP_ReplayList_C.ExecuteUbergraph_BP_ReplayList
	 */
	struct UBP_ReplayList_C_ExecuteUbergraph_BP_ReplayList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4NID[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
