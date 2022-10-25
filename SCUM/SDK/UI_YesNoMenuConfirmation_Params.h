#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.AdjustPosition
	 */
	struct UUI_YesNoMenuConfirmation_C_AdjustPosition_Params
	{
	public:
		struct FVector2D                                           adjustment;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.Init
	 */
	struct UUI_YesNoMenuConfirmation_C_Init_Params
	{
	public:
		class UCanvasPanel*                                        CanvasPanel;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Message;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UUI_YesNoMenuConfirmation_C_BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UUI_YesNoMenuConfirmation_C_BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.OnYes
	 */
	struct UUI_YesNoMenuConfirmation_C_OnYes_Params
	{	};

	/**
	 * Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.ExecuteUbergraph_UI_YesNoMenuConfirmation
	 */
	struct UUI_YesNoMenuConfirmation_C_ExecuteUbergraph_UI_YesNoMenuConfirmation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.YesClicked__DelegateSignature
	 */
	struct UUI_YesNoMenuConfirmation_C_YesClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
