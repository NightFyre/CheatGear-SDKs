﻿#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * Function SIGIS_Craft_CatTab_Widget.SIGIS_Craft_CatTab_Widget_C.ShipAttachSlot_RefreshNumbUseableAttachments
	 */
	struct USIGIS_Craft_CatTab_Widget_C_ShipAttachSlot_RefreshNumbUseableAttachments_Params
	{
	public:
		int32_t                                                    inInt;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Craft_CatTab_Widget.SIGIS_Craft_CatTab_Widget_C.AreAnyAttachmentsOfThisTypeEquipped
	 */
	struct USIGIS_Craft_CatTab_Widget_C_AreAnyAttachmentsOfThisTypeEquipped_Params
	{
	public:
		bool                                                       IsOneEquipped;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_Craft_CatTab_Widget.SIGIS_Craft_CatTab_Widget_C.CraftCategoryTab_IsSelectedLook
	 */
	struct USIGIS_Craft_CatTab_Widget_C_CraftCategoryTab_IsSelectedLook_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoNotSetAsState;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_Craft_CatTab_Widget.SIGIS_Craft_CatTab_Widget_C.PreSetup
	 */
	struct USIGIS_Craft_CatTab_Widget_C_PreSetup_Params
	{	};

	/**
	 * Function SIGIS_Craft_CatTab_Widget.SIGIS_Craft_CatTab_Widget_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Craft_CatTab_Widget_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Craft_CatTab_Widget.SIGIS_Craft_CatTab_Widget_C.ForceUnselectedColour
	 */
	struct USIGIS_Craft_CatTab_Widget_C_ForceUnselectedColour_Params
	{	};

	/**
	 * Function SIGIS_Craft_CatTab_Widget.SIGIS_Craft_CatTab_Widget_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_Craft_CatTab_Widget_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Craft_CatTab_Widget.SIGIS_Craft_CatTab_Widget_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_Craft_CatTab_Widget_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Craft_CatTab_Widget.SIGIS_Craft_CatTab_Widget_C.PreConstruct
	 */
	struct USIGIS_Craft_CatTab_Widget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_Craft_CatTab_Widget.SIGIS_Craft_CatTab_Widget_C.ExecuteUbergraph_SIGIS_Craft_CatTab_Widget
	 */
	struct USIGIS_Craft_CatTab_Widget_C_ExecuteUbergraph_SIGIS_Craft_CatTab_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LNN5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_Craft_CatTab_Widget.SIGIS_Craft_CatTab_Widget_C.ED_ShipAttachmentSlotPressed__DelegateSignature
	 */
	struct USIGIS_Craft_CatTab_Widget_C_ED_ShipAttachmentSlotPressed__DelegateSignature_Params
	{
	public:
		class FString                                              FilterToWhichType;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
