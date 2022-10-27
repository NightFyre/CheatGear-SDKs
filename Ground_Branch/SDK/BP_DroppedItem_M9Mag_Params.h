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
	 * Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.AddBoxInteract
	 */
	struct ABP_DroppedItem_M9Mag_C_AddBoxInteract_Params
	{	};

	/**
	 * Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.InpActEvt_Interact_K2Node_InputActionEvent_1
	 */
	struct ABP_DroppedItem_M9Mag_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.MakeInteractiveEvent
	 */
	struct ABP_DroppedItem_M9Mag_C_MakeInteractiveEvent_Params
	{	};

	/**
	 * Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.OnBeginCursorOver_Event_1
	 */
	struct ABP_DroppedItem_M9Mag_C_OnBeginCursorOver_Event_1_Params
	{
	public:
		class UPrimitiveComponent*                                 TouchedComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.OnEndCursorOver_Event_1
	 */
	struct ABP_DroppedItem_M9Mag_C_OnEndCursorOver_Event_1_Params
	{
	public:
		class UPrimitiveComponent*                                 TouchedComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.ExecuteUbergraph_BP_DroppedItem_M9Mag
	 */
	struct ABP_DroppedItem_M9Mag_C_ExecuteUbergraph_BP_DroppedItem_M9Mag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
