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
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnFocusReceived
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnCustomNavigation
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.SetScrollHintOpacity
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_SetScrollHintOpacity_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnKeyUp
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnAnalogValueChanged
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.FindAndSelectLessonInList
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_FindAndSelectLessonInList_Params
	{
	public:
		class UClass*                                              Lesson;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.FilterUnusedLessons
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_FilterUnusedLessons_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.GetCategoryLessonCount
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_GetCategoryLessonCount_Params
	{
	public:
		ELessonCategory                                            Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M7U5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.AddLessonButton
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_AddLessonButton_Params
	{
	public:
		class UClass*                                              Lesson;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelectOnAdd;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O550[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.PopulateLessonList
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_PopulateLessonList_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.ViewSpecificLesson
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_ViewSpecificLesson_Params
	{
	public:
		class UClass*                                              Lesson;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.UnloadLoadedMovies
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_UnloadLoadedMovies_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.ClearMovie
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_ClearMovie_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.GetLocalPlayer
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_GetLocalPlayer_Params
	{
	public:
		class UINSLocalPlayer*                                     LocalPlayer;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.AddCategoryButton
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_AddCategoryButton_Params
	{
	public:
		ELessonCategory                                            Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L40N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.PressLessonButton
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_PressLessonButton_Params
	{
	public:
		class UBP_MainMenu_Tutorials_Lessons_LessonButton_C*       LessonButton;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.BndEvt__LessonCategoryTabs_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_BndEvt__LessonCategoryTabs_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnPanelClosed
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_OnPanelClosed_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnPanelOpened
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.Tick
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.Construct
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.ExecuteUbergraph_BP_MainMenu_Tutorials_Lessons
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_ExecuteUbergraph_BP_MainMenu_Tutorials_Lessons_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnNavigateIngame__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_OnNavigateIngame__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_Tutorials_Lessons_C_OnNavigateBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
