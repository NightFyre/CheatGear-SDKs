#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function BP_UnEquipDragDrop.BP_UnEquipDragDrop_C.ClearOpacity
	 */
	struct UBP_UnEquipDragDrop_C_ClearOpacity_Params
	{	};

	/**
	 * Function BP_UnEquipDragDrop.BP_UnEquipDragDrop_C.Dragged
	 */
	struct UBP_UnEquipDragDrop_C_Dragged_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_UnEquipDragDrop.BP_UnEquipDragDrop_C.DragCancelled
	 */
	struct UBP_UnEquipDragDrop_C_DragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_UnEquipDragDrop.BP_UnEquipDragDrop_C.Drop
	 */
	struct UBP_UnEquipDragDrop_C_Drop_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_UnEquipDragDrop.BP_UnEquipDragDrop_C.ExecuteUbergraph_BP_UnEquipDragDrop
	 */
	struct UBP_UnEquipDragDrop_C_ExecuteUbergraph_BP_UnEquipDragDrop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XZ8G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
