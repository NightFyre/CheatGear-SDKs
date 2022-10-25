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
	 * Function BP_MainMenu_RecapPanel.BP_MainMenu_RecapPanel_C.GetHighlightsVisibiity
	 */
	struct UBP_MainMenu_RecapPanel_C_GetHighlightsVisibiity_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ISCF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_RecapPanel.BP_MainMenu_RecapPanel_C.OnKeyDown
	 */
	struct UBP_MainMenu_RecapPanel_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_RecapPanel.BP_MainMenu_RecapPanel_C.OnFocusReceived
	 */
	struct UBP_MainMenu_RecapPanel_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_RecapPanel.BP_MainMenu_RecapPanel_C.Construct
	 */
	struct UBP_MainMenu_RecapPanel_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenu_RecapPanel.BP_MainMenu_RecapPanel_C.BndEvt__BP_NVIDIAHighlightsTab_K2Node_ComponentBoundEvent_15_OnDeleteButtonPressed__DelegateSignature
	 */
	struct UBP_MainMenu_RecapPanel_C_BndEvt__BP_NVIDIAHighlightsTab_K2Node_ComponentBoundEvent_15_OnDeleteButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_RecapPanel.BP_MainMenu_RecapPanel_C.BndEvt__BP_Highlights_Delete_Dialogue_K2Node_ComponentBoundEvent_52_OnCancelPressed__DelegateSignature
	 */
	struct UBP_MainMenu_RecapPanel_C_BndEvt__BP_Highlights_Delete_Dialogue_K2Node_ComponentBoundEvent_52_OnCancelPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_RecapPanel.BP_MainMenu_RecapPanel_C.OnPanelOpened
	 */
	struct UBP_MainMenu_RecapPanel_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_MainMenu_RecapPanel.BP_MainMenu_RecapPanel_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_RecapPanel_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_RecapPanel.BP_MainMenu_RecapPanel_C.ExecuteUbergraph_BP_MainMenu_RecapPanel
	 */
	struct UBP_MainMenu_RecapPanel_C_ExecuteUbergraph_BP_MainMenu_RecapPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_RecapPanel.BP_MainMenu_RecapPanel_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_RecapPanel_C_OnNavigateBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
