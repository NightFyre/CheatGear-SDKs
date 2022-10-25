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
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.OnPaint
	 */
	struct UWBP_DeployMenu_C_OnPaint_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateMatchTime
	 */
	struct UWBP_DeployMenu_C_UpdateMatchTime_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTeamLayoutElements
	 */
	struct UWBP_DeployMenu_C_UpdateTeamLayoutElements_Params
	{
	public:
		bool                                                       bUseVerticalLayout;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUpdateTeam0;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.SetTeamSwitchLayout
	 */
	struct UWBP_DeployMenu_C_SetTeamSwitchLayout_Params
	{
	public:
		bool                                                       bUseVerticalLayout;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.InitTeamLayout
	 */
	struct UWBP_DeployMenu_C_InitTeamLayout_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.InitSquadSelectionUI
	 */
	struct UWBP_DeployMenu_C_InitSquadSelectionUI_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTicketCounts
	 */
	struct UWBP_DeployMenu_C_UpdateTicketCounts_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTeamSwitchUISettings
	 */
	struct UWBP_DeployMenu_C_UpdateTeamSwitchUISettings_Params
	{
	public:
		EHDTeam                                                    TeamToUpdate;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y30Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTeamSwitchVisuals
	 */
	struct UWBP_DeployMenu_C_UpdateTeamSwitchVisuals_Params
	{
	public:
		EHDTeam                                                    TeamToUpdate;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_41AY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.InitClassSelectionUI
	 */
	struct UWBP_DeployMenu_C_InitClassSelectionUI_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.DeselectCurrentPOI
	 */
	struct UWBP_DeployMenu_C_DeselectCurrentPOI_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.DeployAtSelectedSpawnPoint
	 */
	struct UWBP_DeployMenu_C_DeployAtSelectedSpawnPoint_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateDeployBtnState
	 */
	struct UWBP_DeployMenu_C_UpdateDeployBtnState_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.CloseDeployMenu
	 */
	struct UWBP_DeployMenu_C_CloseDeployMenu_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F39C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.PreloadContent
	 */
	struct UWBP_DeployMenu_C_PreloadContent_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateSuicideBtnState
	 */
	struct UWBP_DeployMenu_C_UpdateSuicideBtnState_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.CleanupOwningPlayerDelegates
	 */
	struct UWBP_DeployMenu_C_CleanupOwningPlayerDelegates_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.InitOwningPlayerDelegates
	 */
	struct UWBP_DeployMenu_C_InitOwningPlayerDelegates_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.InitTeamUI
	 */
	struct UWBP_DeployMenu_C_InitTeamUI_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.InitMapUI
	 */
	struct UWBP_DeployMenu_C_InitMapUI_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.RequestSuicide
	 */
	struct UWBP_DeployMenu_C_RequestSuicide_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTeamSwitchBtnState
	 */
	struct UWBP_DeployMenu_C_UpdateTeamSwitchBtnState_Params
	{
	public:
		EHDTeam                                                    NewTeam;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.TeamSwitch
	 */
	struct UWBP_DeployMenu_C_TeamSwitch_Params
	{
	public:
		EHDTeam                                                    NewTeam;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_08HJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.OnMouseWheel
	 */
	struct UWBP_DeployMenu_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.OnMouseButtonDown
	 */
	struct UWBP_DeployMenu_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.Construct
	 */
	struct UWBP_DeployMenu_C_Construct_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.OnDeployMenuInputToggle
	 */
	struct UWBP_DeployMenu_C_OnDeployMenuInputToggle_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.BndEvt__SuicideBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DeployMenu_C_BndEvt__SuicideBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.Destruct
	 */
	struct UWBP_DeployMenu_C_Destruct_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.OnOwningCharDeath
	 */
	struct UWBP_DeployMenu_C_OnOwningCharDeath_Params
	{
	public:
		class APawn*                                               VictimPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         VictimController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      KillingDamage;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5K04[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.OnUnpossessedPawn
	 */
	struct UWBP_DeployMenu_C_OnUnpossessedPawn_Params
	{
	public:
		class APawn*                                               UnpossessedPawn;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.OnPossessedPawn
	 */
	struct UWBP_DeployMenu_C_OnPossessedPawn_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.OnPlayerTeamUpdated
	 */
	struct UWBP_DeployMenu_C_OnPlayerTeamUpdated_Params
	{
	public:
		unsigned char                                              PrevTeam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewTeam;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_4_OnPreloadFinished__DelegateSignature
	 */
	struct UWBP_DeployMenu_C_BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_4_OnPreloadFinished__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_5_OnSpawnPointSelected__DelegateSignature
	 */
	struct UWBP_DeployMenu_C_BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_5_OnSpawnPointSelected__DelegateSignature_Params
	{
	public:
		class AActor*                                              POISpawnPointActor;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_6_OnSpawnPointDeselected__DelegateSignature
	 */
	struct UWBP_DeployMenu_C_BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_6_OnSpawnPointDeselected__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UWBP_DeployMenu_C_BndEvt__DeployBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{
	public:
		bool                                                       bCloseBtn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.OnPlayerSpawnTimerElapsed
	 */
	struct UWBP_DeployMenu_C_OnPlayerSpawnTimerElapsed_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.OnRepPlayerStatePC
	 */
	struct UWBP_DeployMenu_C_OnRepPlayerStatePC_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.Tick
	 */
	struct UWBP_DeployMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.PreConstruct
	 */
	struct UWBP_DeployMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.On Team 1 Switch Btn Clicked
	 */
	struct UWBP_DeployMenu_C_On_Team_Switch_Btn_Clicked_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.On Team 0 Switch Btn Clicked
	 */
	struct UWBP_DeployMenu_C_On_Team_Switch_Btn_Clicked_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.UpdateTeamStateRefs
	 */
	struct UWBP_DeployMenu_C_UpdateTeamStateRefs_Params
	{	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.OnBluforPostInitTeam
	 */
	struct UWBP_DeployMenu_C_OnBluforPostInitTeam_Params
	{
	public:
		class ADFTeamState*                                        TeamState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.OnOpforPostInitTeam
	 */
	struct UWBP_DeployMenu_C_OnOpforPostInitTeam_Params
	{
	public:
		class ADFTeamState*                                        TeamState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.OnPlayerTeamStateUpdated
	 */
	struct UWBP_DeployMenu_C_OnPlayerTeamStateUpdated_Params
	{
	public:
		class ADFTeamState*                                        LastTeamState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFTeamState*                                        NewTeamState;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bNewTeamStateInit;                                       // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.ExecuteUbergraph_WBP_DeployMenu
	 */
	struct UWBP_DeployMenu_C_ExecuteUbergraph_WBP_DeployMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1OYC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu.WBP_DeployMenu_C.OnPreloadFinished__DelegateSignature
	 */
	struct UWBP_DeployMenu_C_OnPreloadFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
