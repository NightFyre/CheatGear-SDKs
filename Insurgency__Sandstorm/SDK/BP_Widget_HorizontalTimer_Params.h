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
	 * Function BP_Widget_HorizontalTimer.BP_Widget_HorizontalTimer_C.UpdateMaximumTime
	 */
	struct UBP_Widget_HorizontalTimer_C_UpdateMaximumTime_Params
	{
	public:
		float                                                      NewMaximum;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_HorizontalTimer.BP_Widget_HorizontalTimer_C.UpdateRemainingTime
	 */
	struct UBP_Widget_HorizontalTimer_C_UpdateRemainingTime_Params
	{
	public:
		float                                                      NewRemainingTime;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
