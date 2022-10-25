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
	 * Function BP_DroppedItem_Rifle.BP_DroppedItem_Rifle_C.AddBoxInteract
	 */
	struct ABP_DroppedItem_Rifle_C_AddBoxInteract_Params
	{	};

	/**
	 * Function BP_DroppedItem_Rifle.BP_DroppedItem_Rifle_C.InpActEvt_Interact_K2Node_InputActionEvent_2
	 */
	struct ABP_DroppedItem_Rifle_C_InpActEvt_Interact_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroppedItem_Rifle.BP_DroppedItem_Rifle_C.InpActEvt_Interact_K2Node_InputActionEvent_1
	 */
	struct ABP_DroppedItem_Rifle_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroppedItem_Rifle.BP_DroppedItem_Rifle_C.MakeInteractiveEvent
	 */
	struct ABP_DroppedItem_Rifle_C_MakeInteractiveEvent_Params
	{	};

	/**
	 * Function BP_DroppedItem_Rifle.BP_DroppedItem_Rifle_C.OnBeginCursorOver_Event_1
	 */
	struct ABP_DroppedItem_Rifle_C_OnBeginCursorOver_Event_1_Params
	{
	public:
		class UPrimitiveComponent*                                 TouchedComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroppedItem_Rifle.BP_DroppedItem_Rifle_C.OnEndCursorOver_Event_1
	 */
	struct ABP_DroppedItem_Rifle_C_OnEndCursorOver_Event_1_Params
	{
	public:
		class UPrimitiveComponent*                                 TouchedComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroppedItem_Rifle.BP_DroppedItem_Rifle_C.PickupFirearm
	 */
	struct ABP_DroppedItem_Rifle_C_PickupFirearm_Params
	{	};

	/**
	 * Function BP_DroppedItem_Rifle.BP_DroppedItem_Rifle_C.ExecuteUbergraph_BP_DroppedItem_Rifle
	 */
	struct ABP_DroppedItem_Rifle_C_ExecuteUbergraph_BP_DroppedItem_Rifle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DA2B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
