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
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.SetCenterPopupMessage
	 */
	struct UBP_MultiplayerGameHUD_C_SetCenterPopupMessage_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.UpdateObjectiveDockVisibility
	 */
	struct UBP_MultiplayerGameHUD_C_UpdateObjectiveDockVisibility_Params
	{	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnUpdateSpectatorState
	 */
	struct UBP_MultiplayerGameHUD_C_OnUpdateSpectatorState_Params
	{
	public:
		bool                                                       NewSpectatorState;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnUpdateMenuVisibility
	 */
	struct UBP_MultiplayerGameHUD_C_OnUpdateMenuVisibility_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnUpdateScoreboardVisibility
	 */
	struct UBP_MultiplayerGameHUD_C_OnUpdateScoreboardVisibility_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.UpdateBottomDockVisibility
	 */
	struct UBP_MultiplayerGameHUD_C_UpdateBottomDockVisibility_Params
	{	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.UpdateNetworkStatus
	 */
	struct UBP_MultiplayerGameHUD_C_UpdateNetworkStatus_Params
	{
	public:
		unsigned char                                              DesiredLocation;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QBDY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetWaitingForPlayersVisibility
	 */
	struct UBP_MultiplayerGameHUD_C_GetWaitingForPlayersVisibility_Params
	{
	public:
		ESlateVisibility                                           Out;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.Get_WaitingCount_Text_1
	 */
	struct UBP_MultiplayerGameHUD_C_Get_WaitingCount_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.IsCurrentlySpectating
	 */
	struct UBP_MultiplayerGameHUD_C_IsCurrentlySpectating_Params
	{
	public:
		bool                                                       Spectating;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6UQI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.IsIngameMenuActive
	 */
	struct UBP_MultiplayerGameHUD_C_IsIngameMenuActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QMGG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.IsScoreboardActive
	 */
	struct UBP_MultiplayerGameHUD_C_IsScoreboardActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J0FM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetKillfeedVisibility
	 */
	struct UBP_MultiplayerGameHUD_C_GetKillfeedVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.SetGameStateDescription
	 */
	struct UBP_MultiplayerGameHUD_C_SetGameStateDescription_Params
	{	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetObjectiveDockVisibility
	 */
	struct UBP_MultiplayerGameHUD_C_GetObjectiveDockVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetTacticalMapVisibility
	 */
	struct UBP_MultiplayerGameHUD_C_GetTacticalMapVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SM46[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.UpdateGameStateVisibility
	 */
	struct UBP_MultiplayerGameHUD_C_UpdateGameStateVisibility_Params
	{	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetGameStateVisibility
	 */
	struct UBP_MultiplayerGameHUD_C_GetGameStateVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetDockVisibility
	 */
	struct UBP_MultiplayerGameHUD_C_GetDockVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.Construct
	 */
	struct UBP_MultiplayerGameHUD_C_Construct_Params
	{	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.Tick
	 */
	struct UBP_MultiplayerGameHUD_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.PreConstruct
	 */
	struct UBP_MultiplayerGameHUD_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.BndEvt__BP_WaveCounter_K2Node_ComponentBoundEvent_0_OnWaveCountChange__DelegateSignature
	 */
	struct UBP_MultiplayerGameHUD_C_BndEvt__BP_WaveCounter_K2Node_ComponentBoundEvent_0_OnWaveCountChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    Difference;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.BndEvt__BP_WaveCounter_0_K2Node_ComponentBoundEvent_1_OnWaveCountChange__DelegateSignature
	 */
	struct UBP_MultiplayerGameHUD_C_BndEvt__BP_WaveCounter_0_K2Node_ComponentBoundEvent_1_OnWaveCountChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    Difference;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnMapVoteStarted
	 */
	struct UBP_MultiplayerGameHUD_C_OnMapVoteStarted_Params
	{	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnShowCenterMessage
	 */
	struct UBP_MultiplayerGameHUD_C_OnShowCenterMessage_Params
	{
	public:
		class FText                                                MessageText;                                             // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnRoundOverUIToggled
	 */
	struct UBP_MultiplayerGameHUD_C_OnRoundOverUIToggled_Params
	{
	public:
		bool                                                       bNowVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.ExecuteUbergraph_BP_MultiplayerGameHUD
	 */
	struct UBP_MultiplayerGameHUD_C_ExecuteUbergraph_BP_MultiplayerGameHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnUpdateBottomDockVisibility__DelegateSignature
	 */
	struct UBP_MultiplayerGameHUD_C_OnUpdateBottomDockVisibility__DelegateSignature_Params
	{
	public:
		ESlateVisibility                                           NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
