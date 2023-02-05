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
	 * Function WB_ControllableItemBase.WB_ControllableItemBase_C.GetItemToolTipWidget
	 */
	struct UWB_ControllableItemBase_C_GetItemToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ControllableItemBase.WB_ControllableItemBase_C.OnMouseButtonDown
	 */
	struct UWB_ControllableItemBase_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_ControllableItemBase.WB_ControllableItemBase_C.OnMouseButtonDoubleClick
	 */
	struct UWB_ControllableItemBase_C_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_ControllableItemBase.WB_ControllableItemBase_C.PreConstruct
	 */
	struct UWB_ControllableItemBase_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ControllableItemBase.WB_ControllableItemBase_C.Construct
	 */
	struct UWB_ControllableItemBase_C_Construct_Params
	{	};

	/**
	 * Function WB_ControllableItemBase.WB_ControllableItemBase_C.OnItemData
	 */
	struct UWB_ControllableItemBase_C_OnItemData_Params
	{
	public:
		struct FItemData                                           NewItemData;                                             // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FItemData                                           OldItemData;                                             // 0x0090(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_ControllableItemBase.WB_ControllableItemBase_C.OnDragCancelled
	 */
	struct UWB_ControllableItemBase_C_OnDragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ControllableItemBase.WB_ControllableItemBase_C.CreateItemTooltip
	 */
	struct UWB_ControllableItemBase_C_CreateItemTooltip_Params
	{	};

	/**
	 * Function WB_ControllableItemBase.WB_ControllableItemBase_C.OnSetItemRequirementsFulfilledStatus
	 */
	struct UWB_ControllableItemBase_C_OnSetItemRequirementsFulfilledStatus_Params
	{
	public:
		bool                                                       bFufilled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XCXB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPrimaryAssetId                                     PlayerCharacterId;                                       // 0x0004(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BXDY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAttributeSet*                                     AttributeSet;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FPrimaryAssetId>                             PerkIdArray;                                             // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_ControllableItemBase.WB_ControllableItemBase_C.OnItemContentsCountUpdated
	 */
	struct UWB_ControllableItemBase_C_OnItemContentsCountUpdated_Params
	{
	public:
		int32_t                                                    ContentsCount;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ControllableItemBase.WB_ControllableItemBase_C.UpdateItemContentsCount
	 */
	struct UWB_ControllableItemBase_C_UpdateItemContentsCount_Params
	{	};

	/**
	 * Function WB_ControllableItemBase.WB_ControllableItemBase_C.ExecuteUbergraph_WB_ControllableItemBase
	 */
	struct UWB_ControllableItemBase_C_ExecuteUbergraph_WB_ControllableItemBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IBZW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
