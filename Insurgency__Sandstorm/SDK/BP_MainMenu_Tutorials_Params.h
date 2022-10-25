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
	 * Function BP_MainMenu_Tutorials.BP_MainMenu_Tutorials_C.OnKeyUp
	 */
	struct UBP_MainMenu_Tutorials_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Tutorials.BP_MainMenu_Tutorials_C.OnFocusReceived
	 */
	struct UBP_MainMenu_Tutorials_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Tutorials.BP_MainMenu_Tutorials_C.OnKeyDown
	 */
	struct UBP_MainMenu_Tutorials_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Tutorials.BP_MainMenu_Tutorials_C.OnPageSelected
	 */
	struct UBP_MainMenu_Tutorials_C_OnPageSelected_Params
	{
	public:
		EnumMainMenuPage                                           NewPage;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9ZFV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_Tutorials.BP_MainMenu_Tutorials_C.OnPanelOpened
	 */
	struct UBP_MainMenu_Tutorials_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials.BP_MainMenu_Tutorials_C.BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials.BP_MainMenu_Tutorials_C.BndEvt__BP_DefaultKeyHints_K2Node_ComponentBoundEvent_14_OnBackButtonPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_C_BndEvt__BP_DefaultKeyHints_K2Node_ComponentBoundEvent_14_OnBackButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials.BP_MainMenu_Tutorials_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_6_OnTabSelected__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_C_BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_6_OnTabSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Tutorials.BP_MainMenu_Tutorials_C.BndEvt__TrainingLevels_K2Node_ComponentBoundEvent_0_OnWantsLessons__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_C_BndEvt__TrainingLevels_K2Node_ComponentBoundEvent_0_OnWantsLessons__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials.BP_MainMenu_Tutorials_C.BndEvt__Lessons_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_C_BndEvt__Lessons_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials.BP_MainMenu_Tutorials_C.BndEvt__TrainingLevels_K2Node_ComponentBoundEvent_204_OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_C_BndEvt__TrainingLevels_K2Node_ComponentBoundEvent_204_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials.BP_MainMenu_Tutorials_C.ExecuteUbergraph_BP_MainMenu_Tutorials
	 */
	struct UBP_MainMenu_Tutorials_C_ExecuteUbergraph_BP_MainMenu_Tutorials_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Tutorials.BP_MainMenu_Tutorials_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_C_OnNavigateBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
