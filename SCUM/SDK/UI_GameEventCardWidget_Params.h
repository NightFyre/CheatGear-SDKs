#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TeamSwitchFee_Text
	 */
	struct UUI_GameEventCardWidget_C_Get_TeamSwitchFee_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Cooldown_Throbber_Visiblity
	 */
	struct UUI_GameEventCardWidget_C_Get_Cooldown_Throbber_Visiblity_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EntryFeeTag_Text
	 */
	struct UUI_GameEventCardWidget_C_Get_EntryFeeTag_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Buttons_Visibility
	 */
	struct UUI_GameEventCardWidget_C_Get_Buttons_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_60KD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Screenshot_Brush
	 */
	struct UUI_GameEventCardWidget_C_Get_Screenshot_Brush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanJoinTeam
	 */
	struct UUI_GameEventCardWidget_C_CanJoinTeam_Params
	{
	public:
		int32_t                                                    Team;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanJoin;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ETHI[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_SwitchTeamButton_Visibility
	 */
	struct UUI_GameEventCardWidget_C_Get_SwitchTeamButton_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.GetJoinButtonText
	 */
	struct UUI_GameEventCardWidget_C_GetJoinButtonText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CheckPrerequisites
	 */
	struct UUI_GameEventCardWidget_C_CheckPrerequisites_Params
	{
	public:
		bool                                                       HasEnoughFamePoints;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M5YH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerRegisteredForThisEvent
	 */
	struct UUI_GameEventCardWidget_C_IsPlayerRegisteredForThisEvent_Params
	{
	public:
		bool                                                       IsPlayerParticipatingInThisEvent;                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JBQ8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanPlayerJoin
	 */
	struct UUI_GameEventCardWidget_C_CanPlayerJoin_Params
	{
	public:
		int32_t                                                    preferredTeam;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanJoin;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B7IE[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinDisabledMsgVisibility
	 */
	struct UUI_GameEventCardWidget_C_Get_JoinDisabledMsgVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EventName
	 */
	struct UUI_GameEventCardWidget_C_Get_EventName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerParticipatingInThisEvent
	 */
	struct UUI_GameEventCardWidget_C_IsPlayerParticipatingInThisEvent_Params
	{
	public:
		bool                                                       IsPlayerParticipatingInThisEvent;                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BZ3C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinRedButtonVisibility
	 */
	struct UUI_GameEventCardWidget_C_Get_JoinRedButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinBlueButton_Visibility
	 */
	struct UUI_GameEventCardWidget_C_Get_JoinBlueButton_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeTextVisibility
	 */
	struct UUI_GameEventCardWidget_C_Get_TimeTextVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A24V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LeaveButtonVisibility
	 */
	struct UUI_GameEventCardWidget_C_Get_LeaveButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinButtonVisibility
	 */
	struct UUI_GameEventCardWidget_C_Get_JoinButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_NumPlayersText
	 */
	struct UUI_GameEventCardWidget_C_Get_NumPlayersText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_RoundsText
	 */
	struct UUI_GameEventCardWidget_C_Get_RoundsText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeText
	 */
	struct UUI_GameEventCardWidget_C_Get_TimeText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_StatusText
	 */
	struct UUI_GameEventCardWidget_C_Get_StatusText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LocationText
	 */
	struct UUI_GameEventCardWidget_C_Get_LocationText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_GameEventCardWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Construct
	 */
	struct UUI_GameEventCardWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_GameEventCardWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_GameEventCardWidget_C_BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_GameEventCardWidget_C_BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_GameEventCardWidget_C_BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.ExecuteUbergraph_UI_GameEventCardWidget
	 */
	struct UUI_GameEventCardWidget_C_ExecuteUbergraph_UI_GameEventCardWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VST0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
