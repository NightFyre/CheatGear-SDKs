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
	 * Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.UpdateAppearance
	 */
	struct UWBP_MainMenu_NavBarButton_C_UpdateAppearance_Params
	{	};

	/**
	 * Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.SetActive
	 */
	struct UWBP_MainMenu_NavBarButton_C_SetActive_Params
	{
	public:
		bool                                                       bNewActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.PreConstruct
	 */
	struct UWBP_MainMenu_NavBarButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_MainMenu_NavBarButton_C_BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_MainMenu_NavBarButton_C_BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWBP_MainMenu_NavBarButton_C_BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_MainMenu_NavBarButton_C_BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_MainMenu_NavBarButton_C_BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.OnInitialized
	 */
	struct UWBP_MainMenu_NavBarButton_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.ExecuteUbergraph_WBP_MainMenu_NavBarButton
	 */
	struct UWBP_MainMenu_NavBarButton_C_ExecuteUbergraph_WBP_MainMenu_NavBarButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.ButtonClicked__DelegateSignature
	 */
	struct UWBP_MainMenu_NavBarButton_C_ButtonClicked__DelegateSignature_Params
	{
	public:
		class UWBP_MainMenu_NavBarButton_C*                        ClickedBtn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
