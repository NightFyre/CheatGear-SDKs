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
	 * Function WB_TradeChannelChat.WB_TradeChannelChat_C.OnChatType
	 */
	struct UWB_TradeChannelChat_C_OnChatType_Params
	{
	public:
		EChatType                                                  NewItemData;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EChatType                                                  OldItemData;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TradeChannelChat.WB_TradeChannelChat_C.OnChatAccountData
	 */
	struct UWB_TradeChannelChat_C_OnChatAccountData_Params
	{
	public:
		struct FChatAccountData                                    NewItemData;                                             // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FChatAccountData                                    OldItemData;                                             // 0x0040(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_TradeChannelChat.WB_TradeChannelChat_C.ExecuteUbergraph_WB_TradeChannelChat
	 */
	struct UWB_TradeChannelChat_C_ExecuteUbergraph_WB_TradeChannelChat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
