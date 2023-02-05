#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.SetNextIndex
	 */
	struct UWB_GameSystemMessageGroup_C_SetNextIndex_Params
	{	};

	/**
	 * Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.OnMessageReceived_4934A8F44FB5D389A11568A9ECAB4816
	 */
	struct UWB_GameSystemMessageGroup_C_OnMessageReceived_4934A8F44FB5D389A11568A9ECAB4816_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.OnInitialized
	 */
	struct UWB_GameSystemMessageGroup_C_OnInitialized_Params
	{	};

	/**
	 * Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.EventFMsgSystemMessageNotify
	 */
	struct UWB_GameSystemMessageGroup_C_EventFMsgSystemMessageNotify_Params
	{
	public:
		struct FMsgSystemMessageNotify                             Msg;                                                     // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.Destruct
	 */
	struct UWB_GameSystemMessageGroup_C_Destruct_Params
	{	};

	/**
	 * Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.ExecuteUbergraph_WB_GameSystemMessageGroup
	 */
	struct UWB_GameSystemMessageGroup_C_ExecuteUbergraph_WB_GameSystemMessageGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OZF6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
