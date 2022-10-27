#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_TextChat_MsgPrefix.WBP_TextChat_MsgPrefix_C.SetupMsgPrefix
	 */
	struct UWBP_TextChat_MsgPrefix_C_SetupMsgPrefix_Params
	{
	public:
		class UHDTextChatMsgInfo*                                  Msg;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_TextChat_MsgPrefix.WBP_TextChat_MsgPrefix_C.ExecuteUbergraph_WBP_TextChat_MsgPrefix
	 */
	struct UWBP_TextChat_MsgPrefix_C_ExecuteUbergraph_WBP_TextChat_MsgPrefix_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QMXX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
