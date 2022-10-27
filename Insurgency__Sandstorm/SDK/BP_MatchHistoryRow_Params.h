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
	 * Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.OnFocusReceived
	 */
	struct UBP_MatchHistoryRow_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.SetPreferredWeapon
	 */
	struct UBP_MatchHistoryRow_C_SetPreferredWeapon_Params
	{	};

	/**
	 * Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.SetSelectedState
	 */
	struct UBP_MatchHistoryRow_C_SetSelectedState_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_898I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.Build Played as Text
	 */
	struct UBP_MatchHistoryRow_C_Build_Played_as_Text_Params
	{
	public:
		TArray<class FString>                                      PlayedAsTeams;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.Initialize
	 */
	struct UBP_MatchHistoryRow_C_Initialize_Params
	{	};

	/**
	 * Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.BP_OnEntryReleased
	 */
	struct UBP_MatchHistoryRow_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.BP_OnItemSelectionChanged
	 */
	struct UBP_MatchHistoryRow_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.BP_OnItemExpansionChanged
	 */
	struct UBP_MatchHistoryRow_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.BndEvt__BtnReplayCopyId_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature
	 */
	struct UBP_MatchHistoryRow_C_BndEvt__BtnReplayCopyId_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.OnListItemObjectSet
	 */
	struct UBP_MatchHistoryRow_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.Construct
	 */
	struct UBP_MatchHistoryRow_C_Construct_Params
	{	};

	/**
	 * Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.BndEvt__BtnReplayWatch_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature
	 */
	struct UBP_MatchHistoryRow_C_BndEvt__BtnReplayWatch_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.ExecuteUbergraph_BP_MatchHistoryRow
	 */
	struct UBP_MatchHistoryRow_C_ExecuteUbergraph_BP_MatchHistoryRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
