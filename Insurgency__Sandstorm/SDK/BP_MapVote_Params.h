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
	 * Function BP_MapVote.BP_MapVote_C.ConfigButtonOtherScenario
	 */
	struct UBP_MapVote_C_ConfigButtonOtherScenario_Params
	{	};

	/**
	 * Function BP_MapVote.BP_MapVote_C.PlayButtonIntroAnim
	 */
	struct UBP_MapVote_C_PlayButtonIntroAnim_Params
	{	};

	/**
	 * Function BP_MapVote.BP_MapVote_C.SelectOption
	 */
	struct UBP_MapVote_C_SelectOption_Params
	{
	public:
		EMapVoteSelection                                          Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapVote.BP_MapVote_C.GetWidgetForVoteSelection
	 */
	struct UBP_MapVote_C_GetWidgetForVoteSelection_Params
	{
	public:
		EMapVoteSelection                                          Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9JJB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JFPB[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MapVote.BP_MapVote_C.GetVoteSelectionFromIndex
	 */
	struct UBP_MapVote_C_GetVoteSelectionFromIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMapVoteSelection                                          Selection;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XZ0M[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MapVote.BP_MapVote_C.CreateButtonForScenario
	 */
	struct UBP_MapVote_C_CreateButtonForScenario_Params
	{
	public:
		struct FMapVoteOption                                      Data;                                                    // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EMapVoteSelection                                          Selection;                                               // 0x00A8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JNAN[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBP_MapVoteOption_C*                                 NewWidget;                                               // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapVote.BP_MapVote_C.UpdateTimeRemainingText
	 */
	struct UBP_MapVote_C_UpdateTimeRemainingText_Params
	{	};

	/**
	 * Function BP_MapVote.BP_MapVote_C.Construct
	 */
	struct UBP_MapVote_C_Construct_Params
	{	};

	/**
	 * Function BP_MapVote.BP_MapVote_C.OnMapVoteStarted
	 */
	struct UBP_MapVote_C_OnMapVoteStarted_Params
	{
	public:
		TArray<struct FMapVoteOption>                              Maps;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		float                                                      EndTime;                                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInCanVoteRefresh;                                       // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MapVote.BP_MapVote_C.OnVoteCountUpdated
	 */
	struct UBP_MapVote_C_OnVoteCountUpdated_Params
	{
	public:
		TArray<struct FMapVoteCount>                               Data;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapVote.BP_MapVote_C.OnLocalOptionSelected
	 */
	struct UBP_MapVote_C_OnLocalOptionSelected_Params
	{
	public:
		EMapVoteSelection                                          Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapVote.BP_MapVote_C.OnVoteWinnerChosen
	 */
	struct UBP_MapVote_C_OnVoteWinnerChosen_Params
	{
	public:
		EMapVoteSelection                                          Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapVote.BP_MapVote_C.Tick
	 */
	struct UBP_MapVote_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapVote.BP_MapVote_C.RestoreWidgetFocus
	 */
	struct UBP_MapVote_C_RestoreWidgetFocus_Params
	{	};

	/**
	 * Function BP_MapVote.BP_MapVote_C.ExecuteUbergraph_BP_MapVote
	 */
	struct UBP_MapVote_C_ExecuteUbergraph_BP_MapVote_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
