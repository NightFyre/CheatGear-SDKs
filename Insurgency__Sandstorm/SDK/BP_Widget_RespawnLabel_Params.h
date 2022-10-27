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
	 * Function BP_Widget_RespawnLabel.BP_Widget_RespawnLabel_C.SetDPRCounter
	 */
	struct UBP_Widget_RespawnLabel_C_SetDPRCounter_Params
	{	};

	/**
	 * Function BP_Widget_RespawnLabel.BP_Widget_RespawnLabel_C.SetCountdownTimer
	 */
	struct UBP_Widget_RespawnLabel_C_SetCountdownTimer_Params
	{
	public:
		float                                                      RemainingTime;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WaveTime;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_RespawnLabel.BP_Widget_RespawnLabel_C.SetTextOnly
	 */
	struct UBP_Widget_RespawnLabel_C_SetTextOnly_Params
	{	};

	/**
	 * Function BP_Widget_RespawnLabel.BP_Widget_RespawnLabel_C.SetIndeterminateSpinner
	 */
	struct UBP_Widget_RespawnLabel_C_SetIndeterminateSpinner_Params
	{	};

	/**
	 * Function BP_Widget_RespawnLabel.BP_Widget_RespawnLabel_C.Tick
	 */
	struct UBP_Widget_RespawnLabel_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_RespawnLabel.BP_Widget_RespawnLabel_C.ExecuteUbergraph_BP_Widget_RespawnLabel
	 */
	struct UBP_Widget_RespawnLabel_C_ExecuteUbergraph_BP_Widget_RespawnLabel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
