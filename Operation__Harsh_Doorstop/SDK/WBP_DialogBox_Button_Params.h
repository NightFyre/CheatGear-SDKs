#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_DialogBox_Button.WBP_DialogBox_Button_C.UpdateAppearance
	 */
	struct UWBP_DialogBox_Button_C_UpdateAppearance_Params
	{	};

	/**
	 * Function WBP_DialogBox_Button.WBP_DialogBox_Button_C.SetActive
	 */
	struct UWBP_DialogBox_Button_C_SetActive_Params
	{
	public:
		bool                                                       bNewActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DialogBox_Button.WBP_DialogBox_Button_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DialogBox_Button_C_BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DialogBox_Button.WBP_DialogBox_Button_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_DialogBox_Button_C_BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DialogBox_Button.WBP_DialogBox_Button_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWBP_DialogBox_Button_C_BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DialogBox_Button.WBP_DialogBox_Button_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_DialogBox_Button_C_BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DialogBox_Button.WBP_DialogBox_Button_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_DialogBox_Button_C_BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DialogBox_Button.WBP_DialogBox_Button_C.PreConstruct
	 */
	struct UWBP_DialogBox_Button_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DialogBox_Button.WBP_DialogBox_Button_C.ExecuteUbergraph_WBP_DialogBox_Button
	 */
	struct UWBP_DialogBox_Button_C_ExecuteUbergraph_WBP_DialogBox_Button_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DialogBox_Button.WBP_DialogBox_Button_C.ButtonClicked__DelegateSignature
	 */
	struct UWBP_DialogBox_Button_C_ButtonClicked__DelegateSignature_Params
	{
	public:
		class UWBP_DialogBox_Button_C*                             ClickedBtn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
