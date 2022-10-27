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
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.SetUsingController
	 */
	struct UBP_MatchmakingProgress_C_SetUsingController_Params
	{
	public:
		bool                                                       UsingController;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EeInputIconType                                            Key;                                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4PMW[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.SetEQTVisible
	 */
	struct UBP_MatchmakingProgress_C_SetEQTVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bImmediate;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.EstimatedSecondsText
	 */
	struct UBP_MatchmakingProgress_C_EstimatedSecondsText_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GND4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.IsPanelVisible
	 */
	struct UBP_MatchmakingProgress_C_IsPanelVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.CheckEstimatedQueueTime
	 */
	struct UBP_MatchmakingProgress_C_CheckEstimatedQueueTime_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.HasRecentError
	 */
	struct UBP_MatchmakingProgress_C_HasRecentError_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.ShouldBeVisibleForLatejoin
	 */
	struct UBP_MatchmakingProgress_C_ShouldBeVisibleForLatejoin_Params
	{
	public:
		bool                                                       bShouldBeVisible;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R02B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.ShouldBeVisibleForMatchmaking
	 */
	struct UBP_MatchmakingProgress_C_ShouldBeVisibleForMatchmaking_Params
	{
	public:
		bool                                                       bShouldBeVisible;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UH6D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.SetProgressTextErrorState
	 */
	struct UBP_MatchmakingProgress_C_SetProgressTextErrorState_Params
	{
	public:
		bool                                                       bIsError;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.OnReadyCheckUpdated
	 */
	struct UBP_MatchmakingProgress_C_OnReadyCheckUpdated_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLocalPlayerReady;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Get_CancelButtonLabel_Text_1
	 */
	struct UBP_MatchmakingProgress_C_Get_CancelButtonLabel_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Get_ElapsedTIme_Text_1
	 */
	struct UBP_MatchmakingProgress_C_Get_ElapsedTIme_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.GetText_1
	 */
	struct UBP_MatchmakingProgress_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.GetOverallVisibility
	 */
	struct UBP_MatchmakingProgress_C_GetOverallVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Get_TextStatus_Text_1
	 */
	struct UBP_MatchmakingProgress_C_Get_TextStatus_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Get_BtnCancelMatchmaking_bIsEnabled_1
	 */
	struct UBP_MatchmakingProgress_C_Get_BtnCancelMatchmaking_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2JQ2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_MatchmakingProgress_C_BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UBP_MatchmakingProgress_C_BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Tick
	 */
	struct UBP_MatchmakingProgress_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Construct
	 */
	struct UBP_MatchmakingProgress_C_Construct_Params
	{	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.BndEvt__BtnReady_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_MatchmakingProgress_C_BndEvt__BtnReady_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.BndEvt__BtnNotReady_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_MatchmakingProgress_C_BndEvt__BtnNotReady_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_MatchmakingProgress_C_BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.OnMatchmakingSearchBegin
	 */
	struct UBP_MatchmakingProgress_C_OnMatchmakingSearchBegin_Params
	{	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.OnMatchmakingError
	 */
	struct UBP_MatchmakingProgress_C_OnMatchmakingError_Params
	{
	public:
		class FText                                                Error;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EMatchmakingFailure                                        MatchmakingFailureType;                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.ExecuteUbergraph_BP_MatchmakingProgress
	 */
	struct UBP_MatchmakingProgress_C_ExecuteUbergraph_BP_MatchmakingProgress_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
