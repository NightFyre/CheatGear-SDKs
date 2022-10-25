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
	 * Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.FindEmoji
	 */
	struct UWBP_ChatOverlay_Message_C_FindEmoji_Params
	{
	public:
		class FString                                              SearchIn;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    StartPosition;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutPos;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutCharSkip;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HH27[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_RW9X[0x2C];                                  // 0x001C(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.ParseMessage
	 */
	struct UWBP_ChatOverlay_Message_C_ParseMessage_Params
	{	};

	/**
	 * Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.Construct
	 */
	struct UWBP_ChatOverlay_Message_C_Construct_Params
	{	};

	/**
	 * Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.SetPrefix
	 */
	struct UWBP_ChatOverlay_Message_C_SetPrefix_Params
	{	};

	/**
	 * Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.SetDeadVis
	 */
	struct UWBP_ChatOverlay_Message_C_SetDeadVis_Params
	{	};

	/**
	 * Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.SetPlayerNameColour
	 */
	struct UWBP_ChatOverlay_Message_C_SetPlayerNameColour_Params
	{	};

	/**
	 * Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.PlayFadeOut
	 */
	struct UWBP_ChatOverlay_Message_C_PlayFadeOut_Params
	{	};

	/**
	 * Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.StartTimer
	 */
	struct UWBP_ChatOverlay_Message_C_StartTimer_Params
	{	};

	/**
	 * Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.Pause
	 */
	struct UWBP_ChatOverlay_Message_C_Pause_Params
	{	};

	/**
	 * Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.Unpause
	 */
	struct UWBP_ChatOverlay_Message_C_Unpause_Params
	{	};

	/**
	 * Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.OnAnimationFinished_Event_1
	 */
	struct UWBP_ChatOverlay_Message_C_OnAnimationFinished_Event_1_Params
	{	};

	/**
	 * Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.AddText
	 */
	struct UWBP_ChatOverlay_Message_C_AddText_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.AddEmoji
	 */
	struct UWBP_ChatOverlay_Message_C_AddEmoji_Params
	{	};

	/**
	 * Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.ExecuteUbergraph_WBP_ChatOverlay_Message
	 */
	struct UWBP_ChatOverlay_Message_C_ExecuteUbergraph_WBP_ChatOverlay_Message_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
