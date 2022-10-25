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
	 * Function BP_MatchHistory.BP_MatchHistory_C.OnLoadedTransitionAnimationFinished
	 */
	struct UBP_MatchHistory_C_OnLoadedTransitionAnimationFinished_Params
	{	};

	/**
	 * Function BP_MatchHistory.BP_MatchHistory_C.OnFocusReceived
	 */
	struct UBP_MatchHistory_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MatchHistory.BP_MatchHistory_C.OnMatchHistoryLoaded
	 */
	struct UBP_MatchHistory_C_OnMatchHistoryLoaded_Params
	{
	public:
		struct FMatchHistory                                       NewHistory;                                              // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MatchHistory.BP_MatchHistory_C.LoadHistory
	 */
	struct UBP_MatchHistory_C_LoadHistory_Params
	{	};

	/**
	 * Function BP_MatchHistory.BP_MatchHistory_C.BndEvt__ListView_53_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature
	 */
	struct UBP_MatchHistory_C_BndEvt__ListView_53_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSelected;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MatchHistory.BP_MatchHistory_C.BndEvt__EnterReplayIdButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBP_MatchHistory_C_BndEvt__EnterReplayIdButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MatchHistory.BP_MatchHistory_C.WatchReplayByID
	 */
	struct UBP_MatchHistory_C_WatchReplayByID_Params
	{
	public:
		class FText                                                ConfirmText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MatchHistory.BP_MatchHistory_C.CanceledReplayByID
	 */
	struct UBP_MatchHistory_C_CanceledReplayByID_Params
	{	};

	/**
	 * Function BP_MatchHistory.BP_MatchHistory_C.ConfirmedReplayByID
	 */
	struct UBP_MatchHistory_C_ConfirmedReplayByID_Params
	{	};

	/**
	 * Function BP_MatchHistory.BP_MatchHistory_C.Construct
	 */
	struct UBP_MatchHistory_C_Construct_Params
	{	};

	/**
	 * Function BP_MatchHistory.BP_MatchHistory_C.BndEvt__ListView_53_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature
	 */
	struct UBP_MatchHistory_C_BndEvt__ListView_53_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MatchHistory.BP_MatchHistory_C.BndEvt__ListView_53_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
	 */
	struct UBP_MatchHistory_C_BndEvt__ListView_53_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MatchHistory.BP_MatchHistory_C.ExecuteUbergraph_BP_MatchHistory
	 */
	struct UBP_MatchHistory_C_ExecuteUbergraph_BP_MatchHistory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N5DB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
