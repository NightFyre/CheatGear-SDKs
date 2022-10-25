#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.GetCriticalLungsAnimation
	 */
	struct UBreathingBarLungsWidget_C_GetCriticalLungsAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.Construct
	 */
	struct UBreathingBarLungsWidget_C_Construct_Params
	{	};

	/**
	 * Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.ExecuteUbergraph_BreathingBarLungsWidget
	 */
	struct UBreathingBarLungsWidget_C_ExecuteUbergraph_BreathingBarLungsWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
