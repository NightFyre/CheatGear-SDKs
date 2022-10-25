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
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.HideAchievementsOnConsole
	 */
	struct UBP_MainMenu_Profile_C_HideAchievementsOnConsole_Params
	{	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.NewFunction_1
	 */
	struct UBP_MainMenu_Profile_C_NewFunction_1_Params
	{
	public:
		class AController*                                         self2;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.HideCommunityOnConsole
	 */
	struct UBP_MainMenu_Profile_C_HideCommunityOnConsole_Params
	{	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.HideHistoryOnConsole
	 */
	struct UBP_MainMenu_Profile_C_HideHistoryOnConsole_Params
	{	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnTabPanelSwitched
	 */
	struct UBP_MainMenu_Profile_C_OnTabPanelSwitched_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.PopulateSelectedCategory
	 */
	struct UBP_MainMenu_Profile_C_PopulateSelectedCategory_Params
	{	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnFocusReceived
	 */
	struct UBP_MainMenu_Profile_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.SetPlayerNameBreadcrumb
	 */
	struct UBP_MainMenu_Profile_C_SetPlayerNameBreadcrumb_Params
	{	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnKeyDown
	 */
	struct UBP_MainMenu_Profile_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnPageSelected
	 */
	struct UBP_MainMenu_Profile_C_OnPageSelected_Params
	{
	public:
		EnumMainMenuPage                                           NewPage;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0Y2T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.Construct
	 */
	struct UBP_MainMenu_Profile_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_3_OnTabSelected__DelegateSignature
	 */
	struct UBP_MainMenu_Profile_C_BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_3_OnTabSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Profile_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnPanelOpened
	 */
	struct UBP_MainMenu_Profile_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnProfileUpdatedDelegate
	 */
	struct UBP_MainMenu_Profile_C_OnProfileUpdatedDelegate_Params
	{
	public:
		struct FSandstormPlayerProfile                             NewData;                                                 // 0x0000(0x02C8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.BndEvt__StatFilter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Profile_C_BndEvt__StatFilter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                SelectedItem;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectionType;                                           // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.BndEvt__StatFilter_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Profile_C_BndEvt__StatFilter_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.ExecuteUbergraph_BP_MainMenu_Profile
	 */
	struct UBP_MainMenu_Profile_C_ExecuteUbergraph_BP_MainMenu_Profile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_Profile_C_OnNavigateBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
