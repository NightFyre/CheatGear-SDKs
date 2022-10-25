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
	 * Function WBP_GameMessage.WBP_GameMessage_C.Construct
	 */
	struct UWBP_GameMessage_C_Construct_Params
	{	};

	/**
	 * Function WBP_GameMessage.WBP_GameMessage_C.PlayFadeOut
	 */
	struct UWBP_GameMessage_C_PlayFadeOut_Params
	{	};

	/**
	 * Function WBP_GameMessage.WBP_GameMessage_C.OnAnimationFinished_Event_1
	 */
	struct UWBP_GameMessage_C_OnAnimationFinished_Event_1_Params
	{	};

	/**
	 * Function WBP_GameMessage.WBP_GameMessage_C.ExecuteUbergraph_WBP_GameMessage
	 */
	struct UWBP_GameMessage_C_ExecuteUbergraph_WBP_GameMessage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
