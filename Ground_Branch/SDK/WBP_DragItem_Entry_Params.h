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
	 * Function WBP_DragItem_Entry.WBP_DragItem_Entry_C.GetBrushColor_1
	 */
	struct UWBP_DragItem_Entry_C_GetBrushColor_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DragItem_Entry.WBP_DragItem_Entry_C.GetToolTip
	 */
	struct UWBP_DragItem_Entry_C_GetToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DragItem_Entry.WBP_DragItem_Entry_C.OnDragDetected
	 */
	struct UWBP_DragItem_Entry_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DragItem_Entry.WBP_DragItem_Entry_C.OnMouseButtonDown
	 */
	struct UWBP_DragItem_Entry_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_DragItem_Entry.WBP_DragItem_Entry_C.OnLoaded_1CF40394485F0C6B18142C92575A301C
	 */
	struct UWBP_DragItem_Entry_C_OnLoaded_1CF40394485F0C6B18142C92575A301C_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DragItem_Entry.WBP_DragItem_Entry_C.OnAsyncLoadAssetComplete_Event0
	 */
	struct UWBP_DragItem_Entry_C_OnAsyncLoadAssetComplete_Event0_Params
	{
	public:
		class UObject*                                             LoadedAsset;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DragItem_Entry.WBP_DragItem_Entry_C.Construct
	 */
	struct UWBP_DragItem_Entry_C_Construct_Params
	{	};

	/**
	 * Function WBP_DragItem_Entry.WBP_DragItem_Entry_C.Setup
	 */
	struct UWBP_DragItem_Entry_C_Setup_Params
	{	};

	/**
	 * Function WBP_DragItem_Entry.WBP_DragItem_Entry_C.ExecuteUbergraph_WBP_DragItem_Entry
	 */
	struct UWBP_DragItem_Entry_C_ExecuteUbergraph_WBP_DragItem_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
