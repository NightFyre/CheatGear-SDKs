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
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.ToggleDayNight
	 */
	struct UBP_MainMenu_Tutorials_Training_C_ToggleDayNight_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnKeyDown
	 */
	struct UBP_MainMenu_Tutorials_Training_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.ChangeDescriptionOnPS4
	 */
	struct UBP_MainMenu_Tutorials_Training_C_ChangeDescriptionOnPS4_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.Get Text Block Time Text
	 */
	struct UBP_MainMenu_Tutorials_Training_C_Get_Text_Block_Time_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.CheckShouldHighlightTrainingBox
	 */
	struct UBP_MainMenu_Tutorials_Training_C_CheckShouldHighlightTrainingBox_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnFocusReceived
	 */
	struct UBP_MainMenu_Tutorials_Training_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnCustomNavigation
	 */
	struct UBP_MainMenu_Tutorials_Training_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.GetBreadcrumbData
	 */
	struct UBP_MainMenu_Tutorials_Training_C_GetBreadcrumbData_Params
	{
	public:
		class FText                                                Top;                                                     // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                Bottom;                                                  // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnPageSelected
	 */
	struct UBP_MainMenu_Tutorials_Training_C_OnPageSelected_Params
	{
	public:
		EnumMainMenuPage                                           NewPage;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6N42[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__StartGame_K2Node_ComponentBoundEvent_113_OnButtonPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__StartGame_K2Node_ComponentBoundEvent_113_OnButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_332_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_332_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_346_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_346_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_360_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_360_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__LessonsButton_K2Node_ComponentBoundEvent_379_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__LessonsButton_K2Node_ComponentBoundEvent_379_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__LessonsButton_K2Node_ComponentBoundEvent_393_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__LessonsButton_K2Node_ComponentBoundEvent_393_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__LessonsButton_K2Node_ComponentBoundEvent_410_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__LessonsButton_K2Node_ComponentBoundEvent_410_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.Construct
	 */
	struct UBP_MainMenu_Tutorials_Training_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButton_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButton_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__LessonsButton_K2Node_ComponentBoundEvent_5_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__LessonsButton_K2Node_ComponentBoundEvent_5_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__LessonsButton_K2Node_ComponentBoundEvent_6_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__LessonsButton_K2Node_ComponentBoundEvent_6_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_32_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_32_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_33_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_33_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.ExecuteUbergraph_BP_MainMenu_Tutorials_Training
	 */
	struct UBP_MainMenu_Tutorials_Training_C_ExecuteUbergraph_BP_MainMenu_Tutorials_Training_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnWantsLessons__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_OnWantsLessons__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Training_C_OnNavigateBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
