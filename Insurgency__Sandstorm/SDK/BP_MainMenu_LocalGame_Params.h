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
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.DetermineScenarioOnMapChosen
	 */
	struct UBP_MainMenu_LocalGame_C_DetermineScenarioOnMapChosen_Params
	{
	public:
		class UBP_LocalGame_ScenarioSelection_C*                   ScenarioSelection;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                PrevScenarioName;                                        // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UWidget*                                             ScenarioOutput;                                          // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnClosedRestrictionDialog
	 */
	struct UBP_MainMenu_LocalGame_C_OnClosedRestrictionDialog_Params
	{	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.Display Map Download Waiting Dialog
	 */
	struct UBP_MainMenu_LocalGame_C_Display_Map_Download_Waiting_Dialog_Params
	{	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnKeyUp
	 */
	struct UBP_MainMenu_LocalGame_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnKeyDown
	 */
	struct UBP_MainMenu_LocalGame_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnLightingChanged
	 */
	struct UBP_MainMenu_LocalGame_C_OnLightingChanged_Params
	{
	public:
		class FString                                              LightingSting;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                LightingText;                                            // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.CheckForInitialSelectedMap
	 */
	struct UBP_MainMenu_LocalGame_C_CheckForInitialSelectedMap_Params
	{
	public:
		bool                                                       bFoundMap;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_609R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MapName;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.SetGamemodeImage
	 */
	struct UBP_MainMenu_LocalGame_C_SetGamemodeImage_Params
	{
	public:
		class FString                                              ScenarioText;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.SetMapImage
	 */
	struct UBP_MainMenu_LocalGame_C_SetMapImage_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Lighting;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.On New Scenario Chosen
	 */
	struct UBP_MainMenu_LocalGame_C_On_New_Scenario_Chosen_Params
	{
	public:
		class FString                                              SelectedScenarioFileName;                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SelectedGamemodeName;                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                SelectedScenarioText;                                    // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnNewMapChosen
	 */
	struct UBP_MainMenu_LocalGame_C_OnNewMapChosen_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.Get_StartGame_bIsEnabled_1
	 */
	struct UBP_MainMenu_LocalGame_C_Get_StartGame_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnFocusReceived
	 */
	struct UBP_MainMenu_LocalGame_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnCustomNavigation
	 */
	struct UBP_MainMenu_LocalGame_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.GetBreadcrumbData
	 */
	struct UBP_MainMenu_LocalGame_C_GetBreadcrumbData_Params
	{
	public:
		class FText                                                Top;                                                     // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                Bottom;                                                  // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnPageSelected
	 */
	struct UBP_MainMenu_LocalGame_C_OnPageSelected_Params
	{
	public:
		EnumMainMenuPage                                           NewPage;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7TPO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnMapChosen
	 */
	struct UBP_MainMenu_LocalGame_C_OnMapChosen_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnScenarioChosen
	 */
	struct UBP_MainMenu_LocalGame_C_OnScenarioChosen_Params
	{
	public:
		class FString                                              ScenarioName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              GameModeName;                                            // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                ScenarioPrintText;                                       // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MainMenu_LocalGame_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.BndEvt__StartGame_K2Node_ComponentBoundEvent_113_OnButtonPressed__DelegateSignature
	 */
	struct UBP_MainMenu_LocalGame_C_BndEvt__StartGame_K2Node_ComponentBoundEvent_113_OnButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_LocalGame_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.BndEvt__LightingSelection_K2Node_ComponentBoundEvent_1_OnLightingChosen__DelegateSignature
	 */
	struct UBP_MainMenu_LocalGame_C_BndEvt__LightingSelection_K2Node_ComponentBoundEvent_1_OnLightingChosen__DelegateSignature_Params
	{
	public:
		class FString                                              LightingNameString;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                LightingNameText;                                        // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnPanelOpened
	 */
	struct UBP_MainMenu_LocalGame_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.Construct
	 */
	struct UBP_MainMenu_LocalGame_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.ExecuteUbergraph_BP_MainMenu_LocalGame
	 */
	struct UBP_MainMenu_LocalGame_C_ExecuteUbergraph_BP_MainMenu_LocalGame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YSZL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_LocalGame_C_OnNavigateBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
