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
	 * Function PerformanceMonitor.PerformanceMonitor_C.shouldAlarmBeOn
	 */
	struct UPerformanceMonitor_C_shouldAlarmBeOn_Params
	{
	public:
		bool                                                       shouldAlarmBeOn;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PerformanceMonitor.PerformanceMonitor_C.GetContentSize
	 */
	struct UPerformanceMonitor_C_GetContentSize_Params
	{
	public:
		struct FVector2D                                           contentSize;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
