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
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.UpdateUpgradeDisplayData
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_UpdateUpgradeDisplayData_Params
	{
	public:
		class UClass*                                              InUpgradeClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  InParentItemSlot;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2K95[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InParentItemSubSlot;                                     // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSupplyCost;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIsSupplyCostVisible;                                  // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6CLU[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              InItemClass;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InParentLoadoutCategoryIndex;                            // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.Get_SupplyCostWidget_Visibility_1
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_Get_SupplyCostWidget_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.HandleGamepadRemove
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_HandleGamepadRemove_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnKeyDown
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnFocusReceived
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.SetClass
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_SetClass_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.GetButtonFgColor
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_GetButtonFgColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.Get_Background_BrushColor_1
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_Get_Background_BrushColor_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.RefreshLeftTab
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_RefreshLeftTab_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.Get_SupplyCostWidget_Text_1
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_Get_SupplyCostWidget_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnMouseLeave
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnClassSet
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_OnClassSet_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnAddedToFocusPath
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnRemovedFromFocusPath
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnMouseEnter
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.PreConstruct
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.ExecuteUbergraph_BP_KitSelect_UpgradeDisplay
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_ExecuteUbergraph_BP_KitSelect_UpgradeDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HYA4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnHover__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_OnHover__DelegateSignature_Params
	{
	public:
		class UClass*                                              UpgradeClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ParentItemClass;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HoverValue;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EItemSlot                                                  ItemSlot;                                                // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6HC5[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemSubslot;                                             // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnUnequipClicked__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_OnUnequipClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  ParentSlot;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnClicked__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeDisplay_C_OnClicked__DelegateSignature_Params
	{
	public:
		EItemSlot                                                  ParentSlot;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8IVN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ParentLoadoutCategoryIndex;                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              UpgradeClass;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
