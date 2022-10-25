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
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.OnFocusReceived
	 */
	struct UBP_OnlineStore_Item_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.UpdateHighlightNotification
	 */
	struct UBP_OnlineStore_Item_C_UpdateHighlightNotification_Params
	{	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.RefreshButtonBox
	 */
	struct UBP_OnlineStore_Item_C_RefreshButtonBox_Params
	{	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.UpdateItemData
	 */
	struct UBP_OnlineStore_Item_C_UpdateItemData_Params
	{
	public:
		class UStoreItem*                                          InData;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.SetSelected
	 */
	struct UBP_OnlineStore_Item_C_SetSelected_Params
	{
	public:
		bool                                                       InSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.RefreshColors
	 */
	struct UBP_OnlineStore_Item_C_RefreshColors_Params
	{	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.Construct
	 */
	struct UBP_OnlineStore_Item_C_Construct_Params
	{	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.OnAddedToFocusPath
	 */
	struct UBP_OnlineStore_Item_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.OnRemovedFromFocusPath
	 */
	struct UBP_OnlineStore_Item_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.OnMouseEnter
	 */
	struct UBP_OnlineStore_Item_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.OnMouseLeave
	 */
	struct UBP_OnlineStore_Item_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_OnlineStore_Item_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_OnlineStore_Item_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_OnlineStore_Item_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_OnlineStore_Item_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.BndEvt__OwnedButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_OnlineStore_Item_C_BndEvt__OwnedButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.ExecuteUbergraph_BP_OnlineStore_Item
	 */
	struct UBP_OnlineStore_Item_C_ExecuteUbergraph_BP_OnlineStore_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.OnClicked__DelegateSignature
	 */
	struct UBP_OnlineStore_Item_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UBP_OnlineStore_Item_C*                              ClickedItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.OnPurchaseClicked__DelegateSignature
	 */
	struct UBP_OnlineStore_Item_C_OnPurchaseClicked__DelegateSignature_Params
	{
	public:
		class UStoreItem*                                          PurchasedItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OnlineStore_Item.BP_OnlineStore_Item_C.OnHovered__DelegateSignature
	 */
	struct UBP_OnlineStore_Item_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UBP_OnlineStore_Item_C*                              HoveredItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
