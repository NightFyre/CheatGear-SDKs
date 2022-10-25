#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.AN_ButtonPressed
	 */
	struct UAction_Operative_ToggleBarrier_C_AN_ButtonPressed_Params
	{	};

	/**
	 * Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.AN_ShowDevice
	 */
	struct UAction_Operative_ToggleBarrier_C_AN_ShowDevice_Params
	{	};

	/**
	 * Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.AN_HideDevice
	 */
	struct UAction_Operative_ToggleBarrier_C_AN_HideDevice_Params
	{	};

	/**
	 * Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.ExecuteUbergraph_Action_Operative_ToggleBarrier
	 */
	struct UAction_Operative_ToggleBarrier_C_ExecuteUbergraph_Action_Operative_ToggleBarrier_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2LRG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
