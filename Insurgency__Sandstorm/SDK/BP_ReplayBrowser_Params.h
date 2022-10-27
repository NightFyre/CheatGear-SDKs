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
	 * Function BP_ReplayBrowser.BP_ReplayBrowser_C.SetInitialFocus
	 */
	struct UBP_ReplayBrowser_C_SetInitialFocus_Params
	{	};

	/**
	 * Function BP_ReplayBrowser.BP_ReplayBrowser_C.OnFocusReceived
	 */
	struct UBP_ReplayBrowser_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ReplayBrowser.BP_ReplayBrowser_C.SetFilters
	 */
	struct UBP_ReplayBrowser_C_SetFilters_Params
	{
	public:
		bool                                                       bPersonal;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ReplayBrowser.BP_ReplayBrowser_C.Get_StatusLoadingText_Text_1
	 */
	struct UBP_ReplayBrowser_C_Get_StatusLoadingText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ReplayBrowser.BP_ReplayBrowser_C.Get_BtnRefreshRecentStreams_bIsEnabled_1
	 */
	struct UBP_ReplayBrowser_C_Get_BtnRefreshRecentStreams_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ReplayBrowser.BP_ReplayBrowser_C.RefreshList
	 */
	struct UBP_ReplayBrowser_C_RefreshList_Params
	{	};

	/**
	 * Function BP_ReplayBrowser.BP_ReplayBrowser_C.OnReplaysEnumerated_A45BCCCF45C73ECEA0E21695A412F751
	 */
	struct UBP_ReplayBrowser_C_OnReplaysEnumerated_A45BCCCF45C73ECEA0E21695A412F751_Params
	{
	public:
		TArray<struct FReplayBrowserInfo>                          Streams;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReplayBrowser.BP_ReplayBrowser_C.Construct
	 */
	struct UBP_ReplayBrowser_C_Construct_Params
	{	};

	/**
	 * Function BP_ReplayBrowser.BP_ReplayBrowser_C.BndEvt__BP_SpecialButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UBP_ReplayBrowser_C_BndEvt__BP_SpecialButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReplayBrowser.BP_ReplayBrowser_C.BndEvt__BP_SpecialButton_0_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UBP_ReplayBrowser_C_BndEvt__BP_SpecialButton_0_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReplayBrowser.BP_ReplayBrowser_C.LoadReplayList
	 */
	struct UBP_ReplayBrowser_C_LoadReplayList_Params
	{	};

	/**
	 * Function BP_ReplayBrowser.BP_ReplayBrowser_C.WatchReplayByID
	 */
	struct UBP_ReplayBrowser_C_WatchReplayByID_Params
	{
	public:
		class FText                                                ConfirmText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ReplayBrowser.BP_ReplayBrowser_C.CanceledReplayByID
	 */
	struct UBP_ReplayBrowser_C_CanceledReplayByID_Params
	{	};

	/**
	 * Function BP_ReplayBrowser.BP_ReplayBrowser_C.ConfirmedReplayByID
	 */
	struct UBP_ReplayBrowser_C_ConfirmedReplayByID_Params
	{	};

	/**
	 * Function BP_ReplayBrowser.BP_ReplayBrowser_C.ExecuteUbergraph_BP_ReplayBrowser
	 */
	struct UBP_ReplayBrowser_C_ExecuteUbergraph_BP_ReplayBrowser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AC8V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
