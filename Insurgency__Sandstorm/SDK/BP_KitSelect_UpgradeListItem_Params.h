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
	 * Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.GetSlotNameTextVisibility
	 */
	struct UBP_KitSelect_UpgradeListItem_C_GetSlotNameTextVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.UpdateUpgradeAddData
	 */
	struct UBP_KitSelect_UpgradeListItem_C_UpdateUpgradeAddData_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnFocusReceived
	 */
	struct UBP_KitSelect_UpgradeListItem_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.UpdateUpgradeItemData
	 */
	struct UBP_KitSelect_UpgradeListItem_C_UpdateUpgradeItemData_Params
	{
	public:
		class UClass*                                              InUpgradeClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  InParentItemSlot;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VKBX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSupplyCost;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInSupplyCostVisible;                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInSelected;                                             // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInPurchasable;                                          // 0x0012(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsNewGear;                                            // 0x0013(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.BndEvt__BP_KitSelect_UpgradeButton_K2Node_ComponentBoundEvent_0_OnUpgradeListItemClicked__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeListItem_C_BndEvt__BP_KitSelect_UpgradeButton_K2Node_ComponentBoundEvent_0_OnUpgradeListItemClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.BndEvt__BP_KitSelect_UpgradeAddButton_K2Node_ComponentBoundEvent_1_OnAddUpgradeClicked__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeListItem_C_BndEvt__BP_KitSelect_UpgradeAddButton_K2Node_ComponentBoundEvent_1_OnAddUpgradeClicked__DelegateSignature_Params
	{
	public:
		EWeaponUpgradeSlot                                         UpgradeSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.Construct
	 */
	struct UBP_KitSelect_UpgradeListItem_C_Construct_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnAddedToFocusPath
	 */
	struct UBP_KitSelect_UpgradeListItem_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnMouseEnter
	 */
	struct UBP_KitSelect_UpgradeListItem_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnMouseLeave
	 */
	struct UBP_KitSelect_UpgradeListItem_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.PreConstruct
	 */
	struct UBP_KitSelect_UpgradeListItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.ExecuteUbergraph_BP_KitSelect_UpgradeListItem
	 */
	struct UBP_KitSelect_UpgradeListItem_C_ExecuteUbergraph_BP_KitSelect_UpgradeListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnUpgradeListItemUnhover__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeListItem_C_OnUpgradeListItemUnhover__DelegateSignature_Params
	{
	public:
		EWeaponUpgradeSlot                                         UpgradeSlotSlot;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnUpgradeListItemHover__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeListItem_C_OnUpgradeListItemHover__DelegateSignature_Params
	{
	public:
		EWeaponUpgradeSlot                                         UpgradeSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnUpgradeListItemClicked__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeListItem_C_OnUpgradeListItemClicked__DelegateSignature_Params
	{
	public:
		EWeaponUpgradeSlot                                         UpgradeSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
