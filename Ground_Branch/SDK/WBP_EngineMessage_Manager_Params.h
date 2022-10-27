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
	 * Function WBP_EngineMessage_Manager.WBP_EngineMessage_Manager_C.GetSpectatorMinimapShifterVis
	 */
	struct UWBP_EngineMessage_Manager_C_GetSpectatorMinimapShifterVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_EngineMessage_Manager.WBP_EngineMessage_Manager_C.GetEngineMessagesVisi
	 */
	struct UWBP_EngineMessage_Manager_C_GetEngineMessagesVisi_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_EngineMessage_Manager.WBP_EngineMessage_Manager_C.AddMessage
	 */
	struct UWBP_EngineMessage_Manager_C_AddMessage_Params
	{
	public:
		class FString                                              Prefix;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              PlayerName;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                Message;                                                 // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              Suffix;                                                  // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Highlight;                                               // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FlushMessages;                                           // 0x0049(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_EngineMessage_Manager.WBP_EngineMessage_Manager_C.ExecuteUbergraph_WBP_EngineMessage_Manager
	 */
	struct UWBP_EngineMessage_Manager_C_ExecuteUbergraph_WBP_EngineMessage_Manager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BTHW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
