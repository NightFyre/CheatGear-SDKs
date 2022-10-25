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
	 * Function WBP_MainMenu.WBP_MainMenu_C.PlayMenuMusic
	 */
	struct UWBP_MainMenu_C_PlayMenuMusic_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.OnMouseWheel
	 */
	struct UWBP_MainMenu_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.OnMouseButtonDown
	 */
	struct UWBP_MainMenu_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.TeardownSubNavBarClickEvents
	 */
	struct UWBP_MainMenu_C_TeardownSubNavBarClickEvents_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.SetupSubNavBarClickEvents
	 */
	struct UWBP_MainMenu_C_SetupSubNavBarClickEvents_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.ToggleSubNavBar
	 */
	struct UWBP_MainMenu_C_ToggleSubNavBar_Params
	{
	public:
		bool                                                       bNewVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.ClearCurrentOptionMenu
	 */
	struct UWBP_MainMenu_C_ClearCurrentOptionMenu_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.PopulateSubNavBar
	 */
	struct UWBP_MainMenu_C_PopulateSubNavBar_Params
	{
	public:
		TArray<struct FFSubMenuOption>                             SubMenuOptions;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.ClearSubNavBarOptions
	 */
	struct UWBP_MainMenu_C_ClearSubNavBarOptions_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.UpdateSubNavBarOptions
	 */
	struct UWBP_MainMenu_C_UpdateSubNavBarOptions_Params
	{
	public:
		unsigned char                                              UnknownData_E7Y1[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.GetNavBarHBox
	 */
	struct UWBP_MainMenu_C_GetNavBarHBox_Params
	{
	public:
		class UHorizontalBox*                                      HBoxToUse;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.SetOptionMenu
	 */
	struct UWBP_MainMenu_C_SetOptionMenu_Params
	{
	public:
		class UClass*                                              NewOptionMenuClass;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDesignTime;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WF3K[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.GetNavBtnCount
	 */
	struct UWBP_MainMenu_C_GetNavBtnCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.SetupCopyrightNotice
	 */
	struct UWBP_MainMenu_C_SetupCopyrightNotice_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.SetActiveMenu
	 */
	struct UWBP_MainMenu_C_SetActiveMenu_Params
	{
	public:
		int32_t                                                    NewIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QX1M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              NewOptionMenuClass;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDesignTime;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FD8Z[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.SetupNavBarClickEvents
	 */
	struct UWBP_MainMenu_C_SetupNavBarClickEvents_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.SetupMenuBackgroundWidget
	 */
	struct UWBP_MainMenu_C_SetupMenuBackgroundWidget_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.InitMenuState
	 */
	struct UWBP_MainMenu_C_InitMenuState_Params
	{
	public:
		bool                                                       bIsDesignTime;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ResumeNavBtn_K2Node_ComponentBoundEvent_11_ButtonClicked__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__ResumeNavBtn_K2Node_ComponentBoundEvent_11_ButtonClicked__DelegateSignature_Params
	{
	public:
		class UWBP_MainMenu_NavBarButton_C*                        ClickedBtn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.OnNavBtnClicked
	 */
	struct UWBP_MainMenu_C_OnNavBtnClicked_Params
	{
	public:
		class UWBP_MainMenu_NavBarButton_C*                        ClickedBtn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ReturnToMenuNavBtn_K2Node_ComponentBoundEvent_12_ButtonClicked__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__ReturnToMenuNavBtn_K2Node_ComponentBoundEvent_12_ButtonClicked__DelegateSignature_Params
	{
	public:
		class UWBP_MainMenu_NavBarButton_C*                        ClickedBtn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.OnSubNavBtnClicked
	 */
	struct UWBP_MainMenu_C_OnSubNavBtnClicked_Params
	{
	public:
		class UWBP_MainMenu_NavBarButton_SubMenu_C*                ClickedBtn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.OnPauseMenuPressed
	 */
	struct UWBP_MainMenu_C_OnPauseMenuPressed_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.Construct
	 */
	struct UWBP_MainMenu_C_Construct_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ShootingRangeNavBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__ShootingRangeNavBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature_Params
	{
	public:
		class UWBP_MainMenu_NavBarButton_C*                        ClickedBtn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.PreConstruct
	 */
	struct UWBP_MainMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.OnInitialized
	 */
	struct UWBP_MainMenu_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ExitGameNavBtn_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__ExitGameNavBtn_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature_Params
	{
	public:
		class UWBP_MainMenu_NavBarButton_C*                        ClickedBtn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__PauseExitGameNavBtn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__PauseExitGameNavBtn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature_Params
	{
	public:
		class UWBP_MainMenu_NavBarButton_C*                        ClickedBtn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.ExecuteUbergraph_WBP_MainMenu
	 */
	struct UWBP_MainMenu_C_ExecuteUbergraph_WBP_MainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YFSB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
