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
	 * Function DungeonCrawlerMessageRuntime.BaseInterface.UnbindMsgAll
	 */
	struct UBaseInterface_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawlerMessageRuntime.BaseInterface.UnbindMsg
	 */
	struct UBaseInterface_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawlerMessageRuntime.BaseInterface.TerminateBase
	 */
	struct UBaseInterface_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawlerMessageRuntime.BaseInterface.BroadcastMsgBlueprint
	 */
	struct UBaseInterface_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawlerMessageRuntime.MsgBaseNode.ReplyMsg
	 */
	struct UMsgBaseNode_ReplyMsg_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawlerMessageRuntime.MsgBaseNode.GetPayload
	 */
	struct UMsgBaseNode_GetPayload_Params
	{
	public:
		int32_t                                                    OutRecvMsgType;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawlerMessageRuntime.BindMsgNode.BindMsgNode
	 */
	struct UBindMsgNode_BindMsgNode_Params
	{
	public:
		class UObject*                                             Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScriptStruct*                                       RecvMsgType;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UY0H[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBindMsgNode*                                        ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawlerMessageRuntime.BroadcastMsgNode.BroadcastMsgNode
	 */
	struct UBroadcastMsgNode_BroadcastMsgNode_Params
	{
	public:
		class UObject*                                             Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScriptStruct*                                       RecvMsgType;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K7B6[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBroadcastMsgNode*                                   ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawlerMessageRuntime.BroadcastMsgNode.BroadcastMsg
	 */
	struct UBroadcastMsgNode_BroadcastMsg_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
