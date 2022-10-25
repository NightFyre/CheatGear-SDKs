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
	 * Function BP_Widget_VoteStatus.BP_Widget_VoteStatus_C.UpdateResultImage
	 */
	struct UBP_Widget_VoteStatus_C_UpdateResultImage_Params
	{	};

	/**
	 * Function BP_Widget_VoteStatus.BP_Widget_VoteStatus_C.UpdateBackgroundColor
	 */
	struct UBP_Widget_VoteStatus_C_UpdateBackgroundColor_Params
	{	};

	/**
	 * Function BP_Widget_VoteStatus.BP_Widget_VoteStatus_C.UpdateVoteTally
	 */
	struct UBP_Widget_VoteStatus_C_UpdateVoteTally_Params
	{	};

	/**
	 * Function BP_Widget_VoteStatus.BP_Widget_VoteStatus_C.AddChoiceRow
	 */
	struct UBP_Widget_VoteStatus_C_AddChoiceRow_Params
	{
	public:
		struct FReplicatedVoteChoice                               VoteChoice;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    ChoiceIndex;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RVHA[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Widget_VoteStatus.BP_Widget_VoteStatus_C.UpdateRemainingTime
	 */
	struct UBP_Widget_VoteStatus_C_UpdateRemainingTime_Params
	{	};

	/**
	 * Function BP_Widget_VoteStatus.BP_Widget_VoteStatus_C.UpdateVisibility
	 */
	struct UBP_Widget_VoteStatus_C_UpdateVisibility_Params
	{	};

	/**
	 * Function BP_Widget_VoteStatus.BP_Widget_VoteStatus_C.Construct
	 */
	struct UBP_Widget_VoteStatus_C_Construct_Params
	{	};

	/**
	 * Function BP_Widget_VoteStatus.BP_Widget_VoteStatus_C.OnChangedTeam
	 */
	struct UBP_Widget_VoteStatus_C_OnChangedTeam_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H2KX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATeamInfo*                                           TeamInfo;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_VoteStatus.BP_Widget_VoteStatus_C.OnVoteDataChanged
	 */
	struct UBP_Widget_VoteStatus_C_OnVoteDataChanged_Params
	{	};

	/**
	 * Function BP_Widget_VoteStatus.BP_Widget_VoteStatus_C.OnVoteStarted
	 */
	struct UBP_Widget_VoteStatus_C_OnVoteStarted_Params
	{	};

	/**
	 * Function BP_Widget_VoteStatus.BP_Widget_VoteStatus_C.OnVoteConcluded
	 */
	struct UBP_Widget_VoteStatus_C_OnVoteConcluded_Params
	{	};

	/**
	 * Function BP_Widget_VoteStatus.BP_Widget_VoteStatus_C.OnVoteReset
	 */
	struct UBP_Widget_VoteStatus_C_OnVoteReset_Params
	{	};

	/**
	 * Function BP_Widget_VoteStatus.BP_Widget_VoteStatus_C.Tick
	 */
	struct UBP_Widget_VoteStatus_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_VoteStatus.BP_Widget_VoteStatus_C.ExecuteUbergraph_BP_Widget_VoteStatus
	 */
	struct UBP_Widget_VoteStatus_C_ExecuteUbergraph_BP_Widget_VoteStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
