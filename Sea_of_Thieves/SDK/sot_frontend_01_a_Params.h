#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.Get Pirate Selector Component
	 */
	struct Asot_frontend_01_a_C_Get_Pirate_Selector_Component_Params
	{
	public:
		class UPirateSelector*                                     PirateSelectorComponent;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.GetFrontendCameraComponent
	 */
	struct Asot_frontend_01_a_C_GetFrontendCameraComponent_Params
	{
	public:
		class UFrontendCameraComponent*                            Camera_Component;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.ResetLineUpPirates
	 */
	struct Asot_frontend_01_a_C_ResetLineUpPirates_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.RefreshCharSlotStatus
	 */
	struct Asot_frontend_01_a_C_RefreshCharSlotStatus_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.SetCharSlotId
	 */
	struct Asot_frontend_01_a_C_SetCharSlotId_Params
	{
	public:
		int32_t                                                    NewCharSlotID;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.PirateHighlight
	 */
	struct Asot_frontend_01_a_C_PirateHighlight_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.GetSelectedPirate
	 */
	struct Asot_frontend_01_a_C_GetSelectedPirate_Params
	{
	public:
		class ABP_PirateGenerator_LineUp_C*                        Item;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.GetPirateLineup
	 */
	struct Asot_frontend_01_a_C_GetPirateLineup_Params
	{
	public:
		class ABP_PirateGenerator_LineUpUI_C*                      Item;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687
	 */
	struct Asot_frontend_01_a_C_InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0020)  (Parm)
	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686
	 */
	struct Asot_frontend_01_a_C_InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0020)  (Parm)
	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Stop
	 */
	struct Asot_frontend_01_a_C_K2Node_MatineeController_5_Stop_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Pause
	 */
	struct Asot_frontend_01_a_C_K2Node_MatineeController_5_Pause_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Start
	 */
	struct Asot_frontend_01_a_C_K2Node_MatineeController_5_Start_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Finished
	 */
	struct Asot_frontend_01_a_C_K2Node_MatineeController_5_Finished_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685
	 */
	struct Asot_frontend_01_a_C_InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0020)  (Parm)
	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684
	 */
	struct Asot_frontend_01_a_C_InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0020)  (Parm)
	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683
	 */
	struct Asot_frontend_01_a_C_InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0020)  (Parm)
	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22
	 */
	struct Asot_frontend_01_a_C_InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.ReceiveBeginPlay
	 */
	struct Asot_frontend_01_a_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.BeginCelebration
	 */
	struct Asot_frontend_01_a_C_BeginCelebration_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.pirateSelectCam
	 */
	struct Asot_frontend_01_a_C_pirateSelectCam_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.showShipSelectPirate
	 */
	struct Asot_frontend_01_a_C_showShipSelectPirate_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.reinstateSelectedPirateLoc
	 */
	struct Asot_frontend_01_a_C_reinstateSelectedPirateLoc_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.StartGeneratingPirates
	 */
	struct Asot_frontend_01_a_C_StartGeneratingPirates_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.SelectionCancelled
	 */
	struct Asot_frontend_01_a_C_SelectionCancelled_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.SelectPirateButtonPressed
	 */
	struct Asot_frontend_01_a_C_SelectPirateButtonPressed_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.RefreshPiratesButtonPressed
	 */
	struct Asot_frontend_01_a_C_RefreshPiratesButtonPressed_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.FavoritePirateButtonPressed
	 */
	struct Asot_frontend_01_a_C_FavoritePirateButtonPressed_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.ReceiveTick
	 */
	struct Asot_frontend_01_a_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.PiratesInitializedEvent
	 */
	struct Asot_frontend_01_a_C_PiratesInitializedEvent_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.StartPirateCreationAnimation
	 */
	struct Asot_frontend_01_a_C_StartPirateCreationAnimation_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.OnLeavingSelectionState
	 */
	struct Asot_frontend_01_a_C_OnLeavingSelectionState_Params
	{	};

	/**
	 * Function sot_frontend_01_a.sot_frontend_01_a_C.ExecuteUbergraph_sot_frontend_01_a
	 */
	struct Asot_frontend_01_a_C_ExecuteUbergraph_sot_frontend_01_a_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KPUI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
