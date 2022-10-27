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
	 * Function BP_ReplayEventBase.BP_ReplayEventBase_C.Set Event Time
	 */
	struct UBP_ReplayEventBase_C_Set_Event_Time_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReplayEventBase.BP_ReplayEventBase_C.Set Controls Widget
	 */
	struct UBP_ReplayEventBase_C_Set_Controls_Widget_Params
	{
	public:
		class UBP_ReplayControls_C*                                Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReplayEventBase.BP_ReplayEventBase_C.Set Event Body
	 */
	struct UBP_ReplayEventBase_C_Set_Event_Body_Params
	{
	public:
		class FText                                                Body;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
