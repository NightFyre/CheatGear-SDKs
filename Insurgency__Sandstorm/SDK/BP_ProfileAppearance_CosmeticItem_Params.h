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
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.InvalidateCachedElements
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_InvalidateCachedElements_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.UpdateCache
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_UpdateCache_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.UpdateExclusion
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_UpdateExclusion_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.IsDLCorBundleItem
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_IsDLCorBundleItem_Params
	{
	public:
		bool                                                       OutValue;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.SetNewItemNotificationVisibility
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_SetNewItemNotificationVisibility_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnFocusReceived
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetColorAndOpacity_1
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_GetColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.IsOwned
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_IsOwned_Params
	{
	public:
		bool                                                       bOwned;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3UGY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.ResetShoppingCart
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_ResetShoppingCart_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.HasChildCosmetic
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_HasChildCosmetic_Params
	{
	public:
		bool                                                       bHasChild;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XCCG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.AddToShoppingCart
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_AddToShoppingCart_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.IsEquipped
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_IsEquipped_Params
	{
	public:
		bool                                                       bIncludeBase;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Equipped;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7N41[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.Get_NewItemSizeBox_Visibility_1
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_Get_NewItemSizeBox_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DVIJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.UpdateOwnership
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_UpdateOwnership_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.Get_MainSizeBox_Visibility_1
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_Get_MainSizeBox_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetText_1
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetLockBackgroundColor
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_GetLockBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.ShowLargeText
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_ShowLargeText_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.ShowSmallText
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_ShowSmallText_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetVisibility_2
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_GetVisibility_2_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.CostIconVisibility
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_CostIconVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.LockedIconVisibility
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_LockedIconVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetRarityColor
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_GetRarityColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetVisibility_1
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetBackgroundColor
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_GetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.PopulateItemText
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_PopulateItemText_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnMouseLeave
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnMouseEnter
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnAddedToFocusPath
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnRemovedFromFocusPath
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.Construct
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_Construct_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.ExecuteUbergraph_BP_ProfileAppearance_CosmeticItem
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_ExecuteUbergraph_BP_ProfileAppearance_CosmeticItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnUnhovered__DelegateSignature
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		class UWidget*                                             WidgetRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnHovered__DelegateSignature
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UWidget*                                             Ref;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnPressed__DelegateSignature
	 */
	struct UBP_ProfileAppearance_CosmeticItem_C_OnPressed__DelegateSignature_Params
	{
	public:
		class UBP_ProfileAppearance_CosmeticItem_C*                CosmeticButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
