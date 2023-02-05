#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function WB_Menu.WB_Menu_C.OnSendMsgVideoDisplayApplyNotify
	 */
	struct UWB_Menu_C_OnSendMsgVideoDisplayApplyNotify_Params
	{
	public:
		bool                                                       IsApplyed;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DPF0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Menu.WB_Menu_C.Construct
	 */
	struct UWB_Menu_C_Construct_Params
	{	};

	/**
	 * Function WB_Menu.WB_Menu_C.OnMenuPop
	 */
	struct UWB_Menu_C_OnMenuPop_Params
	{	};

	/**
	 * Function WB_Menu.WB_Menu_C.BndEvt__WB_Menu_OptionsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWB_Menu_C_BndEvt__WB_Menu_OptionsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_Menu.WB_Menu_C.OnApplyClicked
	 */
	struct UWB_Menu_C_OnApplyClicked_Params
	{
	public:
		bool                                                       IsApply;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Menu.WB_Menu_C.OnDisplayOptionApplyPopup
	 */
	struct UWB_Menu_C_OnDisplayOptionApplyPopup_Params
	{	};

	/**
	 * Function WB_Menu.WB_Menu_C.UpdatePopupText
	 */
	struct UWB_Menu_C_UpdatePopupText_Params
	{	};

	/**
	 * Function WB_Menu.WB_Menu_C.ExecuteUbergraph_WB_Menu
	 */
	struct UWB_Menu_C_ExecuteUbergraph_WB_Menu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
