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
	 * Function WBP_BreathOverlay.WBP_BreathOverlay_C.Construct
	 */
	struct UWBP_BreathOverlay_C_Construct_Params
	{	};

	/**
	 * Function WBP_BreathOverlay.WBP_BreathOverlay_C.OnControlBreathExhale_Event_1
	 */
	struct UWBP_BreathOverlay_C_OnControlBreathExhale_Event_1_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BreathOverlay.WBP_BreathOverlay_C.OnControlBreathInhale_Event_1
	 */
	struct UWBP_BreathOverlay_C_OnControlBreathInhale_Event_1_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BreathOverlay.WBP_BreathOverlay_C.OnCameraStyleChanged_Event_1
	 */
	struct UWBP_BreathOverlay_C_OnCameraStyleChanged_Event_1_Params
	{
	public:
		class FName                                                OldCameraStyle;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewCameraStyle;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BreathOverlay.WBP_BreathOverlay_C.OnPlayerControllerStateChanged_Event_1
	 */
	struct UWBP_BreathOverlay_C_OnPlayerControllerStateChanged_Event_1_Params
	{
	public:
		class FName                                                OldState;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewState;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BreathOverlay.WBP_BreathOverlay_C.ExecuteUbergraph_WBP_BreathOverlay
	 */
	struct UWBP_BreathOverlay_C_ExecuteUbergraph_WBP_BreathOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
