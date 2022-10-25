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
	 * Function WBP_GameMessage_Manager.WBP_GameMessage_Manager_C.FadeMessages
	 */
	struct UWBP_GameMessage_Manager_C_FadeMessages_Params
	{
	public:
		TArray<class FName>                                        Tags;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_GameMessage_Manager.WBP_GameMessage_Manager_C.RemoveAllMessages
	 */
	struct UWBP_GameMessage_Manager_C_RemoveAllMessages_Params
	{	};

	/**
	 * Function WBP_GameMessage_Manager.WBP_GameMessage_Manager_C.RemoveMessages
	 */
	struct UWBP_GameMessage_Manager_C_RemoveMessages_Params
	{
	public:
		TArray<class FName>                                        Tags;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_GameMessage_Manager.WBP_GameMessage_Manager_C.AddMessage
	 */
	struct UWBP_GameMessage_Manager_C_AddMessage_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FName>                                        Tags;                                                    // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      DisplayTime;                                             // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FlushMessages;                                           // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GameMessage_Manager.WBP_GameMessage_Manager_C.ExecuteUbergraph_WBP_GameMessage_Manager
	 */
	struct UWBP_GameMessage_Manager_C_ExecuteUbergraph_WBP_GameMessage_Manager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
