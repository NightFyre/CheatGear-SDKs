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
	 * Function BP_KitSelect_AddUpgradeButton.BP_KitSelect_AddUpgradeButton_C.OnFocusReceived
	 */
	struct UBP_KitSelect_AddUpgradeButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_AddUpgradeButton.BP_KitSelect_AddUpgradeButton_C.BndEvt__AddUpgradeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_KitSelect_AddUpgradeButton_C_BndEvt__AddUpgradeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_AddUpgradeButton.BP_KitSelect_AddUpgradeButton_C.BndEvt__UpgradeAddButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_KitSelect_AddUpgradeButton_C_BndEvt__UpgradeAddButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_AddUpgradeButton.BP_KitSelect_AddUpgradeButton_C.OnMouseEnter
	 */
	struct UBP_KitSelect_AddUpgradeButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_AddUpgradeButton.BP_KitSelect_AddUpgradeButton_C.OnMouseLeave
	 */
	struct UBP_KitSelect_AddUpgradeButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_AddUpgradeButton.BP_KitSelect_AddUpgradeButton_C.OnAddedToFocusPath
	 */
	struct UBP_KitSelect_AddUpgradeButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_AddUpgradeButton.BP_KitSelect_AddUpgradeButton_C.OnRemovedFromFocusPath
	 */
	struct UBP_KitSelect_AddUpgradeButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_AddUpgradeButton.BP_KitSelect_AddUpgradeButton_C.PreConstruct
	 */
	struct UBP_KitSelect_AddUpgradeButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_AddUpgradeButton.BP_KitSelect_AddUpgradeButton_C.ExecuteUbergraph_BP_KitSelect_AddUpgradeButton
	 */
	struct UBP_KitSelect_AddUpgradeButton_C_ExecuteUbergraph_BP_KitSelect_AddUpgradeButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LE7S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_KitSelect_AddUpgradeButton.BP_KitSelect_AddUpgradeButton_C.OnAddUpgradePressed__DelegateSignature
	 */
	struct UBP_KitSelect_AddUpgradeButton_C_OnAddUpgradePressed__DelegateSignature_Params
	{
	public:
		EItemSlot                                                  ForSlot;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S5F9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ParentLoadoutCategoryIndex;                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
