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
	 * Function WB_MyInven.WB_MyInven_C.OnMessageReceived_5AC46FC14F5308C86CAA6FA2B9CFA42D
	 */
	struct UWB_MyInven_C_OnMessageReceived_5AC46FC14F5308C86CAA6FA2B9CFA42D_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MyInven.WB_MyInven_C.Construct
	 */
	struct UWB_MyInven_C_Construct_Params
	{	};

	/**
	 * Function WB_MyInven.WB_MyInven_C.EventFMsgWidgetPlayerInventoryTabActiveNotify
	 */
	struct UWB_MyInven_C_EventFMsgWidgetPlayerInventoryTabActiveNotify_Params
	{
	public:
		struct FMsgWidgetPlayerInventoryTabActiveNotify            Msg;                                                     // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_MyInven.WB_MyInven_C.ExecuteUbergraph_WB_MyInven
	 */
	struct UWB_MyInven_C_ExecuteUbergraph_WB_MyInven_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9AUE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
