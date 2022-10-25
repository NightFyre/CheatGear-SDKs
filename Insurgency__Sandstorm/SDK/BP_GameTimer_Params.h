#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_GameTimer.BP_GameTimer_C.On Round Over
	 */
	struct UBP_GameTimer_C_On_Round_Over_Params
	{
	public:
		struct FPlayerRoundOverData                                UIData;                                                  // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_GameTimer.BP_GameTimer_C.GetFormattedNumberForTimer
	 */
	struct UBP_GameTimer_C_GetFormattedNumberForTimer_Params
	{
	public:
		int32_t                                                    Number;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OMT4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Output;                                                  // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_GameTimer.BP_GameTimer_C.SetTimerText
	 */
	struct UBP_GameTimer_C_SetTimerText_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameTimer.BP_GameTimer_C.UpdateTimer
	 */
	struct UBP_GameTimer_C_UpdateTimer_Params
	{	};

	/**
	 * Function BP_GameTimer.BP_GameTimer_C.Tick
	 */
	struct UBP_GameTimer_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameTimer.BP_GameTimer_C.Construct
	 */
	struct UBP_GameTimer_C_Construct_Params
	{	};

	/**
	 * Function BP_GameTimer.BP_GameTimer_C.ExecuteUbergraph_BP_GameTimer
	 */
	struct UBP_GameTimer_C_ExecuteUbergraph_BP_GameTimer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
