#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.IsSquadValid
	 */
	struct UWBP_DeployMenu_SquadList_C_IsSquadValid_Params
	{
	public:
		bool                                                       bValidSQ;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2ZS2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnPaint
	 */
	struct UWBP_DeployMenu_SquadList_C_OnPaint_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SetSquadLockedState
	 */
	struct UWBP_DeployMenu_SquadList_C_SetSquadLockedState_Params
	{
	public:
		bool                                                       bNewLocked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WHN9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.UnlockSquad
	 */
	struct UWBP_DeployMenu_SquadList_C_UnlockSquad_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.LockSquad
	 */
	struct UWBP_DeployMenu_SquadList_C_LockSquad_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.KickSquadMember
	 */
	struct UWBP_DeployMenu_SquadList_C_KickSquadMember_Params
	{
	public:
		class AHDPlayerState*                                      MemberPSToKick;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.WasListCollapsedByUser
	 */
	struct UWBP_DeployMenu_SquadList_C_WasListCollapsedByUser_Params
	{
	public:
		bool                                                       bCollapsedByUser;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.UpdateLockUnlockBtnState
	 */
	struct UWBP_DeployMenu_SquadList_C_UpdateLockUnlockBtnState_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.HasAnySquadMembers
	 */
	struct UWBP_DeployMenu_SquadList_C_HasAnySquadMembers_Params
	{
	public:
		bool                                                       bValidMembersPresent;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SetupSQOptions
	 */
	struct UWBP_DeployMenu_SquadList_C_SetupSQOptions_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.IsOwningPlayerInMemberWidgetList
	 */
	struct UWBP_DeployMenu_SquadList_C_IsOwningPlayerInMemberWidgetList_Params
	{
	public:
		bool                                                       bOwnsMemberWidget;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.TestPrereqsForAllMembers
	 */
	struct UWBP_DeployMenu_SquadList_C_TestPrereqsForAllMembers_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.TestSquadAndMemberPrereqs
	 */
	struct UWBP_DeployMenu_SquadList_C_TestSquadAndMemberPrereqs_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.TestSQPrereqs
	 */
	struct UWBP_DeployMenu_SquadList_C_TestSQPrereqs_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.IsOwningPlayerRegisteredSquadLeader
	 */
	struct UWBP_DeployMenu_SquadList_C_IsOwningPlayerRegisteredSquadLeader_Params
	{
	public:
		bool                                                       bSquadLeader;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VTEL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.IsOwningPlayerRegisteredSquadMember
	 */
	struct UWBP_DeployMenu_SquadList_C_IsOwningPlayerRegisteredSquadMember_Params
	{
	public:
		bool                                                       bIgnorePendingRemoval;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRegisteredMember;                                       // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F6D5[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.UpdateJoinLeaveBtnState
	 */
	struct UWBP_DeployMenu_SquadList_C_UpdateJoinLeaveBtnState_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.UpdateSquadMemberCountText
	 */
	struct UWBP_DeployMenu_SquadList_C_UpdateSquadMemberCountText_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.CollapseListIfEmpty
	 */
	struct UWBP_DeployMenu_SquadList_C_CollapseListIfEmpty_Params
	{
	public:
		bool                                                       bCollapseParentIfEmpty;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SetSquadNameText
	 */
	struct UWBP_DeployMenu_SquadList_C_SetSquadNameText_Params
	{
	public:
		class FText                                                NewSquadName;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.RemoveSquadMemberItemWidgetFromList
	 */
	struct UWBP_DeployMenu_SquadList_C_RemoveSquadMemberItemWidgetFromList_Params
	{
	public:
		class USquadMemberInfo*                                    RemovedMemberData;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.AddNewSquadMemberItemWidget
	 */
	struct UWBP_DeployMenu_SquadList_C_AddNewSquadMemberItemWidget_Params
	{
	public:
		class USquadMemberInfo*                                    MemberData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.CollapseList
	 */
	struct UWBP_DeployMenu_SquadList_C_CollapseList_Params
	{
	public:
		bool                                                       bCollapseParent;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.ExpandList
	 */
	struct UWBP_DeployMenu_SquadList_C_ExpandList_Params
	{
	public:
		bool                                                       bExpandParent;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.BndEvt__LockUnlockSQOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DeployMenu_SquadList_C_BndEvt__LockUnlockSQOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.GenerateSquadMember
	 */
	struct UWBP_DeployMenu_SquadList_C_GenerateSquadMember_Params
	{
	public:
		class USquadMemberInfo*                                    MemberData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.DeconstructSquadMember
	 */
	struct UWBP_DeployMenu_SquadList_C_DeconstructSquadMember_Params
	{
	public:
		class USquadMemberInfo*                                    RemovedMemberData;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.BndEvt__LeaveSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DeployMenu_SquadList_C_BndEvt__LeaveSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.BndEvt__ExpandBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DeployMenu_SquadList_C_BndEvt__ExpandBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.PreConstruct
	 */
	struct UWBP_DeployMenu_SquadList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SquadMembersListExpanded
	 */
	struct UWBP_DeployMenu_SquadList_C_SquadMembersListExpanded_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SquadMembersListCollapsed
	 */
	struct UWBP_DeployMenu_SquadList_C_SquadMembersListCollapsed_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnSquadSet
	 */
	struct UWBP_DeployMenu_SquadList_C_OnSquadSet_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnSquadNameUpdated
	 */
	struct UWBP_DeployMenu_SquadList_C_OnSquadNameUpdated_Params
	{
	public:
		class FText                                                NewSquadName;                                            // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                PreviousSquadName;                                       // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnSquadLeaderUpdated
	 */
	struct UWBP_DeployMenu_SquadList_C_OnSquadLeaderUpdated_Params
	{
	public:
		class AHDPlayerState*                                      NewLeaderPS;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDPlayerState*                                      PrevLeaderPS;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnSquadLockStateUpdated
	 */
	struct UWBP_DeployMenu_SquadList_C_OnSquadLockStateUpdated_Params
	{
	public:
		bool                                                       bNewLockedState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.ExecuteUbergraph_WBP_DeployMenu_SquadList
	 */
	struct UWBP_DeployMenu_SquadList_C_ExecuteUbergraph_WBP_DeployMenu_SquadList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SP6V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
