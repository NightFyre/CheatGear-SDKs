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
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.UpdateCosmeticBackBtnHint
	 */
	struct UBP_MainMenu_Character_C_UpdateCosmeticBackBtnHint_Params
	{	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.VisibilityFromBool
	 */
	struct UBP_MainMenu_Character_C_VisibilityFromBool_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESlateVisibility                                           Visibility;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.CheckCurrentPanelAndSetupBottomHints
	 */
	struct UBP_MainMenu_Character_C_CheckCurrentPanelAndSetupBottomHints_Params
	{
	public:
		int32_t                                                    MainMenuCharacterPanel;                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ProfileLoadoutsPanel;                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.OnFocusReceived
	 */
	struct UBP_MainMenu_Character_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.OnKeyUp
	 */
	struct UBP_MainMenu_Character_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.UpdateProfiileCharacter
	 */
	struct UBP_MainMenu_Character_C_UpdateProfiileCharacter_Params
	{
	public:
		bool                                                       DontPlayMontages;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VSWA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.CanNavigateBack
	 */
	struct UBP_MainMenu_Character_C_CanNavigateBack_Params
	{
	public:
		bool                                                       bCanNavigate;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.UpdateSelectedTab
	 */
	struct UBP_MainMenu_Character_C_UpdateSelectedTab_Params
	{	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.ResetCamera
	 */
	struct UBP_MainMenu_Character_C_ResetCamera_Params
	{	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.SetCustomizeMoodLighting
	 */
	struct UBP_MainMenu_Character_C_SetCustomizeMoodLighting_Params
	{
	public:
		bool                                                       bLightState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YN3K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.SetBreadcrumbText
	 */
	struct UBP_MainMenu_Character_C_SetBreadcrumbText_Params
	{	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.OnKeyDown
	 */
	struct UBP_MainMenu_Character_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.OnPageSelected
	 */
	struct UBP_MainMenu_Character_C_OnPageSelected_Params
	{
	public:
		EnumMainMenuPage                                           NewPage;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.Tick
	 */
	struct UBP_MainMenu_Character_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_3_OnTabSelected__DelegateSignature
	 */
	struct UBP_MainMenu_Character_C_BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_3_OnTabSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Character_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.OnPanelOpened
	 */
	struct UBP_MainMenu_Character_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.OnPanelClosed
	 */
	struct UBP_MainMenu_Character_C_OnPanelClosed_Params
	{	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.Construct
	 */
	struct UBP_MainMenu_Character_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.OnRemoveButtonChanged
	 */
	struct UBP_MainMenu_Character_C_OnRemoveButtonChanged_Params
	{
	public:
		ESlateVisibility                                           RemoveKeyVisibility;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KPBS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                HintText;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.BndEvt__BP_ProfileLoadouts_K2Node_ComponentBoundEvent_1_OnLoadoutPanelSwitched__DelegateSignature
	 */
	struct UBP_MainMenu_Character_C_BndEvt__BP_ProfileLoadouts_K2Node_ComponentBoundEvent_1_OnLoadoutPanelSwitched__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewPanelIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.PreConstruct
	 */
	struct UBP_MainMenu_Character_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.BndEvt__BP_ProfileAppearance_K2Node_ComponentBoundEvent_2_OnPresetHover__DelegateSignature
	 */
	struct UBP_MainMenu_Character_C_BndEvt__BP_ProfileAppearance_K2Node_ComponentBoundEvent_2_OnPresetHover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.BndEvt__BP_ProfileAppearance_K2Node_ComponentBoundEvent_4_OnPresetUnhover__DelegateSignature
	 */
	struct UBP_MainMenu_Character_C_BndEvt__BP_ProfileAppearance_K2Node_ComponentBoundEvent_4_OnPresetUnhover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.BndEvt__BP_ProfileLoadouts_K2Node_ComponentBoundEvent_5_OnPressedBackButton__DelegateSignature
	 */
	struct UBP_MainMenu_Character_C_BndEvt__BP_ProfileLoadouts_K2Node_ComponentBoundEvent_5_OnPressedBackButton__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.HideTabs
	 */
	struct UBP_MainMenu_Character_C_HideTabs_Params
	{	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.ShowTabs
	 */
	struct UBP_MainMenu_Character_C_ShowTabs_Params
	{	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.ExecuteUbergraph_BP_MainMenu_Character
	 */
	struct UBP_MainMenu_Character_C_ExecuteUbergraph_BP_MainMenu_Character_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DXOY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_Character.BP_MainMenu_Character_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_Character_C_OnNavigateBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
