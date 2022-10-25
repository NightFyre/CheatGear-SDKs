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
	 * Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.GainFocus
	 */
	struct UBP_Widget_CallVoteMenu_C_GainFocus_Params
	{	};

	/**
	 * Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.GetSelectedOption
	 */
	struct UBP_Widget_CallVoteMenu_C_GetSelectedOption_Params
	{
	public:
		class FString                                              SelectedOption;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.PopulateOptions
	 */
	struct UBP_Widget_CallVoteMenu_C_PopulateOptions_Params
	{	};

	/**
	 * Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.GetSelectedVoteIssueClass
	 */
	struct UBP_Widget_CallVoteMenu_C_GetSelectedVoteIssueClass_Params
	{
	public:
		class UClass*                                              VoteClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.AddPlayer
	 */
	struct UBP_Widget_CallVoteMenu_C_AddPlayer_Params
	{
	public:
		class AINSPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.PopulatePlayers
	 */
	struct UBP_Widget_CallVoteMenu_C_PopulatePlayers_Params
	{
	public:
		bool                                                       bSameTeamOnly;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.CallVote
	 */
	struct UBP_Widget_CallVoteMenu_C_CallVote_Params
	{
	public:
		class APlayerState*                                        TargetPlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Option;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.Construct
	 */
	struct UBP_Widget_CallVoteMenu_C_Construct_Params
	{	};

	/**
	 * Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.OnIssueClicked
	 */
	struct UBP_Widget_CallVoteMenu_C_OnIssueClicked_Params
	{
	public:
		class FString                                              ContextValue;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    IssueIndex;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.OnPlayerButtonClicked
	 */
	struct UBP_Widget_CallVoteMenu_C_OnPlayerButtonClicked_Params
	{
	public:
		class FString                                              ContextValue;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    PlayerIndex;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_0_OnCloseButtonPressed__DelegateSignature
	 */
	struct UBP_Widget_CallVoteMenu_C_BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_0_OnCloseButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_1_OnCanceled__DelegateSignature
	 */
	struct UBP_Widget_CallVoteMenu_C_BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_1_OnCanceled__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.OnInitialized
	 */
	struct UBP_Widget_CallVoteMenu_C_OnInitialized_Params
	{	};

	/**
	 * Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.RestoreWidgetFocus
	 */
	struct UBP_Widget_CallVoteMenu_C_RestoreWidgetFocus_Params
	{	};

	/**
	 * Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.ExecuteUbergraph_BP_Widget_CallVoteMenu
	 */
	struct UBP_Widget_CallVoteMenu_C_ExecuteUbergraph_BP_Widget_CallVoteMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
