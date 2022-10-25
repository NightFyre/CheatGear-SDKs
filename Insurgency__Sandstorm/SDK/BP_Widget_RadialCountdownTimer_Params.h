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
	 * Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.SetMaximumTime
	 */
	struct UBP_Widget_RadialCountdownTimer_C_SetMaximumTime_Params
	{
	public:
		float                                                      NewMaximumTime;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bUpdate;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.SetTargetWorldTime
	 */
	struct UBP_Widget_RadialCountdownTimer_C_SetTargetWorldTime_Params
	{
	public:
		float                                                      NewTargetTime;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.UpdateTimer
	 */
	struct UBP_Widget_RadialCountdownTimer_C_UpdateTimer_Params
	{	};

	/**
	 * Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.SetCountdownTimer
	 */
	struct UBP_Widget_RadialCountdownTimer_C_SetCountdownTimer_Params
	{
	public:
		float                                                      NewCountdown;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.Construct
	 */
	struct UBP_Widget_RadialCountdownTimer_C_Construct_Params
	{	};

	/**
	 * Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.Tick
	 */
	struct UBP_Widget_RadialCountdownTimer_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.ExecuteUbergraph_BP_Widget_RadialCountdownTimer
	 */
	struct UBP_Widget_RadialCountdownTimer_C_ExecuteUbergraph_BP_Widget_RadialCountdownTimer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
