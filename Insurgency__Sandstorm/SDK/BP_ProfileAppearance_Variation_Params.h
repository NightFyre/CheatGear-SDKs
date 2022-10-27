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
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.InvalidateCachedElements
	 */
	struct UBP_ProfileAppearance_Variation_C_InvalidateCachedElements_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.UpdateCache
	 */
	struct UBP_ProfileAppearance_Variation_C_UpdateCache_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.OnFocusReceived
	 */
	struct UBP_ProfileAppearance_Variation_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.UpdateHoveredStatus
	 */
	struct UBP_ProfileAppearance_Variation_C_UpdateHoveredStatus_Params
	{
	public:
		bool                                                       NewHover;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.UpdateVariationWidget
	 */
	struct UBP_ProfileAppearance_Variation_C_UpdateVariationWidget_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.GetColorAndOpacity
	 */
	struct UBP_ProfileAppearance_Variation_C_GetColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.IsOwned
	 */
	struct UBP_ProfileAppearance_Variation_C_IsOwned_Params
	{
	public:
		bool                                                       bOwned;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z1AP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.IsEquipped
	 */
	struct UBP_ProfileAppearance_Variation_C_IsEquipped_Params
	{
	public:
		bool                                                       Equipped;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_56QZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.UpdateItemSizeBoxVisiblity
	 */
	struct UBP_ProfileAppearance_Variation_C_UpdateItemSizeBoxVisiblity_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.Get_MainSizeBox_Visibility_1
	 */
	struct UBP_ProfileAppearance_Variation_C_Get_MainSizeBox_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.UpdateOwnership
	 */
	struct UBP_ProfileAppearance_Variation_C_UpdateOwnership_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.GetText_1
	 */
	struct UBP_ProfileAppearance_Variation_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.GetLockBackgroundColor
	 */
	struct UBP_ProfileAppearance_Variation_C_GetLockBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.ShowLargeText
	 */
	struct UBP_ProfileAppearance_Variation_C_ShowLargeText_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.ShowSmallText
	 */
	struct UBP_ProfileAppearance_Variation_C_ShowSmallText_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.GetVisibility_2
	 */
	struct UBP_ProfileAppearance_Variation_C_GetVisibility_2_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.LockedIconVisibility
	 */
	struct UBP_ProfileAppearance_Variation_C_LockedIconVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.GetRarityColor
	 */
	struct UBP_ProfileAppearance_Variation_C_GetRarityColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.GetVisibility_1
	 */
	struct UBP_ProfileAppearance_Variation_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.GetBackgroundColor
	 */
	struct UBP_ProfileAppearance_Variation_C_GetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.OnMouseLeave
	 */
	struct UBP_ProfileAppearance_Variation_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.OnMouseEnter
	 */
	struct UBP_ProfileAppearance_Variation_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ProfileAppearance_Variation_C_BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.OnSelected
	 */
	struct UBP_ProfileAppearance_Variation_C_OnSelected_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.OnAddedToFocusPath
	 */
	struct UBP_ProfileAppearance_Variation_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.OnRemovedFromFocusPath
	 */
	struct UBP_ProfileAppearance_Variation_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.Construct
	 */
	struct UBP_ProfileAppearance_Variation_C_Construct_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.ExecuteUbergraph_BP_ProfileAppearance_Variation
	 */
	struct UBP_ProfileAppearance_Variation_C_ExecuteUbergraph_BP_ProfileAppearance_Variation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VJES[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.OnHovered__DelegateSignature
	 */
	struct UBP_ProfileAppearance_Variation_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UWidget*                                             Ref;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.OnUnhovered__DelegateSignature
	 */
	struct UBP_ProfileAppearance_Variation_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.OnItemAddedToCart__DelegateSignature
	 */
	struct UBP_ProfileAppearance_Variation_C_OnItemAddedToCart__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.OnCosmeticClicked__DelegateSignature
	 */
	struct UBP_ProfileAppearance_Variation_C_OnCosmeticClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OXJP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBP_ProfileAppearance_Variation_C*                   VariationButtonReference;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance_Variation.BP_ProfileAppearance_Variation_C.OnPressed__DelegateSignature
	 */
	struct UBP_ProfileAppearance_Variation_C_OnPressed__DelegateSignature_Params
	{
	public:
		class UBP_ProfileAppearance_CosmeticItem_C*                CosmeticButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
