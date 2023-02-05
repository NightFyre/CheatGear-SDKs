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
	 * Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnLoadSoundData
	 */
	struct ABP_MetaPlayerController_C_OnLoadSoundData_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2
	 */
	struct ABP_MetaPlayerController_C_OnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnMessageReceived_172D29F6408EA302BE7783989F3BCD08
	 */
	struct ABP_MetaPlayerController_C_OnMessageReceived_172D29F6408EA302BE7783989F3BCD08_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnMessageReceived_BCC82E2D4711E7B2925EAFBEA0A6FEB8
	 */
	struct ABP_MetaPlayerController_C_OnMessageReceived_BCC82E2D4711E7B2925EAFBEA0A6FEB8_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MetaPlayerController.BP_MetaPlayerController_C.ReceiveBeginPlay
	 */
	struct ABP_MetaPlayerController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MetaPlayerController.BP_MetaPlayerController_C.EventFMsgSucceedWidgetMoveItem
	 */
	struct ABP_MetaPlayerController_C_EventFMsgSucceedWidgetMoveItem_Params
	{
	public:
		struct FMsgSucceedWidgetMoveItem                           Msg;                                                     // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MetaPlayerController.BP_MetaPlayerController_C.EventFMsgPlayerExitClientRequest
	 */
	struct ABP_MetaPlayerController_C_EventFMsgPlayerExitClientRequest_Params
	{
	public:
		struct FMsgPlayerExitClientRequest                         Msg;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MetaPlayerController.BP_MetaPlayerController_C.ReceiveEndPlay
	 */
	struct ABP_MetaPlayerController_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MetaPlayerController.BP_MetaPlayerController_C.UpdateGameState
	 */
	struct ABP_MetaPlayerController_C_UpdateGameState_Params
	{
	public:
		struct FGameStateData                                      InGameStateData;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_MetaPlayerController.BP_MetaPlayerController_C.ExecuteUbergraph_BP_MetaPlayerController
	 */
	struct ABP_MetaPlayerController_C_ExecuteUbergraph_BP_MetaPlayerController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JW1S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
