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
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.BuildWidget
	 */
	struct UBP_ProfileInventoryItem_C_BuildWidget_Params
	{	};

	/**
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.SetTitleAndSubtitle
	 */
	struct UBP_ProfileInventoryItem_C_SetTitleAndSubtitle_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Subtitle;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.OnHoverStatus
	 */
	struct UBP_ProfileInventoryItem_C_OnHoverStatus_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.BP_OnEntryReleased
	 */
	struct UBP_ProfileInventoryItem_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.BP_OnItemExpansionChanged
	 */
	struct UBP_ProfileInventoryItem_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.BP_OnItemSelectionChanged
	 */
	struct UBP_ProfileInventoryItem_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.OnListItemObjectSet
	 */
	struct UBP_ProfileInventoryItem_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.OnMouseEnter
	 */
	struct UBP_ProfileInventoryItem_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.OnMouseLeave
	 */
	struct UBP_ProfileInventoryItem_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.OnAddedToFocusPath
	 */
	struct UBP_ProfileInventoryItem_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.OnRemovedFromFocusPath
	 */
	struct UBP_ProfileInventoryItem_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.BndEvt__InventoryItemBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ProfileInventoryItem_C_BndEvt__InventoryItemBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.Construct
	 */
	struct UBP_ProfileInventoryItem_C_Construct_Params
	{	};

	/**
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.ExecuteUbergraph_BP_ProfileInventoryItem
	 */
	struct UBP_ProfileInventoryItem_C_ExecuteUbergraph_BP_ProfileInventoryItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FJNU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.OnGamepadPressed__DelegateSignature
	 */
	struct UBP_ProfileInventoryItem_C_OnGamepadPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.OnItemSelected__DelegateSignature
	 */
	struct UBP_ProfileInventoryItem_C_OnItemSelected__DelegateSignature_Params
	{
	public:
		struct FOnlineInventoryOwnedItem                           Item;                                                    // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileInventoryItem.BP_ProfileInventoryItem_C.OnAddedToFocus__DelegateSignature
	 */
	struct UBP_ProfileInventoryItem_C_OnAddedToFocus__DelegateSignature_Params
	{
	public:
		class UBP_ProfileInventoryItem_C*                          Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
